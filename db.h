//#ifndef BST_H //cprogramming preprocessor ifndef
#define GBST_H
class BST{
private:
  //TreeNode *root;

public:
  BST();
  BST(int value);
  ~BST();

  void insertNode(int value);
  bool searchNode(int value);
  bool deleteNode(int value);

  //TreeNode getSuccessor(TreeNode *d)

  bool isEmpty();
  int getMax();
  int getMin();

  //void recPrint(TreeNode *node);
  void printTree();

};
