// 函数: sub_14058a6e0
// 地址: 0x14058a6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg1
*arg1 = &std::filebuf::`vftable'{for `std::streambuf'}

if (arg1[0x10] != 0)
    int64_t* r8_1 = arg1[3]
    
    if (*r8_1 == &arg1[0xe])
        int32_t rdx = (arg1[0x12]).d
        int64_t rcx = arg1[0x11]
        *r8_1 = rcx
        *result[7] = rcx
        *result[0xa] = rdx - rcx.d

if (*(result + 0x7c) != 0)
    sub_14058aa90(result)

std::streambuf::~streambuf<char, struct std::char_traits<char> >(result)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(result)

return result
