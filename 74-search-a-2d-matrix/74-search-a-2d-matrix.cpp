class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row= matrix.size();
        int col = matrix[0].size();
        int l=0;
        int r = col-1;
        while(l<row and r>-1){
            int curr = matrix[l][r];
            if(curr == target)return true;
            else if(target>curr)l++;
            else r--;
            
        }
        return false;
    }
};