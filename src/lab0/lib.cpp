// Copyright 2023 SomeName
#include <iostream>
#include "lib.h"

int calc_day(int upSpeed, int  downSpeed, int desiredHeight) {
    int height = 0, flag = 0, day = 0;
    while (desiredHeight != height){
        if (flag == 0){
            height += upSpeed;
            ++flag;
            ++day;
            std::cout << "After " << day << " day" << " --> " << height << std::endl;
        }
        else{
            height -= downSpeed;
            --flag;
            std::cout << "After " << day << " night" << " --> " << height << std::endl;
        }
    }
    return day;
}

