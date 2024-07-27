// Quick Sort
/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr={10,7,8,9,1,5};
    sort(arr.begin(),arr.end());
    cout<<"Sorted array: ";
    for (int num:arr){
        cout<<num<<" ";
    }
    return 0;
}
*/
// Same code in reverse output.
/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr={10,7,8,9,1,5};
    sort(arr.rbegin(),arr.rend());
    cout<<"Sorted array in descending order: ";
    for (int num:arr){
        cout<<num<<" ";
    }
    return 0;
}
*/


// Leet code problem- 252
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool canAttendMeetings(vector<vector<int>> &time) {
    sort(time.begin(),time.end(),[](vector<int> &a,vector<int> &b) {
             return a[0]<b[0];
         });
    for (int i=1;i<time.size();i++) {
        if (time[i][0]<time[i-1][1]){
            return false;
        }
    }
    return true;
}
int main(){
    vector<vector<int>>time={{0,30},{5,10},{15,20}};
    string a=(canAttendMeetings(time)?"true":"false");
    cout<<"Output: "<<a;
    return 0;
}
