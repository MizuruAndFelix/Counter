#include <iostream>
#include <locale.h>
#include <windows.h>
#include <string>
using namespace std;

class Counter
{
private:
    int num;

public:
    Counter();
    Counter(int num_);
    

    int Увеличить();
    int Уменьшить();
    int Установить1();
    int Установить();
    int Вывести();
};

int Counter::Увеличить()
{
    num = ++num;
    return num;
}

int Counter::Уменьшить()
{
    num = --num;
    return num;
}
int Counter::Установить1()
{
    num = 1;
    return num;
}
int Counter::Установить()
{
    int t;
    cin >> t;
    num = t;
    return num;
}
int Counter::Вывести()
{
    cout << num << endl;
    return num;
}

//конструкторы -------------------
Counter::Counter(int num_)
{
    num = num_;
}
Counter::Counter(){}


int main()
{
    setlocale(LC_ALL, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string YN;
    string c;

   

    cout << "Вы хотите указать начальное значение счетчика? Введите да или нет: ";
    cin >> YN;
    if (YN == "да")
    {
        cout << "\nВведите начальное положение счетчика: ";
        Counter S;
        S.Установить();//установил


       while (c != "x")
       {
           cout << "Введите команду ( '+' '-' '=' или 'x'): ";
           cin >> c;

           if (c == "+")
           {
               S.Увеличить();
           }
           if (c == "-")
           {
               S.Уменьшить();
           }
           if (c == "=")
           {
               S.Вывести();
           }   
       }

        
    }
    if (YN == "нет")
    {
        Counter S(1);
        cout << "\nНачальное положение счетчика установлено на 1\n";

        while (c != "x")
        {
            cout << "Введите команду ( '+' '-' '=' или 'x'): ";
            cin >> c;

            if (c == "+")
            {
                S.Увеличить();
            }
            if (c == "-")
            {
                S.Уменьшить();
            }
            if (c == "=")
            {
                S.Вывести();
            }
        }
    }

    cout << "До свидания!";

}
