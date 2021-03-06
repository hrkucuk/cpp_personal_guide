/*
 * Day2_Operators.cpp
 *
 *  Created on: Apr 4, 2018
 *      Author: archer
 *
 * link to the problem:
 * https://www.hackerrank.com/challenges/30-operators/problem
 *
 */

#include "../include/day2.h"

int day2() {
    double meal_cost;
    cout << "Enter a double: "; cin >> meal_cost;
    int tip_percent;
    cout << "Enter an Integer: "; cin >> tip_percent;
    int tax_percent;
    cout << "Enter an Integer: "; cin >> tax_percent;

    double tip = meal_cost * ((double)tip_percent/100);
    double tax = meal_cost * ((double)tax_percent/100);
    meal_cost += tip + tax;

    printf("The total meal cost is %.0f dollars.", meal_cost);

    return 0;
}
