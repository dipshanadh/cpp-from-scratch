// to demonstrate class templates by making a simple calculator

#include <iostream>

using std::cout;
using std::endl;

template <class T>
class Calculator
{
private:
    // two numbers of type T
    T num1, num2;

    // function prototypes
    T add();
    T subtract();
    T multiply();
    T divide();

public:
    // constructor
    Calculator(T num1, T num2)
    {
        this->num1 = num1;
        this->num2 = num2;
    }

    T getResult()
    {
        cout << num1 << " + " << num2 << " = " << add() << endl;
        cout << num1 << " - " << num2 << " = " << subtract() << endl;
        cout << num1 << " * " << num2 << " = " << multiply() << endl;
        cout << num1 << " / " << num2 << " = " << divide() << endl;
    }
};

// function declarations

template <class T>
T Calculator<T>::add()
{
    return num1 + num2;
}

template <class T>
T Calculator<T>::subtract()
{
    return num1 - num2;
}

template <class T>
T Calculator<T>::multiply()
{
    return num1 * num2;
}

template <class T>
T Calculator<T>::divide()
{
    return num1 / num2;
}

int main()
{
    cout << "\nInt results\n"
         << endl;

    Calculator<int> intCalc(5, 7);
    intCalc.getResult();

    cout << "\nFloat results\n"
         << endl;

    Calculator<float> floatCalc(2.5, 3.7);
    floatCalc.getResult();

    return 0;
}