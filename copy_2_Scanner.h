#pragma once
#include <string>
#include <fstream>
#include <iostream>
using namespace std;
class Scanner
{
	string text;

public:
	Scanner();

	void setText(string text);
	string getText()const;

	void scanFile(string fileName);
};


