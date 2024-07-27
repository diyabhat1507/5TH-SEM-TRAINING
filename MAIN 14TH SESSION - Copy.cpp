//push_back- set the element in the list from back side.
//push_front- set the element in the list from front side.
//pop_front- remove the element in the list from front side.
//pop_back- remove the element in the list from back side.
//front- access the element from the front side.
//back- access the element from the back side.

/*
#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> numbers={1,2,3,4};
    cout<<"List Elements: ";
    for (int number:numbers){
        cout<<number<<", ";
    }
    numbers.push_front(0);
    numbers.push_back(4);
    cout<<endl<<"Final List: ";
    for (int number:numbers){
    cout<<number<<", ";
    }
    return 0;
}
*/

// Add element to the list.
/*
#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> numbers={1,2,3};
    cout<<"Initial list: ";
    for (int number:numbers){
        cout<<number<<", ";
    }
    numbers.push_front(0);
    numbers.push_back(4);
    cout<<endl<<"Final List: ";
    for (int number:numbers){
        cout<<number<<", ";
    }
    return 0;
}
*/


// Access the element.
/*
#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> numbers={1,2,3,4,5};
    cout<<"First Element: "<<numbers.front()<<endl;
    cout<<"Last Element: "<<numbers.back();
    return 0;
}
*/


// reverse()- Reverses the order of the element.
// sort()- Sorts the list elements in a particular order.
// unique()- Removes consecutive duplicate elements.
// empty()- Checks whether the list is empty.
// size()-
// clear()-
// merge()-


// Access elements using an iterator.
/*#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> numbers={1,2,3,4,5};
    list<int>::iterator itr=numbers.begin();
    ++itr;
    cout<<"Second Element: "<<*itr<<endl;
    ++itr;
    ++itr;
    cout<<"Fourth Element: "<<*itr;
    return 0;
}
*/

// OR
/*
#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l {1,2,3,4,5};
    list<int>::iterator itr=l.begin();
    for(int i=2;i<l.size();i++)
    {
        ++itr;
        if(i==3)
        continue;
        cout<<"Elements are: "<<*itr<<endl;
    }
}
*/


// if list empty then add element to 1st else add element last.
/*#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> numbers={1,2,3};
    cout<<"Initial list: ";
    for (int number:numbers){
        cout<<number<<", ";
    }
    if(numbers.empty()){
        numbers.push_front(0);
    }
    else {
        numbers.push_back(4);
    }
    cout<<endl<<"Final List: ";
    for (int number:numbers){
        cout<<number<<", ";
    }
    return 0;
}
*/

// OR
/*#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> numbers={1,2,3};
    cout<<"Initial list: ";
    for (int number:numbers){
        cout<<number<<", ";
    }
    // create an iterator to point to the 1st position
    list<int>::iterator itr=numbers.begin();
    // increment to 3rd index
    ++itr;
    ++itr;
    // insert 0 at 3rd index
    numbers.insert(itr,0);
    cout<<endl<<"Final List: ";
    for (int number:numbers){
        cout<<number<<", ";
    }
    return 0;
}
*/


// Removing element
/*
#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> numbers={1,2,3,4,5,6,1};
    cout<<"Initial list: ";
    for (int number:numbers){
        cout<<number<<", ";
    }
    // Remove the elements with the value 1.
    numbers.remove(1);
    cout<<endl<<"Final List: ";
    for (int number:numbers){
        cout<<number<<", ";
    }
    return 0;
}
*/

// OR
/*
#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> numbers={1,2,3,4,5,6,1};
    list<int>::iterator itr=numbers.begin();
    cout<<"Initial list: ";
    for (int number:numbers){
        cout<<number<<", ";
    }
    // point iterator to the 4th element
    for (int i=0;i<3;i++){
        ++itr;
    }
    // remove the 4th element
    numbers.remove(*itr);
    cout<<endl<<"Final List: ";
    for (int number:numbers){
        cout<<number<<", ";
    }
    return 0;
}
*/



// reverse(),sort(),unique(),empty(),size(),clear(),merge()
#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> numbers;
    int n;
    int b;
    cout<<"Enter total number of list elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cout<<"Enter the list elements: ";
        cin>>a;
        numbers.push_front(a);
    }
    cout<<"Initial list: ";
    for (int number:numbers){
        cout<<number<<", ";
    }
    cout<<endl;
    for (int i=0;i<20;i++){
    cout<<"\n---------------------------\n"<<endl;
    cout<<"1. Reverse"<<endl;
    cout<<"2. Sort"<<endl;
    cout<<"3. Unique"<<endl;
    cout<<"4. Empty"<<endl;
    cout<<"5. Size"<<endl;
    cout<<"6. Clear"<<endl;
    cout<<"7. Merge"<<endl;
    cout<<"Enter your choice: ";
    cin>>b;
    if (b==1)
        {
            numbers.reverse();
        }
    if (b==2)
        {
            numbers.sort();
        }
    if (b==3)
        {
            numbers.unique();
        }
    if (b==4)
        {
            if (numbers.empty())
            {
                cout<<"List is empty";
            }
            else
            {
                cout<<"Not empty!";
            }
        }
    if (b==5)
        {
            numbers.size();
            cout<<"Size of list: "<<numbers.size();
        }
    if (b==6)
        {
            numbers.clear();
        }
    //if (b==7)
        //{
        //numbers.merge();
        //}
    if (b>7||b<1)
        {
            cout<<"Exiting the program!"<<endl;
            break;
        }
    cout<<endl<<"Final List: ";
    for (int number:numbers){
        cout<<number<<", ";
    }
    }
    return 0;
}
