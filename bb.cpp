#include <iostream>
using namespace std;

int main() {
    cout << "запущена" << endl;
    return 0;
}
void greetUser() {
    string name;
    cout << "Введите имя: ";
    cin >> name;
    cout << "Привет, " << name << "!" << endl;
}