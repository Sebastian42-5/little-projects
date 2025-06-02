#include <iostream>
#include <vector>
#include <sstream>
#include <string>

void printMatrix(const std::vector<std::vector<int>>& matrix){
    for(const auto&row : matrix){
        for(int value : row){
            std::cout << value << " ";
        }
        std::cout << "\n";
    }
}

int main(){
    int n;

    std::cout << "Enter the size of the matrix:";

    std::cin >> n;

    std::vector<std::vector<int>> matrix(n, std::vector<int>(n, 0));

    std::cin.ignore();

    std::string input;

    while(true){
        std::cout << "Enter the row and the column to change in your matrix separated by a space: ";

        std::getline(std::cin, input);

        if(input == "q"){
            break;
        }

        std::stringstream ss(input);

        int row, col;

        if(!(ss >> row >> col) || row < 0 || row >= n || col < 0 || col >= n){
            std::cout << "Invalid input. Try again.\n";
            continue;
        }

        matrix[row][col] = matrix[row][col] == 0 ? 1 : 0;

        std::cout << "Updated matrix:\n";
        printMatrix(matrix);

    }

    std::cout << "End of the program";

    return 0;

}