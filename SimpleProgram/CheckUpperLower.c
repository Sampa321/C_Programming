#include <stdio.h>

int main() {
   char ch;
   printf("Enter the char:");
   scanf("%c",&ch);
   if(ch>='A' && ch<='Z'){
       printf("%c is upper case",ch);
   }else if(ch>='a' && ch<='z'){
       printf("%c is lower case",ch);
   }else{
       printf("%c is not English letter",ch);
   }

    return 0;
}