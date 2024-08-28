#include <bits/stdc++.h> 

vector<int> getLeftView(TreeNode<int> *root)
{
    bool freq[3005] = {false};
    queue<pair<TreeNode<int>*, int>> q;
    if(root) q.push({root, 1});
    vector<int> v;
    while(!q.empty()) {
        pair<TreeNode<int>*, int> pr = q.front();
        q.pop();
        TreeNode<int>* node = pr.first;
        int level = pr.second;

        if(freq[level] == false) {
            v.push_back(node->data);
            freq[level] = true;
        }

        if(node->left) q.push({node->left, level+1});
        if(node->right) q.push({node->right, level+1});
    }
    return v;
}