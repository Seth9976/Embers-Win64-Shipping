// 函数: sub_140e48fc0
// 地址: 0x140e48fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x2d8)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142ed9ef8

if (result != -0x10)
    sub_140dde0c0(&result[2])
    result[7].b &= 0xfb
    result[2] = &data_142ed84f0
    result[0x58].b = 0
    result[0x59] = 0
    result[0x5a].d = 0
    *(result + 0x3e) &= 0xfb
    
    if (sub_140db3510(&result[5]) != 0)
        sub_140dc03a0(&result[5], *(result + 0x3e))
    
    result[7].b &= 0xfd

return result
