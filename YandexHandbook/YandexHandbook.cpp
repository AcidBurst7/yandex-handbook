﻿// YandexHandbook.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    /*
    * Задача А.
    Ход ферзя
    Шахматный ферзь ходит на любое количество клеток по диагонали, горизонтали или вертикали. 
    Даны две различные клетки на шахматной доске без фигур. 
    Определите, может ли ферзь попасть с первой клетки на вторую одним ходом.

    Формат ввода
    Программа получает на вход четыре целых числа от 1 до 8. 
    Первая пара чисел задаёт номер столбца и номер строки для первой клетки. 
    Вторая пара чисел аналогично задаёт вторую клетку.

    Формат вывода
    Программа должна вывести YES, если из первой клетки ходом ферзя можно попасть во вторую, или NO в противном случае.
    */
    
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == c || b == d || a - c == b - d || c - a == d - b || -(a - c) == b - d || -(c - a) == d - b)cout << "YES";
    else cout << "NO";
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
