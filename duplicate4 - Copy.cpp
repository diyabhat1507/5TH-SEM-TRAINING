// WAP to find the duplicate number from string.

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


