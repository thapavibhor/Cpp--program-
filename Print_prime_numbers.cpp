#include <iostream>
using namespace std; 
int main() {
    int x,y;
    cout<< "Enter the range to print prime numbers: ";
    cin>>x>>y;
    if(x >= y){
        cout<<"Invalid range";
        return 0;
        } 
    for(int i=x;i<=y;i++){
        int r=0;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
            r=1;
            break;
                }
            }
        if(r==0 && i>1){
            cout<<i<<" ";
        }
    }
return 0;
}
 