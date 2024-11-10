//Input a string of even length and reverse the second half of the string.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter  string of even length:  ";
    getline(cin,s);
    int n=s.length();
    reverse(s.begin()+n/2,s.end());
    cout<<s<<endl;
   
    
  
}