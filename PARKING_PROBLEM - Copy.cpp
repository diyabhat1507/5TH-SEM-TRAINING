// Parking Problem

#include <iostream>
using namespace std;
int main(){
    int a=10,b,c,d,z,count1=0,count2=0,count3=0;
    for (int i=0;i<a;i++){
    cout<<"1. Park Car"<<endl;
    cout<<"2. Park Bike"<<endl;
    cout<<"3. Park Rikshaw"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"Enter your choice: ";
    cin>>z;
    if (z==1){
        cout<<"Number of cars parked: ";
        cin>>b;
        count1+=b;
        cout<<"Total number of cars parked: "<<count1<<"\n";
    }
    if (z==2){
        cout<<"Enter the number of bikes parked: ";
        cin>>c;
        count2+=c;
        cout<<"Total number of bikes parked: "<<count2<<"\n";
    }
    if (z==3){
        cout<<"Enter the number of rikshaw parked: ";
        cin>>d;
        count3+=d;
        cout<<"Total number of rikshaw parked: "<<count3<<"\n";
    }
    if (z>4){
        cout<<"Invalid choice."<<endl;
        cout<<"Please enter from 1 to 4."<<endl;
    }
    if (z==4){
        cout<<"Exiting the program."<<endl;
        break;
    }
    }
    return 0;
}
