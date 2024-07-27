#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> ans;
    vector<int> nums={1, 2, 3, 4};
    int count=0;
    int answer=1;
    for (int i=0; i<nums.size();i++) {
        if (nums[i]==0) {
            count++;
        } else {
            answer*=nums[i];
        }
    }
    for (int j=0;j<nums.size();j++) {
        if (nums[j]==0) {
            if (count>1) {
                ans.push_back(0);
            } else {
                ans.push_back(answer);
            }
        } else {
            if (count>0) {
                ans.push_back(0);
            } else {
                ans.push_back(answer/nums[j]);
            }
        }
    }
    for (int k=0; k<ans.size();k++) {
        cout<<ans[k]<<" ";
    }
    return 0;
}
