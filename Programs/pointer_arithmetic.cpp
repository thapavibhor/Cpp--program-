#include <iostream>
using namespace std ;
int main(){
    int arr[5]={10,20,30,40,50};
    int *p=arr; // &arr[0];
    cout<< *(p+1)<<endl;
    cout<<*p++<<endl;
    cout<<*++p<<endl;
    cout<<*--p<<endl;
return 0;
}
