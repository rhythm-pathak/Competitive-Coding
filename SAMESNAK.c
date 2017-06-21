#include<stdio.h>
int main()
{
    int t,x1,x2,y1,y2,a1,a2,b1,b2;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);//first snake's head&tail
        scanf("%d%d%d%d",&a1,&b1,&a2,&b2);//second snake's head&tail
        if(a1==x1&&b1==y1||a2==x1&&b2==y1||a1==x2&&b1==y2||a2==x2&&b2==y2)//if any one of the heads or tails coincides
             {printf("yes\n");continue;}
        if(y1==y2)//first snake is horizontal
        {
            if(((a1-x1)*(a1-x2)<0||(a2-x1)*(a2-x2)<0)&&(b1==y1&&b2==y2))//if atleast 1 head of 2nd snake is in between the heads of 1st snake
            {printf("yes\n");continue;}
            else if((b1==y1&&b2==y2)&&(a1-x1)*(a2-x1)<0)//if both heads are outside, then check if 1st snake is inside 2nd snake
             {printf("yes\n");continue;}
        }
         if(x1==x2)//first snake is vertical
        {
            if(((b1-y1)*(b1-y2)<0||(b2-y1)*(b2-y2)<0)&&(a1==x1&&a2==x2))
             {printf("yes\n");continue;}
            else if((a1==x1&&a2==x2)&&(b1-y1)*(b2-y1)<0)
             {printf("yes\n");continue;}
        }
         printf("no\n");
    }
}