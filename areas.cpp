#include <iostream>
#include <cmath>
//Definiendo el valor de pi
const double PI = 3.14159265358979323846;

// Funcion para calcular el area de un circulo, formula radio al cuadrado por pi
double circulo(double radio) {
    return PI * radio * radio;
}

// Funcion para calcular el area de un cuadrado, formula lado por lado
double cuadrado(double lado) {
    return lado * lado;
}

// Funcion para calcular el area de un triangulo,  formula (base por altura)/2 
double triangulo(double base, double altura) {
    return 0.5 * base * altura;
}

int main() {
    int opcion;
    double area = 0.0;

    while (true) {
        std::cout << "Seleccione la figura para calcular el area:\n";
        std::cout << "1. Circulo\n";
        std::cout << "2. Cuadrado\n";
        std::cout << "3. Triangulo\n";
        std::cin >> opcion;

        if (opcion == 1) {
            double radio;
            std::cout << "Ingrese el radio del circulo: ";
            std::cin >> radio;
            area = circulo(radio);
            break;
        } else if (opcion == 2) {
            double lado;
            std::cout << "Ingrese el lado del cuadrado: ";
            std::cin >> lado;
            area = cuadrado(lado);
            break;
        } else if (opcion == 3) {
            double base, altura;
            std::cout << "Ingrese la base del triangulo: ";
            std::cin >> base;
            std::cout << "Ingrese la altura del triangulo: ";
            std::cin >> altura;
            area = triangulo(base, altura);
            break;
        } else {
            std::cout << "Opcion no valida, por favor intente nuevamente.\n";
        }
    }

    std::cout << "El area es: " << area << std::endl;

    return 0;
}