//
// Created by Pwl on 2023/5/13.
//

#include <iostream>

using namespace std;

int Count(const char *str) {
    int count = 0;
    for (int i = 0; i < str[i]; ++i) {
        if ((str[i] > 'a' && str[i] < 'z') || (str[i] > 'A' && str[i] < 'Z')) {
            count++;
        }
    }
    return count;
}

int main() {
    cout << "Please enter an English sentence: " << endl;
    char str[999];
    cin >> str;
    cout << "There are " << Count(str) << " characters in this sentence." << endl;
    return 0;
}
