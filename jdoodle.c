#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,l,n;
    char s[100],a[5]="hello";
    scanf("%s\n",&s);
    l=strlen(s);
    
    for(i=0;i<l;i++)
    {
        if(s[i]==a[j])
        {
            j++;
            n++;
        }
    }
    
    if(n==5)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    
    return 0;
}