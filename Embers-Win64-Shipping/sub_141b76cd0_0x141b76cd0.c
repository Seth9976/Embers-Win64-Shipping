// 函数: sub_141b76cd0
// 地址: 0x141b76cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x4a8)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_143084950

if (result != -0x10)
    memset(&result[2], 0, 0x498)
    sub_140ee2fa0(&result[2])
    result[2] = &data_143075cb8
    result[0x57] = &data_142ede028
    result[0x81] = 0
    result[0x82] = 0
    result[0x83].d = 0xffffffff
    __builtin_memset(result + 0x41c, 0, 0x14)
    result[0x86].d = 0xffffffff
    *(result + 0x434) = 0
    result[0x88] = 0
    result[0x89].d = 0
    __builtin_memset(&result[0x8b], 0, 0x2c)
    result[0x91] = 0
    result[0x92].d = 0

return result
