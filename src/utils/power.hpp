#pragma once

class Power
{
private:
    int power;

public:
    Power(int p) : power(p) {}
    int operator()(int num);
};
