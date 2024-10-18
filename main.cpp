

#include <iostream>

class Rect
{
    int m_a, m_b;
public:
    Rect(int a, int b)
    {
        SetA(a);
        SetB(b);
        std::cout << "Class created" << std::endl;
    }
    Rect(int a): Rect(a, 1){}
    Rect(): Rect(1) {}

    Rect(const Rect &r)
    {
        m_a = r.m_a;
        m_b = r.m_b;
        std::cout << "Class copied" << std::endl;
    }

    void SetA(int a)
    {
        if (a <= 0)
        {
            std::cout << "Invalid value" << std::endl;
            exit(-1);
        }
        m_a = a;
    }

    void SetB(int b)
    {
        if (b <= 0)
        {
            std::cout << "Invalid value" << std::endl;
            exit(-1);
        }
        m_b = b;
    }

    int GetMinSide()
    {
        if (m_a < m_b)
            return m_a;
        return m_b;
    }

    int RSquare()
    {
        return m_a * m_b;
    }

    void GetAllInfo()
    {
        std::cout << "A = " << m_a << " B = " << m_b << " Minimal Side = " << GetMinSide() 
            << " Square = " << RSquare() << std::endl;
    }

    ~Rect()
    {
        std::cout << "Class deleted" << std::endl;
    }
};

int main()
{
    Rect r1(5, 3);
    r1.GetAllInfo();
    Rect r2;
    r2.GetAllInfo();
    Rect r3(r1);
    r3.GetAllInfo();
    return 0;
}
