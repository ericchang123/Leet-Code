class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        TreeNode* node;
        vector<double> averageLvls;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            long long int sum = 0;
            int count = 0;
            queue<TreeNode*> temp;
            while(!q.empty()){
                node = q.front();
                q.pop();
                sum += (long long)node->val;
                count++;
                if(node->left != NULL)
                    temp.push(node->left);
                if(node->right != NULL)
                    temp.push(node->right);
            }
            q = temp;
            double v = (double)sum / (double)count;
            averageLvls.push_back((double)v);
        }
        return averageLvls;
    }
};
