#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char s[100];
    int i,vowels,consonants,digits,spaces;
    vowels=consonants=digits=spaces=0;
    //gets(str);
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
        {
            ++vowels;
        }
        else if((s[i]>='a'&& s[i]<='z') || (s[i]>='A'&& s[i]<='Z'))
        {
            ++consonants;
        }
        else if(s[i]>='0' && s[i]<='9')
        {
            ++digits;
        }
        else if(s[i]==' ')
        {
            ++spaces;
        }
     }
     printf("Vowels: %d
",vowels);
     printf("Consonants: %d
",consonants);
     printf("Digits: %d
",digits);
     printf("White spaces: %d
",spaces);
     
     return 0;
}