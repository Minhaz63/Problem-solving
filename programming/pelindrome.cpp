#include<stdio.h>
#include<string.h>

int isPalindrome(char[]);



int main(){

char s[100];

int i=0,j=0,k=0,index=0,l=0,m=0,length=0;
gets(s);
puts(s);
length=strlen(s);
for(i=0,j=1;i<length;i++,j++){
char str[j];

for(k=0;k<=i;k++)
str[k]=s[k];
puts(str);
isPalindrome(str);
}






return 0;
}





int isPalindrome(char a[100]){
    char  b[100];

puts(a);

  strcpy(b, a);
  strrev(b);

  if (strcmp(a, b) == 0)  {
    printf("The string is a palindrome.\n");

    }
  else{
    printf("The string isn't a palindrome.\n");
    }


}
