#include "power.hpp"

int Power::operator()(int num)
{
    int total = 1;
    for (int i = 0; i < power; ++i)
    {
        total *= num;
    }
    return total;
}