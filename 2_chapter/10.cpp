/* 
Устаревшая денежная система Великобритании состояла из фунтов, шиллингов и 
пенсов. 1 фунт был равен 20 шиллингам, а 1 шиллинг — 12 пенсам. Для записи 
использовалась система, состоящая из знака £ и трех десятичных значений, 
разделенных точками. Например, запись £5.2.8 обозначала 5 фунтов, 2 шиллинга 
и 8 пенсов (пенс — множественное число от
пенни). Современная денежная система, принятая в 50-е годы XX века, состоит 
только из фунтов и пенсов, причем один фунт равен 100 пенсам. Такой фунт 
называют десятичным. Таким образом, в новой денежной системе указанная сумма 
будет обозначаться как £5.13 (если быть точнее,
£5.1333333). Напишите программу, которая будет преобразовывать сумму,
записанную в старом формате (фунты, шиллинги, пенсы), в новый формат
(фунты, пенсы). Форматом взаимодействия программы с пользователем
может являться следующий:
Введите количество фунтов: 7
Введите количество шиллингов: 17
Введите количество пенсов: 9
Десятичных фунтов: £7.89
В большинстве компиляторов для представления знака £ используется
десятичный код 156. Некоторые компиляторы позволяют скопировать
знак фунта прямо из таблицы символов Windows.
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
    cout << "Enter the number of pounds, J: ";
    double pounds = 0; // pounds
    cin >> pounds;
    cout << "Enter the amount of shillings, S: ";
    double shillings = 0; // shillings
    cin >> shillings;
    cout << "Enter the amount of pesso, P: ";
    double pesso = 0; // pesso
    cin >> pesso;
    cout << "Decimal pounds, J: " << pounds << "." 
        << std::setprecision(2) // установка точности 2 знака после запятой
        << (shillings*12+pesso)*100/240 << endl;
    return 0;
}
