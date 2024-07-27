// register storage class
#include<iostream>
using namespace std;
int main(){
    register int x=10;
    for (register int i=0;i<10;i++){
        x+=i;
    }
    cout<<"Output: "<<x;
    return 0;
}
