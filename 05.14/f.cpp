void build_siblings(Node* root) 
{
    if (!root)
        return;
    if (root->left) 
    {
        root->left->right_sibling = root->right;
        if (!root->left->right_sibling && root->right_sibling) 
        {
            root->left->right_sibling = root->right_sibling->left;
            if (!root->left->right_sibling)
                root->left->right_sibling = root->right_sibling->right;
        }
    }
    if (root->right && root->right_sibling) 
    {
        root->right->right_sibling = root->right_sibling->left;
        if (!root->right->right_sibling)
            root->right->right_sibling = root->right_sibling->right;
    }
    build_siblings(root->left);
    build_siblings(root->right);
}
