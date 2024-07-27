// Bubble Sort
// Selection Sort
// Sample Code
// Sorting- Arrange the data in sequential manner(i.e. ascending or descending order).


/*
// Bubble sort
#include <iostream>
using namespace std;
void bubblesort(){
    int a[5];
    int temp;
    int n;
    cout<<"Enter the elements: ";
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=n-1;i>=0;i--){
        for (int j=0;j<=i;j++){
            if (a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"Sorted array: ";

}
int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int i;
    int a[i];
    for (int i=0;i<n;i++){
        cout<<a[i];
    }
    bubblesort(a[i])
    return 0;
}   */



// Selection Sort
/*
#include<iostream>
using namespace std;
void selectionsort(int arr[],int len){
for (int i=0;i<len-1;i++){
    int min_index=i;
    for (int j=i+1;j<len;j++){
        if(arr[j]<arr[min_index]){
            min_index=j;
        }
    }
    swap(arr[i],arr[min_index]);
}
for(int i=0;i<len;i++)
{
    cout<<arr[i]<<endl;
}
}
int main(){
    int arr[5]={1,4,6,2,6};
    selectionsort(arr,5);
    return 0;
}
*/



// String manipulation program
/*
#include <iostream>
int main(){
    std::string str1="Hello, ";
    std::string str2="World!";
    std::string result=str1+str2;
    std::cout<<"Concatenated String: "<<result<<std::endl;
    return 0;
}
*/


// Find substring
/*
#include <iostream>
#include <string>
int main(){
    std::string str="Hello, World!";
    std::string substr="World";
    size_t found=str.find(substr);

    if (found!=std::string::npos){
        std::cout<<"Substring found at index: "<<found<<std::endl;
    }
    else{
        std::cout<<"Substring not found"<<std::endl;
    }
    return 0;
}
*/


// Replace string
/*
#include <iostream>
#include <string>
int main(){
    std::string str="Hello, World!";
    std::string from="World";
    std::string to="C++";
    size_t start_pos=str.find(from);
    if (start_pos != std::string::npos){
        str.replace(start_pos,from.length(),to);
    }
    std::cout<<"String after replacement: "<<str<<std::endl;
    return 0;
}
*/


/*
#include <iostream>
#include <string>
using namespace std;
int main(){
    string str="Welcome to the MIET";
    str.replace(3,4,"abcd");
    cout<<str<<endl;
    return 0;
}
*/

/*

// 1. Print substring
#include <iostream>
#include <string>
using namespace std;
int main(){
    string str="Welcome to MIET";
    string substr=str.substr(0,5);
    cout<<substr<<endl;
    return 0;
}
*/

// 2. Erase
/*
#include <iostream>
#include <string>
using namespace std;
int main(){
    string str="Welcome to MIET";
    string substr=str.erase(0,4);
    cout<<substr<<endl;
    return 0;
}
*/

// 3. Append
/*
#include <iostream>
#include <string>
using namespace std;
int main(){
    string str="Welcome to MIET";
    string substr=str.append(" College");
    cout<<substr<<endl;
    return 0;
} */


// 4. Maximum length of string
/*
#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, World!";
    std::cout << "Maximum size of the string: " << str.max_size() << std::endl;
    return 0;
}
*/

/*

// Searching and Sorting
#include <iostream>
#include <string>
using namespace std;
void searching(int x,int len){
    int arr[5],i;
    cout<<"Enter the element to search: ";
    cin>>x;
    for(int i=0;i<len;++i)
        if(arr[i]==x)
            break;
    if(i<len)
        cout<<"Element found at index: "<<i;
    else
        cout<<"Element not found: "<<endl;
}
void sorting(int arr[],int len){
for (int i=0;i<len-1;i++){
    int min_index=i;
    for (int j=i+1;j<len;j++){
        if(arr[j]<arr[min_index]){
            min_index=j;
        }
    }
    swap(arr[i],arr[min_index]);
}
for(int i=0;i<len;i++)
{
    cout<<arr[i]<<endl;
}
}
int main(){
    int arr[6]={44,5,67,12,89,45};
    searching(45,6);
    sorting(arr,6);
    return 0;
}
*/

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
