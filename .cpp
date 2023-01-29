#include <iostream>
#include <cmath>

int main() {
    double num1, num2;
    char operation;

    std::cout &#8203;`oaicite:{"index":0,"invalid_reason":"Malformed citation << \"Enter the first number: \";\n    std::cin >>"}`&#8203; num1;
    std::cout &#8203;`oaicite:{"index":1,"invalid_reason":"Malformed citation << \"Enter the second number: \";\n    std::cin >>"}`&#8203; num2;
    std::cout &#8203;`oaicite:{"index":2,"invalid_reason":"Malformed citation << \"Enter the operation (+, -, *, /): \";\n    std::cin >>"}`&#8203; operation;

    switch (operation) {
        case '+':
            std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
            break;
        case '/':
            if (num2 == 0) {
                std::cout << "Error: Division by zero\n";
            } else {
                std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
            }
            break;
        default:
            std::cout << "Error: Invalid operation\n";
            break;
    }

    return 0;
}
