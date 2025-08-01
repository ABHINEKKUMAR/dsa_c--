#include<iostream>
#include<string>
#include<vector>
using namespace std;

string countSort(string str){
    vector<int> freq(26,0);

    //storing the frequency of every character 
   // in string

   for( int i=0;i<str.length();i++){
    int index =str[i]-'a';
    freq[index]++;
   }

   //create our sorted string 

   int j=0;
   for(int i=0;i<26;i++){
    while(freq[i]--){
        str[j++]=i+'a';
    }
   }
   return str;
}

int main(){
   string str;
   //taking the input from the user and save them 

   cin>>str;

   cout<<countSort(str)<<endl;
}