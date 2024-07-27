// Stack- LIFO



#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    int a,b,c;
    int w,z;
    int n=15;
    for (int i=0;i<n;i++){
    cout<<"1. Size of the stack"<<endl;
    cout<<"2. Insert element into the stack"<<endl;
    cout<<"3. Delete element from the stack"<<endl;
    cout<<"4. Top element of the stack"<<endl;
    cout<<"5. Exit"<<endl;
    cout<<"Enter your choice: ";
    cin>>a;
    if (a==1){
        b=s.size();
        cout<<"Size of stack is: "<<b<<endl;
    }
    if (a==2){
        cout<<"Enter the elements: ";
        cin>>z;
        int g;
        s.push(z);
        cout<<"Elements in stack are: "<<z<<"\n"<<endl;
        for (int i=0;i<n;i++){
        cout<<"If you want to do insertion again press Y and if no press N: ";
        cout<<g;
        if (g=='Y' || g=='y'){
            s.push(z);
        }
        else
            break;
        }
    }
    if (a==3){
        //s.pop(z);
        cout<<"After delete elements are: "<<z<<endl;
    }
    if (a==4){
        cout<<"Top element in the stack is: "<<s.top()<<endl;
    }
    if (a==5){
        cout<<"Exiting the program"<<endl;
        break;
    }
    if (a==6){
        cout<<"Invalid choice Enter only 1-5"<<endl;
    }
    }
    return 0;
}
