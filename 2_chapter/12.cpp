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
    int pounds, shhiling, pesso;
    pounds = static_cast<int>(decpounds); // целая часть
    shhiling = static_cast<int>((decpounds*240-pounds*240)/12); // целая часть от
        // (всего пессо (фунты * 240) - целая часть фунтов * 240) / 12
    // пессо = всего пессо - пессо фунтами - пессо шилингами
    pesso = static_cast<int>((decpounds*240)-(pounds*240) - (shhiling*12)); 
    cout << "Pounds, J: " << pounds << "." << shhiling << "." << pesso << endl;
    return 0;
}
