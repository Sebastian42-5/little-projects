#include <map>
#include <string>
#include <iostream> 

int main(){
    int n;

    std::cin >> n;

    std::map<std::string, int> studentMarks;

    for(int i = 0; i < n; i++){
        int query;
        std::string name;
        
        std::cin >> query >> name;

        if(query == 1){
            int grade;

            std::cin >> grade;

            studentMarks[name] += grade;
        }

        else if(query == 2){
            studentMarks[name] = 0;
        }

        else if(query == 3){
            std::cout << studentMarks[name] << std::endl;
        }
    }

    return 0;
}