/*************************************************************************
* Program: Simple Calculator
* programmer: Daudi Mlengela (dmlengela@cnm.edu)
* Date: September 15th , 2022
* Purpose: To create a simple calculator
**************************************************************************/

#include <iostream>
#include <sstream>
#include <iomanip>
#include "SimpleCalc.h"

using namespace std;

void SimpleCalc::Calculate()
{
    string errMsg;

    switch (operation)
    {
    case '+':
    {
        answer = operand1 + operand2;
        desc = "addition";
    }
    break;

    case '-':
    {
        answer = operand1 - operand2;
        desc = "subtraction";
    }
    break;

    case '*':
    {
        answer = operand1 * operand2;
        desc = "multiplication";
    }
    break;

    case '/':
    {
        if (operand2 == 0)
            errMsg = "Illegal Operation!";

        else
            answer = operand1 / operand2;

        desc = "division";
    }
    break;

    default:
    {
        results = "That's not a valid operator (";
        results += operation;
        results += "). Try again!";

        return;
    }
    break;
    }

    stringstream ss;

    ss << "Your operation is " << desc << ": " <<
        operand1 << " " << operation << " " << operand2 << " ";

    if (errMsg != "")
    {
        ss << errMsg;
    }

    else
    {
        ss << " = " << fixed << setprecision(2) << answer;
    }
    results = ss.str();
}

SimpleCalc::SimpleCalc()
{
    operand1 = 0.0;
    operand2 = 0.0;
    double result = 0.0;
    char oper = '+';
}

void SimpleCalc::SetOperation(char oper, double op1, double op2)
{
    operation = oper;
    operand1 = op1;
    operand2 = op2;

    Calculate();
}

string SimpleCalc::GetResults()
{
    return(results);
}
