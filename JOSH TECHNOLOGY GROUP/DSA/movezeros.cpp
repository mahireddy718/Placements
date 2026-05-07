//Move Zeros to End Cpp
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int>& nums) {
    int n=nums.size();
    //initialize a variable to keep track of the position of the next non-zero element
    int count=0;
    for(int i=0;i<n;i++){
        if(nums[i]!=0){
            swap(nums[count],nums[i]);
            count++;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    moveZeroes(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}