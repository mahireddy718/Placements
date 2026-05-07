//sort an array of 0,1,2
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void sort012(vector<int>& arr) {
        int n=arr.size();
        int l=0,r=n-1,mid=0;
        while(mid<=r){
            if(arr[mid]==0){
                swap(arr[l],arr[mid]);
                l++;
                mid++;
            }
            else if(arr[mid]==1){
                mid++;
            }
            else{
                swap(arr[mid],arr[r]);
                r--;
            }
            
        }
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
    s.sort012(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
