#include<stdio.h>

int main()
{
    int n,i,j=0,k=0;
    char s[20];
    
    scanf("%d\n",&n);
    
    scanf("%s\n",&s);
    
    for(i=0;i<n;i++)
    {
        if(s[i]=='A')
        {
            j++;
        }
        else if(s[i]=='D')
        {
            k++;
        }
    }
    
    if(j<k)
    {
        printf("Danik");
    }
    else if(j>k)
    {
        printf("Anton");
    }
    else if(j==k)
    {
        printf("Friendship");
    }
    
    return 0; 
}