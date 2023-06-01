class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> res ;

      if(root == NULL){
          return {} ;
      }
      vector<int> ans ;

      queue<TreeNode*> q ;
      q.push(root) ;

      while(!q.empty()){
        int n = q.size() ;
           ans.clear() ;

      while(n--){

          TreeNode *temp =q.front() ;
          q.pop() ;

          if(temp->left){
              q.push(temp->left) ;
          }
          if(temp->right){
              q.push(temp->right) ;
          }
          ans.push_back(temp->val) ;
      }
      res.push_back(ans) ;
    }

    return res ;
    }
};
