#include <iostream>
using namespace std;
void fun1(){ // static memory (fixed memory)
    int arr[5]={1,2,3,4,5};
    cout<<arr[2];
}
void fun2(){ // dynamic memory (vary in size)
    int n;
    cout<<"Enter a number of element :";
    cin>>n;
    int *ptr = new int[n-1];
    for (int i=0;i<n;i++){
        int x;
        cout<<"Enter a number index "<<i<<" :";
        cin>>x;
        ptr[i]=x;
    }
    for(int j=0;j<n;j++ ){
        cout<< *ptr+j<<" ";
    }
    delete[]ptr; // Deletion req *most imp--> prevent memory leak
}
int main (){
    //fun1();
    fun2();
    return 0;
}