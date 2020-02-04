#include<iostream>
using namespace std;
char board[3][3] = { 'a','b','c','d','e','f','g','h','i' };
char player;
void menu() {
cout << "---------MENU----------  " << endl;
cout << "Press X: To play with X" << endl;
cout << "Press O: To play with O" << endl;
cout << "Press 1: To exit the game" << endl;
cin >> player;
}
void initialise()
{
int i, j;
system("cls");
cout << "~~~~~ Welcome to TIC TAC TOE ~~~~" << endl << endl << endl;
for (i = 0;i < 3;i++)
{
cout << "\t\t\t\t";
for (j = 0;j < 2;j++)
{
cout << board[i][j] << " | ";
}
cout << board[i][2];
cout << endl << "\t\t\t\t---------" << endl ;
}
}
void input()
{
char a;
cout << "Turn of " << player << ". Press the number at which you want to play: ";
cin >> a;
if (a == 'a')
board[0][0] = player;
else if (a == 'b')
board[0][1] = player;
else if (a == 'c')
board[0][2] = player;
else if (a == 'd')
board[1][0] = player;
else if (a == 'e')
board[1][1] = player;
else if (a == 'f')
board[1][2] = player;
else if (a == 'g')
board[2][0] = player;
else if (a == 'h')
board[2][1] = player;
else
board[2][2] = player;

}
char win()
{
int X, O;
/*for (int i = 0;i < 3;i++) {
X = 0, O = 0;
for (int j = 0;j < 3;j++) {
if (board[i][j] == 'X')
X++;
else if (board[i][j] == 'O')
O++;
}
if (X == 3)
return 'X';
else if (O = 3)
return 'O';

for (int j = 0;j < 3;j++) {
if (board[j][i] == 'X')
X++;
else if (board[j][i] == 'O')
O++;
}
if (X == 3)
return 'X';
else if (O = 3)
return 'O';

if (board[i][i] == 'X')
X++;
else if (board[i][i] == 'O')
O++;
if (X == 3)
return 'X';
else if (O = 3)
return 'O';

int a = 3;
if (board[i][a--] == 'X')
X++;
else if (board[i][a--] == 'O')
O++;
if (X == 3)
return 'X';
else if (O = 3)
return 'O';
}
return '/';*/

if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X')
return 'X';

if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X')
return 'X';

if (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X')
return 'X';

if (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X')
return 'X';

if (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X')
return 'X';

if (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X')
return 'X';

if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X')
return 'X';

if (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X')
return 'X';

if (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O')
return 'O';

if (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O')
return 'O';

if (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O')
return 'O';

if (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O')
return 'O';

if (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O')
return 'O';

if (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O')
return 'O';

if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O')
return 'O';

if (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O')
return 'O';

return '/';
}
void TogglePlayer()
{
if (player == 'X')
player = 'O';
else
player = 'X';
}
int main()
{
int n = 0;
menu();
if (player == '1')
exit(1);
initialise();
while (1)
{
n++;
input();
initialise();
if (win() == 'X')
{
cout << "X wins!" << endl;
break;
}
else if (win() == 'O')
{
cout << "O wins!" << endl;
break;
}
else if (win() == '/' && n == 9)
{
cout << "It's a draw!" << endl;
break;
}
TogglePlayer();
}
system("pause");
return 0;
}
