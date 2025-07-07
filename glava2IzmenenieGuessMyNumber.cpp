//игра по книге "Угадай число"
/*
Было добавленно:
  Теперь компьютер так должен угадать число
  Возможность сразу повторно сыграть или закончить игру
*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <utility>
#include <vector>
//Задаем директивы using для того, чтобы не писать std::...
using std::cout;
using std::endl;
using std::cin;
using std::string;

int main() {
    std::srand(std::time(0));
    int randomNumber;
    int choice = 0;
    int numberPlayer;

    do {
        cout << "Choice ho search number: \n";
        cout << " 1 - Player\n";
        cout << " 2 - Computer\n";
        cout << "Choice : ";
        cin >> choice;
        if (choice == 1) {
            randomNumber = rand() % 100 + 1;
            do {
                ++choice;
                cout << "Enter number : ";
                cin >> numberPlayer;

                if (numberPlayer > randomNumber) {
                    cout << "Small!\n";
                } else if (numberPlayer < randomNumber) {
                    cout << "More!\n";
                }

            } while (numberPlayer != randomNumber);
            cout << "Random number equals for your : " << numberPlayer << " Count search your number : " << choice << endl;

        } else if (choice == 2) {
            cout << "Enter number : ";
            cin >> numberPlayer;
            do {
                ++choice;
                randomNumber = rand() % 100 + 1;
            } while (randomNumber != numberPlayer);
            cout << "Your number : " << randomNumber << " Count search your number : " << choice << endl;
        } else {
            continue;
        }

        cout << "Your play again:\n ";
        cout << " 1 - continue\n  2 - break\n";
        cout << "Press enter key : ";
        cin >> numberPlayer;

        if (numberPlayer == 1) {
            continue;
        } else if (numberPlayer == 2) {
            break;
        } else {
            break;
        }

    } while (numberPlayer != randomNumber || randomNumber != numberPlayer);

    return 0;
}
