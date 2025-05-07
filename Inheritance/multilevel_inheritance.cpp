#include<iostream>
using namespace std;

class Person{
public:
    string name;
    int age;
};

class Student : public Person{
public:
    int rollNo;
};

class gradStudent : public Student{
public:
    string research_area;
};

int main(){
    gradStudent g1;
    g1.name = "Surya";
    g1.research_area = "DevOps";
    cout<<"Name :"<<g1.name<<endl;
    cout<<"Research :"<<g1.research_area<<endl;
    return 0;
}