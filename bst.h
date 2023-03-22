class BSTNode { 
  
  private: 
    int data;  
    BSTNode *left;  
    BSTNode *right;
  
  public:
    BSTNode(int d);
    ~BSTNode();
  
  friend class BSTree;

};

class BSTree{
  
  private:
    BSTNode *root;
    void destroy(BSTNode *p);
    
  public:
    BSTree();
    ~BSTree();
    void insert(int d);
    void remove(int d);  
    BSTNode *search(int d);

};