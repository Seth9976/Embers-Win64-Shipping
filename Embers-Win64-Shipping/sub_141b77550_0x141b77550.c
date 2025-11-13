// 函数: sub_141b77550
// 地址: 0x141b77550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x380)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_143084990

if (result != -0x10)
    memset(&result[2], 0, 0x370)
    sub_140dde0c0(&result[2])
    result[7].b &= 0xfb
    result[2] = &data_14307a1b0
    *(result + 0x2c4) = 0
    result[0x59].b = 0
    result[0x5a] = 0
    result[0x5b].d = 0
    __builtin_memcpy(&result[0x60], 
        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 0x11)
    __builtin_memset(&result[0x63], 0, 0x11)
    result[0x66] = 0
    result[0x67].d = 0
    result[0x69].b = 0
    result[0x6a] = 0
    result[0x6b].d = 0
    result[0x6d] = 0
    result[0x6e] = 0

return result
