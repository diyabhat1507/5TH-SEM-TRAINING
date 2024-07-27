// Queue: FIFO(First In First Out).

#include<iostream>
#include<queue>
using namespace std;
int main(){
        queue<string> q;
        int n;
        char a;
        cout<<"Enter the number of elements: ";
        cin>>n;
        string c;
        cout<<"Enter the elements: ";
        for(int i=0;i<n;i++){
            cin>>c;
            q.push(c);
        }
        for (int i=0;i<q.size();i++)
        {
            a=c.front();
        }
        cout<<"Entered elements are: "<<;

    return 0;
}
    //cout<<"Size: "<<q.size()<<endl;
    //cout<<"Front element: "<<q.front()<<endl;
    //q.pop();
    //cout<<"After pop: "<<q.front()<<endl;
