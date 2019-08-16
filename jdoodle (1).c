#include<stdio.h>

int main() {
    int i,j,k,rows;
    
    
    
    printf("enter no of rows: \n");
    scanf("%d\n",&rows);
    
    for(i=1; i<=rows; i++)
    {
        for(j=(rows-i); j>=0; j--)
        {
            printf(" ");
        }
        for(k=1;k<=(i+1);k++)
        {
            printf("#");
        }
        printf("\n");
    }
}

 