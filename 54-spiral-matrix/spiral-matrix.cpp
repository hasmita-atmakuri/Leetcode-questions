class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int stRow = 0;
        int endRow = m-1;
        int stCol = 0;
        int endCol = n-1;
        vector<int> ans;
        while(stCol<=endCol && stRow<=endRow){
            //top
            for(int j=stCol;j<=endCol;j++){
                ans.push_back(matrix[stRow][j]);
            }
            //right
            for(int i=stRow+1;i<=endRow;i++){
                ans.push_back(matrix[i][endCol]);
            }
            //bottom
            for(int j=endCol-1;j>=stCol;j--){
                if(stRow==endRow) break;
                ans.push_back(matrix[endRow][j]);
            }
            //left
            for(int i=endRow-1;i>stCol;i--){
                if(stCol==endCol) break;
                ans.push_back(matrix[i][stCol]);
            }
            stCol++;
            endCol--;
            stRow++;
            endRow--;
        }
        return ans;
    }
};