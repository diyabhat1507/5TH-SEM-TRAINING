/* #include <iostream>
using namespace std;
int add(int num1,int num2){
    int sum=num1+num2;
    cout<<"Sum of num1 and num2: "<<sum<<"\n";
    }
int add(int num1,int num2,int num3){
    int sum_of_three=num1+num2+num3;
    cout<<"Sum of num1 and num2: "<<sum_of_three<<"\n";
    }
int main(){
    add(2,3);
    add(2,3,5);
    return 0;
} */
// Function overloading- Using same function more than 1 time by using different parameters.
// Polymorphism- Is is an concept in oop's that allows objects of different types to be treated as objects of a common type.
// Compile time polymorphism- Object bound with function at compile time.
// Run time polymorphism- Object bound with function at run time.

// Use cases for function overloading-
// -
// -


/*
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    cin>>a>>b;
    for (int n=a;n<=b;n++){
    if (n>=1 || n<=9){
        if (n==1){
        cout<<"one"<<endl;
        }
        if (n==2){
        cout<<"two"<<endl;
        }
        if (n==3){
        cout<<"three"<<endl;
        }
        if (n==4){
        cout<<"four"<<endl;
        }
        if (n==5){
        cout<<"five"<<endl;
        }
        if (n==6){
        cout<<"six"<<endl;
        }
        if (n==7){
        cout<<"seven"<<endl;
        }
        if (n==8){
        cout<<"eight"<<endl;
        }
        if (n==9){
        cout<<"nine"<<endl;
        }
    else if(n>9)
        if (n%2==0){
            cout<<"even"<<endl;
        }
        else
            cout<<"odd"<<endl;
    }
    }
    return 0;
}

*/


#include <iostream>
using namespace std;

const int b=100;

void printArray(int a[], int size) {
    for (int i = 0; i < size; i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main() {
    int a[] = {4, 6, 7, 8};
    int size = 4;
    int choice, element, position;
    while (true) {
        cout<<"\n1. Insert\n2. Delete\n3. Update\n4. Read\n5. Exit\nEnter your choice: ";
        cin>>choice;
        switch (choice) {
            case 1:
                if (size<b) {
                    cout << "Enter element to insert: ";
                    cin >> element;
                    cout << "Enter position to insert (0 to " << size << "): ";
                    cin >> position;
                    if (position >= 0 && position <= size) {
                        for (int i=size; i > position; i--) {
                            a[i]=a[i-1];
                        }
                        a[position] = element;
                        size++;
                        cout<<"Element inserted successfully." << endl;
                    } else {
                        cout<<"Invalid position"<<endl;
                    }
                }
                else {
                    cout<<"Array is full"<<endl;
                }
                break;
            case 2:
                if (size > 0) {
                    cout << "Enter position to delete (0 to " << size - 1 << "): ";
                    cin >> position;
                    if (position >= 0 && position < size) {
                        for (int i = position; i < size - 1; i++) {
                            a[i] = a[i + 1];
                        }
                        size--;
                        cout << "Element deleted successfully." << endl;
                    } else {
                        cout << "Invalid position" << endl;
                    }
                } else {
                    cout << "Array is empty" << endl;
                }
                break;
            case 3:
                if (size > 0) {
                    cout << "Enter position to update (0 to " << size - 1 << "): ";
                    cin >> position;
                    if (position >= 0 && position < size) {
                        cout << "Enter new element: ";
                        cin >> a[position];
                        cout << "Element updated successfully." << endl;
                    } else {
                        cout << "Invalid position" << endl;
                    }
                } else {
                    cout << "Array is empty" << endl;
                }
                break;
            case 4:
                if (size > 0) {
                    cout << "Array elements: ";
                    printArray(a, size);
                } else {
                    cout << "Array is empty" << endl;
                }
                break;
            case 5:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice" << endl;
        }
    }
    return 0;
}

