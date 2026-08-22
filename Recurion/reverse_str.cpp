#include <iostream>
#include <string>
using namespace std ;

string reverse_str(string s){
    if (s.length()==0){
        return "";
    }
    return reverse_str(s.substr(1,1-(s.length())-1)) + s[0];
} 

int main(){
    string s;
    cout<<"Enter a string  to reverse :";
    cin>>s;
    cout<<reverse_str(s);
   //string a = "Vibhor" ;
   //cout<<a.substr(2,2-(a.length()-1))  ;
   return 0;
}
