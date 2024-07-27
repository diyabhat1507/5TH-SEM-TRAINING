// 1. Planning- information gathering/ raw information/ good information
// 2. Defining- good information
// 3. Designing- flow chart- test cases- aer- class info/
// 4. Building- code
// 5. Testing- test case- TDD(Test Driven Development) approach
// displayDetail()-
// test cases
// 6. Deployment

// CI/CD- Deops engineering




/*
#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>   // for accumulate
using namespace std;
int main(){
    vector <int> numbers={1,2,3,4,5};
    // using accumulate() with a lambda to sum up the elements.
    // int sum=accumulate(numbers.begin(), numbers.end(),0, [](int total, int n){
    auto sum=[=](int total, int n){
        for (int i=0;i<n;i++){
        total=numbers[i]+total;
        }
        return total;
    };
    cout<<"Sum: "<<sum(0,5)<<endl;
    return 0;
}
*/


/*
#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int main(){
    vector<string> words={"Hello","World","from","C++"};
    string result=accumulate(words.begin(),words.end(), string(""), [](const string& total, const string& word){
            return total+(total.empty()? "":" ")+word;
        });
    cout<<"Concatenated string: "<<result<<endl;
    return 0;
}
*/


// WAP to find the duplicate number from string.
/*
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
*/
// Same as above

/*
#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
            int count=1;
        for(int j=i+1;j<s.length();j++){
            if(isdigit(s[i])){
                if(s[i]==s[j]){
                    count++;
                    s[j]='a';
                }
            }
            else{
                continue;
            }
        }
        if(count>1){
            cout<<s[i]<<" comes "<<count<<" times"<<endl;
    }
}
return 0;
}
*/




#include<iostream>
#include<array>
#include<vector>
using namespace std;
int main(){
    vector<int> a={1,0,1,1,0,1,1,1,1,1,0,0,0,0,0,1,1,1,1,1,1,1,1,1};
    int count=0;
    int max=0;
    for (int i:a){
        if (i==1){
            count++;
            if(count>max){
                max=count;
            }
        }
        else{
            count=0;
        }
    }
    cout<<"1 is repeated "<<max<<" times continuously."<<endl;
    return 0;
}
