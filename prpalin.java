import java.util.*;
class prpalin
{
    public static void main(String ar[])
    {
        Scanner i1=new Scanner(System.in);
         int n,i,j;
         n=i1.nextInt();
        boolean[] num=new boolean[10000000];
         for(i=0;i<10000000;i++)
        {
         num[i]=true;
        }
         for(i=2;i<10000000;i++)
        {
             if(num[i])
             {
                if(i>=n&&checkPalindrome(i))
                {
                    System.out.println(i);break;
                 }
                else{
                    for(j=2*i;j<10000000;j+=i)
                    {
                        num[j]=false;
                    }
                }

            }
        }
    }
    static boolean checkPalindrome(int n)
    {
        String s=Integer.toString(n);
        int l=s.length();int x=0;
        while(x!=l)
        {
            if(s.charAt(x)!=s.charAt(l-x-1))
            return false;
	    x++;
        }
        return true;
    }
}
