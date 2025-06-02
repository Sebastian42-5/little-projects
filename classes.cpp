#include <iostream>
#include <vector>
#include <string>


class Student{
    private:
        int age, standard;
        std::string first_name, last_name;
    public:
        int get_age(){
            return age;
        }
        void set_age(int a){
            age = a;
        }
        std::string get_first_name(){
            return first_name;
        }
        void set_first_name(std::string f){
            first_name = f;
        }
        std::string get_last_name(){
            return last_name;
        }
        void set_last_name(std::string l){
            last_name = l;
        }
        int get_standard(){
            return standard;
        }
        void set_standard(int s){
            standard = s;
        }
        std::string to_string(){
            return std::to_string(age) + "," + first_name + "," + last_name + "," + std::to_string(standard);
        } 
        
};


int main() {
    int age, standard;
    std::string first_name, last_name;
    
    std::cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    std::cout << st.get_age() << "\n";
    std::cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    std::cout << st.get_standard() << "\n";
    std::cout << "\n";
    std::cout << st.to_string();
    
    return 0;
}