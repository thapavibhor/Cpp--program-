#include <iostream>
using namespace std;
int len(int n){
   int q=n;
   int f=0;
    do{
        q /= 10;
        f++;
    } while (q!=0);
    return f;
}
int main(){
    int x;
    cout<<"Enter a number :" ;
    cin>> x;
    int y= len(x);
    cout<<"length of number "<< y <<endl;
}