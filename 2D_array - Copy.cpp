/*#include <iostream>
using namespace std;
int main(){
    int rows,cols;
    cout<<"Enter number of rows: ";
    cin>>rows;
    cout<<"Enter number of columns: ";
    cin>>cols;
    int** arr=new int*[rows];
    for (int i=0;i<rows;++i) {
        arr[i]=new int[cols];
    }
    cout<<"Enter the elements of the array: " <<endl;
    for (int i=0;i<rows;++i) {
        for (int j=0;j<cols;++j){
            cout<<"Enter element at position ["<<i<<"]["<<j<<"]: ";
            cin>>arr[i][j];
        }
    }
    cout<<"Array is: "<<endl;
    for (int i=0;i<rows;++i) {
        for (int j=0;j<cols;++j){
            cout<<arr[i][j]<<" ";
        }
    }
    int sum=0;
    int n;
    cout<<"Enter the row which you want to calculate sum: ";
    cin>>n;
    for (int j=0;j<cols;++j) {
        sum+=arr[n][j];
    }
    cout<<"Sum of the first row: "<<sum<<endl;
    return 0;
}
*/

#include<iostream>
using namespace std;
int main(){
    int rows,cols;
    cout<<"Enter number of rows: ";
    cin>>rows;
    cout<<"Enter number of columns: ";
    cin>>cols;
    int** arr=new int*[rows];
    for (int i=0;i<rows;++i) {
        arr[i]=new int[cols];
    }
    cout<<"Enter the elements of the array: " <<endl;
    for (int i=0;i<rows;++i) {
        for (int j=0;j<cols;++j){
            cout<<"Enter element at position ["<<i<<"]["<<j<<"]: ";
            cin>>arr[i][j];
        }
    }
    cout<<"Array is: "<<endl;
    for (int i=0;i<rows;++i) {
        for (int j=0;j<cols;++j){
            cout<<arr[i][j]<<" ";
        }
    }
    int n;
    cin>>n;
    int minDimension = min(rows,cols);
    for (int i=0;i<minDimension;++i){
        n+=arr[i][i];
    }
    cout<<"Sum of the diagonal row: "<<n<<endl;
    return 0;
}
