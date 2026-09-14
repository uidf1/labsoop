#include <iostream>

using namespace std;
int main()
{
    // 0 пункт

    cout<<"Размер целочисленного типа(int): "<<sizeof(int)<<endl;
    cout<<"Размер типа с плавающей запятой(float): "<<sizeof(float)<<endl;
    cout<<"Размера типа с плавающей запятой(double): "<<sizeof(double)<<endl;
    cout<<"Размер булевого типа(bool): "<<sizeof(bool)<<endl;
    cout<<"Размер символьного типа(char): "<<sizeof(char)<<endl<<endl;
    cout<<"чтото";
    // 2 пункт(преобразование типов)
    
    typedef unsigned long long int ULLINT;
    
    typedef unsigned short int USINT;

    ULLINT bignumber = 21341232144;
    USINT smallnumber = 10;


    cout<<"Размер unsigned long long int: "<<sizeof(bignumber)<<endl;
    cout<<"Размер unsigned short int: "<<sizeof(smallnumber)<<endl<<endl;
    //3 пункт перечисления и действия с ними
    
    enum Color {red,green,blue,yellow,orange}; //без инициализации констант

    enum Errors {bad_internet = 10, not_working_site = 20,bad_gateway = 99};

    Color colorOfHouse = blue;
    cout<< 12+blue<<endl;
    if (colorOfHouse==blue)
    {
        cout<<"Правда"<<endl;
    }
    cout<<"Размер перечисления Color: "<<sizeof(Color)<<endl;
    cout<<"Размер перечисления Errors: "<<sizeof(Errors)<<endl;

    //4 структура

    struct Student
    {
        char * Name;
        int Age;
        bool Stipendia;
        double sredniyBall;
        float something;
    };

    cout<<"Размер всей структуры Student: "<<sizeof(Student)<<endl;
    cout<<"Общий размер из пункта 1: 18"<<endl<<endl;

    Student First;

    cout<<"Размер поля имени char: "<<sizeof(First.Name)<<endl;
    cout<<"Размер поля возраста int: "<<sizeof(First.Age)<<endl;
    cout<<"Размер поля булевой переменной bool: "<<sizeof(First.Stipendia)<<endl;
    cout<<"Размер поля с плавающей запятой double: "<<sizeof(First.sredniyBall)<<endl;
    cout<<"Размер поля с плавающей запятой float: "<<sizeof(First.something)<<endl<<endl;

    //5 преобразования типов
    //неявное
    int year= 2025;
    double marks = 4.12;
    cout<<"Сумма int и double = "<<year+marks<<endl<<endl;
    //явное
    int integer = 15;
    double doubleFloating = 102.12341;
    bool isTrue = false;
    char symb = 'W';
    float floating =12.213;

    cout<< "умножение"<<marks*symb<<endl;


    double a = double(integer);
    int b = int(symb);
    int c = int(doubleFloating);
    int d = int(isTrue);

    cout << "int -> double: " << a << endl;
    cout << "char -> int: " << b << endl;
    cout << "double -> int: " << c << endl;
    cout << "bool -> int: " << d << endl<<endl;

    // 6 механизм определения типа в реально времени

    cout << "Тип Integer: " << typeid(integer).name() << endl;
    cout << "Тип Floating: " << typeid(floating).name() << endl;
    cout << "Тип doubleFloating: " << typeid(doubleFloating).name() << endl;
    cout << "Тип isTrue: " << typeid(isTrue).name() << endl;
    cout << "Тип symb: " << typeid(symb).name() << endl<<endl;

    cout << "Тип Integer + Floating: " << typeid(integer + floating).name() << endl;
    cout << "Тип Integer * doubleFloating: " << typeid(integer * doubleFloating).name() << endl;
}