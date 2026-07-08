#include <iostream>
using namespace std;
void number(int x , int y){
    cout<<"print numbers in sequential order-1"<<endl;
    cout<<"print numbers in reverse order-2"<<endl<<"Select one :";
    int q;
    cin>> q;
    if (q==1){
        for(int i=x ;i<=y;i++){
            cout<<i<<" ";
        }
    }
    else if (q==2){
        for(int i=y ;i>=x;i--){
            cout<<i<<" ";
        }
    }
    else{
        cout<<"Invalid input"<<endl;
        void number(int x , int y);
    }
}
void even_odd(int x , int y){
    cout<<"print even numbers-1"<<endl;
    cout<<"print odd numbers-2"<<endl<<"Select one :";
    int q;
    cin>> q;
    if (q==1){
        for(int i=x ;i<=y;i++){
            if(i%2==0){
                cout<<i<<" ";
            }
        }
    }
    else if (q==2){
        for(int i=x ;i<=y;i++){
            if(i%2!=0){
                cout<<i<<" ";
            }
        }
    }
    else{
        cout<<"Invalid input"<<endl;
        void even_odd(int x , int y);
    }
}
int main(){
    int x,y;
    cout<<"Enter the starting number :";
    cin>>x;
    cout<<"Enter the ending number :";
    cin>>y;
    cout<<endl<<"print numbers-1"<<endl;
    cout<<"print even or odd numbers-2"<<endl<<"select one :";
    int p;
    cin>>p;
    if (p==1){
        number(x,y);
    }
    else if (p==2){
        even_odd(x,y);
    }
    else{
        cout<<"Invalid input"<<endl;
        main();
    }
return 0;
}