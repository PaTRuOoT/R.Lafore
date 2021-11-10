/* 
*   На биржевых торгах за 1 фунт стерлингов давали $1.487, за франк — $0.172,
*   за немецкую марку — $0.584, а за японскую йену — $0.00955. Напишите
*   программу, которая запрашивает денежную сумму в долларах, а затем выводит 
*   эквивалентные суммы в других валютах
*/

// подключаем необходимые библиотеки
#include <iostream> // ввод/вывод данных (cout, cin)

int main(int argc, char const *argv[])
{
    std::cout << "Enter the amount, $: ";
    double count = 0.0; // объявляем переменную типа double
    std::cin >> count; // ввод данных с клавиатуры
    // вывод информации
    std::cout << count << "$ - " << count/1.487 << " GBP \n";
    std::cout << count << "$ - " << count/0.172 << " franc \n";
    std::cout << count << "$ - " << count/0.584 << " deutsche mark \n";
    std::cout << count << "$ - " << count/0.00955 << " yen \n"; 
    return 0;
}
