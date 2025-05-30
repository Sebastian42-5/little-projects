// #include <iostream>

// namespace first{
//     int x = 1;
// }

// namespace second{
//     int x = 2;
// }

// int main(){
//     using namespace first;

//     std::cout << x; 

//     return 0;
// }

#include <iostream>
#include <cmath>


// int main(){
//     double a;
//     double b;

//     std::cout << "Enter a: ";

//     std::cin >> a;

//     std::cout << "Enter b: ";

//     std::cin >> b;

//     double c = sqrt(pow(a, 2) + pow(b, 2));

//     std::cout << c;

//     return 0;
// }

int main(){
    char op;

    double a, b, result;

    std::cout << "This is a calculator.";
    
    std::cout << "Enter value of a: ";
    std::cin >> a;

    std::cout << "Enter the value for b: ";
    std::cin >> b;

    std::cout << "Enter the operand (+, -, * or /): ";
    std::cin >> op;

    switch(op){
        case '+':
            result = a + b;
            std::cout << "Result: " << result << "\n";
            break;

        case '-':
            result = a - b;
            std::cout << "Result:" << result << "\n";
            break;

        case '*':
            result = a * b;
            std::cout << "Result: " << result << "\n";
            break;

        case '/':
            if(b == 0){
                std::cout << "Division by zero error.";
            } else{
                result = a / b;
                std::cout << "Result: " << result << "\n";
                break;
            }

        default:
            std::cout << "Invalid operator." << "\n";
            break;
    }

    return 0;

}



//   || checks if one of the conditions is true 




/*
wkdw\d
wjdowjd
jwodjw

*/