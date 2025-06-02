#include <iostream> 

// int main(){

//     std::string name = "Sebastian";

//     int age = 12;

//     bool student = true;

//     std::cout << &name << "\n";
//     std::cout << &age << "\n";
//     std::cout << &student << "\n";

//     return 0;
// }





// int searchArray(int array[], int size, int element);


// int main(){
//     int numbers[] = {1, 2, 3, 4, 5, 6};

//     int size = sizeof(numbers) / sizeof(numbers[0]);

//     int index;

//     int my_num;

//     std::cout << "Enter the number you want the index of in your array: ";

//     std::cin >> my_num;

//     index = searchArray(numbers, size, my_num);

//     if (index == -1){
//         std::cout << "The specified number is not on the array";
//     }

//     else{
//         std::cout << "The index of the elem " << my_num << " is: " << index;

//     }

// }

// int searchArray(int array[], int size, int element){
//     for (int i; i < size; i++){
//         if(array[i] == element){
//             return i;
//         }
//     }
//     return -1;
// }


int binarySearch(int array[], int elem, int high, int low);

int main(){

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int low = 0;

    int high = (sizeof(numbers) / sizeof(numbers[0])) - 1;

    int elem = 7;

    int index = binarySearch(numbers, elem, low, high);

    std::cout << "The index of the number " << elem << " is " << index;


    return 0;
}



int binarySearch(int array[], int elem, int low, int high){
    if (high >= low){
        int mid = (high + low) / 2;

        if (array[mid] == elem){
            return mid;
        }
        else if (array[mid] > elem){
            return binarySearch(array, elem, low, mid - 1);
        }
        else {
            return binarySearch(array, elem, mid + 1, high);
        }
    } 

    return -1;

}