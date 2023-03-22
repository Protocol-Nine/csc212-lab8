#include "bst.h"

//////////////////////////////////////////////////////////////////////
// BSTNode
BSTNode::BSTNode(int d) {
    this->data = d;
    this->left = nullptr;
    this->right = nullptr;
}

BSTNode::~BSTNode() {
}

//////////////////////////////////////////////////////////////////////
// BSTree

BSTree::BSTree() {
    this->root = nullptr;
}

// Tree Destruction
BSTree::~BSTree() {
    this->destroy(this->root);
}

void BSTree::destroy(BSTNode *p) {
    // If node has children, 
        // Recursively call upon children to destory themselves
    if (p->left != nullptr) {
        this->destroy(p->left);
    }

    if (p->right != nullptr) {
        this->destroy(p->right);
    }

    // Destroy node
    p->~BSTNode();
}

// Insertion
void BSTree::insert(int d) {
    this->root = this->insert(d, this->root);
}

BSTNode * BSTree::insert(int d, BSTNode *p){
    // If the node does not exist,
    // create a new node containing the data
    if (p == nullptr) {
        return new BSTNode(d);
    }

    // If d is less than this node's data,
    // Move to the left node
    if (p->data > d) {
        p->left = insert(d, p->left);
    // Else, move to right node
    } else {
        p->right = insert(d, p->right);
    }

    return p;
}

// Removal
void BSTree::remove(int d) {
    this->root = this->remove(d, this->root);
}

BSTNode * BSTree::remove(int d, BSTNode *p) {
    //
    if (p == nullptr) {
        return nullptr;
    }
    // 
    if (p->data > d) {
        p->left = remove(d, p->left);
    } else if (p->data > d) {
        p->right = remove(d, p->right);
    } else { // Found data we are searching for
        // One child
        if (p->left == nullptr) {
            return p->right;
        } else if (p->right == nullptr) {
            return p->left;
        // Two children
        } else {
            
        }
    }
}