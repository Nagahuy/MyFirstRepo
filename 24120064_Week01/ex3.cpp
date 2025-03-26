//MSSV:24120064             Name: Truong Dinh Nhat Huy
#include <iostream>
#include <string.h>

using namespace std;
void generateBinaryStrings(int n, string s)
{
    if (s.size() == n)//check whether the string reach the required length
    {
        cout << s << "\n";
        return;
    }
    generateBinaryStrings(n, s + "0");//call recursion to add 0 or 1 until it is enough
    generateBinaryStrings(n, s + "1");
}
int main()
{
    string s = "";
    int n;
    cin >> n;
    generateBinaryStrings(n, s);
}
