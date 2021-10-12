#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
int num , num1 ; 
num=0;
cout<<"enter a positive integer \n" ;
cin>>num1 ;
if (num1>0) {
while (num<num1) { 
  cout<<num<<"\n" ;
  num++ ;
} 
} else {
  cout<<"error";
}
}
