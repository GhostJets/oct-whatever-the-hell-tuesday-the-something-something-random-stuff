#include <iostream>
using namespace std;
int main() {
  double total=0 , price=1;
  
  
  while(price>0){
  
    cout<<"Enter the price of your item. If finished enter -1\n";
    cin>>price;
    total = total + price;
  }
cout<<total;

}