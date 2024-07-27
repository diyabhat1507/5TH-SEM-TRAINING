// SET- Cannot add duplicate element.
// Take the value in sorted order.

/*
#include<iostream>
#include<list>
#include<vector>
#include<set>
using namespace std;
int main(){
    /*list<int> numbers;
    int num,count=0;
    cout<<"Enter the number of elements: ";
    cin>>count;
    cout<<"Enter the elements: ";
    for (int i=0;i<count;i++) {
        cin>>num;
        numbers.push_back(num);
    }
    cout << "The list contains: ";
    for (int num:numbers){
        cout<<num<<"\n";
    }*/
    /*vector<int> a;
    cout<<a.push_back(10);
    cout<<a.push_back(11);
    cout<<a.push_back(10);
    */

    /*
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    /*
        for (auto i:s){
        cout<<i<<endl;// 0,1,5,6
    }
    cout<<endl;
    set<int> :: iterator it=s.begin();
    it++;
    s.erase(it);
    for (auto i:s){
        cout<<i<<"\n";
    }
    */
    // Find the element is present in set or not.
    /*
    cout<<"is present: "<<s.count(7)<<endl;
    set<int>::iterator itr=s.find(5);
    for (auto it=itr;it!=s.end();it++){
        cout<<"Output: "<<*it<<" ";// this is pointers
    }
    cout<<endl;

    return 0;
}
*/


/*
#include<iostream>
#include<list>
using namespace std;
int main(){
    int i=10;
    int *j=&i;
    j=&(i+34);
    cout<<i<<endl;
    cout<<&i<<endl;
    cout<<*(&i)<<endl;
    cout<<"for j: \n"<<j<<endl;

    // & can be used with variable.
    // * can be used with variable/expression/constant.
    /*
    const char * message("Hello World!");
    cout<<"message: "<<message<<endl;  // Hello World!
    // *message="B"; // Compiler error
    cout<<"*message: "<<*message<<endl;  // H
    // Allow users to modify the string
    char message1[] {"Hello World!"};
    message1[0]='B';
    cout<<"message1: "<<message1<<endl;  // Bello World!

    return 0;
}
*/


/*
#include <iostream>
using namespace std;
int main(){
  // Declare and initialize pointer
  int* p_number {}; // Will initialize with nullptr
  double* p_fractional_number{};
  // Explicitly initialize with nullptr
  int* p_number1{nullptr};
  double* p_fractional_number1{nullptr};
  // Pointers to different variables are of the same size
  // cout << "sizeof(int) : " << sizeof(int) << endl; // 4
  // cout << "sizeof(double) : " << sizeof(double) << endl; // 8
  // cout << "sizeof(double*) : " << sizeof(double*) << endl;
  // cout << "sizeof(int*) : " << sizeof(int*) << endl; // 8
  // cout << "sizeof(p_number1) : " << sizeof(p_number1) << endl; // 8
  // cout << "sizeof(p_fractional_number1) : " << sizeof(p_fractional_number1) << endl; // 8
  // It doesn't matter if you put the * close to data type or to varible name
  // int* p_number2{nullptr};
  // int * p_number3{nullptr};
  // int *p_number4{nullptr};
  // int *p_number5{}, other_int_var{};
  // int* p_number6{}, other_int_var6{};	// Confusing as you wonder if other_int_var6
  // // is also a pointer to int. It is not.
  // // The structure is exactly the same for the
  // // previous statement
  // cout << "sizeof(p_number5) : " << sizeof(p_number5) << endl; // 8
  // cout << "sizeof(other_int_var) : " << sizeof(other_int_var) << endl; // 4
  // cout << "sizeof(p_number6) : " << sizeof(p_number6) << endl; // 8
  // cout << "sizeof(other_int_var6) : " << sizeof(other_int_var6) << endl; // 4
  // // It is better to separate these declarations on different lines though
  // int *p_number7{};
  // int other_int_var7{}; // No room for confusion this time.
  //Initializing pointers and assigning them data
  //We know that pointers store addresses of variables
  // int int_var {43};
  // int *p_int{&int_var};// The address of operator (&);
  // cout << "Int var : " << int_var << endl; // 43
  // cout << "p_int (Address in memory) : " << p_int << endl; // 0x7ffdfa760bf8
  // // //You can also change the address stored in a pointer any time
  // int int_var1 {65};
  // p_int = &int_var1; // Assign a different address to the pointer
  // cout << "p_int (with different address) : " << p_int << endl; // 0x7ffdfa760bfc
  //Can't cross-assign between pointers of different type.
  int *p_int1{nullptr};
  double double_var{33};
  //p_int = &double_var; // Compiler error
  //Dereferencing a pointer:
  int* p_int2 {nullptr};
  int int_data {56};
  p_int2 = &int_data;
  cout << "value : " << *p_int2 // Dereferencing a pointer
            << endl; // 56
  return 0;
}
*/


/*
#include <iostream>
using namespace std;
int main(){
  int scores[10] {11,12,13,14,15,16,17,18,19,20};
  int * p_score { scores};
  //Print the address
  cout << "scores : " << scores << endl; // Array
  cout << "p_score : " << p_score << endl; // Pointer
  cout << "&scores[0] : " << &scores[0] << endl;
  //Print the content at that address
  cout << endl;
  cout << "Printing out data at array address : " << endl;
  cout << "*scores : " << *scores << endl;
  cout << "scores[0] : " << scores[0] << endl;
  cout << "*p_score : " << *p_score << endl;
  cout << "p_score[0] : " << p_score[0] << endl;
  //Differences
  int number {21};
  p_score = &number;
  //scores = &number; // The array name is a pointer, but a special pointer that kind of identifies
            // the entire array. You'll get the error : incompatible types in assignment
           // of 'int*' to 'int[10]'
  cout << "p_score : " << p_score << endl;// Pointer
 //size() doesn't work for raw pointers
 cout << "size : " << size(scores) << endl;
 //cout << "size : " << size(p_score) << endl; // Compiler error.
  return 0;
}
*/


