#include <iostream>
using namespace std;

int xx = 0;
int maxr = 4000000;
int fib(int n1, int n2)
{
    if (n2 < maxr)
    {
        if ((n2 % 2) == 0)
            xx+= n2;
        //cout <<n1 <<", "<<n2<<endl;
        return fib(n2, n1+n2);
    }
    else
    {
        return xx ;
    }
}

int main()
{
    int s;
    s = fib(1, 2);
    cout << "out " << s << endl;
    return 0;
}
