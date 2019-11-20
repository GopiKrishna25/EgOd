#include<stdio.h>
#include<string.h>


int main()
{
    int i,j,cnt=0;
    char n[30];
    
    scanf("%s",&n);
    
    for(i=0;i<strlen(n);i++)
    {
        if(n[i]=='4' || n[i]=='7')
        {
            cnt++;
        }
    }
    
    if(cnt==4||cnt==7)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    
    return 0;
}