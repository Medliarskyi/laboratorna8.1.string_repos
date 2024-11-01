#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool containsAllLetters(const string& str, const string& letters) {
    for (char letter : letters) {
        if (str.find(letter) == string::npos) {
            return false; // Якщо хоча б одна буква відсутня
        }
    }
    return true; // Всі букви знайдені
}

void replaceWhileWithStars(string& str) {
    string target = "while";
    size_t pos = str.find(target);
    while (pos != string::npos) {
        str.replace(pos, target.length(), "**"); // Заміна
        pos = str.find(target, pos + 2); // Шукати наступне
    }
}

int main() {
    const string letters = "while";
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    if (containsAllLetters(input, letters)) {
        cout << "The string contains all letters from 'while'." << endl;
    }
    else {
        cout << "The string does not contain all letters from 'while'." << endl;
    }

    replaceWhileWithStars(input);
    cout << "Modified string: " << input << endl;

    return 0;
}