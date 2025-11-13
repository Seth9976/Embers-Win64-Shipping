// 函数: sub_140e91ef0
// 地址: 0x140e91ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x3d0)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142edf1c0

if (result != -0x10)
    memset(&result[2], 0, 0x3c0)
    sub_140e97040(&result[2])
    result[2] = &data_142edd9e0
    result[3] = &data_142edb5d0

return result
