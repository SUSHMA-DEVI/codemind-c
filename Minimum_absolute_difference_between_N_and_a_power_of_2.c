#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,np,sp,d,e,mp,cp;
    scanf("%d",&n);
    np=0;
    for(i=1;np<n;i++)
    {
        np=pow(2,i);
        if(np<=n)
        {
            cp=np;
        }
    }
    d=n-cp;
    sp=n+30;
    mp=sp;
    while(mp>n)
    {
        for(i=1;pow(2,i)<=n+30;i++)
        {
            if(mp==pow(2,i))
            {
                sp=mp;
            }
        }
        mp--;
    }
    e=sp-n;
    if(d<e)
    {
        printf("%d",d);
    }
    else
    {
        printf("%d",e);
    }
}