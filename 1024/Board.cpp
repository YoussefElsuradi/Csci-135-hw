/*
Youssef elsuradi

Tong yee
 task C
 */




#include "Board.hpp"
#include <iostream>
#include <iomanip>
#include <vector>

using std::cout;

using std::endl;



void Board::print() const
{
	for (int i = 0; i < numRows; i++)
	{
		for (int h = 0; h < numCols; h++)
			cout << "+----";
		cout << "+" << endl;

		for (int h = 0; h < numCols; h++)
		{
			cout << "|";

			if (panel[i][h] != 0)
				cout << std::setw(4) << panel[i][h];
			else
				cout << "    ";
		}
		//	-_-

		cout << "|" << endl;
	}

	for (int h = 0; h < numCols; h++)
		cout << "+----";
	cout << "+" << endl;

}
// left press


void Board::pressLeft()
{
	for (int i = 0; i < numRows; i++)
	{

		for (int j = 0; j < numCols - 1; j++)
		{

			if (panel[i][j] != 0 && panel[i][j] == panel[i][j+1])
			{
				panel[i][j] *= 2;

				for (int f = j+1; f < numCols - 1; f++)
					panel[i][f] = panel[i][f+1];
				panel[i][numCols - 1] = 0;

				j--;
			}

		}
	}

	int row, col;

	Board::selectRandomCell(row, col);

}


void Board::pressRight()
{

	for (int i = 0; i < numRows; i++)
	{

		for (int j = numCols - 1; j > -1; j--)
		{

			if (panel[i][j] != 0 && panel[i][j] == panel[i][j - 1])
			{
				panel[i][j] *= 2;

				for (int f = j-1; f > 0; f--)
					panel[i][f] = panel[i][f-1];
				panel[i][0] = 0;

				j++;
			}
		}
	}

	int row, col;

	Board::selectRandomCell(row, col);
}

void Board::pressUp()
{

        for (int i = 0; i < numRows - 1; i++)
        {

                for (int j = 0; j < numCols; j++)
                {

                        if (panel[i][j] != 0 && panel[i][j] == panel[i+1][j])
                        {

                                panel[i][j] *= 2;

                                for (int f = i+1; f < numRows - 1; f++)
                                	panel[f][j] = panel[f+1][j];
                                panel[numRows - 1][j] = 0;

                        }
                }
        }
	int row, col;

	Board::selectRandomCell(row, col);
}

void Board::pressDown()
{
	for (int i = numRows - 1; i > 0; i--)
	{

		for (int j = 0; j < numCols; j++)
		{

			if (panel[i][j] != 0 && panel[i][j] == panel[i-1][j])
			{

				panel[i][j] *= 2;
				for (int f = i-1; f > 0; f--)
					panel[f][j] = panel[f-1][j];
				panel[0][j] = 0;
			}

		}
	}
	int row, col;

	Board::selectRandomCell(row, col);
}















