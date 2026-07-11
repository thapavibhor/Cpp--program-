#include <iostream>
using namespace std;
void number_py(int n){
    cout<<"Number pyramid :"<<endl;
    for (int i=0;i<n;i++){
        for (int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void  right_py(int n){
    cout<<"Right pyramid :"<<endl;
    for (int i=0;i<n;i++){
        for (int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void up_py(int n){
    cout<<"Upward pyramid :"<<endl;
    for(int i;i<=n;i++){
        for(int j=1;j<=n-1;j++){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"*";
        }
    cout<<endl;
    }
}
int main(){
    int x;
    cout<<"Enter a number :";
    cin>>x;
    up_py(x+1);
return 0;
}