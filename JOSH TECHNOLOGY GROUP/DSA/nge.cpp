//Next Grater Element
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> nextGreaterElement(vector<int>& arr) {
        int n=arr.size();
        stack<int>st;
        vector<int>ans(n,-1);
        for(int i=n-1;i>=0;i--){
            while(!st.empty()&&st.top()<=arr[i]){
                st.pop();
            }
            if(st.empty())ans[i]=-1;
            else{
                ans[i]=st.top();
            }
            st.push(arr[i]);
        }
        return ans;
    }
};
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Solution s;
    vector<int> result=s.nextGreaterElement(arr);
    for(int val : result){
        cout<<val<<" ";
    }
    cout<<endl;
}