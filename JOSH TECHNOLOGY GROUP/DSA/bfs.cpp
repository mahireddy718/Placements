//level order traversal
#include<bits/stdc++.h>
using namespace std;
class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(){
        val=0;
        left=NULL;
        right=NULL;
    }
    TreeNode(int x){
        val=x;
        left=NULL;
        right=NULL;
    }
    TreeNode(int x,TreeNode* left,TreeNode* right){
        val=x;
        this->left=left;
        this->right=right;
    }
};
class Solution {
public:
    vector<int> bfs(TreeNode* root){
        if(root==NULL)return {};
        vector<int>ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* node=q.front();
            q.pop();
            ans.push_back(node->val);
            if(node->left)q.push(node->left);
            if(node->right)q.push(node->right);
        }
        return ans;
    }
};
int main(){
    TreeNode* root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    root->left->left=new TreeNode(4);
    Solution s;
    vector<int> result=s.bfs(root);
    for(int val : result){
        cout<<val<<" ";
    }
    cout<<endl;
}