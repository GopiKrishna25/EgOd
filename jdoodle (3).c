#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    int i,l=0;
    char a[100];
    
    scanf("%s\n",&a);
    l=strlen(a);
    
    a[0]=toupper(a[0]);
    
    for(i=1;i<l;i++)
    {
        a[i]=tolower(a[i]);
    }
    
    printf("%s\n",a);
    
    return 0;
}