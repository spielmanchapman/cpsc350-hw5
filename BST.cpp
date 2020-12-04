#include "db.h"
/*BST::BST(){
  //root = NULL;
  //empty tree

}

BST::BST(int value){
  //root = value;
  //empty tree apart from root
}

BST::~BST(){

}

BST::recPrint(TreeNode *node){
  if(node != NULL){
    recPrint(node->left);
    cout << node->key << endl;
    recPrint(node->right);
  }
}

void BST::printTree(){
  recPrint(root);
}

int BST::intMax(){
  if(isEmpty())
    return NULL;

  TreeNode *curr = root;
  while (curr->right != NULL){
    curr = curr->right;
  }
  return curr->key;
}

void BST::insertNode(int value){
  TreeNode *node = new TreeNode(value);

  if(isEmpty())
    root = node;
  else{
    TreeNode *curr = root;
    TreeNode *parent = NULL;

    while(true){
      //iterate to find the correct insertion point
      parent = curr;
      if(value < curr->key){
        //go left
        curr = curr->left;
        if(curr == NULL){
          parent->left = node;
          break;
        }
      }
      else{
        //go right
        curr = curr->right;
        if(curr == NULL){
          curr->right = node;
          break;
        }
      }
    }
  }
}

bool BST::searchNode(int value){
  if(isEmpty)
    return NULL;
  else{
    TreeNode *curr = root;
    while(curr->key != value){
      if(value < curr-key){
        curr = curr->left;
      }
      else{
        curr = curr->right;
      }
      if(curr == NULL){
        return false;
      }
    }
  }
  return true;
}
bool BST::deleteNode(int k){
  if(isEmpty){
    return false;
  }
  TreeNode *parent = NULL;
  TreeNode *curr = root;
  bool isLeftNode = true;
  while(curr->key != k){
    parent = curr;
    if(k < current->key){
      isLeftNode = true;
      curr = curr->left;
    }
    else{
      isLeftNode = false;
      curr = curr->right;
    }
    if(curr == NULL){
      return false;
    }
  }
  if(curr->left == NULL && curr->right == NULL){
    if(curr == root){
      root = NULL;
    }
    else if(isLiftNode){
      parent->left = NULL;
    }
    else{
      parent->right = NULL;
    }
  }
  else if(curr->right == NULL)
    if(curr == root){
      root = curr->left;
    }
    else if(isLeftNode){
      parent->left = curr->left;
    }
    else{
      parent->right = curr->left;
    }

    else if(curr->left == NULL){
      if(curr == root){
        root = curr->right;
      }
      else if(isLeftNode){
        parent->left = curr->right;
      }
      else{
        parent->right = curr->right;
      }
    }

    else{
      TreeNode *successor = getSuccessor(curr);

      if(curr == root){
        root = successor;
      }
      else if(isLeftNode){
        parent->left = successor;
      }
      else{
        parent->right = successor;
      }
      successor->left = curr->left;

    }
  return true;
}

TreeNode* BST::getSuccessor(TreeNode *d){
  TreeNode*sp = d;
  TreeNode *successor = d;
  TreeNode *curr = d->right;

  while(curr != NULL){
    sp = successor;
    successor = curr;
    curr = curr->left;
  }
  if(successor != d->right){
    sp->left = successor->right;
    successor->right = d->right;
  }
  return successor;
}
*/
