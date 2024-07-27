// MAP- Store the data in key value pair.


#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    m[1]="Peeyush";
    m[2]="Raina";
    m[3]="Jammu";

    m.insert({5,"Ankita"});
    for (auto i:m){
        // expression cannot be used as a function.
        // i.first() dont write this way.
        cout<<i.first<<" "<<i.second<<" "<<endl;
    }
    cout<<"Find the element: "<<m.count(-13)<<endl;
    m.erase(5);
    cout<<"After erase: "<<endl;
        for (auto i:m){
            cout<<i.first<<" "<<i.second<<" "<<endl;
        }

    // Find the element from map
    auto findElement=m.find(4);
    for (auto i=findElement;i!=m.end();i++){
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }
    return 0;
}
