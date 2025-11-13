// 函数: sub_140f96b30
// 地址: 0x140f96b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x3d0)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142ef17c0

if (result != -0x10)
    memset(&result[2], 0, 0x3c0)
    sub_140dddeb0(&result[2])
    result[2] = &data_142eee118
    __builtin_memset(&result[0x74], 0, 0x11)
    result[0x77] = 0
    result[0x78].d = 0

return result
