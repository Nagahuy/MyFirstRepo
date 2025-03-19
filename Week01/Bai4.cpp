#include <iostream>
#include <string.h>

using namespace std;
void generateBinaryStrings(int n, string s)
{
    if (s.size() == n)
    {
        cout << s << "\n";
        return;
    }
    generateBinaryStrings(n, s + "0");
    generateBinaryStrings(n, s + "1");
}
int main()
{
    string s = "";
    int n;
    cin >> n;
    generateBinaryStrings(n, s);
}