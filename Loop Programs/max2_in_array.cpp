#include <iostream>
using namespace std;

int main(){
    int arr[8]={25,16,45,65,67,90,56,78};
    int max1;int max2;
    arr[0]>arr[1]? max1=arr[0],max2= arr[1] : max1=arr[1],max2=arr[0]; 
    for(int i=2;i<8;i++){
        if(arr[i]>max1){max2=max1;max1=arr[i];}
        else if(arr[i]>max2){max2=arr[i];}
    }
    cout<<"The maximum number is :"<<max1<<endl;
    cout<<"The second maximum number is :"<<max2<<endl;
    return 0;
}


