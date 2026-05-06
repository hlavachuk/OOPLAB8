#ifndef TASK2_H            // перевіряю, чи цей файл вже підключали
#define TASK2_H            // якщо ні — "позначаю", що він уже підключений

#include <vector>          // підключаю vector (динамічний масив)

using namespace std;       // щоб не писати std::

template <typename T>     // шаблон, щоб працювало з будь-яким типом
void splitVector(const vector<T>& input, vector<T>& even, vector<T>& odd) {
    // функція, яка ділить елементи на парні і непарні

    for (auto i = input.begin(); i != input.end(); i++) {   // проходжусь по всіх елементах вхідного вектора

        if (*i % 2 == 0) {        // якщо число парне
            even.push_back(*i);   // додаю його в вектор even
        }
        else {                    // якщо непарне
            odd.push_back(*i);    // додаю його в вектор odd
        }
    }
}

#endif                // кінець захисту від повторного підключення