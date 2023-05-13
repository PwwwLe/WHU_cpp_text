//
// Created by Pwl on 2023/5/13.
//

#include <iostream>
#include <string>

using namespace std;

string reverse(string &str) {
    int i = 0, j = str.length() - 1;
    string newStr;
    while (i < j){
        newStr = str[j] + newStr + str[i];
    }
    return newStr;
}

int main (){
    cout << "Please enter the original string:" << endl;
    string str;
    cin >> str;
    cout <<"The reverse of it is :" << reverse(str) << endl;
    return 0;
}
