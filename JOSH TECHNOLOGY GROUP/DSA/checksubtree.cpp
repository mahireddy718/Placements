//determine if a tree is subtree of another tree
//tree 2 is a subtree of tree 1 or not
/*
Definition for Node
struct Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = nullptr;
    }
};
*/

bool isidentical(Node *root1, Node *root2){
    if(root1==NULL&&root2==NULL)return true;
    if(root1==NULL||root2==NULL)return false;
    if(root1->data!=root2->data)return false;
    return isidentical(root1->left,root2->left)&&isidentical(root1->right,root2->right);
    
}
class Solution {
  public:
    bool isSubTree(Node *root1, Node *root2) {
        if(root2==NULL)return true;
        if(root1==NULL)return false;
        if(isidentical(root1,root2)){
            return true;
        }
        return isSubTree(root1->left,root2)||isSubTree(root1->right,root2);
        
    }
};
