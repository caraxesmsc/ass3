
#include <iostream>
using namespace std;
//function to sum two numbers 
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Sum = " << sum(a, b) << endl;
    return 0;
}