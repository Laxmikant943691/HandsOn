# include <iostream>
using namespace std;

int main() {
    int a = 0,b = 1;
    cout<< "Fibo Series is :" <<endl;
    cout<< "0" <<endl;
    for (int i= 1;i<=15;i++)
        {
        int sum = a + b;
        a = b;
        b = sum;
        cout << sum;
        cout << endl;
        }
        
    }