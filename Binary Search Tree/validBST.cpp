bool ValidBST(Node* root, int min, int max) {
    if(root == NULL) {
        return true;
    }

    if(root->data >= min && root->data <= max) {
        bool left = ValidBST(root->left, min, root->data);
        bool right = ValidBST(root->right, root->data, max);

        return (left && right);
    }

    return false;
}
