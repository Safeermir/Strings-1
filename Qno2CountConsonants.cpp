//Input a string of length n and count all the consonants in the given string.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);
    int i=0;
    int count=0;
    while(i<s.length()){// valid only for lower case
        if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'|| s[i]==' ') count++;
        i++;
    }
    cout<<"Number of consonants is: "<<s.length()-count;

}