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

    
    Teacher(string name , string dept, string subject, double salary){
        this->name = name;
        this->subject = subject;
        this->dept = dept;
        this->salary = salary;

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
    Teacher t1("Santrupt","Computer Science","C++",300000);
    Teacher t2("Soha","Information Science","Java",25000);
    

    cout<<"T1 Name :"<<t1.name<<endl;
    cout<<"T1 Subject :"<<t1.subject<<endl;
    cout<<"T1 Salary :"<<t1.getSalary()<<endl;
    cout<<endl;
    cout<<"T2 Name :"<<t2.name<<endl;
    cout<<"T2 Subject :"<<t2.subject<<endl;
    cout<<"T2 Salary :"<<t2.getSalary()<<endl;
    
    return 0;
}