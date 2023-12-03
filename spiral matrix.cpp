class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>v;
        int s_row=0;
        int s_col=0;
        int e_row=matrix.size()-1;
        int e_col=matrix[0].size()-1;
        int count=0;
        int total= (e_row+1)*(e_col+1);
        while(count<total)
        {
            //for starting row
            for(int i=s_col;i<=e_col && count<total;i++)
            {
               v.push_back(matrix[s_row][i]);
               count++;
            }
            s_row++;
            //for ending column
            for(int i=s_row;i<=e_row && count<total;i++)
            {
                v.push_back(matrix[i][e_col]);
                count++;
            }
            e_col--;
            //for ending row
            for(int i=e_col;i>=s_col && count<total;i--)
            {
                v.push_back(matrix[e_row][i]);
                count++;
            }
            e_row--;
            //for starting col
            for(int i=e_row;i>=s_row && count<total;i--)
            {
                v.push_back(matrix[i][s_col]);
                count++;
            }
            s_col++;
        }
        return v;
    }
};
