#include <iostream>
#include <algorithm>
#include <vector>
#include <time.h>
#include <stdlib.h>
using namespace std;


int main()
{
	vector<char>row1;
	vector<char>row2;
	vector<char>row3;
	vector<char>row4;
	vector<char>row5;
	vector<char>row6;
	vector<char>row7;

	int move1;
	int win = 0;
	int j;
	char again = 'y';


	for (int i = 0; i<7; ++i)
	{
		row1.push_back('O');
		row1[0] = '1';
		row2.push_back('O');
		row2[0] = '2';
		row3.push_back('O');
		row3[0] = '3';
		row4.push_back('O');
		row4[0] = '4';
		row5.push_back('O');
		row5[0] = '5';
		row6.push_back('O');
		row6[0] = '6';
		row7.push_back('O');
		row7[0] = '7';
	}

	while (again == 'Y' || again == 'y')
	{

		for (int i = 0; i<7; ++i)
		{
			if (i == 0)
				cout << "\n\n\n   " << row1[i] << " " << row2[i] << " " << row3[i] << " " << row4[i] << " " << row5[i] << " " << row6[i] << " " << row7[i] << "  \n  ---------------\n";
			if (i>0 && i<7)
				cout << " | " << row1[i] << " " << row2[i] << " " << row3[i] << " " << row4[i] << " " << row5[i] << " " << row6[i] << " " << row7[i] << " |\n";
			if (i == 6)
				cout << "  ---------------\n |               |\n\n\n";
		}

		while (win == 0)
		{
			////////////////////////////////////////////////////////
			if (win == 0)
			{
				cout << "Player 1:  ";
				cin >> move1;
				cout << "\n\n";
				while (move1<1 || move1>7 || (move1 == 1 && (row1[1] == '1' || row1[1] == '2')) || (move1 == 2 && (row2[1] == '1' || row2[1] == '2')) || (move1 == 3 && (row3[1] == '1' || row3[1] == '2')) || (move1 == 4 && (row4[1] == '1' || row4[1] == '2')) || (move1 == 5 && (row5[1] == '1' || row5[1] == '2')) || (move1 == 6 && (row6[1] == '1' || row6[1] == '2')) || (move1 == 7 && (row7[1] == '1' || row7[1] == '2')))
				{
					cout << "Can't let you move!! \n\n\nPlayer 1:  ";
					cin >> move1;
				}
				if (move1 == 1)
				{
					j = 6;
					while (row1[j] == '1' || row1[j] == '2')
					{
						j--;
					}
					row1[j] = '1';
				}
				else if (move1 == 2)
				{
					j = 6;
					while (row2[j] == '1' || row2[j] == '2')
					{
						j--;
					}
					row2[j] = '1';
				}
				else if (move1 == 3)
				{
					j = 6;
					while (row3[j] == '1' || row3[j] == '2')
					{
						j--;
					}
					row3[j] = '1';
				}
				else if (move1 == 4)
				{
					j = 6;
					while (row4[j] == '1' || row4[j] == '2')
					{
						j--;
					}
					row4[j] = '1';
				}
				else if (move1 == 5)
				{
					j = 6;
					while (row5[j] == '1' || row5[j] == '2')
					{
						j--;
					}
					row5[j] = '1';
				}
				else if (move1 == 6)
				{
					j = 6;
					while (row6[j] == '1' || row6[j] == '2')
					{
						j--;
					}
					row6[j] = '1';
				}
				else if (move1 == 7)
				{
					j = 6;
					while (row7[j] == '1' || row7[j] == '2')
					{
						j--;
					}
					row7[j] = '1';

				}
			}
			////////////////////////////////////////////////////////       
			for (int i = 0; i<7; ++i)
			{
				if (i == 0)
					cout << "   " << row1[i] << " " << row2[i] << " " << row3[i] << " " << row4[i] << " " << row5[i] << " " << row6[i] << " " << row7[i] << "  \n  ---------------\n";
				if (i>0 && i<7)
					cout << " | " << row1[i] << " " << row2[i] << " " << row3[i] << " " << row4[i] << " " << row5[i] << " " << row6[i] << " " << row7[i] << " |\n";
				if (i == 6)
					cout << "  ---------------\n |               |\n\n\n";
			}

			for (int i = 6; i>0; --i)
			{
				if ((row1[i] == '1'&&row2[i] == '1'&&row3[i] == '1'&&row4[i] == '1') || (row5[i] == '1'&&row2[i] == '1'&&row3[i] == '1'&&row4[i] == '1') || (row5[i] == '1'&&row6[i] == '1'&&row3[i] == '1'&&row4[i] == '1') || (row5[i] == '1'&&row6[i] == '1'&&row7[i] == '1'&&row4[i] == '1'))
					win = 1; //นอน
			}
			for (int i = 6; i>2; --i)
			{
				if ((row1[i] == '1'&&row1[i - 1] == '1'&&row1[i - 2] == '1'&&row1[i - 3] == '1') || (row2[i] == '1'&&row2[i - 1] == '1'&&row2[i - 2] == '1'&&row2[i - 3] == '1') || (row3[i] == '1'&&row3[i - 1] == '1'&&row3[i - 2] == '1'&&row3[i - 3] == '1') || (row4[i] == '1'&&row4[i - 1] == '1'&&row4[i - 2] == '1'&&row4[i - 3] == '1') || (row5[i] == '1'&&row5[i - 1] == '1'&&row5[i - 2] == '1'&&row5[i - 3] == '1') || (row6[i] == '1'&&row6[i - 1] == '1'&&row6[i - 2] == '1'&&row6[i - 3] == '1') || (row7[i] == '1'&&row7[i - 1] == '1'&&row7[i - 2] == '1'&&row7[i - 3] == '1'))
					win = 1; //ตั้ง
				if ((row1[i] == '1'&&row2[i - 1] == '1'&&row3[i - 2] == '1'&&row4[i - 3] == '1') || (row2[i] == '1'&&row3[i - 1] == '1'&&row4[i - 2] == '1'&&row5[i - 3] == '1') || (row3[i] == '1'&&row4[i - 1] == '1'&&row5[i - 2] == '1'&&row6[i - 3] == '1') || (row4[i] == '1'&&row5[i - 1] == '1'&&row6[i - 2] == '1'&&row7[i - 3] == '1'))
					win = 1; //เฉียงขวา
				if ((row7[i] == '1'&&row6[i - 1] == '1'&&row5[i - 2] == '1'&&row4[i - 3] == '1') || (row6[i] == '1'&&row5[i - 1] == '1'&&row4[i - 2] == '1'&&row3[i - 3] == '1') || (row5[i] == '1'&&row4[i - 1] == '1'&&row3[i - 2] == '1'&&row2[i - 3] == '1') || (row4[i] == '1'&&row3[i - 1] == '1'&&row2[i - 2] == '1'&&row1[i - 3] == '1'))
					win = 1; //เฉียงซ้าย
			}

			////////////////////////////////////////////////////////
			if (win == 0)
			{

				
				if (row4[6] == 'O')
				{		
					row4[6] = '2';
				}
				
				else if (row4[6] != 'O')
				{

					srand(time(NULL));
					move1 = rand() % 8;

					cout << "\n\n";
					while (move1<1 || move1>7 || (move1 == 1 && (row1[1] == '1' || row1[1] == '2')) || (move1 == 2 && (row2[1] == '1' || row2[1] == '2')) || (move1 == 3 && (row3[1] == '1' || row3[1] == '2')) || (move1 == 4 && (row4[1] == '1' || row4[1] == '2')) || (move1 == 5 && (row5[1] == '1' || row5[1] == '2')) || (move1 == 6 && (row6[1] == '1' || row6[1] == '2')) || (move1 == 7 && (row7[1] == '1' || row7[1] == '2')))
					{
						move1 = rand() % 8;
					}

/////////////////////////////////////check////////////////////
					////แนวตั้ง
				if (row1[6] == '1' && row1[5] == '1' && row1[4] == '1')
				{
					row1[3] = '2';
				}
				if (row1[5] == '1' && row1[4] == '1' && row1[3] == '1')
				{
					row1[2] = '2';
				}
				if (row1[4] == '1' && row1[3] == '1' && row1[2] == '1')
				{
					row1[1] = '2';
				}
				////////////
				if (row2[6] == '1' && row2[5] == '1' && row2[4] == '1')
				{
					row2[3] = '2';
				}
				if (row2[5] == '1' && row2[4] == '1' && row2[3] == '1')
				{
					row2[2] = '2';
				}
				if (row2[4] == '1' && row2[3] == '1' && row2[2] == '1')
				{
					row2[1] = '2';
				}
				////////////////
				if (row3[6] == '1' && row3[5] == '1' && row3[4] == '1')
				{
					row3[3] = '2';
				}
				if (row3[5] == '1' && row3[4] == '1' && row3[3] == '1')
				{
					row3[2] = '2';
				}
				if (row3[4] == '1' && row3[3] == '1' && row3[2] == '1')
				{
					row3[1] = '2';
				}
				//////////////
				if (row4[6] == '1' && row4[5] == '1' && row4[4] == '1')
				{
					row4[3] = '2';
				}
				if (row4[5] == '1' && row4[4] == '1' && row4[3] == '1')
				{
					row4[2] = '2';
				}
				if (row4[4] == '1' && row4[3] == '1' && row4[2] == '1')
				{
					row4[1] = '2';
				}
				//////////////////
				if (row5[6] == '1' && row5[5] == '1' && row5[4] == '1')
				{
					row5[3] = '2';
				}
				if (row5[5] == '1' && row5[4] == '1' && row5[3] == '1')
				{
					row5[2] = '2';
				}
				if (row5[4] == '1' && row5[3] == '1' && row5[2] == '1')
				{
					row5[1] = '2';
				}
				/////////////
				if (row6[6] == '1' && row6[5] == '1' && row6[4] == '1')
				{
					row6[3] = '2';
				}
				if (row6[5] == '1' && row6[4] == '1' && row6[3] == '1')
				{
					row6[2] = '2';
				}
				if (row6[4] == '1' && row6[3] == '1' && row6[2] == '1')
				{
					row6[1] = '2';
				}
				/////////////
				if (row7[6] == '1' && row7[5] == '1' && row7[4] == '1')
				{
					row7[3] = '2';
				}
				if (row7[5] == '1' && row7[4] == '1' && row7[3] == '1')
				{
					row7[2] = '2';
				}
				if (row7[4] == '1' && row7[3] == '1' && row7[2] == '1')
				{
					row7[1] = '2';
				}
				///////////////////แนวนอน///////////
				if (row1[6] == '1' && row2[6] == '1' && row3[6] == '1')
				{
					row4[6] = '2';
				}
				if (row1[5] == '1' && row2[5] == '1' && row3[5] == '1')
				{
					row4[5] = '2';
				}
				if (row1[4] == '1' && row2[4] == '1' && row3[4] == '1')
				{
					row4[4] = '2';
				}
				if (row1[3] == '1' && row2[3] == '1' && row3[3] == '1')
				{
					row4[3] = '2';
				}
				if (row1[2] == '1' && row2[2] == '1' && row3[2] == '1')
				{
					row4[2] = '2';
				}
				if (row1[1] == '1' && row2[1] == '1' && row3[1] == '1')
				{
					row4[1] = '2';
				}
				//////////////////
				if (row2[1] == '1' && row3[1] == '1' && row4[1] == '1')
				{
					row5[1] = '2';
				}
				if (row2[2] == '1' && row3[2] == '1' && row4[2] == '1')
				{
					row5[2] = '2';
				}
				if (row2[3] == '1' && row3[3] == '1' && row4[3] == '1')
				{
					row5[3] = '2';
				}
				if (row2[4] == '1' && row3[4] == '1' && row4[4] == '1')
				{
					row5[4] = '2';
				}
				if (row2[5] == '1' && row3[5] == '1' && row4[5] == '1')
				{
					row5[5] = '2';
				}
				if (row2[6] == '1' && row3[6] == '1' && row4[6] == '1')
				{
					row5[6] = '2';
				}
				//////////
				if (row3[1] == '1' && row4[1] == '1' && row5[1] == '1')
				{
					row6[1] = '2';
				}
				if (row3[2] == '1' && row4[2] == '1' && row5[2] == '1')
				{
					row6[2] = '2';
				}
				if (row3[3] == '1' && row4[3] == '1' && row5[3] == '1')
				{
					row6[3] = '2';
				}
				if (row3[4] == '1' && row4[4] == '1' && row5[4] == '1')
				{
					row6[4] = '2';
				}
				if (row3[5] == '1' && row4[5] == '1' && row5[5] == '1')
				{
					row6[5] = '2';
				}
				if (row3[6] == '1' && row4[6] == '1' && row5[6] == '1')
				{
					row6[6] = '2';
				}
				////////////////
				if (row4[6] == '1' && row5[6] == '1' && row6[6] == '1')
				{
					row7[6] = '2';
				}
				if (row4[5] == '1' && row5[5] == '1' && row6[5] == '1')
				{
					row7[5] = '2';
				}
				if (row4[4] == '1' && row5[4] == '1' && row6[4] == '1')
				{
					row7[4] = '2';
				}
				if (row4[3] == '1' && row5[3] == '1' && row6[3] == '1')
				{
					row7[3] = '2';
				}
				if (row4[2] == '1' && row5[2] == '1' && row6[2] == '1')
				{
					row7[2] = '2';
				}
				if (row4[1] == '1' && row5[1] == '1' && row6[1] == '1')
				{
					row7[1] = '2';
				}
				/////////////////
				if (row1[6] == '2'&&row2[5] == '2'&&row3[4] == '2')
				{
					row4[3] == '2';
				}
				if (row1[5] == '2'&&row2[4] == '2'&&row3[3] == '2')
				{
					row4[2] == '2';
				}
				if (row1[4] == '2'&&row2[3] == '2'&&row3[2] == '2')
				{
					row4[1] == '2';
				}
				if (row2[6] == '2'&&row3[5] == '2'&&row4[4] == '2')
				{
					row5[3] == '2';
				}
				if (row2[5] == '2'&&row3[4] == '2'&&row4[3] == '2')
				{
					row5[2] == '2';
				}
				if (row2[4] == '2'&&row3[3] == '2'&&row4[2] == '2')
				{
					row5[1] == '2';
				}
				if (row3[6] == '2'&&row4[5] == '2'&&row5[4] == '2')
				{
					row6[3] == '2';
				}
				if (row3[5] == '2'&&row4[4] == '2'&&row5[3] == '2')
				{
					row6[2] == '2';
				}
				if (row3[4] == '2'&&row4[3] == '2'&&row5[2] == '2')
				{
					row6[1] == '2';
				}
				if (row4[6] == '2'&&row3[5] == '2'&&row2[4] == '2')
				{
					row1[3] == '2';
				}
				if (row4[5] == '2'&&row3[4] == '2'&&row2[3] == '2')
				{
					row1[2] == '2';
				}
				if (row4[4] == '2'&&row3[3] == '2'&&row2[2] == '2')
				{
					row1[1] == '2';
				}
				

				//////
					if (move1 == 1)
					{
						j = 6;
						while (row1[j] == '1' || row1[j] == '2')
						{
							j--;
						}
						row1[j] = '2';
					}
					else if (move1 == 2)
					{
						j = 6;
						while (row2[j] == '1' || row2[j] == '2')
						{
							j--;
						}
						row2[j] = '2';
					}
					else if (move1 == 3)
					{
						j = 6;
						while (row3[j] == '1' || row3[j] == '2')
						{
							j--;
						}
						row3[j] = '2';
					}
					else if (move1 == 4)
					{
						j = 6;
						while (row4[j] == '1' || row4[j] == '2')
						{
							j--;
						}
						row4[j] = '2';
					}
					else if (move1 == 5)
					{
						j = 6;
						while (row5[j] == '1' || row5[j] == '2')
						{
							j--;
						}
						row5[j] = '2';
					}
					else if (move1 == 6)
					{
						j = 6;
						while (row6[j] == '1' || row6[j] == '2')
						{
							j--;
						}
						row6[j] = '2';
					}
					else if (move1 == 7)
					{
						if (row7[1] == '1' || row7[1] == '2')
							cout << "nope";
						else
						{
							j = 6;
							while (row7[j] == '1' || row7[j] == '2')
							{
								j--;
							}
							row7[j] = '2';
						}
					}
				}

			}
			////////////////////////////////////////////////////////       
			for (int i = 0; i<7; ++i)
			{
				if (i == 0)
					cout << "   " << row1[i] << " " << row2[i] << " " << row3[i] << " " << row4[i] << " " << row5[i] << " " << row6[i] << " " << row7[i] << "  \n  ---------------\n";
				if (i>0 && i<7)
					cout << " | " << row1[i] << " " << row2[i] << " " << row3[i] << " " << row4[i] << " " << row5[i] << " " << row6[i] << " " << row7[i] << " |\n";
				if (i == 6)
					cout << "  ---------------\n |               |\n\n\n";
			}


			for (int i = 6; i>0; --i)
			{
				if ((row1[i] == '2'&&row2[i] == '2'&&row3[i] == '2'&&row4[i] == '2') || (row5[i] == '2'&&row2[i] == '2'&&row3[i] == '2'&&row4[i] == '2') || (row5[i] == '2'&&row6[i] == '2'&&row3[i] == '2'&&row4[i] == '2') || (row5[i] == '2'&&row6[i] == '2'&&row7[i] == '2'&&row4[i] == '2'))
					win = 2; //แนวนอน
			}
			for (int i = 6; i>2; --i)
			{
				if ((row1[i] == '2'&&row1[i - 1] == '2'&&row1[i - 2] == '2'&&row1[i - 3] == '2') || (row2[i] == '2'&&row2[i - 1] == '2'&&row2[i - 2] == '2'&&row2[i - 3] == '2') || (row3[i] == '2'&&row3[i - 1] == '2'&&row3[i - 2] == '2'&&row3[i - 3] == '2') || (row4[i] == '2'&&row4[i - 1] == '2'&&row4[i - 2] == '2'&&row4[i - 3] == '2') || (row5[i] == '2'&&row5[i - 1] == '2'&&row5[i - 2] == '2'&&row5[i - 3] == '2') || (row6[i] == '2'&&row6[i - 1] == '2'&&row6[i - 2] == '2'&&row6[i - 3] == '2') || (row7[i] == '2'&&row7[i - 1] == '2'&&row7[i - 2] == '2'&&row7[i - 3] == '2'))
					win = 2; //แนวตั้ง
				if ((row1[i] == '2'&&row2[i - 1] == '2'&&row3[i - 2] == '2'&&row4[i - 3] == '2') || (row2[i] == '2'&&row3[i - 1] == '2'&&row4[i - 2] == '2'&&row5[i - 3] == '2') || (row3[i] == '2'&&row4[i - 1] == '2'&&row5[i - 2] == '2'&&row6[i - 3] == '2') || (row4[i] == '2'&&row5[i - 1] == '2'&&row6[i - 2] == '2'&&row7[i - 3] == '2'))
					win = 2; //เฉียงขวา
				if ((row7[i] == '2'&&row6[i - 1] == '2'&&row5[i - 2] == '2'&&row4[i - 3] == '2') || (row6[i] == '2'&&row5[i - 1] == '2'&&row4[i - 2] == '2'&&row3[i - 3] == '2') || (row5[i] == '2'&&row4[i - 1] == '2'&&row3[i - 2] == '2'&&row2[i - 3] == '2') || (row4[i] == '2'&&row3[i - 1] == '2'&&row2[i - 2] == '2'&&row1[i - 3] == '2'))
					win = 2; //เฉียงซ้าย
			}
			////////////////////////////////////////////////////////
		}

		if (win == 2)
		{
			cout << "Player 2 Wins!!!" << endl << "play again? (Y/N): ";
		}
		else if (win == 1)
		{

			cout << "Player 1 Wins!!!" << endl << "play again? (Y/N): ";
		}
		cin >> again;
		while (again != 'Y'&&again != 'y'&&again != 'N'&&again != 'n')
		{
			cout << "Would you like to play again? (Y/N): ";
			cin >> again;
		}

		
		cout << "\n\n\n\n";
		
		win = 0;
		for (int i = 1; i<7; ++i)
		{
			row1[i] = 'O';
			row2[i] = 'O';
			row3[i] = 'O';
			row4[i] = 'O';
			row5[i] = 'O';
			row6[i] = 'O';
			row7[i] = 'O';
		}
		
	}

	cout << "Thanks for Playing!\n\n";
	//keep_window_open();
	return 0;
}
