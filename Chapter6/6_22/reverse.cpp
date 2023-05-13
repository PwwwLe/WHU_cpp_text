//
// Created by Pwl on 2023/5/13.
//

#include <iostream>
#include <string>

using namespace std;

string reverse(string &str) {
    int i = 0, j = str.length() - 1;
    while (i <= j) {
        char temp;
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++, j--;
    }
    return str;
}

int main() {
    cout << "Please enter the original string:" << endl;
    string str;
    cin >> str;
    cout << "The reverse of it is :" << reverse(str) << endl;
    return 0;
}
