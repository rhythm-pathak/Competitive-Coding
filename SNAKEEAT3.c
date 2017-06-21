#include<stdio.h>
#include<stdlib.h>
int binSearch(int a[], int left, int right, int target)
{
    int mid=(left+right)/2;
    if(left<=right)
    {
        if(a[left]<target)
        return left;
        else if(a[mid]>=target)
        return binSearch(a,mid+1,right,target);
        else
        {
            if(a[mid-1]>=target)
            return mid;
            else
            return binSearch(a,left,mid-1,target);
        }
    }
    else
    return right+1;
}
void merge(int arr[], int l, int m, int r)
{
     int i, j, k;
     int n1 = m - l + 1;
     int n2 =  r - m;

    /* create temp arrays */
     int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for(i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for(j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] > R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the sub-array
  of arr to be sorted */
void mergeSort(  int arr[],   int l,   int r)
{
    if (l < r)
    {
          int m = l+(r-l)/2; //Same as (l+r)/2, but avoids overflow for large l and h
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}


int main()
{
    int n,m,x,target,left,right,count,test,prevCount1;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d%d",&n,&m);
        int a[n];
        for(x=0;x<n;x++)
            scanf("%d",&a[x]);
        mergeSort(a,0,n-1);
        prevCount1=0;
        int q=m;
        int b[m],c[m],k[m];
        for(x=0;x<m;x++)
        {
            scanf("%d",&k[x]);
            b[x]=k[x];
            c[x]=-1;
        }
        mergeSort(b,0,m-1);


        while(q)
           {
            target=b[m-q];//target ;b is sorted
            if(target<=a[n-1])
            {
                count=n;
            }
            else{
            count=prevCount1;
            count=binSearch(a,count,n-1,target);
            prevCount1=count;
            left=count;
            right=n-1;
            while(right-left+a[left]>=target&&left<=right)
            {
                count++;
                right-=target-a[left++];
            }
            }
            c[m-q]=count;
            while(--q>=0&&b[m-q]==target)
            {c[m-q]=count;}
        }
        for(x=0;x<m;x++)
        {
            printf("%d\n",c[binSearch(b,0,m-1,k[x])-1]);
        }
    }
}
