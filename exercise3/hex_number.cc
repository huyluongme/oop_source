#include "hex_number.h"

HexNumber::HexNumber(int value)
    : Number(value)
{
}

HexNumber::~HexNumber()
{
}

void HexNumber::print_it() const
{
    int tmpVal = this->m_value;
    std::string hex = "";
    if(tmpVal == 0)
    {
        hex = "0";
    }
    else
    {
        const char hexDigits[] = "0123456789ABCDEF";
        while (tmpVal > 0) {
            int remainder = tmpVal & 0xF; // Lấy 4 bit cuối cùng (4 bits = 1 hex digit)
            hex = hexDigits[remainder] + hex; // Chuyển số dư thành ký tự hex và thêm vào chuỗi
            tmpVal >>= 4; // Dịch phải 4 bit (1 hex digit)
        }
    }
    // string res = decToHex(this->m_value);
    cout << "0x" << hex;
}