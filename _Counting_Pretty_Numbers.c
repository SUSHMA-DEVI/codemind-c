#include<stdio.h>
int main()
{
    int n,c=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int a,b,s,j;
        scanf("%d %d",&a,&b);
        for(j=a;j<=b;j++)
        {
            s=j%10;
            if(s==2 || s==3 || s==9)
            {
                c++;
            }
        }
        printf("%d
",c);
        c=0;
        
    }
}