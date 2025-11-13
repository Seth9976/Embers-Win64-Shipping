// 函数: sub_140e919a0
// 地址: 0x140e919a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x410)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142edf0c0

if (result != -0x10)
    memset(&result[2], 0, 0x400)
    sub_140dddeb0(&result[2])
    result[0x74] = 0
    result[0x75] = 0
    result[0x76].d = 0x3f800000
    __builtin_memset(&result[0x77], 0, 0x20)
    result[2] = &data_142eda510
    result[0x7b] = 0
    result[0x7c] = 0
    result[0x7f] = 0
    result[0x80] = 0

return result
