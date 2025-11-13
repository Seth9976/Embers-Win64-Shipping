// 函数: sub_140e91900
// 地址: 0x140e91900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x3e0)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142edf180

if (result != -0x10)
    memset(&result[2], 0, 0x3d0)
    sub_140e97040(&result[2])
    result[2] = &data_142edc988
    result[3] = &data_142edc9c8
    result[0x7a] = 0
    result[0x7b] = 0

return result
