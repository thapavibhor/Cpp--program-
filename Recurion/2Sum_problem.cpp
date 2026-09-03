#include <iostream>
using namespace std;

int find1(int a[8],int target){ //Big O = o(n^2)
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(a[i]+a[j]==target){
                cout<<"The target is found at indices: "<<i<<", "<<j<<endl;
                return 0;
            }
        }
    }
   cout<<"Target not found"<<endl;
    return -1;
}

int find2(int a[8],int target, int left=0, int right=7){ //Big O = o(n)
    int current_sum = a[left]+a[right];
    if (a[left]+a[right]==target){
        cout<<"The target is found at indices: "<<left<<", "<<right<<endl;
        return 0;} 
    else if (left >= right){ cout<<"Target not found"<<endl; return -1;}
    else if (current_sum<target){return find2(a,target,left+1,right);}
    else if (current_sum>target){return find2(a,target,left,right-1);}
    return -1;    
}

int main(){
    int a[8]={1,2,3,5,7,10,11,15};
    //find1(a,15);
    find2(a,19);
return 0;
}