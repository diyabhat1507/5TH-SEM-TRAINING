/*
#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number of stars in row: ";
    cin>>a;
    for (int i=1;i<=a;i++)
    {
        {
            for (int j=1;j<=a;j++)
            {
                if (i+j>a)
                    cout<<"* ";
                else
                {
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
*/

#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number of stars in row: ";
    cin>>a;
    for (int i=a;i>=1;i--)
    {
        {
            for (int j=a;j>=1;j--)
            {
                if (i+j>a)
                    cout<<" *";
                else
                {
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
