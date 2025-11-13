// 函数: sub_140e91a70
// 地址: 0x140e91a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x2c8)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142edf120

if (result != -0x10)
    memset(&result[2], 0, 0x2b8)
    sub_140dde0c0(&result[2])
    result[7].b &= 0xfb
    result[2] = &data_142edb0e8
    result[0x57] = 0
    result[0x58] = 0

return result
