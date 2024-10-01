#include <iostream>
using namespace std;

int main()
{
    //1
    //int sec;
    //int h;
    //int m;
    //cout << "Введите количество секунд прошедшее с начала дня: ";
    //cin >> sec;
    //h = sec / 60 / 60;
    //m = sec / 60 % 60;
    //sec = sec % 3600 % 60;
    //cout << "Текущее время \nЧасов: " << h << "\nМинут: " << m << "\nСекунд: " << sec;
    //h = 23 - h;
    //m = 59 - m;
    //sec = 60 - sec;
    //cout << "\nДо полуночи \nЧасов: " << h << "\nМинут: " << m << "\nСекунд: " << sec;


    //2
    int sec;
    int h;
    cout << "Введите количество секунд прошедшее с начала дня: ";
    cin >> sec;
    int h2 = (28800 - sec) / 3600;
    cout << "Часов: " << h2;
}
