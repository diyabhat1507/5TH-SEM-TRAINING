/*
#include <iostream>
using namespace std;
int main(){

    MAXIMUM OF 3 NUMBERS
    int a;
    int b;
    int c;
    cout<<"Enter the 1st number: ";
    cin>>a;
    cout<<"Enter the 2nd number: ";
    cin>>b;
    cout<<"Enter the 3rd number: ";
    cin>>c;
    if (a>b)
        if (a>c)
            cout<<a<<" is greater than "<<b<<" and "<<c;
        else
            cout<<c<<" is greater than "<<a<<" and "<<b;
    else
        if (b>c)
            cout<<b<<" is greater than "<<a<<" and "<<c;
        else
            cout<<c<<" is greater than "<<a<<" and "<<b;
    return 0;



}  */

/*
#include <iostream>
using namespace std;
// Tools
    const int Pen{10};
    const int Marker{20};
    const int Eraser{30};
    const int Rectangle{40};
    const int Circle{50};
    const int Ellipse{60};
int main(){
     int tool{Eraser};
     switch(tool)
     {

        case Pen:{
            cout<<"Active tool is pen"<<endl;
            }
        break;
        case Marker:{
            cout<<"Active tool is marker"<<endl;
            }
        break;
        //if (tool==Eraser || tool==Rectangle || tool==Circle){
            // cout<<"Drawing shapes"<<endl;
            //}
        case Eraser:
        case Rectangle:
        case Circle: {
        cout<<"Drawing shapes"<<endl;
        }
        break;
        case Ellipse: {
            cout<<"Active tool is ellipse"<<endl;
        }
        break;
        default: {
            cout<<"No match found"<<endl;
        }
        break;
}
        cout<<"Moving on"<<endl;
    /*
    // Condition can only be integer of enum (We'll learn about enums later in the course)
    string name {"John"};
    switch (name) // Compiler error!
    {

    }
  return 0;

}  */

/*
#include <iostream>
using namespace std;
int add(int num1,int num2){
    int sum=num1+num2;
    cout<<"Sum of num1 and num2: "<<sum<<"\n";
    }
void sub(int num1,int num2){
    int sub=num1-num2;
    cout<<"Sub of num1 and num2: "<<sub<<"\n";
    }
void mul(int num1,int num2){
    int mul=num1*num2;
    cout<<"Mul of num1 and num2: "<<mul<<"\n";
    }
void rem(int num1,int num2){
    int rem=num1%num2;
    cout<<"Rem of num1 and num2: "<<rem<<"\n";
    }
void divi(int num1,int num2){
    int div=num1/num2;
    cout<<"Div of num1 and num2: "<<div<<"\n";
    }
int main(){
    add(2,3);
    sub(5,10);
    divi(5,6);
    mul(2,6);
    rem(20,10);
    return 0;
}
*/

/*
#include <iostream>
using namespace std;
int main(){
    float classes_held;
    float classes_attended;
    float per;
    cout<<"Enter the number of classes held: ";
    cin>>classes_held;
    cout<<"Enter the number of classes attended: ";
    cin>>classes_attended;
    per=(classes_attended/classes_held)*100;
    cout<<"Attendence percentage is: "<<per<<"\n";
    if (per>=75){
        cout<<"Student is allowed to sit in examination"<<endl;
    }
    else
        cout<<"Student not allowed to sit in examination"<<endl;

return 0;
}
 */



/*
#include <iostream>
using namespace std;
int main(){

    int a;
    cout<<"Enter the even number: ";
    cin>>a;
    a+=1;
    cout<<a<<endl;

return 0;
} */


#include <iostream>
using namespace std;
void pound(float rup=100){
    float pound=rup/106;
    cout<<"Currency in pound from rupees: "<<pound<<"\n";
    }
void rup(float pound=100){
    float rup=pound*106;
    cout<<"Currency in rupees from pound: "<<rup<<"\n";
}
float usd(float rup=100){
    float usd=rup/83.52;
    cout<<"Currency in usd from rupees: "<<usd<<"\n";
    }
void rup1(float usd=100){
    float rup1=usd*83.52;
    cout<<"Currency in rupees from usd: "<<rup1<<"\n";
}
float yuan(float rup=100){
    float yuan=rup/11.48;
    cout<<"Currency in yuan from rupees: "<<yuan<<"\n";
    }
float rup2(float yuan=100){
    float rup2=yuan*11.48;
    cout<<"Currency in rupees from yuan: "<<rup2<<"\n";
}

int main(){
    pound(100);
    usd(100);
    yuan(100);
    rup(100);
    rup1(100);
    rup2(100);
    return 0;
}
