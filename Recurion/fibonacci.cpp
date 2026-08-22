#include <iostream>

using namespace std;
//  Method 1  
int fib(int n,int a=0, int b=1){
    if (n <=0){
        return 0;}
    cout<<a<<" ";
    return fib(n-1,b,a+b);   
}

int fib1(int n){
    if (n==1){
        return 1;}
    else if (n==0)
    {
        return 0;
    }
    
    return fib1(n-1)+fib1(n-2);
}
void loop_fib(int n,int i=0){
    if (i>n){
        return ;}
    
        cout<<fib1(i)<<" ";
    loop_fib(n,i+1);
}
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    //fib(n);
    loop_fib(n);
}
