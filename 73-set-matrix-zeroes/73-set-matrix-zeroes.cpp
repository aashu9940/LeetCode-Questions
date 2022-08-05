class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        
        vector<int>dummy1(r,-1);
        vector<int>dummy2(c,-1);
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j]==0){
                    dummy1[i]=0;
                    dummy2[j]=0;
                }
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(dummy1[i]==0 or dummy2[j]==0){
                    matrix[i][j]=0;
                }
            }
        }
        
       
    }
};

