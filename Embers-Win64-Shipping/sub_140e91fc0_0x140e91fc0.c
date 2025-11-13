// 函数: sub_140e91fc0
// 地址: 0x140e91fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x410)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142edf1d0

if (result != -0x10)
    memset(&result[2], 0, 0x400)
    sub_140e97040(&result[2])
    result[2] = &data_142edc698
    result[3] = &data_142edc6d8
    result[0x7a] = 0
    result[0x7b] = 0
    result[0x7e] = 0
    result[0x7f] = 0

return result
