﻿#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Romb.h"

using namespace std;


int main() {
    Romb myRomb;
    myRomb.SetDimension(10.0, 15.0);

    myRomb.ShowArea();
    return 0;
}