#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>

using namespace std;
int main()
{
	cout << " THIS IS A GAME OF TIC TAC TOE \n PLAYER1 IS ALWAYS X AND PLAYER2 IS ALWAYS O \n X PLAYS FIRST ALWAYS " << endl;
	const int row = 3, col = 3;
	char winner;
	bool check;
	int play1 = 0;
	int position = 0;
	string player1, player2;
	char game[row][col];
	// make the table and populating the table
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{

			game[i][j] = '*';
		}
	}
	cout << "     " << " Columns" << endl;
	cout << "       1 2 3" << endl;
	// printing out the table
	for (int i = 0; i < row; i++)
	{
		cout << "Row " << i + 1 << ": ";
		for (int j = 0; j < col; j++)
		{

			cout << game[i][j] << " ";

		}
		cout << endl;
	}
	cout << "Player1 enter your name: ";
	getline(cin,player1);
	cout << "Player2 enter your name: ";
	getline(cin, player2);
	int player1_row, player1_col, player2_row, player2_col;
	int play = 0;
	for (int count = 0; count <= 5; count++)
	{
		check = false;
		play++;

		// ask for play1 input for rows and col 
		cout <<player1 <<" turn." << endl << "Enter a row and column to place X." << endl;
		cout << "Row: ";
		cin >> player1_row;
		cout << "Column: ";
		cin >> player1_col;
		play1 += 1;
		game[player1_row - 1][player1_col - 1] = 'X';
		// print out the updated game table
		cout << endl << "     " << " Columns" << endl;
		cout << "       1 2 3" << endl;
		for (int i = 0; i < row; i++)
		{
			cout << "Row " << i + 1 << ": ";
			for (int j = 0; j < col; j++)
			{

				cout << game[i][j] << " ";

			}
			cout << endl;
		}
		cout << endl;
		// check winner can only check if they have inputed atleast 3X
		if (play > 2)
		{
			// for each row
			for (int i = 0; i < row; i++)
			{
				if (game[i][0] == game[i][1] && game[i][1] == game[i][2])
				{
					winner = game[i][0];
					check = true;
				}
			}
			// each col
			for (int j = 0; j < col; j++)
			{
				if (game[0][j] == game[1][j] && game[1][j] == game[2][j])
				{
					winner = game[0][j];
					check = true;
				}
			}
			//for diag win check
			if (game[0][0] == game[1][1] && game[2][2] == game[1][1])
			{
				winner = game[0][0];
				check = true;
			}
			if (game[0][2] == game[1][1] && game[2][0] == game[1][1])
			{
				winner = game[0][0];
				check = true;
			}
			if (check == true)
			{
				if (winner == 'X')
				{
					cout <<player1 << " is the winner";
					return 0;
				}
				else if (winner == 'O')
				{
					cout << player2 << " is the winner";
					return 0;
				}
			}
		}
		// break if X has made 5 plays
		if (play1 == 5)
		{
			break;
		}
		// ask for player2 input
		cout <<player2<< " turn." << endl << "Enter a row and column to place O." << endl;
		cout << "Row: ";
		cin >> player2_row;
		cout << "Column: ";
		cin >> player2_col;
		game[player2_row - 1][player2_col - 1] = 'O';
		//print out the updated game table
		cout << endl << "     " << " Columns" << endl;
		cout << "       1 2 3" << endl;
		for (int i = 0; i < row; i++)
		{
			cout << "Row " << i + 1 << ": ";
			for (int j = 0; j < col; j++)
			{

				cout << game[i][j] << " ";

			}
			cout << endl;

		}
		cout << endl;


		// check winner
		if (play > 2)
		{
			// check for winner
			// for each row
			for (int i = 0; i < row; i++)
			{
				if (game[i][0] == game[i][1] && game[i][1] == game[i][2])
				{
					winner = game[i][0];
					check = true;

				}
			}
			// each col
			for (int j = 0; j < col; j++)
			{
				if (game[0][j] == game[1][j] && game[1][j] == game[2][j])
				{
					winner = game[0][j];
					check = true;
				}
			}
			//for diag
			if (game[0][0] == game[1][1] && game[2][2] == game[1][1])
			{
				winner = game[0][0];
				check = true;
			}
			if (game[0][2] == game[1][1] && game[2][0] == game[1][1])
			{
				winner = game[0][0];
				check = true;
			}
			// check for who won
			if (check == true)
			{
				if (winner == 'X')
				{
					cout << player1 << " is the winner";
					return 0;
				}
				else if (winner == 'O')
				{
					cout << player2 << " is the winner";
					return 0;
				}
			}
		}


	}
	cout << "The game is a draw";

	return 0;
}