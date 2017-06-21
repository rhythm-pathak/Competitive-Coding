#include<stdio.h>
#include<math.h>
long int area(int x1,int y1,int x2,int y2,int x3,int y3)
{
    return (x1-x3)*(y2-y1)-(x1-x2)*(y3-y1);
}

int main()
{
    int t,x1,x2,y1,y2,a1,a2,b1,b2;
    long int l1,l2,ar1,ar2,ar3,ar4;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);//first snake's head&tail
        scanf("%d%d%d%d",&a1,&b1,&a2,&b2);//second snake's head&tail
        l1=abs(x1+y1-x2-y2);
        l2=abs(a1+b1-a2-b2);
        ar1=area(x1,y1,x2,y2,a1,b1);
        ar2=area(x1,y1,x2,y2,a2,b2);
        ar3=area(x1,y1,a1,b1,a2,b2);
        ar4=area(x2,y2,a1,b1,a2,b2);
        if(ar1||ar2||ar3||ar4)//ie. non collinear
        {
            if(a1==x1&&b1==y1||a2==x1&&b2==y1||a1==x2&&b1==y2||a2==x2&&b2==y2)//if any one of the heads or tails coincides ie. right angled
                printf("yes\n");
            else
                printf("no\n");
        }
        else if(abs(x1+y1-a1-b1)+abs(x2+y2-a2-b2)<=l1+l2||abs(x1+y1-a2-b2)+abs(x2+y2-a1-b1)<=l1+l2)//if collinear then overlapping
             printf("yes\n");
        else
            printf("no\n");
    }
}