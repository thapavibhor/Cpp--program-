#include <iostream>
using namespace std;
/* int main(){ // This is a program to find the factorial of a number using iterative method.
    int x;
    cout << "Enter a number: ";
    cin >> x;
    if (x<0){
        cout << "Factorial of a negative number doesn't exist." << endl;
        main ();
    }
    else if (x==0){
     
        cout << "Factorial of 0 is 1." << endl;
    return 0;
    }

    else{
        long long fact=1;
        for(int i=1;i<=x;i++){
            fact *= i;
        }
        cout << "Factorial of " << x << " is " << fact << "." << endl;
    }
    return 0;
}*/
int fact(int x){ // This is a program to find the factorial of a number using recursive method.
    if (x==0){
        return 1;
    }
    else{
        return x * fact(x-1);
    }
}
int main(){
    int x;
    cout << "Enter a number: ";
    cin>>x;
    cout << "Factorial of " << x << " is " << fact(x) << "." << endl;
    return 0;
}