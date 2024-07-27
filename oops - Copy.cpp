// OOPS
// 1. Class
// 2. Object

/*
#include<iostream>
#include<string>
using namespace std;
class person{
    char name[20];  // Data number
    int id;
    public:
        void getDetail(){  // member function/function
            cout<<"Detail is as follows.";
        }
};

int main(){
    person p1;  // creating object
    p1.getDetail();
    p1.id=12;
    return 0;
}
*/


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
    Teacher t1;
    string name,subject,dept;
    double salary;
    cout<<"Enter the name: ";
    cin>>name;
    cout<<"Enter the subject: ";
    cin>>subject;
    cout<<"Enter the department: ";
    cin>>dept;
    cout<<"Enter the salary: ";
    cin>>salary;
    t1.name=name;
    t1.subject=subject;
    t1.changeDept(dept);
    t1.setSalary(salary);
    //Teacher t1("Peeyush","CSE","C++",156789);
    t1.getInfo();
        //cout<<t1.name<<endl;
        cout<<endl;
}
