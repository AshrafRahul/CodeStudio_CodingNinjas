#include <bits/stdc++.h>

long long leftSum(BinaryTreeNode<int> *root) {
  if (!root)
    return 0;
  else if (root->left)
    return root->left->data + leftSum(root->left) + leftSum(root->right);
  else
    return leftSum(root->right);
}