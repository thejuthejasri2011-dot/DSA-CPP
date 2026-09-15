#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool isValidSudoku(vector<vector<char>>& board) {

    // Check rows
    for(int i = 0; i < 9; i++) {

        unordered_set<char> row;

        for(int j = 0; j < 9; j++) {

            if(board[i][j] != '.') {

                if(row.find(board[i][j]) != row.end()) {
                    return false;
                }

                row.insert(board[i][j]);
            }
        }
    }

    // Check columns
    for(int j = 0; j < 9; j++) {

        unordered_set<char> column;

        for(int i = 0; i < 9; i++) {

            if(board[i][j] != '.') {

                if(column.find(board[i][j]) != column.end()) {
                    return false;
                }

                column.insert(board[i][j]);
            }
        }
    }

    // Check 3x3 boxes
    for(int row = 0; row < 9; row += 3) {

        for(int col = 0; col < 9; col += 3) {

            unordered_set<char> box;

            for(int i = row; i < row + 3; i++) {

                for(int j = col; j < col + 3; j++) {

                    if(board[i][j] != '.') {

                        if(box.find(board[i][j]) != box.end()) {
                            return false;
                        }

                        box.insert(board[i][j]);
                    }
                }
            }
        }
    }

    return true;
}

int main() {

    vector<vector<char>> board = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };

    bool result = isValidSudoku(board);

    if(result) {
        cout << "Valid Sudoku" << endl;
    }
    else {
        cout << "Invalid Sudoku" << endl;
    }

    return 0;
}