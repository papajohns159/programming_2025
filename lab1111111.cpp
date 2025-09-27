#include <iostream>
#include <iomanip>  // Для использования std::setprecision
#include <limits>   // Для получения информации о типах данных
int main() {
    std::cout << "number_one" << std::endl;
    std::cout << "Size of char: " << sizeof(char) << " bytes" << std::endl;
    std::cout << "Size of bool: " << sizeof(bool) << " bytes" << std::endl;
    std::cout << "Size of unsigned short: " << sizeof(unsigned short) << " bytes" << std::endl;
    std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "Size of unsigned int: " << sizeof(unsigned int) << " bytes" << std::endl;
    std::cout << "Size of unsigned long: " << sizeof(unsigned long) << " bytes" << std::endl;
    std::cout << "Size of unsigned long long: " << sizeof(unsigned long long) << " bytes" << std::endl;
    std::cout << "Size of float: " << sizeof(float) << " bytes" << std::endl;
    std::cout << "Size of double: " << sizeof(double) << " bytes" << std::endl;
    std::cout << "Size of long double: " << sizeof(long double) << " bytes" << std::endl;
    std::cout << "Size of string: " << sizeof(std::string) << " bytes" << std::endl; // Обратите внимание, sizeof(std::string) показывает размер объекта строки, а не её содержимого.   


    std::cout << "number_two" << std::endl;
    // Инициализация двух переменных типа bool
    bool a = true;
    bool b = false;

    // Вывод исходных значений переменных
    std::cout << " 'a': " << std::boolalpha << a << std::endl;
    std::cout << " 'b': " << std::boolalpha << b << std::endl;
    std::cout << std::endl; // Пустая строка для лучшей читаемости

    // Логическое И (AND)
    std::cout << "a && b (И): " << (a && b) << std::endl; // Результат: false

    // Логическое ИЛИ (OR)
    std::cout << "a || b (ИЛИ): " << (a || b) << std::endl; // Результат: true

    // Логическое НЕ (NOT) для переменной 'a'
    std::cout << "!a (НЕ a): " << (!a) << std::endl; // Результат: false

    // Логическое НЕ (NOT) для переменной 'b'
    std::cout << "!b (НЕ b): " << (!b) << std::endl; // Результат: true

    // Комбинированные операции
    std::cout << "(a && !b) || !a (И ИЛИ): " << ((a && !b) || !a) << std::endl; // Результат: (true && true) || false => true || false => true
    std::cout << "" << std::endl;
    std::cout << "number_four" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "lower case:" << std::endl;
    // Цикл от 'a' до 'z'
    for (char c = 'a'; c <= 'z'; ++c) {
    // Преобразование символа в его ASCII-код и вывод
    std::cout << c << ": " << static_cast<int>(c) << std::endl;
    }

    std::cout << "\nupper case:" << std::endl;
    // Цикл от 'A' до 'Z'
    for (char c = 'A'; c <= 'Z'; ++c) {
    // Преобразование символа в его ASCII-код и вывод
    std::cout << c << ": " << static_cast<int>(c) << std::endl;
    }
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "number_five" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;

    // Заданные переменные
    char var1 = 'A';
    int var2 = 42;
    float var3 = 3.14f;
    double var4 = 2.71828;
    long double var5 = 1.23456789012345L;
    std::string var6 = "Hello World";
    bool var7 = true;
    unsigned short var8 = (unsigned short)65535;
    unsigned int var9 = 4000000000U;
    unsigned long var10 = 3000000000UL;
    unsigned long long var11 = 18446744073709551615ULL;

    // Определение и вывод типа каждой переменной
    std::cout << "type var1: " << typeid(var1).name() << std::endl;
    std::cout << "type var2: " << typeid(var2).name() << std::endl;
    std::cout << "type var3: " << typeid(var3).name() << std::endl;
    std::cout << "type var4: " << typeid(var4).name() << std::endl;
    std::cout << "type var5: " << typeid(var5).name() << std::endl;
    std::cout << "type var6: " << typeid(var6).name() << std::endl;
    std::cout << "type var7: " << typeid(var7).name() << std::endl;
    std::cout << "type var8: " << typeid(var8).name() << std::endl;
    std::cout << "type var9: " << typeid(var9).name() << std::endl;
    std::cout << "type var10: " << typeid(var10).name() << std::endl;
    std::cout << "type var11: " << typeid(var11).name() << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "number_sex" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    // Объявление и инициализация переменной типа float
    float float_value = 0.3f;
    // Объявление и инициализация переменной типа double
    double double_value = 0.3;

    // Установка высокой точности вывода для float
    std::cout << "The value 0.3 in float (20 decimal places): "
        << std::fixed << std::setprecision(20) << float_value << std::endl;

    // Установка высокой точности вывода для double
    std::cout << "The value 0.3 in double (20 decimal places): "
        << std::fixed << std::setprecision(20) << double_value << std::endl;

    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "number_se7en" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    // Получение информации о типе int
    int min_int = std::numeric_limits<int>::min(); // Минимальное значение int
    int max_int = std::numeric_limits<int>::max(); // Максимальное значение int
    size_t size_int = sizeof(int);               // Размер типа int в байтах

    std::cout << "data type : int" << std::endl;
    std::cout << "size: " << size_int << " byte " << std::endl;
    std::cout << "min value: " << min_int << std::endl;
    std::cout << "max value: " << max_int << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "number_eight" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;

    double celsius;

    // Ввод температуры в градусах Цельсия
    std::cout << "enter temperature in celcius: ";
    std::cin >> celsius;

    // Преобразование в Фаренгейты
    // Используем 9.0 и 5.0 вместо 9 и 5 для выполнения вычислений с плавающей точкой
    double fahrenheit = (celsius * (9.0 / 5.0)) + 32.0;

    // Преобразование в Кельвины
    // Прибавляем 273.15 к температуре в Цельсиях
    double kelvin = celsius + 273.15;

    // Вывод результатов
    std::cout << "temperature in fahrenheit: " << fahrenheit << std::endl;
    std::cout << "temperature in kelvin: " << kelvin << std::endl;

    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "number_NEIN" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    double celsius_temp;

    std::cout << "Enter the temperature in degrees Celsius: ";
    std::cin >> celsius_temp;

    // Преобразование в Фаренгейты с использованием неявного преобразования
    // 9/5 будет выполнено как деление целых чисел (9/5 = 1),
    // поэтому используются 9.0 и 5.0 для получения плавающей точки.
    double fahrenheit_temp = (celsius_temp * 9.0 / 5.0) + 32.0;

    // Преобразование в Кельвины
    double kelvin_temp = celsius_temp + 273.15;

    std::cout << std::fixed << std::setprecision(2); // Устанавливаем 2 знака после запятой
    std::cout << celsius_temp << " degrees Celsius equivalent:" << std::endl;
    std::cout << fahrenheit_temp << " fahrenheit degrees" << std::endl;
    std::cout << kelvin_temp << " kelvin" << std::endl;

    return 0;
    }
