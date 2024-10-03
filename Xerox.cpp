#include "Xerox.h"

void Xerox::copyFile(string fileName, int copy)
{
	scanFile(fileName);
	printFile(fileName, getText(), copy);
}
