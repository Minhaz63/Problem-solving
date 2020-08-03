#include<iostream>
using namespace std;

int findLongPalSubstr(string str) {
   int n = str.size();        // get length of input string

   bool palCheckTab[n][n];    //true when substring from i to j is palindrome

   for(int i = 0; i<n; i++)
      for(int j = 0; j<n; j++)
         palCheckTab[i][j] = false;      //initially set all values to false

   int maxLength = 1;

   for (int i = 0; i < n; ++i)
      palCheckTab[i][i] = true;       //as all substring of length 1 is palindrome

   int start = 0;
   for (int i = 0; i < n-1; ++i) {
      if (str[i] == str[i+1]) {      //for two character substring both characters are equal
         palCheckTab[i][i+1] = true;
         start = i;
         maxLength = 2;
      }
   }

   for (int k = 3; k <= n; ++k) {       //for substrings with length 3 to n
      for (int i = 0; i < n-k+1 ; ++i) {
         int j = i + k - 1;
         if (palCheckTab[i+1][j-1] && str[i] == str[j]) {    //if (i,j) and (i+1, j-1) are same, then check palindrome
            palCheckTab[i][j] = true;
            if (k > maxLength) {
               start = i;
               maxLength = k;
            }
         }
      }
   }
   cout << "Longest palindrome substring is: " << str.substr(start, maxLength) << endl;
   return maxLength; // return length
}

int main() {
   char str[] = "bobseesannabelle";
   cout << "Length is: "<< findLongPalSubstr(str);
}
