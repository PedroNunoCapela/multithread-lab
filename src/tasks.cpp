#include "tasks.h"
#include <iostream>
#include <set>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int Tasks::addNumbers(int number1, int number2)
{
    cout << "### Add numbers task is running" << endl;
    return number1 + number2;
}

int Tasks::countWords(string phrase)
{
    string res = phrase;
    cout << "### Count words task is running" << endl;
    return 0;
}

int Tasks::multiplyNumbers(int number1, int number2)
{
    cout << "### Multiply numbers task is running" << endl;
    return number1 * number2;
}

string Tasks::reverseString(string reverseThis)
{
    reverse(reverseThis.begin(), reverseThis.end());

    return reverseThis;
}

string Tasks::toUpperCase(string text)
{
    for (auto i = 0u; i < text.size(); i++)
    {
        text.at(i) = toupper(static_cast<unsigned char>(text.at(i)));
    }
    return text;
}

int Tasks::countVowels(std::string text)
{
    int numOfVowels = 0;
    set<char> vowels = {'a', 'e', 'i', 'o', 'u'};

    for (char &c : text)
    {
        if (vowels.find(c) != vowels.end())
        {
            numOfVowels++;
        }
    }
    return numOfVowels;
}

int Tasks::sumVectorElems(vector<int> nums)
{
    int sumOfElems = 0;

    for (int &elem : nums)
    {
        sumOfElems += elem;
    }
    return sumOfElems;
}

int Tasks::findMax(vector<int> elems)
{
    int max = 0;

    for (int &num : elems)
    {
        if (num > max)
        {
            max = num;
        }
    }

    return max;
}

void Tasks::readFile()
{
    string firstLine = " ";

    ifstream ReadFile(inputPath);
    getline(ReadFile, firstLine);

    cout << firstLine << endl;

    ReadFile.close();
}