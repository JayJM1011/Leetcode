#include <iostream>
#include <stdlib.h>
#define cout std::cout
#define cin std::cin

int WhichBox(int y, int x)
{
    if((x< 3) && (y< 3))
        return 1;
    if((x> 2 && x< 6) && (y< 3))
        return 2;
    if((x> 5 && x< 9) && (y< 3))
        return 3;
    if((x< 3) && (y> 2 && y< 6))
        return 4;
    if((x> 2 && x< 6) && (y> 2 && y< 6))
        return 5;
    if((x> 5 && x< 9) && (y> 2 && y< 6))
        return 6;
    if((x< 3) && (y> 5 && y< 9))
        return 7;
    if((x> 2 && x< 6) && (y> 5 && y< 9))
        return 8;
    if((x> 5 && x< 9) && (y> 5 && y< 9))
        return 9;
    return 0;
}

int main()
{
    int Board[9][9]= {{ 8, 3, 0, 0, 7, 0, 0, 0, 0} ,{ 6, 0, 0, 1, 9, 5, 0, 0, 0} ,{ 0, 9, 8, 0, 0, 0, 0, 6, 0} ,{ 8, 0, 0, 0, 6, 0, 0, 0, 3} ,{ 4, 0, 0, 8, 0, 3, 0, 0, 1} ,{ 7, 0, 0, 0, 2, 0, 0, 0, 6} ,{ 0, 6, 0, 0, 0, 0, 2, 8, 0} ,{ 0, 0, 0, 4, 1, 9, 0, 0, 5} ,{ 0, 0, 0, 0, 8, 0, 0, 7, 9}};

    int i= 0, j= 0;
    int I= 0, J= 0, K= 0;
    system("cls");
    cout<<"\n\n";
    for(i= 0; i< 9; i++)                         //Disp
    {
        for(j= 0; j< 9; j++)
        {
            if(j==3 || j==6)
                cout<<" | ";
            cout<<" "<<Board[i][j]<<" ";
        }
        cout<<"\n";
        if(i==2 || i==5)
        {
            cout<<"---------------------------------\n";
        }
    }
    for(i= 0; i< 9; i++)
    {
        for(j= 0; j< 9; j++)
        {
            if(Board[i][j]==0)                  //For the empty places
                break;
            for(I= 0; I< 9; I++)                //Vertical Check
            {
                if(Board[I][j]==Board[i][j])
                    K++;
                if(K==2)
                {
                    cout<<"\nInvalid Sudoku";
                    return 0;
                }
            }
            K= 0;
            for(J= 0; J< 9; J++)                //Horizontal Check
            {
                if(Board[i][J]==Board[i][j])
                    K++;
                if(K==2)
                {
                    cout<<"\nInvalid Sudoku";
                    return 0;
                }
            }
            K= 0;
            switch (WhichBox(i, j))             //Check in Respective Box
            {
                case 1:
                for(I= 0; I< 3; I++)
                {
                    for(J= 0; J< 3; J++)
                    {
                        if(Board[I][J]==Board[i][j])
                            K++;
                    }
                }
                if(K==2)
                {
                    cout<<"\nInvalid Sudoku";
                    return 0;
                }
                break;
                case 2:
                for(I= 0; I< 3; I++)
                {
                    for(J= 3; J< 6; J++)
                    {
                        if(Board[I][J]==Board[i][j])
                            K++;
                    }
                }
                if(K==2)
                {
                    cout<<"\nInvalid Sudoku";
                    return 0;
                }
                break;
                case 3:
                for(I= 0; I< 3; I++)
                {
                    for(J= 6; J< 9; J++)
                    {
                        if(Board[I][J]==Board[i][j])
                            K++;
                    }
                }
                if(K==2)
                {
                    cout<<"\nInvalid Sudoku";
                    return 0;
                }
                break;
                case 4:
                for(I= 3; I< 6; I++)
                {
                    for(J= 0; J< 3; J++)
                    {
                        if(Board[I][J]==Board[i][j])
                            K++;
                    }
                }
                if(K==2)
                {
                    cout<<"\nInvalid Sudoku";
                    return 0;
                }
                break;
                case 5:
                for(I= 3; I< 6; I++)
                {
                    for(J= 3; J< 6; J++)
                    {
                        if(Board[I][J]==Board[i][j])
                            K++;
                    }
                }
                if(K==2)
                {
                    cout<<"\nInvalid Sudoku";
                    return 0;
                }
                break;
                case 6:
                for(I= 3; I< 6; I++)
                {
                    for(J= 6; J< 9; J++)
                    {
                        if(Board[I][J]==Board[i][j])
                            K++;
                    }
                }
                if(K==2)
                {
                    cout<<"\nInvalid Sudoku";
                    return 0;
                }
                break;
                case 7:
                for(I= 6; I< 9; I++)
                {
                    for(J= 0; J< 3; J++)
                    {
                        if(Board[I][J]==Board[i][j])
                            K++;
                    }
                }
                if(K==2)
                {
                    cout<<"\nInvalid Sudoku";
                    return 0;
                }
                break;
                case 8:
                for(I= 6; I< 9; I++)
                {
                    for(J= 3; J< 6; J++)
                    {
                        if(Board[I][J]==Board[i][j])
                            K++;
                    }
                }
                if(K==2)
                {
                    cout<<"\nInvalid Sudoku";
                    return 0;
                }
                break;
                case 9:
                for(I= 6; I< 9; I++)
                {
                    for(J= 6; J< 9; J++)
                    {
                        if(Board[I][J]==Board[i][j])
                            K++;
                    }
                }
                if(K==2)
                {
                    cout<<"\nInvalid Sudoku";
                    return 0;
                }
                break;
            }
            K= 0;
        }
    }
    cout<<"\nValid Sudoku";
    return 0;
}


// 1  |  2  |  3              The Boxes of Sudoku
//----------------
// 4  |  5  |  6
//----------------
// 7  |  8  |  9

//Valid Sudoku
//{{ 5, 3, 0, 0, 7, 0, 0, 0, 0} ,{ 6, 0, 0, 1, 9, 5, 0, 0, 0} ,{ 0, 9, 8, 0, 0, 0, 0, 6, 0} ,{ 8, 0, 0, 0, 6, 0, 0, 0, 3} ,{ 4, 0, 0, 8, 0, 3, 0, 0, 1} ,{ 7, 0, 0, 0, 2, 0, 0, 0, 6} ,{ 0, 6, 0, 0, 0, 0, 2, 8, 0} ,{ 0, 0, 0, 4, 1, 9, 0, 0, 5} ,{ 0, 0, 0, 0, 8, 0, 0, 7, 9}};
//Invalid Sudoku
//{{ 8, 3, 0, 0, 7, 0, 0, 0, 0} ,{ 6, 0, 0, 1, 9, 5, 0, 0, 0} ,{ 0, 9, 8, 0, 0, 0, 0, 6, 0} ,{ 8, 0, 0, 0, 6, 0, 0, 0, 3} ,{ 4, 0, 0, 8, 0, 3, 0, 0, 1} ,{ 7, 0, 0, 0, 2, 0, 0, 0, 6} ,{ 0, 6, 0, 0, 0, 0, 2, 8, 0} ,{ 0, 0, 0, 4, 1, 9, 0, 0, 5} ,{ 0, 0, 0, 0, 8, 0, 0, 7, 9}};
