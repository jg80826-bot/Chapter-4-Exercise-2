#include <iostream>

using namespace std;

int main() {
    int number;

    cout << "Enter a number within the range of 1 through 10: ";
    cin >> number;

    switch (number) {
    case 1:
        cout << "The Roman numeral version is I" << endl;
        break;
    case 2:
        cout << "The Roman numeral version is II" << endl;
        break;
    case 3:
        cout << "The Roman numeral version is III" << endl;
        break;
    case 4:
        cout << "The Roman numeral version is IV" << endl;
        break;
    case 5:
        cout << "The Roman numeral version is V" << endl;
        break;
    case 6:
        cout << "The Roman numeral version is VI" << endl;
        break;
    case 7:
        cout << "The Roman numeral version is VII" << endl;
        break;
    case 8:
        cout << "The Roman numeral version is VIII" << endl;
        break;
    case 9:
        cout << "The Roman numeral version is IX" << endl;
        break;
    case 10:
        cout << "The Roman numeral version is X" << endl;
        break;
    default:

        cout << "Please enter a number between 1 and 10." << endl;
    }

    return 0;
}