#include <bits/stdc++.h>
using namespace std;

int main()
{
    int user, computer;

    srand(time(0));

    cout << "=======Rock Paper Scissor=======\n";
    cout << "1. Rock \n";
    cout << "2. Paper \n";
    cout << "3. Scissor \n";

    cout << "Enter your choice (1 - 3) : ";
    cin >> user;

    if (user < 1 || user > 3)
    {
        cout << "Invalid Choice \n";
        return 0;
    }

    computer = rand() % 3 + 1;

    cout << "You Chose : ";

    if (user == 1)
        cout << "Rock\n";
    else if (user == 2)
        cout << "Paper\n";
    else
        cout << "Scissor\n";

    cout << "Computer Choses : " << computer << endl;

    if (user == computer)
    {
        cout << "It's a draw";
        return 0;
    }
    else if ((user == 1 && computer == 3) ||
             (user == 2 && computer == 1) ||
             (user == 3 && computer == 2))
    {
        cout << "Result : You Win!\n";
    }
    else
    {
        cout << "Result : Computer Wins!\n";
    }
    return 0;
}