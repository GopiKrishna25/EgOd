#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char s[101],c;
    int l=0,u=0,i;
    scanf("%s",s);
    for(i=0; i<strlen(s); i++)
    {
        if(s[i]>=65&&s[i]<=90)
            u++;
        else if(s[i]>=97&&s[i]<=122)
        {
            l++;
        }
    }
    
    if ( l>=u)
    {
        for ( i=0; i<strlen(s); i++)
          {
              c=s[i];
              putchar (tolower(c));
          }
    }
    else
    {
        for ( i=0; i<strlen(s); i++)
          {
              c=s[i];
              putchar (toupper(c));
          }
    }
}
