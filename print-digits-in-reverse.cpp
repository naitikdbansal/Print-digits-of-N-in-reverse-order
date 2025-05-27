#include <iostream>
using namespace std;

int main(){
long long a;
long long b;
long long i;

cout<<"Enter your number : ";
cin>>i;

cout<<"Digits of the number "<<i<<" in reverse order are ";

for( i ; (a=i%10)!=0 ; (i=b) ){
b=i/10;
cout<<a<<" ";
}

return 0;

}