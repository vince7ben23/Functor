#include <iostream>
#include "utils/power.hpp"

using namespace std;

int main()
{
    Power power2(2);
    Power power3(3);

    cout << "4's power two: " << power2(4) << endl;
    cout << "3's power three: " << power3(3) << endl;
    return 0;
}