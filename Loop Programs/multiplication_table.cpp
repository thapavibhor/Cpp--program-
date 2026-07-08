#include <iostream>
using namespace std;    
int main(){
    int x;
    cout<<"Enter the number to print multiplication table :";
    cin>>x;
    cout<<endl<<"Multiplication table of "<<x<<" is :"<<endl;
    for(int i=1;i<=10;i++){
        cout<<x<<" * "<<i<<" = "<<x*i<<endl;
    }
    return 0;
}