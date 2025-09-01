#include <iostream>
#include <string>
using namespace std;
class Teacher {
    private:
    double salary;
    public:
   //  non parameterized constructor 
   //  Teacher(){
   //    dept = "computer sci";
   //  }
    // parameterised constructor
     Teacher(string n,string d,string s,double sal){    //is constructr ke andr 4 parametr aa gye
    name = n;       //or iske andar hum object ka initialisation kr rahe hai .
    dept = d;
    subject = s;
    salary = sal;
     }
     string name;

     string dept;
     string subject;
     
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


