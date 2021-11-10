/* 
*   Напишите программу, выводящую следующую таблицу:
*   1990     135
*   1991    7290
*   1992   11300
*   1993   16200 
*/

// подключаем необходимые библиотеки
#include <iostream> // ввод/вывод данных (cout, cin)
#include <iomanip> // для манипулятора setw

int main () {
    using std::cout; // пространство имен std для cout
    using std::endl; // пространство имен std для endl
    using std::setw; // пространство имен std для setw
    cout << 1990 << setw(8) << 135 << endl;
    cout << 1991 << setw(8) << 7290 << endl;
    cout << 1992 << setw(8) << 11300 << endl;
    cout << 1993 << setw(8) << 16200 << endl;
    return 0;
}