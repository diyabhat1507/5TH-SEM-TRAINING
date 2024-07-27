// Storage Classes-

// auto- automatically detects the data type.
// for (auto i:number){
// }
// register- to access the element faster.
// static-
// extern-
// mutable-


// Insertion sort- Small set of elements
/*#include<iostream>
#include<vector>
using namespace std;
void InsertionSort(vector <int> &arr){
for(size_t i=1;i<arr.size();++i){
    int key=arr[i];
    int j=i-1;
    while(j>=0&&arr[j]>key){
        arr[j+1]=arr[j];
        --j;
    }
    arr[j+1]=key;
}
}
int main(){
    vector<int> arr={5,2,4,6,1,3};
    InsertionSort(arr);
    for (int num:arr){
        cout<<num<<" ";
    }
    return 0;
}*/


// Insertion sort using STL
/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void InsertionSort(vector<int>& arr) {
    for (size_t i=1;i<arr.size();++i) {
        int key=arr[i];
        auto it=upper_bound(arr.begin(),arr.begin()+i,key);
        rotate(it,arr.begin()+i,arr.begin()+i+1);
    }
}
int main() {
    vector<int> arr={5,2,4,6,1,3};
    InsertionSort(arr);
    for (int num:arr){
        cout<<num<<" ";
    }
    return 0;
}*/


// Merge sort in STL
/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void MergeSort(vector<int>& arr) {
    stable_sort(arr.begin(),arr.end());
}
int main() {
    vector<int> arr={5,2,4,6,1,3};
    MergeSort(arr);
    for (int num:arr){
        cout<<num<<" ";
    }
    return 0;
}
*/



// WAP for
// 1. Bubble sort
// 2. Selection sort
// 3. Insertion sort
// 4. Merge sort
/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void BubbleSort(vector<int> &arr){
    int n=arr.size();
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}
void SelectionSort(vector<int> &arr){
    int n=arr.size();
    for (int i=0;i<n-1;i++){
        int min_index=i;
        for (int j=i+1;j<n;j++){
            if (arr[j]<arr[min_index])
                min_index=j;
        }
        swap(arr[i],arr[min_index]);
    }
}
void InsertionSort(vector<int>& arr) {
    for (size_t i=1;i<arr.size();++i) {
        int key=arr[i];
        auto it=upper_bound(arr.begin(),arr.begin()+i,key);
        rotate(it,arr.begin()+i,arr.begin()+i+1);
    }
}
void MergeSort(vector<int>& arr) {
    stable_sort(arr.begin(),arr.end());
}
int main() {
    vector<int> arr={1,4,8,5,10,6,70};
    int a;
    for (int i=0;i<20;i++){
    cout<<"1. Bubble Sort"<<endl;
    cout<<"2. Selection Sort"<<endl;
    cout<<"3. Insertion Sort"<<endl;
    cout<<"4. Merge Sort"<<endl;
    cout<<"5. Exit"<<endl;
    cout<<"Enter your choice: \n";
    cin>>a;
    if (a==1){
    BubbleSort(arr);
    for (int num:arr){
        cout<<num<<" ";
    }
    }
    if (a==2){
    SelectionSort(arr);
    for (int num:arr){
        cout<<num<<" ";
    }
    }
    if (a==3){
    InsertionSort(arr);
    for (int num:arr){
        cout<<num<<" ";
    }
    }
    if (a==4){
    MergeSort(arr);
    for (int num:arr){
        cout<<num<<" ";
    }
    }
    if (a==5){
        cout<<"Exiting the program!"<<endl;
        break;
    }
    if (a>5||a<1){
        cout<<"Invalid choice enter from 1-5!"<<endl;
    }
    }
    return 0;
}
*/


/*
#include <iostream>
#include <vector>
using namespace std;
void rotateArray(vector<int> &arr) {
    int last=arr.back();
    for (int i=arr.size()-1;i>0;i--) {
        arr[i]=arr[i-1];
    }
    arr[0]=last;
}
void printArray(const vector<int>& arr, int a) {
    cout<<"Rotation "<<": ";
    cin>>a;
    for (int num : arr){
        cout<<num<<" ";
    }
}
int main(){
    vector<int> arr={1,2,3,4,5,6,7};
    int size=arr.size();
    cout<<"Initial array: ";
    printArray(arr,0);
    for (int i=1;i<=size;i++){
        rotateArray(arr);
        printArray(arr,i);
    }
    return 0;
}
*/



