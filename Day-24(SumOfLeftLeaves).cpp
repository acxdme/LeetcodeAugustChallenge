/*
Time complexity : O(N)
Space complexity : O(N) , for using the queue.
My approach : Use of Level order traversal , now in each level check that the left node is a leaf node of not ,if it is then add it to the sum.
*/
class Solution {
void levelorder(TreeNode* root,int& sum)
{

    if(root==NULL)
        return ;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty())
    {
        TreeNode* p=q.front();
        q.pop();
        if(p->left)
        {
            if(p->left->left==NULL and p->left->right==NULL)
                sum+=p->left->val;
            q.push(p->left);
        }
        if(p->right)
        {
            q.push(p->right);
        }
    }
    
    
}
public:
    int sumOfLeftLeaves(TreeNode* root) 
    {
        if(root==NULL)
            return 0;
        int sum=0;
        levelorder(root,sum);
        return sum;
    }
};
