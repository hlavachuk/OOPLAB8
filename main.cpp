#include <iostream>        // підключаю вивід в консоль (cout)
#include "Task1.h"         // підключаю перше завдання (сортування і merge)
#include "Task2.h"         // підключаю друге завдання (split vector)
#include "Task3.h"         // підключаю третє завдання (паліндром)

using namespace std;       // щоб не писати std::

struct Product {           // створюю структуру Product
    double price;          // поле ціни

    bool operator < (const Product& other) const {  // перевизначаю оператор <
        return price < other.price;   // порівнюю товари по ціні
    }
};

int main() {               // головна функція програми

    cout << "====TASK1====" << endl;   // виводжу назву першого завдання

    array<Product, 2> a = { { {10.5}, {20.5} } };   // перший масив товарів
    array<Product, 3> b = { { {15.5}, {25.5}, {4.0} } };  // другий масив товарів

    auto result = mergeArrays(a, b);   // об'єдную масиви в один відсортований

    cout << "Merged Arrays:" << endl;  // підпис

    for (auto it = result.begin(); it != result.end(); it++) {  // проходжусь по результату
        cout << it->price << " ";   // виводжу ціну кожного товару
    }

    cout << endl;   // просто перенос рядка
    cout << endl;   // ще один перенос

    cout << "====TASK2====" << endl;   // друге завдання

    vector<int> input = { 1, 2, 3, 4, 5, 6 };  // вхідний вектор
    vector<int> even;   // сюди будуть парні
    vector<int> odd;    // сюди непарні

    splitVector(input, even, odd);   // ділю числа на парні і непарні

    cout << "Even numbers:" << endl;  // підпис

    for (auto x : even) cout << x << " ";  // виводжу всі парні

    cout << endl;

    cout << "Odd numbers:" << endl;   // підпис

    for (auto x : odd) cout << x << " ";   // виводжу всі непарні

    cout << endl;
    cout << endl;

    cout << "====TASK3====" << endl;   // третє завдання

    cout << "Testing with a string:" << endl;   // перевірка рядка

    string word = "radar";   // слово
    deque<char> dq;          // створюю deque для символів

    for (char c : word) dq.push_back(c);  // закидаю кожну букву в deque

    if (isPalindrome(dq)) {   // перевіряю чи паліндром
        cout << word << " is a palindrome." << endl;
    }
    else {
        cout << word << " is not a palindrome." << endl;
    }

    cout << endl;

    cout << "Testing with a deque of numbers:" << endl;  // перевірка чисел

    deque<int> numDeque = { 1, 2, 3, 2, 1 };  // deque чисел

    if (isPalindrome(numDeque)) {   // перевіряю
        cout << "The deque of numbers is a palindrome." << endl;
    }
    else {
        cout << "The deque of numbers is not a palindrome." << endl;
    }

    return 0;   // завершення програми
}