#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int a;
    float c;
    vector<float> b;
    float num1,num2;
    for (int i=0;i<100;i++){
    cout<<"1. Addition"<<endl;
    cout<<"2. Division"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Subtraction"<<endl;
    cout<<"5. Exit"<<endl;
    cout<<"Enter the choice: ";
    cin>>a;
    if (a==1){
        cout<<"Enter num1: ";
        cin>>num1;
        cout<<"Enter num2: ";
        cin>>num2;
        b.push_back(num1 + num2);
        cout<<"Addition: "<<b.back()<<endl;
        b.pop_back();
    }
    if (a==2){
        cout<<"Enter num1: ";
        cin>>num1;
        cout<<"Enter num2: ";
        cin>>num2;
        if (num1==0 || num2==0){
        cout<<"0\n";
        }
        else
        b.push_back(num1/num2);
        cout<<"Division: "<<b.back()<<endl;
        b.pop_back();
    }
    if (a==3){
        cout<<"Enter num1: ";
        cin>>num1;
        cout<<"Enter num2: ";
        cin>>num2;
        b.push_back(num1*num2);
        cout<<"Multiplication: "<<b.back()<<endl;
        b.pop_back();
    }
    if (a==4){
        cout<<"Enter num1: ";
        cin>>num1;
        cout<<"Enter num2: ";
        cin>>num2;
        b.push_back(num1-num2);
        cout<<"Subtraction: "<<b.back()<<endl;
        b.pop_back();
    }
    if (a==5){
        cout<<"Exiting the program!";
        break;
    }
    if (a==6){
        cout<<"Invalid choice.";
    }
    }
    return 0;
}
