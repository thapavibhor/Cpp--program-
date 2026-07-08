#include <iostream>
using namespace std; 
int main(){
    int x,y;
    cout<<"Enter a range of number :";
    cin>>x>>y;
    cout<<"The prime numbers between "<<x<<" and "<<y<<" are :"<<endl;
    if (x>=y){
        cout<<"Invalid range"<<endl;
        return 0;
    }
    int d=0;
    for (int i=x;i<=y;i++){
        int f;
        if (d!=0){
            cout<<"2 "<<d<<endl;
        }
        for (int j=2;j<i;j++){
            f=i%j;
            if (f==0){
                d=i;
            }else{
                d=0;
            }
        }
    }
    return 0;
}