#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
string name;
cout<<"what is your name \n";
cin>>name ; 
if (name=="tim") {
  cout<<"your name is tim";
}
else {
  while (name!= "tim") {
    cout<<"YOU ARE NOT TIM ! \n";
    cin>>name ;
  }
}
if (name=="tim") {
  cout<<"your name is tim \n";
}
else {
  while (name!= "tim") {
    cout<<"YOU ARE NOT TIM !\n";
    cin>>name ;
  }
}

}
