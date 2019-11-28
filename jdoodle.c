#include<stdio.h>

int main() 
{
    int n,h,i,cnt=0;
    int a[100];    
    
    scanf("%d%d\n",&n,&h);
    
    for(i=0;i<n;i++)
    {
        scanf("%d\n",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        if(a[i]>h)
        {
            cnt+=2;
        }
        else 
        {
            cnt++;
        }
    }
    
    printf("%d",cnt);
    
    return 0;
}