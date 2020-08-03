#include<stdio.h>
#include<string.h>

int isPalindrome(char[]);



int main(){

char s[100],str[100];
int i=0,j=0,k=0,index=0,l=0,m=0,length=0;
gets(s);
puts(s);
length=strlen(s);
//for(i=0;i<length;i++){
    for(j=0;j<length;j++){
        str[j]=s[j];
        isPalindrome(str);
    }
//}
//isPalindrome(s);



return 0;
}





int isPalindrome(char a[100]){
    char  b[100];



  strcpy(b, a);
  strrev(b);

  if (strcmp(a, b) == 0)  {
    printf("The string is a palindrome.\n");

    }
  else{
    printf("The string isn't a palindrome.\n");
    }


}
