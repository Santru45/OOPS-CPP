#include<iostream>
#include<string>
using namespace std;

class Teacher{
private:
    double salary;
public:
    string name;
    string dept;
    string subject;

    //We'll use the constructor where there is a similar value to be assigned to all the objects, like dept
    Teacher(){
        dept = "Computer Science";
    }
    void changeDept(string newDept){
        dept = newDept;
    }
    //setter
    void setSalary(double s){
        salary = s;
    }

    //getter
    double getSalary(){
        return salary;
    }
};


int main(){
    Teacher t1;
    Teacher t2;
    Teacher t3;
    t1.name = "Santrupt";
    t1.subject = "C++";
    t1.setSalary(200000);

    cout<<"Name :"<<t1.name<<endl;
    cout<<"Subject :"<<t1.subject<<endl;
    cout<<"Salary :"<<t1.getSalary()<<endl;

    cout<<"T1 dept: "<<t1.dept<<endl;
    cout<<"T2 dept: "<<t2.dept<<endl;       //Constructor assigned dept for t2 automatically when t2 object was called
    cout<<"T3 dept: "<<t3.dept<<endl;
    cout<<"T2 Name :"<<t2.name<<endl;       //blank because neither the constructor assigned name for t2 object nor did we assign it manually

    t3.changeDept("Mech");
    cout<<"T3 Dept: "<<t3.dept<<endl;
    return 0;
}