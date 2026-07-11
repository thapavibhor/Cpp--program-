#include <iostream>
using namespace std;
class student{
    public :
    string name;
    int age;
    void display(){
        cout<<"Name :"<<name<<endl<<"Age :"<<age<<endl;
    }
};
class demo{
    private: int a;
    protected: int b ;
    public: int c;
    void set(){a=10; b=54; c=67;}
    void show(){cout<<"a ="<<a<<endl<<"b ="<<b<<endl<<"c ="<<c<<endl;};
};
class child : public demo{
    public :
    void access(){b=23;c=23;};
};
int main(){
    demo d;
    d.set();
    d.show();
    d.c=6767;
    cout<<d.c;
return 0;
}