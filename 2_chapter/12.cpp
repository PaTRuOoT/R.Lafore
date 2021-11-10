/* 
 Напишите программу, выполняющую действия, обратные тем, которые
описаны в упражнении 10, то есть запрашивающую у пользователя сумму,
указанную в десятичных фунтах, и переводящую ее в старую систему фунтов, 
шиллингов и пенсов. Пример взаимодействия программы с пользователем может 
выглядеть так:
Введите число десятичных фунтов: 3.51
Эквивалентная сумма в старой форме записи: £3.10.2
*/

// подключаем необходимые библиотеки
#include <iostream> // ввод/вывод данных (cout, cin)
#include <iomanip> // для манипулятора setprecision

int main(int argc, char const *argv[])
{
    // преобразование старых шиллингов и пессо в новые пессо по формуле:
    // (Ш*12+П)*100/240
    using std::cout; // пространство имен std для cout
    using std::endl; // пространство имен std для endl
    using std::cin; // пространство имен std для cin
    cout << "Enter the number of decimal pounds, J: ";
    double decpounds = 0.0; // decimal pounds
    cin >> decpounds;
    double decfrac = 0.0; // десятичная дробная часть
    int pounds = 0; // pounds
    pounds = static_cast<int>(decpounds); // отбрасывание дробной части
    decfrac = decpounds - pounds; // прибавление дробной части
    cout << "Pounds, J: " << pounds << "." 
        << std::setprecision(2); // установка точности 2 знака после запятой
    //    << (shillings*12+pesso)*100/240 << endl;
    return 0;
}
