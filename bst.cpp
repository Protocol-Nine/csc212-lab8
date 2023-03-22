#include "bst.h"

// BSTNode
BSTNode::BSTNode(int d) {
    this->data = d;
    this->left = nullptr;
    this->right = nullptr;
}

BSTNode::~BSTNode() {
}

// BSTree

BSTree::BSTree() {
    this->root = nullptr;
}

BSTree::~BSTree() {
    this->destroy(this->root);
}

void BSTree::destroy(BSTNode *p) {
    // If node has no children
        // Destroy node
    
    // If node has children, 
        // Recursively call upon children to destory themselves
}