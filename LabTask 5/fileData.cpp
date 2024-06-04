#include<iostream>
#include<fstream>
#include<string>
using namespace std;


int countVowels(const string& str){
    int count = 0;
   for(char c : str){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c=='u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
        count++;
    } 
   }
    return count;
      
}
   
    
    
      

int countWords(const string& str){
    int count = 0;
    bool inWord = false;
    
    for(char c : str){
        if(c == ' ' || c == '\n' || c == '\t'){
            inWord =false;
        }
        else if(!inWord){
            inWord = true;
            count++;
        }
    }
    return count;
}
string reverseString(const string& str){
    string reversedStr = str;
    int len = reversedStr.length();
    for(int i = 0; i < len / 2; i++){
        swap(reversedStr[i], reversedStr[len -1 -i]);
    }
    return reversedStr;
}
string capitalizeSecondLetter(string str){
    bool capitalize = false;
    
    for(size_t i = 0; i < str.length(); i++){
        if(isspace(str[i])){
             capitalize = false;
             
        }
        else{
           if(!capitalize){
            capitalize = true;
           }
        else{
           str[i] = toupper(str[i]);
           capitalize = false;
        }   

        }
    }
    return str;

  
}



int main(){
    const string filepath ="myName.txt";
    string fileData;
    ifstream file(filepath);
    if(file.is_open()){
       getline(file,fileData);
    file.close(); 
    }else{
        cout<<"unable to open file";
        return 1;
    }
   
    int vowelCount = countVowels(fileData);
    cout<<"the number of vowels is: "<<vowelCount<<endl;
    
    int wordCount = countWords(fileData);
    cout<<"the number of words is: "<<wordCount <<endl;
    
    string reversedData = reverseString(fileData);
    cout<<"The reversed statement is: "<<reversedData<<endl;
    
    string capitalizedText = capitalizeSecondLetter(fileData);
    cout<<"the statement with second letter capitalized is: "<<capitalizedText<<endl;
    return 0;
}
