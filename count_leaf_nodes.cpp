void traverse(BinaryTreeNode<int>* root, int &count) {
    if(root==NULL) return;
    traverse(root->left, count);
    if(root->left==NULL && root->right==NULL) count++;
    traverse(root->right, count);
}

int noOfLeafNodes(BinaryTreeNode<int> *root){
    int count=0;
    traverse(root, cuont);
    return count;
}