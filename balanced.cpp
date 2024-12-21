#include <iostream>
#include <string>

using namespace std;

// Function to check if brackets are balanced
bool areBracketsBalanced(const string& str) {
    int roundBrackets = 0;  
    int curlyBrackets = 0; 
    int squareBrackets = 0; 

    
    // for (char ch : str) {
        for(int i=0;i<str.length();++i){
            char ch=str[i];
        
        if (ch == '(') {
            roundBrackets++;
        } else if (ch == '{') {
            curlyBrackets++;
        } else if (ch == '[') {
            squareBrackets++;
        }
        
        else if (ch == ')') {
            if (roundBrackets == 0) {
                return false;
            }
            roundBrackets--;
        } else if (ch == '}') {
            if (curlyBrackets == 0) {
                return false;
            }
            curlyBrackets--;
        } else if (ch == ']') {
            if (squareBrackets == 0) {
                return false; 
            }
            squareBrackets--;
        }
    }

    // If all counters are zero, the brackets are balanced
    return (roundBrackets == 0 && curlyBrackets == 0 && squareBrackets == 0);
}

int main() {
    string str;
    cout << "Enter a string with brackets: ";
    cin >> str;
    
    if (areBracketsBalanced(str)) {
        cout << "The brackets are balanced." << endl;
    } else {
        cout << "The brackets are NOT balanced." << endl;
    }

    return 0;
}
