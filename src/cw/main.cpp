/*! \file       main.cpp
 *  \author     Sergey Shershakov
 *  \version    0.1
 *  \date       20.12.2019
 *
 *  Exam. Main module
 *
 */

#include "solut.h"

#include <iostream>
#include <fstream>


void test1()
{
    std::ifstream inpFile("../data/empl.txt");
    NameEmployeeMap team = loadData(inpFile);

    int a = 0;
}

void test2()
{
    std::ifstream inpFile("../data/empl.txt");
    NameEmployeeMap team = loadData(inpFile);

    DepartEmplMap depList = selectEmployeesInDepartents(team);
    outputEmployeesInDepartents(std::cout, depList, team);
}



void test3()
{
    std::ifstream inpFile("../data/empl.txt");
    NameEmployeeMap team = loadData(inpFile);
    StrSet subs1 = selectSubordinates("Jeffery Amos", team);
    outputStrSet(std::cout, subs1);
}

int main()
{
    std::cout << "Hello world!\n\n";

    test1();
    test2();
    test3();

    return 0;
}
