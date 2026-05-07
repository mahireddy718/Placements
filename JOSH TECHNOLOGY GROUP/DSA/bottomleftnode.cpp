//leetcode 513. Find Bottom Left Tree Value

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#include <iostream> 
#include <bits/stdc++.h>
using namespace std;
class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        if(root==NULL)return -1;
        queue<TreeNode*>q;
        q.push(root);
        TreeNode* node=NULL;
        while(!q.empty()){
            node=q.front();
            q.pop();
            if(node->right)q.push(node->right);
            if(node->left)q.push(node->left);
        }
        return node->val;
    }
};
int main(){
    TreeNode* root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    root->left->left=new TreeNode(4);
    Solution s;
    cout<<s.findBottomLeftValue(root)<<endl;
}

//Intution
//use level order travesel 
//we need to store our ans i.e left most node of the last level
//assign a  variable with -1 initially to store ans;
//in bfs it travers levelwise and when it comes to last level it traverses left node first and then right
//interesting
//from root  try to traverse from right and then left so that last element we will be storing will be left
//return that ans;