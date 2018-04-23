/*Given a binary tree, find its minimum depth.The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.*/
class solution{
	public :
		int run(TreeNode *root){
			if(!root){
				return 0;
			}
			int l = run(root -> left);
			int r = run(root -> right);
			if ((0 == l)||(0 ==r)){
				return 1+l+r;
			}
			return 1+min(l,r);
		}
};
