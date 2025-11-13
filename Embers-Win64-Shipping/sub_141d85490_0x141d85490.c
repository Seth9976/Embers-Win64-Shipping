// 函数: sub_141d85490
// 地址: 0x141d85490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x4d8)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_143237dd0

if (result != -0x10)
    memset(&result[2], 0, 0x4c8)
    sub_140f20640(&result[2])
    result[2] = &data_143237768
    result[0x99] = 0
    result[0x9a].d = 0

return result
