void preoder(TreeNode<int>* root, vector<int> &ans) {
    if(root == NULL) return;
    
    ans.push_back(root->data);
    preoder(root->left, ans);
    preoder(root->right, ans);
}

vector<int> preOrder(TreeNode<int> * root){
    vector<int> ans;

    preoder(root, ans);
    return ans;
}
