#include<stdio.h>

int main()
{
    int n,i=0,j=0;
    int a[10]={4,7,47,74,447,474,744,7447,774,477};
    
    scanf("%d\n",&n);
    
    for(i=0;i<10;i++)
    {
        if(n%a[i]==0)
        {
            printf("Yes\n");
        }
        
        else
        {
            j++;
        }
    }
    
    
    
    if(j==10)
    {
        printf("No\n");
    }
    
    return 0;
}