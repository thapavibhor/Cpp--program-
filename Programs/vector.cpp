#include <iostream>
#include <vector>
using namespace std ;
int main(){
    vector<int> v = {10,20,30};
    cout<<"Element of vector :";
    for (int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl<<"Size of vector :"<<v.size()<<endl;
    cout<<"Capacity of vector :"<<v.capacity()<<endl;
    v.push_back(30);
    cout<<"Push element : 40"<<endl;
    cout<<"New Size of vector :"<<v.size()<<endl;
    cout<<"Capacity of vector :"<<v.capacity()<<endl;
    cout<<"Element of vector :";
    for (int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    
return 0;

