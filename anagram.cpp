#include <iostream>
#include <string>

using namespace std;

bool areAnagrams(string str1, string str2){
    if (str1.length() != str2.length()) {
        return false;
    }
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    // Compare the sorted strings
    return str1 == str2;
}

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    if (areAnagrams(str1, str2)) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are NOT anagrams." << endl;
    }

    return 0;
}
