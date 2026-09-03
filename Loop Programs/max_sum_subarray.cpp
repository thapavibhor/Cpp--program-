#include <iostream>
using namespace std;

// Understanding the problem: Given an array of integers,
// find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
// BRUTE FORCE APPROACH: O(n^2)
int max1(int a[7],int w){
    int maxx = 0;
    int current;
    for(int i=0;i<=7-w;i++){
        current = 0;
        for(int j=i;j<=(i+w-1);j++){
            current = current + a[j];
        }
    maxx = maxx>current? maxx:current;
    }
    return maxx;
}

int main(){
    int a[7] = {3,8,2,5,7,6,12}; 
    cout<<"Maximum sum subarry :"<<max1(a,3);
}