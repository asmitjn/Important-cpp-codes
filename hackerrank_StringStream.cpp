/**********************************************************
     To use streamstring to parse input

Eg.
#include <sstring>

stringstream ss("23,4,56");
char ch;  // ch is for storing commas
int a, b, c;
ss >> a >> ch >> b >> ch >> c;  // a = 23, b = 4, c = 56 

***********************************************************/

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> vec{};
    stringstream ss;
    ss << str;
    int a;
    char ch;
    
    while (ss >> a)
    {
        vec.push_back(a);
        ss >> ch;
    }
    return vec;
}

int main() {
    string str;
    cout << "Enter values in string\n";
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
