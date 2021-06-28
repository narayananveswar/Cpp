#include<iostream>
using namespace std;



bool isPresentRow(int sudoku[9][9], int row, int element)
{
    for(int col=0; col<9; col++)
    {
        if(sudoku[row][col] == element)
        {
            return true;
        }
    }
    return false;
}

void isSafe(int sudoku[9][9], int row, int col, int element)
{
    //check  in 3*3 metrix
    int loopcol;
    if(col<2)
        loopcol = 0;
    else if(col<5)
        loopcol = 3;
    else
        loopcol = 6;
    
}



int main()
{

}