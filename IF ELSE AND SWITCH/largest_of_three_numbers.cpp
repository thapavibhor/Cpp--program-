#include <iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter 3 numbers :";
    cin>>x>>y>>z;
    cout<<"largest number ="<<((x>y)?((x>z)?x:z):((y>z)?y:z));
return 0;
}