class Solution{
    public:
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    int isSumProperty(Node *root)
    {
     if(root == NULL || (root->left==NULL && root->right==NULL)) return 1;
     
     int left_sum = 0;
     int right_sum = 0;
     
     if(root ->left != NULL){
         left_sum = root->left->data;
     }
     if(root -> right != NULL){
         right_sum = root -> right->data;
     }
     
     if((root->data == left_sum + right_sum) && (isSumProperty(root -> left) && isSumProperty(root->right))){
         return 1;
     }
     else{
         return 0;
     } 
    }
};
