#include <iostream>
#include <cctype>
using namespace std;
int main(){
   char x;
   cout<<"Enter a alphabet : ";
   cin>>x;
   x = tolower(x);
   if ( x=='a' || x=='e' || x=='i' || x=='o' || x=='u'){
      cout<<"Vowel"<<endl;
   }
   else{
      cout<<"Consonant"<<endl;
   }
}