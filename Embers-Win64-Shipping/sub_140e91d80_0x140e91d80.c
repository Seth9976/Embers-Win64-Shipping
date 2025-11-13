// 函数: sub_140e91d80
// 地址: 0x140e91d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x4f0)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142edf0f0

if (result != -0x10)
    memset(&result[2], 0, 0x4e0)
    sub_140f20640(&result[2])
    result[2] = &data_142edae00
    result[0x9b] = 0
    result[0x9c] = 0

return result
