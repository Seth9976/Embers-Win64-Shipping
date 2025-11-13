// 函数: sub_140f96e00
// 地址: 0x140f96e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x3d0)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142ef17d0

if (result != -0x10)
    memset(&result[2], 0, 0x3c0)
    sub_140dddeb0(&result[2])
    result[2] = &data_142ef0610
    __builtin_memset(&result[0x74], 0, 0x30)

return result
