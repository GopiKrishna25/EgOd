#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,l;
    char s[100],temp;
    scanf("%s\n",&s);
    l=strlen(s);
    
    for(i=0;i<l;i++)
    {
        for(j=0;j<l-i-2;j++)
        {
            if(s[j]>s[j+2])
            {
                temp=s[j];
                s[j]=s[j+2];
                s[j+2]=temp;
            }
        }
    }
    
    printf("%s\n",s);
    return 0;
}