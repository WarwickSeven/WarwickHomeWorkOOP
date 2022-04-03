//задание 1-2

#include <iostream>
#include <cstdint>

using namespace std;

class RGBA
{
    uint8_t m_red;
    uint8_t m_green;
    uint8_t m_blue;
    uint8_t m_alpha;
public:
    RGBA() : m_red(0), m_green(0), m_blue(0), m_alpha(255) {}
    RGBA(uint8_t uRed, uint8_t uGreen, uint8_t uBlue, uint8_t uAlpha)
        : m_red(uRed), m_green(uGreen), m_blue(uBlue), m_alpha(uAlpha) {
    }
    void print() {
        cout << m_red << endl;
        cout << m_green << endl;
        cout << m_blue << endl;
        cout << m_alpha << endl;
    }
};

int main()
{
    std::uint8_t uRed, uGreen, uBblue, uAlpha;
    cout << "Red: "; cin >> uRed;
    cout << "Green: "; cin >> uGreen;
    cout << "Blue: "; cin >> uBblue;
    cout << "Alpha: "; cin >> uAlpha;
    
    
    RGBA p2(uRed, uGreen, uBblue, uAlpha);
    p2.print();
    
    return 0;
}
