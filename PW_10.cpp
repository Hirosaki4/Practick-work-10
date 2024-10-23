#include <iostream>
#include <string>
using namespace std;

// Функція, яка приймає рядок по посиланню та додає до нього новий текст
void addText(string& str, const string& newText) {
    str += newText;
}

int main() {
    string originalText = "Hello, ";
    string additionalText = "world!";

    // Передаємо рядок по посиланню
    addText(originalText, additionalText);

    // Виводимо результат
    cout << "Updated string: " << originalText << endl;

    return 0;
}
