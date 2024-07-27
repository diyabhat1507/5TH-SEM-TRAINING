// cout:- character output stream- to display output.
// cin:- character input stream- to take input.
#include <iostream>
using namespace std;
int main(){
  /*  // Compile time error
    cout<<"Hello World"<<var<<endl;

    // Run time error
    int value=7/0;
    cout<<"Value: "<<value<<endl;

    return 0; */
    // Sum of two numbers
    /* int a,b;
    cout<<"Enter the number a: ";
    cin>>a;
    cout<<"Enter the number b: ";
    cin>>b;
    cout<<"Sum of two number is: "<<a+b<<endl; */

    /*
    int num1=15;           // Decimal
    int num2=017;          // Octal
    int num3=0x0F;         // Hexadecimal
    int num4=0b00001111;   // Binary
    cout<< "Num1: "<<num1<<endl;
    cout<< "Num2: "<<num2<<endl;
    cout<< "Num3: "<<num3<<endl;
    cout<< "Num4: "<<num4<<endl;  */


    /*
    // Braced initializers
    // Variable may contain random garbage value. WARNING
    int elephant_count;
    int lion_count{};    // Initializes to zero
    int dog_count{10};   // Initializes to 10
    int cat_count{15};   // Initializes to 15
    // Can use expression as initializer
    int domesticated_animals {dog_count + cat_count};

    // int new_number{doesnt_exist};
    int narowing_conversion {2.9}; // Compiler error

    cout<<"Elephant_count: "<<elephant_count<<endl;
    cout<<"Lion_count: "<<lion_count<<endl;
    cout<<"Dog_count: "<<dog_count<<endl;
    cout<<"Cat_count: "<<cat_count<<endl;
    cout<<"Domesticated animal count: "<<domesticated_animals<<endl;
    return 0;  */


    /*
    // Assignment notation
    int bike_count=2;
    int truck_count=7;
    int vehicle_count=bike_count+truck_count;
    int narrowing_conversion_assignment=2.9;

    cout<<"Bike count: "<<bike_count<<endl;
    cout<<"Truck count: "<<truck_count<<endl;
    cout<<"Vehicle count: "<<vehicle_count<<endl;
    cout<<"Narrowing conversion: "<<narrowing_conversion_assignment<<endl;

    // Check the size with sizeof
    cout<<"sizeof int: "<< sizeof(int)<<endl;
    cout<<"sizeof truck_count: "<<sizeof(truck_count)<<endl;
    return 0;  */


    /*
    int apple_count(5);
    int orange_count(10);
    int fruit_count(apple_count+orange_count);

    // int bad_initialization(doesnt_exist3+doesnt_exist4);

    //Information lost, less safe than braced initializers
    int narrowing_conversion_functional=2.9;

    cout<<"Apple count: "<<apple_count<<endl;
    cout<<"Orange count: "<<orange_count<<endl;
    cout<<"Fruit count: "<<fruit_count<<endl;
    cout<<"Narrowing conversion: "<<narrowing_conversion_functional<<endl;
    return 0;  */



    /*
    int inr;
    int pound;
    cout<<"Enter the amount in rupee: ";
    cin>>inr;
    cout<<"Amount in pound is: "<<inr/106.91<<endl;

    cout<<"Enter the amount in pound: ";
    cin>>pound;
    cout<<"Amount in rupees is: "<<pound*106.91<<endl;
    return 0; */


}
