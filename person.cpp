#include <cmath>
#include <iostream>
#include <cstdio>
#include <vector>
#include <string>


class Person{
    public:
        std::string name;
        int age;
        virtual void getdata() = 0;
        virtual void putdata() = 0;
        virtual ~Person() {}
};


class Student : public Person{
    private:
        int marks[6];
        int cur_id;
        static int next_id;
    public:
        Student(){
            cur_id = next_id++;
        }

        void getdata() override{
            std::cin >> name >> age;

            for(int i = 0; i < 6; i++){
                std::cin >> marks[i];
            }
        }
        void putdata() override{
            int n = sizeof(marks) / sizeof(marks[0]);
            int sum = 0;

            for(int i = 0; i < n; i++){
                sum += marks[i];
            }
            std::cout << name << " " << age << " " << sum << " " << cur_id << std::endl;
        }
};

int Student::next_id = 1;


class Professor : public Person{
    private:
        int publications, cur_id;
        static int next_id;

    public:
        Professor() {
            cur_id = next_id++;
        }
        
        void getdata() override{
            std::cin >> name >> age >> publications;
        }
        void putdata() override{
            std::cout << name << " " << age << " " << publications << " " << cur_id << std::endl;
        }
};


int main(){
    int n, val;

    std::cin >> n;

    std::vector<Person*> people;

    for(int i = 0; i < n; i++){
        std::cin >> val;

        if(val == 1){
            people.push_back(new Professor);
        }

        else people.push_back(new Student);

        people[i] -> getdata();
    }
    for(auto person : people){
        person -> putdata();
        delete person;
    }
    return 0;
}