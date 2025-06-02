#include <iostream>
#include <string>

// struct Student{
//     int age;
//     std::string first_name;
//     std::string last_name;
//     int standard;
// };

// int main(){
//     Student st;

//     std::cin >> st.age >> st.first_name >> st.last_name >> st.standard;

//     std::cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;

//     return 0;
// }


// double square(double length);


// int main(){
//     double length;

//     return 0;
// }

// double square(double length){
//     double result = length * length;

//     return result;
// }


int main(){

    int t;

    std::cin >> t;

    while(t--){
        int a, b, c;
        std::cin >> a, b, c;

        if(a+b == c){
            std::cout << "+";
        }

        else{
            std::cout << "-";
        }

        std::cout << "\n";
    }
}



