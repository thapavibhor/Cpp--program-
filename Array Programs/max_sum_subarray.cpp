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

// Sliding Window Technique : Big O = O(n) 
int max2(int a[7],int w){
    int current = 0;
    for(int i=0;i<w;i++){current += a[i];} // find the sum of first window
    int max2 = current;
    for(int i=1;i<=7-w;i++){
        current = current - a[i-1] + a[i+w-1];
        if(current>max2){max2= current;}
    } return max2;
}


int main(){
    int a[7] = {3,8,2,5,7,6,12}; 
    cout<<"Maximum sum subarry :"<<max1(a,3);
    cout<<"Maximum sum subarry :"<<max2(a,5);
return 0;
}