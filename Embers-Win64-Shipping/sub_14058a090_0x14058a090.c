// 函数: sub_14058a090
// 地址: 0x14058a090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1
*arg1 = &std::filebuf::`vftable'{for `std::streambuf'}

if (arg1[0x10] != 0)
    int64_t* rcx = arg1[3]
    
    if (*rcx == &rbx[0xe])
        int32_t r8_1 = (rbx[0x12]).d
        int64_t rdx_1 = rbx[0x11]
        *rcx = rdx_1
        *rbx[7] = rdx_1
        *rbx[0xa] = r8_1 - rdx_1.d

if (*(rbx + 0x7c) != 0)
    sub_14058aa90(rbx)

return std::streambuf::~streambuf<char, struct std::char_traits<char> >(rbx) __tailcall
