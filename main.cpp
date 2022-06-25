//
// Created by Katarina Makivic on 2022-06-20.
//


#include <iostream>
#include <vector>

using namespace std;

int main() {

    for (int i = 0; i < 8; i ++) {
        cout << "|";
        for (int j = 0; j < 8; j++) {
            cout << "_|";
        }
        cout << endl;
    }
    cout << endl;
}
