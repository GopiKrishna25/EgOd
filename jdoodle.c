#include<stdio.h> 
int main() 
{
    int s,i,j;
    int a[25],n,sum; 
    
    scanf("%d %d",&n,&sum);
    
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    
    for(i=0;i<n;i++) 
    { 
        s = a[i]; 
        for (j=i+1;j<=n;j++) 
        { 
            if (s == sum) 
            { 
                printf ("Sum found between indexes %d and %d", i, j-1); 
                return 1; 
            } 
            if (s > sum || j == n) 
                break; 
           s = s + a[j]; 
        } 
    } 
  
    printf("No subarray found"); 
    return 0;
    
    return 0; 
} 