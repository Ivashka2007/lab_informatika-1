#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");

    /*
    int a, b, c, S;
    std::cout << "Введите первую сторону треугольника: ";
    std::cin >> a;
    std::cout << "Введите вторую сторону треуголника: ";
    std::cin >> b;
    std::cout << "Введите третью сторону треугольника: ";
    std::cin >> c;

    if ((a + b) < c || (a + c) < b || (b + c) < a){
        std::cout << "Треугольника не существует ";
    }
    else{
        S = a * b * c;
        std::cout << "Площадь треугольника: " << S;
    }
    *
    int K, M, N, S;
    bool isValid1Input = false;
    bool isValid2Input = false;
    bool isValid3Input = false;
    while (!isValid1Input) {
        std::cout << "Введите первое число: ";
        if (std::cin >> K) {
            isValid1Input = true;
        }
        else {
            std::cout << "Некорректный ввод!\n";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }
    }
    while (!isValid2Input) {
        std::cout << "Введите второе число: ";
        if (std::cin >> M) {
            isValid2Input = true;
        }
        else {
            std::cout << "Некорректный ввод!\n";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }
    }
    while (!isValid3Input) {
        std::cout << "Введите третье число: ";
        if (std::cin >> N) {
            isValid3Input = true;
        }
        else {
            std::cout << "Некорректный ввод!\n";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }
    }
    if (M > N) {
        S = M;
        M = N;
        N = S;
    }
    if (K > M) {
        S = K;
        K = M;
        M = S;
    }

    if (M > N) {
        S = M;
        M = N;
        N = S;
    }
    std::cout << K << " < " << M << " < " << N;
}

