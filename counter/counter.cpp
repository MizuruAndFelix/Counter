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
    
    Counter(int num_);
    

    int increase();
    int decreace();
    int set1();
    int set();
    int show();
};

int Counter::increase()
{
    num = ++num;
    return num;
}

int Counter::decreace()
{
    num = --num;
    return num;
}
int Counter::set1()
{
    num = 1;
    return num;
}
int Counter::set()
{
    int t;
    cin >> t;
    num = t;
    return num;
}
int Counter::show()
{
    std::cout << num << endl;
    return num;
}

//конструкторы -------------------
Counter::Counter(int num_)
{
    num = num_;
}



int main()
{
    setlocale(LC_ALL, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string YN;
    string c;
    int t=0;
   

    std::cout << "Вы хотите указать начальное значение счетчика? Введите да или нет: ";
    cin >> YN;
    if (YN == "да")
    {
        std::cout << "\nВведите начальное положение счетчика: ";
        cin >> t;
        Counter S(t);

       while (c != "x")
       {
           std::cout << "Введите команду ( '+' '-' '=' или 'x'): ";
           cin >> c;

           if (c == "+")
           {
               S.increase();
           }
           if (c == "-")
           {
               S.decreace();
           }
           if (c == "=")
           {
               S.show();
           }   
       }

        
    }
    if (YN == "нет")
    {
        Counter S(1);
        std::cout << "\nНачальное положение счетчика установлено на 1\n";

        while (c != "x")
        {
            std::cout << "Введите команду ( '+' '-' '=' или 'x'): ";
            cin >> c;

            if (c == "+")
            {
                S.increase();
            }
            if (c == "-")
            {
                S.decreace();
            }
            if (c == "=")
            {
                S.show();
            }
        }
    }

    std::cout << "До свидания!";

}
