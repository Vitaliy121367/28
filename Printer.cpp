#include "Printer.h"

void Printer::printFile(string fileName, string text, int copy)
{
	for (int i = 0; i < copy; i++)
	{
		ofstream file("copy_"+to_string(i+1)+"_"+fileName);
		if (file.is_open())
		{
			file << text;
			file.close();
			cout << "Text was printed\n\n";
		}
		else
		{
			cout << "Error\n\n";
		}
	}
}
