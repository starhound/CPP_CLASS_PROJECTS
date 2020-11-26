//Wesley Reid
//COP2222 - Chapter 17 Problem 1
//May 2nd 2020

#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <unordered_map>

using namespace std;

int main()
{
    string path;
    cout << "Please enter the path of a text file: \n";
    cin >> path;

    unordered_map<string, int> wordCount;
    fstream file;
    string word;

    file.open(path.c_str());

    int wordCounter = 0;
    vector<string> words;
    while (file >> word) {
        cout << "Word being read from text: " + word << endl;
        wordCounter++;
        words.push_back(word);
    }

    for (int i = 0; i < words.size(); i++) {
        wordCount[words[i]] += 1;
    }

    unordered_map<string, int>::iterator iter;
    for (iter = wordCount.begin(); iter != wordCount.end(); iter++) {
        cout << "Word: " << iter->first << " [Count]: " << iter->second << endl;
    }

    cout << "Total Text Line Count: " << wordCounter << endl;
    cout << "Word Count Size: " << wordCount.size() << endl;
    return 0;
}
