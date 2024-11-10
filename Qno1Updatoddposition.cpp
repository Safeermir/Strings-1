// Input a string of size n and update all the odd positions in the string to character ‘#’. Consider
//0-based indexing.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="safeer";
    for(int i=0;i<s.length();i++){
        if(i%2==0) s[i]='#';// As we have to change the odd positions in string as index starts from 0 
                              // We choose even position which eventually change the odd positon of string

    }
    cout<<s<<endl;
  
}