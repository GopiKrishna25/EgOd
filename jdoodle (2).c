#include <stdio.h>
#include <string.h>
 
int main()
{
        char a[205],ans[200];
        int i,j=0,n=0;
        scanf("%s",a);
 
        for(i=0;i<strlen(a);i++)
        {
               if(n==0)
               {
                       if(a[i]=='W')
                       {
                               n++;
                       }
                       else
                       {
                               ans[j]=a[i];
                               j++;
                       }
                       if(i==strlen(a)-1 && a[i]=='W')
                       {
                               ans[j]=a[i];
                               j++;
                       }
               }
               else if(n==1)
               {
                       if(a[i]=='U')
                       {
                               n++;
                       }
                       else if(a[i]=='W')
                       {
                               ans[j]='W';
                               j++;
                               n=1;
                       }
                       else
                       {
                               ans[j]='W';
                               j++;
                               ans[j]=a[i];
                               j++;
                               n=0;
                       }
                       if(i==strlen(a)-1 && a[i]=='U')
                       {
                               ans[j]='W';
                               j++;
                               ans[j]='U';
                               j++;
                       }
               }
               else if(n==2)
               {
                       if(a[i]=='B')
                       {
                               n=0;
                               ans[j]=' ';
                               j++;
                               if(j==1)
                                      j--;
                       }
                       else
                       {
                               ans[j]='W';
                               j++;
                               ans[j]='U';
                               j++;
                               ans[j]=a[i];
                               j++;
                               n=0;
                               if(a[i]=='W')
                               {       
                                      n=1;
                                      j--;
                               }
                       }
 
               }
        }
        ans[j]='\0';
 
        printf("%s\n",ans);
        return 0;
}