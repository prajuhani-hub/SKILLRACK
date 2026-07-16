//999
#include<iostream>
#include<vector>
using namespace std;
int numRookCaptures(vector<vector<char> >& board) {
    int rr=-1,rc=-1;
    int attacked=0;
    int r=board.size(),c=board[0].size();
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            if (board[i][j]=='R'){
                rr=i;
                rc=j;
                break;
            }
        }
        if (rr!=-1)
            break;
        }
    for(int col=rc-1;col>=0;col--){
        if(board[rr][col]=='.') continue;
        if(board[rr][col]=='p') attacked++;
        break;
    } 
    for(int col=rc+1;col<c;col++){
        if(board[rr][col]=='.') continue;
        if(board[rr][col]=='p') attacked++;
        break;
    } 
    for(int row=rr-1;row>=0;row--){
        if(board[row][rc]=='.') continue;
        if(board[row][rc]=='p') attacked++;
        break;
    } 
    for(int row=rr+1; row<r; row++){
        if(board[row][rc]=='.') continue;
        if(board[row][rc]=='p') attacked++;
        break;
    }
    return attacked;
}
int main() {
    vector<vector<char> >board(8,vector<char>(8));
    for (int i=0;i<8;i++) {
        for (int j=0;j<8;j++) {
            cin>>board[i][j];
        }
    }
    cout<< numRookCaptures(board)<<endl;
    return 0;
}
