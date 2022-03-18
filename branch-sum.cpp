using namespace std;

// This is the class of the input root. Do not edit it.
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

void cal(BinaryTree *node,int csum, vector<int> &ans){
	if(node==nullptr)
		return;
	int psum=csum+ node->value;
	if(node->left ==nullptr && node->right==nullptr){
		ans.push_back(psum);
		return;
	}
	cal(node->left,psum,ans);
	cal(node->right,psum,ans);
}

vector<int> branchSums(BinaryTree *root) {
  vector<int> ans;
	cal(root,0,ans);

  return ans;
}
