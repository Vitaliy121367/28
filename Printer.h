#pragma once
#include <string>
#include <fstream>
#include <iostream>
using namespace std;
class Printer
{
public:
	static void printFile(string fileName, string text, int copy=1);
};

