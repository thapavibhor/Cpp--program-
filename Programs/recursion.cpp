#include<iostream>
using namespace std;
int fun(int x){
    if( x>0){
        cout << x << " ";
        fun(x-2);
        cout << x << " ";
    }
    return 0;
}
int main(){
    int x;
    cout << "Enter a number: ";
    cin >> x;
    fun(x);
    return 0;
}