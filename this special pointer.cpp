#include <iostream>
#include <string>
using namespace std;
class Teacher {
 private:
    double salary;
    public:
    string name;

     string dept;
     string subject;
   //  non parameterized constructor 
   //  Teacher(){
   //    dept = "computer sci";
   //  }
    // parameterised constructor
     Teacher(string name,string dept,string subject,double salary){    
         this->name = name;
    this->dept = dept;
    this->subject = subject;
    this->salary = salary;
     }
   //   void changedept(string newdept){
   //      dept = newdept;
   //   }
     void getinfo(){
        cout <<"name:"<<name<<endl;
        cout<<"subject:"<<subject<<endl;
     }
    };
    int main(){
        Teacher t1("Akansha","computerscience","c++",25000);
        t1.getinfo();
        return 0;
    }


