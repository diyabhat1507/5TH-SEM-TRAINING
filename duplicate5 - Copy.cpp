// WAP to find the duplicate number from string.


#include<iostream>
using namespace std;
int main() {
  string string="jhon12Doe14@gmail18.com";
  //cin>>string;
  int count=0;
  for(char a: string)
  {
    if(a=='1'||a=='2'||a=='3'|a=='4'||a=='5'||a=='6'||a=='7'||a=='8'||a=='9'||a=='0')
    {
      count=0;
      char b;
      for(char c:string)
      {
        if(c==a)
        {
          b=c;
          count+=1;
        }
      }
        cout<<b<<"-";
        cout<<count<<" times"<<endl;
    }
  }
    return 0;
}
