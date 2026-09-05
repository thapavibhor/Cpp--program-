#include <iostream>
using namespace std;
//Remove the Duplicate element in storted array

/* Method:1 time complexity = O(n) and space complexity = o(n)
New array is created */ 
void remove_duplicate( int a1[9]){
    int new_arr[9];
    new_arr[0]= a1[0];
    int x=0;
    for(int i=0;i<9;i++){
        if(new_arr[x] != a1[i]){
            x++;
            new_arr[x]=a1[i];
        }}
    for (int i = 0; i <=x; i++){cout << new_arr[i] << " ";}
}

// Method: 2 time complexity = o(n) but space complexity = o(1)
// Preform op on same array
int remove_dup2(int a[9]){
    int x=0;
    for(int i=1;i<9;i++){
        if(a[i] != a[x]){
            x++;
            a[x]=a[i];}
        }
return x;
}
int main(){
    int a[9]={5,5,7,8,8,9,9,10,10};
    int new_a[9];
    cout<<"Method 1: ";    
    remove_duplicate(a);
    int x= remove_dup2(a);
    cout<<"\nMethod 2: ";
    for(int i=0;i<=x;i++){cout<<a[i]<<" ";}
return 0;
}
