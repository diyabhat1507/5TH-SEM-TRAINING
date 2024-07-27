// STL- Standard Template Library.

/*
#include<iostream>
#include<array>
using namespace std;
int main(){
    //int a[]={};
    array<int,5> a={5,7,6,1,3};
    // 1
    int size=a.size();
    cout<<"size :"<<size<<endl;
    for (int i=0;i<size;i++)
        {
        cout<<"array: "<<a[i]<<endl;
        }
    // 2
    int max_size=a.max_size();
    cout<<"max_size: "<<max_size<<endl;
    // 3
    int empty_1=a.empty();
    cout<<"empty: "<<empty_1<<endl;
    // 4
    // int b=2,c=5;
    // swap(b,c);
    // cout<<"after swapping: "<<swap<<endl;
    // 5
    // int sorting=a.sort();
    // cout<<"sorting: "<<sorting<<endl;
    return 0;
}
*/


/*
#include<iostream>
#include<array>
using namespace std;
int main(){
    //int a[]={};
    array<int,5> a={5,7,6,1,3};
    int size=a.size();
    cout<<"size :"<<size<<endl;
    for (int i=0;i<size;i++)
        {
        cout<<"array: "<<a[i]<<endl;
        }
        cout<<"element at index: "<<a.at(3)<<endl;
        bool trueFalse=a.empty();
        cout<<"true or false: "<<trueFalse<<"\n";
        bool empty=a.empty();
        cout<<"is array is empty or not: "<<empty<<"\n";
        cout<<"first element is: "<<a.front()<<endl;
        cout<<"last element is: "<<a.back()<<endl;

    return 0;
}
*/



/*
#include<iostream>
#include<array>
using namespace std;
int main(){
    //int a[]={};
    array<int,5> a={5,7,7,1,3};
    int count=0;
    int found;
    cout<<"Enter the number which you want to search: ";
    cin>>found;
    for (int i=0;i<5;i++)
        {
        cout<<"Array is: "<<a[i]<<endl;
        if (a[i]==found)
        count++;
        }
    cout<<found<<" is printed "<<count<<" times."<<endl;
    return 0;
}
*/


/*
#include<iostream>
#include<array>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> a;
    //void c=a.rbegin();
    //cout<<c<<endl;
    for (int i=0;i<4;i++){
        int b;
        cin>>b;
        a.push_back(b);
    }
    //cout<<b<<endl;
    cout<<"Capacity of vector is: "<<a.capacity()<<endl;
    cout<<"Size: "<<a.size()<<endl;
    return 0;
}
*/



/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<"Capacity: "<<v.capacity()<<endl;
    v.push_back(10);
    cout<<"Capacity: "<<v.capacity()<<endl;
    v.push_back(12);
    cout<<"Capacity: "<<v.capacity()<<endl;
    v.push_back(14);
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size: "<<v.size()<<endl;
    cout<<"First element: "<<v.front()<<endl;
    cout<<"Last element: "<<v.back()<<endl;
    cout<<"Before pop: "<<endl;
    for (int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back();
    cout<<"After pop: "<<endl;
    for (int i:v){
        cout<<i<<" "<<"\n";
    }
    cout<<"Before clear size: "<<v.size()<<endl;
    v.clear();
    cout<<"After clear size: "<<v.size()<<endl;

    return 0;
}
*/


/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5,1);
    // means size is 5 and all five default value is 1
    // cout<<"print all elements: "<<endl;
    for (int i:v){
        cout<<i<<" ";
    }
    return 0;
}
*/


/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
        int n;
        cout<<"Enter the number of elements: ";
        cin>>n;
        int arr[100];
        int sum=0;
        for(int i=0;i<n;i++){
            cout<<"Enter array elements: ";
            cin>>arr[i];
        }
        for (int i=0;i<=arr[i];i++)
        {
            cout<<arr[i]<<"\n";
        }
        cout<<"-------------------"<<endl;
        for (int i=0;i<=arr[i];i++){
            sum+=arr[i];
        }
        cout<<"Sum of array is: "<<sum<<endl;
    return 0;
}
*/


/*
#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;
    // Insertion
        d.push_back(10);
    d.push_front(11);
    for (int i:d){
        cout<<i<<" ";
    }
    // Delete
    d.pop_back();
    for (int i:d){
        cout<<i<<" ";
    }
    // Delete from front
    d.pop_front();
    for (int i:d){
        cout<<i<<" ";
    }
    cout<<"Front: "<<d.front()<<endl;
    cout<<"Back: "<<d.back()<<endl;
    cout<<"Empty or not: "<<d.empty()<<endl;
    cout<<"Before erase: "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"After erase: "<<d.size()<<endl;
    return 0;
}
*/





#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    l.push_back(10);
    l.push_front(12);
    for (int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());
    cout<<"After erase: "<<endl;
    for (int i:l){
        cout<<i<<" ";
    }
    cout<<"Size of list: "<<l.size()<<endl;
    return 0;
}


