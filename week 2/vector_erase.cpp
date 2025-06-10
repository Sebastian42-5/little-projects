#include <iostream>
#include <vector>
#include <cmath>

int main(){
    int n;
    std::cin >> n;

    std::vector<int> my_vec;

    int temp;

    for(int i = 0; i < n; i++){
        std::cin >> temp;
        my_vec.push_back(temp);
    }

    int index;
    std::cin >> index;

    int start, end;

    std::cin >> start >> end;

    my_vec.erase(my_vec.begin() + index);

    my_vec.erase(my_vec.begin() + start, my_vec.begin() + end);

    int length = size(my_vec);

    std::cout << length << std::endl;

    for(int i = 0; i < length; i++){
        std::cout << my_vec[i] << " ";
    }

    return 0;
}