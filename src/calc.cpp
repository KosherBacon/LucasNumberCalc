#include <iostream>
#include <stdlib.h>
#include "inc/InfInt.h"

using namespace std;

InfInt lucas(int num)
{
    if (num == 0)
    {
        return 2LL;
    }
    else if (num == 1)
    {
        return 1LL;
    }
    InfInt calc [3] = {2LL, 1LL, 0LL};
    for (int i = 1; i < num; i++)
    {
        calc[2] = calc[1] + calc[0];
        calc[0] = calc[1];
        calc[1] = calc[2];
    }
    return calc[2];
}

int main(int argc, char *argv[])
{
    cout << lucas(atoi(argv[1])) << endl;
    return 0;
}
