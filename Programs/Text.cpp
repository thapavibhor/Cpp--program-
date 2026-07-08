#include<iostream>
using namespace std;
 /* int main(){
    int a=10;
    int *p= &a;
    cout << a << endl;
    cout << &a << endl;
    cout << p << endl;
    cout << *p << endl;
    cout << &p << endl;
    return 0; 
} */
/* int main (){
    int x =15;
    int *p = &x;
    *p = *p +1 ;
    cout << x << endl;
    cout << &x << endl;
    cout << *p << endl;
    cout << p << endl;  // adress of x
    return 0;
} */
void test (int *x,int &y , int z ){
    *x += 5 ;
    y += 5;
    z *= 2;
    cout << *x << " " << y << " " << z << endl;
}
/*int main(){
    int a= 3, b=3 , c=4;
    test(&a,b,c);
    cout << a << " " << b << " " << c << endl;
return 0; 
}*/
