#include <iostream>
#include <cctype>
using namespace std;
int main(){
    char x;
    cout<<"Enter a alphabet :";
    cin>>x;
    x = tolower(x);
    if ( x>=97 && x<=122){
        cout<<"It's a alphabet ";

    } else {
        cout<<"It's a not alphabet ";
    }
return 0;
}