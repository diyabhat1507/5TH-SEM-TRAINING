// extern storage class
#include<iostream>
using namespace std;
// file 1.cpp
int globalVar=0;
// file 2.cpp
extern int globalVar;
void example(){
    globalVar++;
    cout<<globalVar;
}
int main(){
    example();
    return 0;
}
