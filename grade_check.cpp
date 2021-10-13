
  
#include <iostream>
using namespace std;
int main() {
  double total=0 , grade=1, grade_check=0, avg;
  while (grade_check!=4){
    cout<<"Enter a grade\n";
    cin>>grade;
    total= total + grade;
    grade_check = grade_check + 1;
  }
avg = total / 4;
cout<<"Your average is "<<avg;
   

}
