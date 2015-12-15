#include <iostream>
using namespace std;

int is_mod(int mul, int num)
{
    int mod;
    mod = num%mul; 
    if (mod == 0)
        return num;
    else
        return 0;
}

int main()
{ 
    int under = 1000;
    int x, d; 
    int mod1; 
    int mod2; 
    int ssum = 0;
    for(x=0; x < under; x++)
    {
        {
            mod1 =  is_mod(3, x);
            mod2 =  is_mod(5, x);
            if ((mod1 + mod2) > 0) 
                ssum += x;
            
        }
    }
    cout << ssum << endl;
    return 0;
}
