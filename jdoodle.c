#include<stdio.h>

int main() 
{
    int n,i,k=0;
    int j[20];
    scanf("%d\n",&n);
    
    for(i=0;i<n;i++)
    {
      scanf("%d\n",&j[i]);  
    }
    
    for(i=0;i<n-1;i++)
    {
        if(j[i]==j[i+1])
        {
            k++;
        }
    }
    
    printf("%d",k);
    
    return 0;
}