
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


