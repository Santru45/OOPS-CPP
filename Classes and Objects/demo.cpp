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
    t1.name = "Santrupt";
    t1.subject = "C++";
    t1.dept = "CSE";
    t1.setSalary(200000);

    cout<<"Name :"<<t1.name<<endl;
    cout<<"Subject :"<<t1.subject<<endl;
    cout<<"Salary :"<<t1.getSalary()<<endl;

    return 0;
}