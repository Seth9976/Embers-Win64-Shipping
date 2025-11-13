// 函数: sub_14058bf30
// 地址: 0x14058bf30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(sx.q(*((arg1 + 0xa8)->__offset(0xffffffffffffff58).q + 4)) + arg1 + 0xa8 - 0xa8) =
    &std::ofstream::`vftable'
int64_t rcx_1 = sx.q(*((arg1 + 0xa8)->__offset(0xffffffffffffff58).q + 4))
*(rcx_1 + arg1 + 0xa8 - 0xac) = (rcx_1 - 0xa8).d
*(arg1 + 8) = &std::filebuf::`vftable'{for `std::streambuf'}

if (*(arg1 + 0x88) != 0)
    int64_t* rcx_2 = *(arg1 + 0x20)
    
    if (*rcx_2 == arg1 + 0x78)
        int32_t r8_1 = (*(arg1 + 0x98)).d
        int64_t rdx_1 = *(arg1 + 0x90)
        *rcx_2 = rdx_1
        **(arg1 + 0x40) = rdx_1
        **(arg1 + 0x58) = r8_1 - rdx_1.d

if (*(arg1 + 0x84) != 0)
    sub_14058aa90(arg1 + 8)

std::streambuf::~streambuf<char, struct std::char_traits<char> >(arg1 + 8)
std::ostream::~ostream<char, struct std::char_traits<char> >()
return std::ios::~ios<char, struct std::char_traits<char> >(arg1 + 0xa8) __tailcall
