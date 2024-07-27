// Set functions- insert,find,erase,size.
// Map functions- insert,find,size,count,empty.

// Iterator- To access all element/we can traverse the element.
// size_t{}- data type which access any type of data.

// User defined-
// class- Car, ParkingLot
// Car-
// ParkingLot-

// Lambda function- It is a function which doesn't have a name.
// function- to reduce the repetition, code duplicacy.

/*
void (){
//statement;
//---------
}
*/

//Lambda expression (syntax)-
//[capture](parameters)-> return_type {
    // function body
//}


/*
#include<iostream>
using namespace std;
int main(){
    auto add=[](int a,int b){
        return a+b;
    };
    cout<<"Sum is: "<<add(3,6)<<endl;
}
*/


// Capture-
// by value- (=)
// by reference- (&)
// by specific variables- (x,&y), x by value and y by reference.



/*
#include<iostream>
using namespace std;
int main(){
    int x=10;
    int y=20;
    auto add=[=](int a){
    return x+y+a;
    };
    cout<<"Sum is: "<<add(5)<<endl;
    auto addByRef=[&x,&y](int a){
        x=30;  // changing the value of x.
        return x+y+a;
    };
    cout<<"Sum by reference: "<<addByRef(5)<<endl;
    cout<<"x after modification: "<<x<<endl;
    return 0;
}
*/


/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> numbers={5,3,8,1,4};
    sort(numbers.begin(),numbers.end(),[](int a,int b){
         return a<b;
         });
    cout<<"Sorted numbers: ";
    for(int num:numbers){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}
*/



/*
#include<iostream>
using namespace std;
int main(){
    int x=10;
    auto modifyX=[x]() mutable{
    x=20;   // modifies local copy of x not original
    cout<<"Inside lambda, x= "<<x<<endl;      // x=20
    };
    modifyX();
    cout<<"Outside lambda, x= "<<x<<endl;     // x=10
    return 0;
}
*/


/*
#include<iostream>
using namespace std;
int main(){
    auto divide=[](int a,int b)->double{
        if (b==0){
            return 0;   // Handle division by zero
        }
        return static_cast<double>(a)/b;
    };
    cout<<"Division result: "<<divide(10,2)<<endl;
    cout<<"Division by zero result: "<<divide(10,0)<<endl;
    return 0;
}
*/



/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> numbers={1,2,3,4,5};
    // Using for each with a lambda to print each element
    for_each(numbers.begin(), numbers.end(), [](int n){
             cout<<n<<" ";
             });
        cout<<endl;
    return 0;
}
*/



/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int a;
    vector<int> numbers={1,2,3,4,5};
    for_each(numbers.begin(),numbers.end(), [] (int numbers){
             cout<<numbers<<" ";
             });
    return 0;
}
*/


/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> numbers={1,3,5,8,10,13};
    auto it=find_if(numbers.begin(),numbers.end(),[](int n){
        return n%2==0;
        });
        if (it !=numbers.end()){
            cout<<"First even number found: "<<*it<<endl;
        }
        else{
            cout<<"No even number found!"<<endl;
        }
    return 0;
}
*/



/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> numbers={1,3,5,8,10,13};
    int a;
    for (int i=0;i<numbers.size();i++){
        a=numbers[i];
        return a%2==0;
    }
        if (a!=numbers.end(a)){
            cout<<"First even number found: "<<a<<endl;
        }
        else{
            cout<<"No even number number found!"<<endl;
        }
    return 0;
}
*/


#include<iostream>
#include<vector>
#include<array>
using namespace std;
int main(){
    array<int, 4> nums;
    vector<int> num;
    int n;
    num.push_back(1);
    cout<<"Enter number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
    cout<<"Enter the elements: ";
    cin>>nums[i];
    }
    cout<<"-------------------------------------------\n";
    for (int i=0;i<nums[i];i++){
        cout<<"Array elements are: "<<nums[i]<<" "<<endl;
    }
    for (int i=0;i<nums.size();i++){
        num.push_back(num[i]*nums[i]);
    }
    int a=1;
    for (int i=nums.size();i>0;i--)
    {
        int b=nums[i];
        nums[i]=a*num[i];
        a*=b;
        nums[n]=a;
        cout<<"Output: "<<a<<"\n";
    }
}

