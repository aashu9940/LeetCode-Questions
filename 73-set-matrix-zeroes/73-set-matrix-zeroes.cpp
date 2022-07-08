class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        vector<pair<int,int>>v;
        
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j]==0){
                    v.push_back(make_pair(i,j));
                }
            }
        }
        for(int i=0;i<v.size();i++){
            for(int j=0;j<c;j++)
                matrix[v[i].first][j]=0;
            for(int j=0;j<r;j++)
                matrix[j][v[i].second]=0;
                
            
        }
       
    }
};

