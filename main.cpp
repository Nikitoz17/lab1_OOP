#include <iostream>

#include "lib.h"

using namespace std;

int main() {
    int upSpeed, downSpeed, desigredHeight;
    cout << "UpSpeed = ";
    cin >> upSpeed;
    cout << "DownSpeed = ";
    cin >> downSpeed;
    cout << "DesigredHeight = ";
    cin >> desigredHeight;
    calc_day(upSpeed, downSpeed, desigredHeight);
}