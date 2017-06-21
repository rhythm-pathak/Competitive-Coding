#include <stdio.h>

void merge(long int arr[], long int l, long int m, long int r)
{
    long int i, j, k;
    long int n1 = m - l + 1;
    long int n2 =  r - m;

    /* create temp arrays */
    long int L[n1], R[n2];

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
void mergeSort(long int arr[], long int l, long int r)
{
    if (l < r)
    {
        long int m = l+(r-l)/2; //Same as (l+r)/2, but avoids overflow for large l and h
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

int main(void) {
    int T;
    long int N,Q,i,j, count,M;
    scanf("%d",&T);
    while(T--) {
        scanf("%ld%ld",&N, &Q);

        long int l[N],k[Q];
        for(i=0;i<N;i++){
            scanf("%ld",&l[i]);
        }
         for(i=0;i<Q;i++){
            scanf("%ld",&k[i]);
        }
        mergeSort(l, 0, N - 1); // descending order
        //for (int i=0;i<N;i++)
            //printf("%ld",l[i]);

        for(i=0;i<Q;i++){
            count = 0;
            M=N;
            for (j = 0; j< M ;j++) {
                if (l[j] >= k[i]) {
                    count++;
                }
                else if (M-1 - j >= k[i] - l[j]){
                    count++;
                    M -= k[i] - l[j];
                }
                // else break;
                // ^^ this is pretty obvious, but hata diya anyway
            }
            printf("%ld\n", count);
        }
    }
}