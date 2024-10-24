class Solution {

    private boolean present(int row, int col, char num, char[][] board)
    {
        for(int i=0; i<9; i++)
        {
            if(board[row][i] == num && i!=col)
                return false;
            if(board[i][col] == num && i!=row)
                return false;
            int brow = 3*(row/3)+i/3;
            int bcol = 3*(col/3)+i%3;
            if((brow!=row || bcol!=col) && board[brow][bcol] == num)
                return false;
        }
        return true;
    }

    private boolean solve(char[][] board)
    {
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                if(board[i][j] != '.')
                {
                    if(!present(i, j, board[i][j], board))
                        return false;
                }
            }
        }
        return true;
    }

    public boolean isValidSudoku(char[][] board) {
        if(solve(board))
            return true;
        return false;
    }
}