#pragma once

#include <string>
#include <vector>

class Tasks
{
public:
    int addNumbers(int number1, int number2);
    int countWords(std::string phrase);
    int multiplyNumbers(int number1, int number2);
    std::string reverseString(std::string reverseThis);
    std::string toUpperCase(std::string text);
    int countVowels(std::string text);
    int sumVectorElems(std::vector<int> nums);
    int findMax(std::vector<int> elems);
    void readFile();

private:
    std::string inputPath = "../data/ForReadFileMethod.txt";
};