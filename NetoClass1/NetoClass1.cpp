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
        while (num1 == 0)
        {
            if (num1 == 0)
            {
                std::cout << "Неверное значение!!" << "\n";
            }
            std::cout << "Введите num1: \n";
            std::cin >> num1;
        }
        return this->num1 = num1;
    }
    bool set_num2(double num2)
    {
        while (num2 == 0)
        {
            if (num2 == 0)
            {
                std::cout << "Неверное значение!!" << "\n";
            }
            std::cout << "Введите num2: \n";
            std::cin >> num2;
        }
        return this->num2 = num2;
    }
};

int main()
{
    setlocale(LC_ALL, "Ru");
    double num1, num2;

    Calculator calc;
    std::cout << "Введите num1: \n";
    std::cin >> num1;
    std::cout << "Введите num2: \n";
    std::cin >> num2;

    calc.set_num1(num1);
    calc.set_num2(num2);
    std::cout << "num1 + num2 = " << calc.add() << "\n";
    std::cout << "num1 * num2 = " << calc.multiply() << "\n";
    std::cout << "num2 - num1 = " << calc.subtract_1_2() << "\n";
    std::cout << "num1 - num2 = " << calc.subtract_2_1() << "\n";
    std::cout << "num1 / num2 = " << calc.divide_1_2() << "\n";
    std::cout << "num2 / num1 = " << calc.divide_2_1() << "\n";
}
