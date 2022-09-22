#include <iostream>

#define line_segment float
#define segment_remainder float

class EuclidsAlgorithm {

public:
    float result;

    float gcm0(line_segment a, line_segment b)
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

    float gcm1(line_segment a, line_segment b)
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
    std::cout << x.gcm0(225, 100);
}
