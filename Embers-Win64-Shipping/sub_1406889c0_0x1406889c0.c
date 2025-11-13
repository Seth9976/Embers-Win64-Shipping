// 函数: sub_1406889c0
// 地址: 0x1406889c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x480)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142d8c5d0

if (result != -0x10)
    sub_140dddeb0(&result[2])
    result[2] = &data_142d8b0b0
    result[0x74].d = 0
    *(result + 0x3a4) = 0
    result[0x75] = 0
    result[0x76].d = 0
    result[0x77].d = 0
    *(result + 0x3bc) = 0
    result[0x78] = 0
    result[0x79].d = 0
    result[0x7a].d = 0
    *(result + 0x3d4) = 0
    result[0x7b] = 0
    result[0x7c].d = 0
    result[0x7d].w = 0
    result[0x7e] = 0
    result[0x7f].d = 0
    result[0x81] = 0
    result[0x83].b = 0
    *(result + 0x454) = 0
    result[0x8c].b = 0
    result[0x8d].b = 0
    *(result + 0x3e) &= 0xfb
    
    if (sub_140db3510(&result[5]) != 0)
        sub_140dc03a0(&result[5], *(result + 0x3e))
    
    result[7].b &= 0xfd

return result
