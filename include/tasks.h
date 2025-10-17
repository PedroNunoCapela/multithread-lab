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
    std::vector<int> joinVectors(std::vector<int> vec1, std::vector<int> vec2);
    int findMax(std::vector<int> elems);
    bool isPrime(int num);

private:
};



