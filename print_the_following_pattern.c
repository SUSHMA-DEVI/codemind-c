#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=1;j<n-1;j++)
        {
            printf("%d",j);
        }
        for(k=n-3;k>0;k--)
        {
            printf("%d",k);
        }
        printf("
");
    }
}