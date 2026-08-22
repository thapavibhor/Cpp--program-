#include <iostream>
using namespace std;

int search( int ar[10],int target,int start=0,int end=9){
    int mid = (start+end)/2;
    if (ar[mid]==target){
        return mid;
    }else if (ar[mid]>target){
        return search(ar,target,start,mid-1);
    }else {
        return search(ar,target,mid+1,end);
    }
}

int main(){
    int arr[10]= {12,15,23,34,46,67,78,89,90,99};
    cout<<search(arr,89);
}

/* def search(arr,target,start,end):
    if target not in arr :
        return -1
    if start >end :
        return -1 
    mid = (start+end) // 2
    if arr[mid]== target:
        return mid
    elif arr[mid]>target:
        return search(arr,target,start,mid-1)
    else :
        return search(arr,target,mid+1,end)


#arr = np.array([10,56,34,87,33,97,58,43])
#arr = np.sort(arr)
arr = np.arange(234,10001322,2)
print(arr)
print(search(arr,int(input("Enter search element :")),0,len(arr)-1))    */
