#include <iostream>
#include <string>
using namespace std;
class Teacher{
    private:
    double salary;
public:
  Teacher() {
//  cout<<"hi,i am constructor\n";
       dept = "computer science";  
  }
    string name;
    string dept;
    string subject;
    // double salary;
     
    void changedept(string newdept) {
        dept = newdept;

    }
   void changedept (int newdept){
    dept = newdept;
   }
  //setter
  void  setsalary(double s){
    salary = s;
  }
  //getter 
  double getsalary(){
    return salary;
  }
};
int main(){
    Teacher t1;   //constructor call 
    // Teacher t2;
     t1.name = "akansha";
    t1.subject =  "c++";
    // t1.dept = "computer science";
    t1.setsalary(25000);
    cout<<t1.name <<endl;
    cout<<t1.getsalary()<<endl;
    cout <<t1.dept <<endl;
    return 0;
}