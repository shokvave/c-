#include <iostream> // Include the iostream header for cout, cin, and endl
#include <queue>

using namespace std; // Corrected namespace declaration

class node {
public: 
    int data;
    node* left;
    node* right;

    node(int d) {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* buildTree(node* root) {
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1) {
        return NULL;
    }

    cout << "Enter data for inserting in left" << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right" << endl;
    root->right  = buildTree(root->right);
    return root;
}

void levelOrderTraversal(node * root){
    
}

int main() {
    node* root = NULL;
    root = buildTree(root);
    return 0; // Added return statement
}
