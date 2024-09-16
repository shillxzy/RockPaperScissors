#include <iostream>
#include <Windows.h>

using namespace std;

void SetNumber(int Number)
{
    if (Number == 1)
    {
        cout << "Rock" << endl;
    }
    else if (Number == 2)
    {
        cout << "Paper" << endl;
    }
    else if (Number == 3)
    {
        cout << "Scissors" << endl;
    }
}

void GenerateRockPaperScissors(string Text, int Number)
{
    if (Text == "Rock" && Number == 1)
    {
        cout << "A draw." << endl;
    }
    else if (Text == "Paper" && Number == 2)
    {
        cout << "A draw." << endl;
    }
    else if (Text == "Scissors" && Number == 3)
    {
        cout << "A draw." << endl;
    }
    else if (Text == "Rock" && Number == 2)
    {
        cout << "You lost." << endl;
    }
    else if (Text == "Rock" && Number == 3)
    {
        cout << "You have won" << endl;
    }
    else if (Text == "Paper" && Number == 1)
    {
        cout << "You have won" << endl;
    }
    else if (Text == "Paper" && Number == 3)
    {
        cout << "You lost." << endl;
    }
    else if (Text == "Scissors" && Number == 2)
    {
        cout << "You have won" << endl;
    }
    else if (Text == "Scissors" && Number == 1)
    {
        cout << "You lost." << endl;
    }
    else
    {
        cout << "Something bad." << endl;
    }
}

int main()
{
    srand(static_cast<unsigned>(time(NULL)));

    int Number = rand() % 3 + 1;

    string Text;
    cin >> Text;

    SetNumber(Number);
    GenerateRockPaperScissors(Text, Number);



    return 0;
}
