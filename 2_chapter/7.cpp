/* 
*   Температуру, измеренную в градусах по Цельсию, можно перевести в градусы 
*   по Фаренгейту путем умножения на 9/5 и сложения с числом 32. Напишите 
*   программу, запрашивающую температуру в градусах по Цельсию
*   и отображающую ее эквивалент по Фаренгейту.
*/

// подключаем необходимые библиотеки
#include <iostream> // ввод/вывод данных (cout, cin)

int main(int argc, char const *argv[])
{
    std::cout << "Enter temperature, C: ";
    double temperature = 0.0;
    std::cin >> temperature;
    std:: cout << temperature << "C - " << (temperature*9/5)+32 << "F \n";
    return 0;
}
