// 函数: sub_1405875d0
// 地址: 0x1405875d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(sx.q(*((arg1 + 0xb8)->__offset(0xffffffffffffff48).q + 4)) + arg1 + 0xb8 - 0xb8) =
    &std::fstream::`vftable'
int64_t rcx_1 = sx.q(*((arg1 + 0xb8)->__offset(0xffffffffffffff48).q + 4))
*(rcx_1 + arg1 + 0xb8 - 0xbc) = (rcx_1 - 0xb8).d
*(arg1 + 0x18) = &std::filebuf::`vftable'{for `std::streambuf'}

if (*(arg1 + 0x98) != 0)
    int64_t* rcx_2 = *(arg1 + 0x30)
    
    if (*rcx_2 == arg1 + 0x88)
        int32_t r8_1 = (*(arg1 + 0xa8)).d
        int64_t rdx_1 = *(arg1 + 0xa0)
        *rcx_2 = rdx_1
        **(arg1 + 0x50) = rdx_1
        **(arg1 + 0x68) = r8_1 - rdx_1.d

if (*(arg1 + 0x94) != 0)
    sub_14058aa90(arg1 + 0x18)

std::streambuf::~streambuf<char, struct std::char_traits<char> >(arg1 + 0x18)
std::iostream::~iostream<char, struct std::char_traits<char> >(arg1 + 0x20)
return std::ios::~ios<char, struct std::char_traits<char> >(arg1 + 0xb8) __tailcall
