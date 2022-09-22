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

    float gcm1(float a, float b)
    {
        while (a != b)
        {
            while (b < a)
            {
                a = a - b;
                std::swap(a, b);
            }
        }
        return a;
    }
};

int main()
{
    EuclidsAlgorithm x;
    std::cout << x.gcm1(225, 100);
}
