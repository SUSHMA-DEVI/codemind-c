#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        char s[100];
        //int p=strlen(s);
        scanf("%s",s);
        int c=0;
        int p=strlen(s);
        for(int j=0;j<p;j++)
        {
            if(s[j]>='0' && s[j]<='9')
            {
                c++;
            }
        }
    if(c==0)
    {
        printf("No
");
    }
    else
    {
        printf("Yes
");
    }
    }
}