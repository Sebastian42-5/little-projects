#include <iostream>
#include <string>
#include <sstream>

int brokenKeyboard(std::string str, char brokenLetter){
    std::istringstream iss(str);
    std::string word;
    int count = 0;

    while(iss >> word){
        if(word.find(brokenLetter) == std::string::npos){
            count++;
        }
    }

    return count;
}

int main(){
    std::string sentence;
    char brokenKey;

    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);

    std::cout << "Enter your broken key: ";
    std::cin >> brokenKey;

    int result = brokenKeyboard(sentence, brokenKey);

    std::cout << "These are the number of words that can be typed" << result;

    return 0;
}