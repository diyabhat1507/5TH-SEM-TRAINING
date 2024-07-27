// Constructor Demo

#include<iostream>
#include<string>
using namespace std;
class Teacher{
private:
    double salary;  // data hiding

public:
    string name;
    string dept;
    string subject;
    void changeDept(string newDept){
    dept=newDept;
    }
    // getter & setter method.
    void setSalary(double s){
    salary=s;
    }
    double getSalary(){
    return salary;
    }
    Teacher(){
    cout<<"Constructor is calling"<<endl;
    }
    Teacher(string name,string dept,string subject,double salary){
        this->name=name;
        this->dept=dept;
        this->subject=subject;
        this->salary=salary;
    }
    void getInfo(){
        cout<<"Teacher name: "<<name<<endl;
        cout<<"Teacher subject: "<<subject<<endl;
        cout<<"Department name: "<<dept<<endl;
        cout<<"Salary is: "<<salary<<endl;
    }
};

int main(){
    Teacher t1("Peeyush","CSE","C++",450000);
    Teacher t2(t1);   // this is default copy constructor is envoked.
    t2.getInfo();
        //cout<<t1.name<<endl;
        cout<<endl;
}
