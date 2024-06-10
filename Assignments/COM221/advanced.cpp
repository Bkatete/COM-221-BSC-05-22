#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cctype>

int countVowels(const std::string& str) {
    int count = 0;
    //here im making vowels to be lower case
    for (char c : str) {
        if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' ||
            tolower(c) == 'o' || tolower(c) == 'u') {
            count++;
        }
    }
    return count;
}

int countWords(const std::string& str) {
    int count = 0;
    std::string word;
    std::istringstream iss(str);
    while (iss >> word) {
        count++;
    }
    return count;
}

//method to reverse the string
std::string reverseString(const std::string& str) {
    std::string reversedStr;
    for (int i = str.length() - 1; i >= 0; i--) {
        reversedStr.push_back(str[i]);
    }
    return reversedStr;
}
//here is the method to allow the second letter to be captilized
//this is done by if else analysis  
std::string capitalizeSecondLetter(const std::string& str) {
    std::string result;
    bool capitalize = false;
    for (char c : str) {
        if (std::isalpha(c)) {
            if (capitalize) {
                result.push_back(std::toupper(c));
                capitalize = false;
            } else {
                result.push_back(c);
                capitalize = true;
            }
        } else {
            result.push_back(c);
        }
    }
    return result;
}

//to indicate which file are we opening now we are opening advanced txt
int main() {
    std::ifstream file("advanced.txt"); 
    std::string fileData;
    
    //here we are opening a file using c++ librabry in this library we have methods like open(),close(),exit() to do file operation
    if (file.is_open()) {
        std::cerr << "attempting to open a file...." << std::endl;
        std::getline(file, fileData);
        file.close();
    } else {
        //here we are getting aa result if fr example we named a file that does not exist
        std::cerr << "Unable to open file!" << std::endl;
        return 1;
    }

//here we are counting  vowels from that fileData which is advanced.txt
    int vowelsCount = countVowels(fileData);
    std::cout << "Number of vowels: " << vowelsCount << std::endl;
    
    int wordsCount = countWords(fileData);
    std::cout << "Number of words: " << wordsCount << std::endl;
    
    std::cout << "Reversed statement: " << reverseString(fileData) << std::endl;
    
    std::cout << "Capitalized second letter: " << capitalizeSecondLetter(fileData) << std::endl;
    
    return 0;
}