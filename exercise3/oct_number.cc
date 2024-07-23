#include "oct_number.h"

OctNumber::OctNumber(int value)
    : Number(value)
{
}

OctNumber::~OctNumber()
{
}

void OctNumber::print_it() const
{
    int tmpVal = this->m_value;
    std::string oct = "";
    if(tmpVal == 0)
    {
        oct = "0";
    }
    else
    {
        const char octDigits[] = "01234567";
        while (tmpVal > 0) {
            int remainder = tmpVal & 0x7; // Lấy 3 bit cuối cùng (3 bits = 1 oct digit)
            oct = octDigits[remainder] + oct; // Chuyển số dư thành ký tự octal và thêm vào chuỗi
            tmpVal >>= 3; // Dịch phải 3 bit (1 oct digit)
        }
    }
    // string res = decToHex(this->m_value);
    cout << "0o" << oct;
}