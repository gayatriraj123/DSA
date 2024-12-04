#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

unordered_map<int,bool> rowCheck;
unordered_map<int,bool> UpperLeftDaignalCheck;
unordered_map<int,bool> BottemLeftDaignalCheck;

void printSolution(vector<vector<char>> &board, int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<board[i][j] <<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
}

bool isSafe(int row,int col,vector<vector<char>> &board, int n)
{

    if(rowCheck[row] == true)
    {
        return false;
    }
        
    if(UpperLeftDaignalCheck[n-1+col-row] == true)
    {
        return false;
    }
       
    if(BottemLeftDaignalCheck[row+col] == true)
    {
        return false;
    }
    return true;

    //can we put the queen at cell[row][col]
    // int i= row;
    // int j= col;

    // //upper left daigonal
    // while(i>=0 && j >= 0)
    // {
    //     if(board[i][j] == 'Q')
    //     {
    //         return false;
    //     }
    //     i--;
    //     j--;
    // }

    // //left row
    // i= row;
    // j= col;

    //  while(j>=0)
    // {
    //     if(board[i][j] == 'Q')
    //     {
    //         return false;
    //     }
    //     j--;
    // }

    // //bottem left daogonal
    // i= row;
    // j= col;

    // while(i<n && j >= 0)
    // {
    //     if(board[i][j] == 'Q')
    //     {
    //         return false;
    //     }
    //     i++;
    //     j--;
    // }

    // //there is nothing find a queen thats why position is safe and 
    // //put it there queen 
    // return true;


}



void solve(vector<vector<char>> &board, int col, int n)
{
    //base case
    if(col >= n)
    {
        printSolution(board, n);
        return;
    }

    //1 case solve another handle recursion
    for(int row = 0; row<n; row++)
    {
        if(isSafe(row,col,board, n))
        {
            board[row][col] = 'Q';
            rowCheck[row] = true;
            UpperLeftDaignalCheck[n-1+col-row] = true;
            BottemLeftDaignalCheck[row+col] =true;

            //recursion
            solve(board, col + 1, n);
            //backtraking
            board[row][col] = '-';
            rowCheck[row] = false;
            UpperLeftDaignalCheck[n-1+col-row] = false;
            BottemLeftDaignalCheck[row+col] = false;
        }
    }


}

int main()
{
    int n = 4;
    vector<vector<char>> board(n, vector<char>(n, '-'));
    int col=0;
    solve(board,col, n);
    return 0;
}