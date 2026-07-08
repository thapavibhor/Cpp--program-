
#include <iostream>
using namespace std;
int main(){
    char x;
    cout<<"Enter a Character :";
    cin>>x;
    if ( x>=97 && x<=122){
        cout<<"It's a  lowercase alphabet ";

    } else if ( x>65 && x<=90) {
        cout<<"It's a uppercase alphabet ";
    } else if (x>=48 && x<=57){
        cout<<"It's a digit ";
    }else {
        cout<<"It's a special symbol"; 
    }
return 0;
}