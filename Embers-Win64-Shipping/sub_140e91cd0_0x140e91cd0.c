// 函数: sub_140e91cd0
// 地址: 0x140e91cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x310)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142edf110

if (result != -0x10)
    sub_140dde0c0(&result[2])
    result[2] = &data_142edaa58
    result[0x58] = &result[2]
    result[0x59] = 0
    result[0x5a] = 0
    result[0x57] = &data_142edaa30
    result[0x5b].b = 1
    __builtin_memset(&result[0x5c], 0, 0x20)

return result
