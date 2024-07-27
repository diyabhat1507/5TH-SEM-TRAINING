// STL- It is collection of library/algorithm, function and other component/data structure.
// Container- It is use to store the data in sequential manner to simplify your requirement.
// Stack- LIFO(Last In First Out).
// 1. Push
// 2. Pop
// 3. Top- display top element
// 4.


/*
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("Ajay");
    s.push("Ajab");
    s.push("Gajab");
    s.push("Sajab");
    cout<<"Top element: "<<s.top()<<endl;
    s.pop();
    cout<<"Element after pop: "<<s.top()<<endl;
    return 0;
}
*/


// Leetcode problem buy and sell stock
/* class Solution {
public:
    int maxProfit(vector<int>& prices){
        stack<int> a;
        int maxProfit=0;
        int min=prices[0];
        for (int i=0;i<prices.size();i++){
            if(prices[i]<min){
                min=prices[i];
            }
            maxProfit=max(maxProfit,prices[i]-min);
        }
    return maxProfit;
    }
};



#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,100> prices;
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    for (int i=0;i<n;i++){
    cin>>prices[i];}
    int maxProfit=0;
    int min=prices[0];
    for (int i=0;i<prices.size();i++){
        if(prices[i]<min){
            min=prices[i];
        }
        maxProfit=max(maxProfit,prices[i]-min);
    }
cout<<"Ans is: "<<maxProfit;
}
*/




/*
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0];
        int maxProfit=0;
        for(int i=1;i<prices.size();i++) {
            if(prices[i]>prices[i-1])
            maxProfit+=prices[i]-prices[i-1];
        }
        return maxProfit;
    }
};
*/
