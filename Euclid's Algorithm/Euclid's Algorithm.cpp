#include <iostream>

class EuclidsAlgorithm {

public:
    float result;

    float gcm0(float a, float b)
    {
        while (a != b)
        {
            if (b < a)
            {
                a = a - b;
            }
            else
            {
                b = b - a;
            }
        }
        return a;
    }
};

int main()
{
    EuclidsAlgorithm x;
    std::cout << x.gcm0(225, 100);
}
