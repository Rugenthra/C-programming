
#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
  
   char str[100];
   fgets(str,sizeof(str),stdin);
   int len=strlen(str);
   
   for(int i=0;i<len;i++){
       if(str[i]==' '){
           continue;
       }
       if(i==0||str[i-1]==' '){
           str[i]=toupper(str[i]);
       }
       
       if(str[i+1]==' '||str[i+1]=='\0'||str[i+1]=='\n'){
           str[i]=toupper(str[i]);
       }
   }
   printf("%s",str);
   
   return 0;
}
