#include <stdio.h>
#include <string.h>
 
int isPalindrome(char *str, int l, int r){
     if(NULL == str || l < 0 || r < 0){
         return 0;
     }
     if(l >= r)
         {
             return 1;
         }
     if(str[l] == str[r]){
         return isPalindrome(str, l + 1, r - 1);
     }
     return 0;
 }
 
int main()
{
    char s[] = {"abbba"} ; 
    int in=0;
    int i=0,n=sizeof(s)/sizeof(s[0]);
     
    if(isPalindrome(s,i,strlen(s) - 1))
         printf("%s is palindrome",s);
    else
        printf("%s is not palindrome",s);
 
 }
