#include<stdio.h>
#include<string.h>

int main() {
    int i,j,l1,l2,cnt=0;
    char s[100],t[100];

    scanf("%s%s",&s,&t);
    
    l1=strlen(s);
    l2=strlen(t);
    
    for(i=0,j=l2-1; i<l1,j>=0; i++,j--)
    {
        if(s[i]==t[j])
        {
            cnt++;
        }
    }
    
    if(cnt==l1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}