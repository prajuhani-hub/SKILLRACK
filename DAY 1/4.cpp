//VALID SUDOKO
//C++
#include<iostream>
using namespace std;
bool isValidSudoku(char board[9][9]) {
    bool rf[9][10]={false};
    bool cf[9][10]={false};
    bool smf[9][10]={false};
    int row,col;
    for(row=0;row<9;row++) {
        for(col=0;col<9;col++){
            char ch=board[row][col];
            if(ch=='.')
                continue;
            int dig=ch-'0';
            int smi=(row/3)*3+(col/3);
            if(rf[row][dig]||cf[col][dig]||smf[smi][dig])
                return false;
            rf[row][dig]=true;
            cf[col][dig]=true;
            smf[smi][dig]=true;
        }
    }
    return true;
}
int main() {
    char board[9][9];
    int i,j;
    for(i=0;i<9;i++) {
        for(j=0;j<9;j++) {
            cin>>board[i][j];
        }
    }
    if(isValidSudoku(board))
        cout<<"Valid Sudoku";
    else
        cout<<"Invalid Sudoku";
}
