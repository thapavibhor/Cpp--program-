#include <iostream>
using namespace std;
int main(){
    float x;
    cout<<"Enter a number :";
    cin>>x;
    if (x>=0){
        cout<<"Absolute value of "<<x<<" : "<<x<<endl;
    } else if (x<0){
        cout<<"Absolute value of"<<x<<"  ="<<(-x)<<endl;
    }else{
        cout<<"invalid input";
    }
return 0;
}