//longset substring without repeating characters
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        unordered_map<char,int>mpp;
        int maxi=0,left=0;
        for(int i=0;i<s.length();i++){
            mpp[s[i]]++;
            while(mpp[s[i]]>1){
                mpp[s[left]]--;
                left++;
            }
            maxi=max(maxi,i-left+1);
        }
        return maxi;
    }
};
int main(){
    string s;
    cin>>s;
    Solution sol;
    cout<<sol.longestUniqueSubstr(s)<<endl;
}
