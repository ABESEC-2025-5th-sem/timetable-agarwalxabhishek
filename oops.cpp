#include <iostream>
#include <string>
using namespace std;
 class  Teacher {
    private:
    double salary;  //ab ye double salary wala function main mai call nahi ho skta bcoz of private access specifier.
    public:
    string name;
    string dept;
    string subject;
    // double salary;
     
    void changedept(string newdept) {
        dept = newdept;

    }
    //setter 
    //setter function ka kam hota hai private value ko access(set) krna 
     void setsalary(int s){
        salary = s;            //void setsalary function se hum apni salary ko value ko main mai access kr payenge.
     }
       //getter 
       //getter function ka kaam hota hai generally private value ke value get krne ke liye use krte hai.
     double getsalary(){
        return salary;         //salary ko beshaq humne private bnaya lekin hume in  2 function se access mil gyi 
     }
 };

 int main(){
    Teacher t1;
    t1.name = "akansha";
    t1.subject =  "c++";
    t1.dept = "computer science";
    t1.setsalary(25000);
    cout<<t1.name <<endl;
    cout<<t1.getsalary()<<endl;
    return 0;
 }
