#include "../Leetcode_Utility.h"

int oddCells(int m, int n, vector<vector<int>>& indices) 
{
    vector<vector<int>> matrix(m, vector<int>(n));  // init to 0
    int odd_cells = 0;
    int i_size = indices.size();
    int row_incr = 0;
    int col_incr = 0;
    
    for(int i = 0; i < i_size; i++)
    {
        row_incr = indices[i][0];
        col_incr = indices[i][1];
        
        // Increment each row
        for(int j = 0; j < matrix[row_incr].size(); j++)
        {
            matrix[row_incr][j]++;
        }

        // Increment each col
        for(int j = 0; j < matrix.size(); j++)
        {
            matrix[j][col_incr]++;
        }
        
    }

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(matrix[i][j] % 2 != 0)
            {
                odd_cells++;
            }
        }
    }
    
    return odd_cells;
}