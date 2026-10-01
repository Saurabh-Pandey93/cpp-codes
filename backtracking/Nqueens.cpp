
#include <iostream>
using namespace std;

bool isSafe(int board[][10], int row, int col, int n) {
    // Check the column
    for (int i = 0; i < row; i++)
        if (board[i][col] == 1)
            return false;

    // Check upper left diagonal
    int i = row, j = col;
    while (i >= 0 && j >= 0) {
        if (board[i][j] == 1)
            return false;
        i--;
        j--;
    }

    // Check upper right diagonal
    i = row, j = col;
    while (i >= 0 && j < n) {
        if (board[i][j] == 1)
            return false;
        i--;
        j++;
    }

    return true;
}

bool solveNQueens(int board[][10], int row, int n) {
    if (row == n)
        return true;

    for (int col = 0; col < n; col++) {
        if (isSafe(board, row, col, n)) {
            board[row][col] = 1;
            if (solveNQueens(board, row + 1, n))
                return true;
            board[row][col] = 0; // Backtrack
        }
    }

    return false;
}

void printBoard(int board[][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << board[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the board: ";
    cin >> n;

    int board[10][10] = {0};
    if (solveNQueens(board, 0, n)) {
        printBoard(board, n);
    } else {
        cout << "No solution exists" << endl;
    }

    return 0;
}