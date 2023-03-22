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
    BSTNode * insert(int d, BSTNode *p);
    BSTNode * remove(int d, BSTNode *p);
    int height(BSTNode *p);
    
  public:
    BSTree();
    ~BSTree();
    void insert(int d);
    int height();
    void remove(int d);  
    BSTNode *search(int d);

};