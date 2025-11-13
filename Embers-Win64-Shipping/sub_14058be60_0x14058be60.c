// 函数: sub_14058be60
// 地址: 0x14058be60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(sx.q(*((arg1 + 0xb0)->__offset(0xffffffffffffff50).q + 4)) + arg1 + 0xb0 - 0xb0) =
    &std::ifstream::`vftable'
int64_t rcx_1 = sx.q(*((arg1 + 0xb0)->__offset(0xffffffffffffff50).q + 4))
*(rcx_1 + arg1 + 0xb0 - 0xb4) = (rcx_1 - 0xb0).d
*(arg1 + 0x10) = &std::filebuf::`vftable'{for `std::streambuf'}

if (*(arg1 + 0x90) != 0)
    int64_t* rcx_2 = *(arg1 + 0x28)
    
    if (*rcx_2 == arg1 + 0x80)
        int32_t r8_1 = (*(arg1 + 0xa0)).d
        int64_t rdx_1 = *(arg1 + 0x98)
        *rcx_2 = rdx_1
        **(arg1 + 0x48) = rdx_1
        **(arg1 + 0x60) = r8_1 - rdx_1.d

if (*(arg1 + 0x8c) != 0)
    sub_14058aa90(arg1 + 0x10)

std::streambuf::~streambuf<char, struct std::char_traits<char> >(arg1 + 0x10)
std::istream::~istream<char, struct std::char_traits<char> >()
return std::ios::~ios<char, struct std::char_traits<char> >(arg1 + 0xb0) __tailcall
