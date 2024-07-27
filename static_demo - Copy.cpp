// static storage class
#include<iostream>
using namespace std;
int main(){
    static int count=0;
    count++;
    cout<<"Count: "<<count<<endl;
    return 0;
}
