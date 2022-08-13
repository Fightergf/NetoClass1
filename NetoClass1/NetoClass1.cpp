#include <iostream>

class Calculator
{
public:
    double num1;
    double num2;
    Calculator()
    {
    this->num1 = 0;
    this->num2 = 0;
    }
public:
    double add()
    {
        return num1 + num2;
    }
    double multiply()
    {
        return num1 * num2;
    }
    double subtract_1_2()
    {
        return num2 - num1;
    }
    double subtract_2_1()
    {
        return num1 - num2;
    }
    double divide_1_2()
    {
        return num1 / num2;
    }
    double divide_2_1()
    {
        return num2 / num1;
    }
    bool set_num1(double num1)
    {
        return this->num1 = num1;
    }
    bool set_num2(double num2)
    {
        return this->num2 = num2;
    }
};

void setValue1(Calculator &calc)
{
    double num1;
    bool i = true;
    while (i)
    {
        std::cout << "Введите num1: \n";
        std::cin >> num1;
        if (num1 == 0)
        {
            std::cout << "Неверное значение!!" << "\n";
        }
        else
        {
            calc.set_num1(num1);
            i = false;
        }
    }
}
void setValue2(Calculator& calc)
{
    double num2;
    bool i = true;
    while (i)
    {
        std::cout << "Введите num2: \n";
        std::cin >> num2;
        if (num2 == 0)
        {
            std::cout << "Неверное значение!!" << "\n";
        }
        else
        {
            calc.set_num2(num2);
            i = false;
        }
    }
}

void printResult(Calculator &calc)
{
    std::cout << "num1 + num2 = " << calc.add() << "\n";
    std::cout << "num1 * num2 = " << calc.multiply() << "\n";
    std::cout << "num2 - num1 = " << calc.subtract_1_2() << "\n";
    std::cout << "num1 - num2 = " << calc.subtract_2_1() << "\n";
    std::cout << "num1 / num2 = " << calc.divide_1_2() << "\n";
    std::cout << "num2 / num1 = " << calc.divide_2_1() << "\n";
}

int main()
{
    setlocale(LC_ALL, "Ru");

    Calculator calc;
    
    setValue1(calc);
    setValue2(calc);

    printResult(calc);
}
