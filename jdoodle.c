#include<stdio.h>
#include<string.h>

int main() 
{
    char array[100];
 
    scanf("%s\n",&array);
    int i,cnt=0,j,k,l,len=0;
    len = strlen(array);
    
    for(i=0;i<len;i++)
    {
        if (array[i]=='Q')
        {
            for(j=i+1;j<len;j++)
            {
                if(array[j]=='A')
                {
                    for(l=j+1;l<len;l++)
                    {
                        if(array[l]=='Q')
                        {
                            cnt++;
                        }
                    }
                }
            }
        }
    }

    printf("%d",cnt);
    return 0;
}