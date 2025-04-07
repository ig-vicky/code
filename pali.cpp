#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int checkPalindrome(string str[], int first, int last){
   if (first < last + 1){
      first++;
      last--;
      return checkPalindrome(str, first, last);
   }
   if (first == last){
      return 1;
   }
   if (str[first] != str[last]){
      return 0;
   }
   return 1;
}
int main(){
   string Str[50];
   cout<<"Enter something: ";
   cin.getline(Str,50);
   //getline(cin,Str);
   int result;
   int length = Str.length();
   if (length == 0){
      result=1;
   }
   else{
      result=checkPalindrome(Str, 0, length - 1);
   }
   if (result==1){
      cout << "Input string is palindrome.";
   }
   else{
      cout << "Input string is not a palindrome.";
   }
   return 0;
}
