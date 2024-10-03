#include "Scanner.h"

Scanner::Scanner()
{
    text = "emty";
}

void Scanner::setText(string text)
{
    this->text = text;
}

string Scanner::getText() const
{
    return text;
}

void Scanner::scanFile(string fileName)
{
    ifstream file(fileName);
    if (file.is_open())
    {
        string temp;
        text = "";
        while (!file.eof())
        {
            getline(file, temp);
            text += temp + "\n";
        }
        file.close();
        cout << "Text was scan\n\n";
    }
    else {
        cout << "Error\n\n";
    }
}
