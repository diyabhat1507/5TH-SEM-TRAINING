// Constructor Demo

#include<iostream>
#include<string>
using namespace std;
class Parking{
private:
    double e_salary;

public:
    string e_name;
    string e_id;
    void setsalary(double s){
    e_salary=s;
    }
    double getsalary(){
    return e_salary;
    }
    Parking(string e_name,string e_id,double e_salary){
        this->e_name=e_name;
        this->e_id=e_id;
        this->e_salary=e_salary;
    }
    void getInfo(){
        cout<<"Employee name name: "<<e_name<<endl;
        cout<<"Employee id: "<<e_id<<endl;
        cout<<"Salary of emplyee: "<<e_salary<<endl;
    }
};
class vehicle
{
    private:
    string type;
    string colour;
    public:
    vehicle(string type ,string colour)
    {
        this->type=type;
        this->colour=colour;
    }
    void settype(string t)
    {
        type=t;
    }
    string gettype()
    {
        return gettype();
    }
    void setcolour(string c)
    {
        colour=c;
    }
    string getcolour()
    {
        return getcolour();
    }
    void display1()
    {
        cout<<"Type of the vehicle: "<<type<<endl;
        cout<<"Colour of the vehicle: "<<colour<<endl;
    }
};
int main(){
    Parking p1("ABC","S001",10000);
    p1.getInfo();
    vehicle v("Car","White");
    v.display1();
}
