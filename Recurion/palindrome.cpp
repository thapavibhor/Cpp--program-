#include <iostream>
#include <string>
using namespace std ;

string reverse_str(string s){
    if (s.length()==0){
        return "";
    }
    return reverse_str(s.substr(1,1-(s.length())-1)) + s[0];
}

void palindrome(string s ){
    if (reverse_str(s)==s){
        cout<<"It's a palindrome ";
    } else  {
        cout<<"It's a not palindrome ";
    }
}

int main(){
    string s;
    cout<<"Enter a  string :";
    cin>>s;
    palindrome(s);
}
