#include <iostream>
using namespace std; 
int main(){
    int x;
    cout<<"Enter a number ";
    cin>>x;
    int r=1;
    if (x==1){
        cout<<"Number is not prime"<<endl;
        return 0;
    }
    for (int i=2;i<=x-1;i++){
        r = x%i;
        if (r==0){
            cout<<"Number is not prime"<<endl;
            break;

        }
    }
    if (r!=0){
        cout<<"Number is prime"<<endl;
    }
    return 0;
}