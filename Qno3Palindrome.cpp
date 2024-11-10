// Check whether the given string is palindrome or not.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter  string: ";
    getline(cin,s);
    string s1 = s;
    reverse(s.begin(),s.end());
    if(s==s1)
        cout<<"String is palindrome";
    
    else cout<<"String is not palindrome";
    
  
}