
#include <iostream>

using namespace std;

bool Even(int K)
{
    cout.setf(ios::boolalpha);
    bool a;
    a = ((abs(K) % 2 == 0)&&(K!=0));
    return a;
}

int main()
{
    int K, kol=0;
    for (int i = 0;i < 10;i++)
    {
        cin >> K;
        if (Even(K))
            kol += 1;
    }
    cout << kol;
}
