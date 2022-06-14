using namespace std;

// This is an input class. Do not edit.
class BinaryTree {
public:
  int value;
  BinaryTree *left;
  BinaryTree *right;

  BinaryTree(int value) {
    this->value = value;
    left = nullptr;
    right = nullptr;
  }
};

int height(BinaryTree *tree){
  if(tree==nullptr)return 0;

  return(max(height(tree->left),height(tree->right))+1);
}


int binaryTreeDiameter(BinaryTree *tree) {
  if(tree==NULL){
    return 0;
  }

  int diameter1=height(tree->right)+height(tree->left);
  int diameter2=binaryTreeDiameter(tree->left);
  int diameter3=binaryTreeDiameter(tree->right);
  return max(diameter1,max(diameter2,diameter3));
}
