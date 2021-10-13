#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main () {
  int guess , answer ;
  cout<<"what is 6 times 5 \n";
  cin>>guess ;
  if ( guess==30 ) {
    cout<<"correct";
}else if (guess!=30) {
  while (guess!=30) {
    cout<<"WRONG WRONG WRONG HAHAHAHAHA TRY AGAIN \n" ;
    cin>>guess ;
  }if ( guess==30 ) {
    cout<<"correct";
}
}
}