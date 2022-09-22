#include <iostream>

#define line_segment float

class EuclidsAlgorithm {

public:
    line_segment gcm0(line_segment a, line_segment b)
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

    line_segment gcm1(line_segment a, line_segment b)
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

    line_segment segment_remainder(line_segment a, line_segment b)
    {
        while (b < a)
        {
            a = a - b;
        }
        return a;
    }
};

int main()
{
    EuclidsAlgorithm x;
    std::cout << x.gcm0(225, 100);
}
