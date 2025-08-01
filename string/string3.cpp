#include<iostream>
#include<string>
using namespace std;

int main (){

   string str ="hello";
   string str1= "new";
   //reverse a string 
   reverse(str.begin(),str.end());
   cout<<str<<endl;

   //to print the dsire output 
   cout<<str.substr(1,4)<<endl;
//concatenate string using these 
   str+=str1;
   cout<<str<<endl;

   //concatenate the char 
   char s1[20]="college";
   char s2[20]="wallah";

   strcat(s1,s2);
   cout<<s1<<endl;

   //push_back function to aad the char in last place 
  string n1 ="abcd";
  cout<<n1.size()<<endl;
  char ch ='w';
  n1.push_back(ch);
  cout<<n1<<endl;


  
//converting int into string to add 1 
  int num =432;
  string s5 =to_string(num);
  s5 +="1";
  cout<<s5<<endl;

   return 0;
}