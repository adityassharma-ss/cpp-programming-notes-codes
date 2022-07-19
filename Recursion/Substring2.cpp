#include <string>
#include <iostream>

using namespace std;

int main()
{
    string s("hello hello");
    int count = 0;
    size_t nPos = s.find("hello", 0); // first occurrence
    while(nPos != string::npos)
    {
        count++;
        nPos = s.find("hello", nPos + 1);
    }

    cout << count;
};