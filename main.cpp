#include <iostream>
#include <Windows.h>

using namespace std;

void SetNumber(int Number)
{
    string choices[] = { "Rock", "Paper", "Scissors" };
    cout << choices[Number - 1] << endl;
}

void GenerateRockPaperScissors(string Text, int Number)
{
    string choices[] = { "Rock", "Paper", "Scissors" };

    if (Text == choices[Number - 1])
    {
        cout << "A draw." << endl;
        return;
    }

    if ((Text == "Rock" && Number == 3) ||
        (Text == "Paper" && Number == 1) ||
        (Text == "Scissors" && Number == 2))
    {
        cout << "You have won" << endl;
    }
    else
    {
        cout << "You lost." << endl;
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
