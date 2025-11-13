// 函数: sub_140e91e10
// 地址: 0x140e91e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x410)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142edf230

if (result != -0x10)
    memset(&result[2], 0, 0x400)
    sub_140dddeb0(&result[2])
    result[2] = &data_142edc388
    __builtin_memset(&result[0x74], 0, 0x20)
    result[0x79].d = 0
    *(result + 0x3cc) = 0
    result[0x7a] = 0
    result[0x7b].d = 0
    result[0x7c].d = 0
    *(result + 0x3e4) = 0
    result[0x7d] = 0
    result[0x7e].d = 0
    result[0x7f].w = 0
    result[0x80] = 0
    result[0x81].d = 0

return result
