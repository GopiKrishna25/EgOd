#include<stdio.h>

int main()
{
    int i,n,k;
    
    scanf("%d%d\n",&n,&k);
    
    while(k--)
    {
        if(n%10==0)
        {
            n=n/10;
        }
        else
        {
            n--;
        }
    }
    
    printf("%d",n);
    
    return 0;
    
}