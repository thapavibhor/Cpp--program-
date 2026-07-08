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
    cout<<"Enter a positive number :";
    cin>>x;
    if (x<0){
        cout<<"Invalid! ";
        main();
    }
    int temp =x ;
    int px=0;
    while (temp!=0){
        px = (px*10) + temp%10;
        temp /= 10;
    }
    cout<<"Reverse of "<<x<<" = "<< px<<endl;
    if (x==px){
        cout<<"It's a palindrome number ";
    }else {
        cout<<"It's not a palindrome number ";
    }
return 0;
}