#include <iostream>
using namespace std;
int main()
{
    int n, i;
    int num = 0;
    cin >> n;
    for (i = 1; i <= n; i++) {
     
        if (n % i == 0)
            num++;

    }
    if (num == 2) {
        cout << "YES"<<endl;
    }
    else{
        cout << "NO"<<endl;
        }

    return 0;

}