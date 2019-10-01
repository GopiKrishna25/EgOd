#include<stdio.h>
#include<string.h>

int main() {
    int i,n=0,p;
    char a[100];
    
    scanf("%s\n",&a);
    n=strlen(a);
    
    for(i=0;i<n;i++)
    {
        if(a[i]=='0' && a[i+1]=='0' && a[i+2]=='0' && a[i+3]=='0' && a[i+4]=='0' && a[i+5]=='0' && a[i+6]=='0')
        {
            p=7;
        }
        else if(a[i]=='1' && a[i+1]=='1' && a[i+2]=='1' && a[i+3]=='1' && a[i+4]=='1' && a[i+5]=='1' && a[i+6]=='1')
        {
            p=7;
            break;
        }
    }
    
    if(p==7)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    
    return 0;
}