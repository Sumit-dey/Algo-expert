using namespace std;

// This is an input class. Do not edit.
class BST {
public:
  int value;
  BST *left = nullptr;
  BST *right = nullptr;

  BST(int value) { this->value = value; }
};

BST *reconstructBst(vector<int> preOrderTraversalValues) {
 if(preOrderTraversalValues.size()==0){
    return nullptr;
  }
  int current=preOrderTraversalValues[0];
  int right=preOrderTraversalValues.size();

  for(int i=1;i<preOrderTraversalValues.size();i++){
    int value=preOrderTraversalValues[i];
    if(value>=current){
      right=i;
      break;
    }
}
  auto lefttree=reconstructBst(vector<int>(preOrderTraversalValues.begin()+1,preOrderTraversalValues.begin()+right));
  auto righttree=reconstructBst(vector<int>(preOrderTraversalValues.begin()+right,preOrderTraversalValues.end()));

  auto bst=new BST(current);
  bst->left=lefttree;
  bst->right=righttree;
  return bst;
}
