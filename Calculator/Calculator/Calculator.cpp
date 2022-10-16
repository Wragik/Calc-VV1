// Calculator.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
using namespace std;
class Input
{
protected:
    double a, b,g;
    string z;
public:
    //bool Memory();
    double GetA()
    {
        return a;
    }
    void SetA(double a)
    {
        this->a = a;
    }
    double GetB()
    {
        return a;
    }
    void SetB(double b)
    {
        this->b = b;
    }
    string GetZ()
    {
        return z;
    }
    void SetZ(string z)
    {
        this->z = z;
    }
    double GetG()
    {
        return g;
    }
};
class Unu : public Input {
public:

    void Uno(double a, double b, string z)
    {
        if (z == "+")
        {
            g = a + b;


        }
        else
        {
            if (z == "-")
            {
                g = a - b;

            }
            else
            {
                if (z == "/")
                {
                    g = a / b;
                    if (b == 0)
                    {
                        cout << "Ошибка, на ноль делить нельзя";
                        exit(1);
                    }
                }
                else
                {
                    if (z == "*")
                    {
                        g = a * b;
                    }
                    else
                    {

                        cout << "Ошибка";
                        exit(1);
                    }
                }
            }
        }
        
        
    }
};
int main()
{
    setlocale(LC_ALL, "rus");
    double a, b,k;
    string c;
    Unu u;
    cout << "Введите первое число ";
    cin >> a;
    u.SetA(a);
    cout << "Введите второе число ";
    cin >> b;
    u.SetB(b);
    cout << "Введите арифметическое действие " << "\n";
    cout << "сложение +, вычитание -, умножение *, деление / \n";
    cin >> c;
    u.SetZ(c);
    u.Uno(a, b, c);
    printf("Ответ:%.4f", u.GetG());
}

