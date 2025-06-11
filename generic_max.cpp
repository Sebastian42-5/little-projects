#include <iostream>

template <typename T> T myMax(T a, T b){
    return (a > b) ? a : b;
}

int main(){
    std::cout << myMax<int>(3, 7) << std::endl;;

    std::cout << myMax<double>(2.5, 3.7) << std::endl;

    return 0;
}
