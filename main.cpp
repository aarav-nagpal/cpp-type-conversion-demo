#include <iostream>
#include<string>
using namespace std;

class String
{
private:
    string str;

public:
    String()
    {
        str = "";
    }

    String(const string &s)
    {
        str = s;
    }

    String(int a)
    {
        str = to_string(a);
    }

    operator int()
    {
        return stoi(str);
    }

    void displayData()
    {
        cout << str << endl;
    }
};

int main()
{
    String s1 = 123;
    cout << "s1 = ";
    s1.displayData();

    s1 = 150;
    cout << "s1 = ";
    s1.displayData();

    String s2("123");
    int i = int(s2);
    cout << "i = " << i << endl;

    String s3("456");
    i = s3;
    cout << "i = " << i << endl;

    return 0;
}
