// 函数: sub_140f967e0
// 地址: 0x140f967e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x420)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142ef1800

if (result != -0x10)
    memset(&result[2], 0, 0x410)
    sub_140dddeb0(&result[2])
    result[2] = &data_142eef368
    __builtin_memset(&result[0x74], 0, 0x2c)
    result[0x7a] = 0
    result[0x7b].d = 0
    result[0x7c] = 0
    result[0x7d].d = 0
    result[0x7e].w = 0
    result[0x7f] = 0
    result[0x80].d = 0
    result[0x81].w = 0
    result[0x82] = 0
    result[0x83].d = 0

return result
