// 函数: sub_141b76eb0
// 地址: 0x141b76eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x400)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_143084c40

if (result != -0x10)
    memset(&result[2], 0, 0x3f0)
    sub_140dddeb0(&result[2])
    sub_1405ab8c0(&result[0x74])
    result[2] = &data_143072d38
    result[0x74] = &data_143072f98
    result[0x77] = &data_143072fb8
    result[0x78] = 0
    result[0x79].d = 0
    result[0x7a] = 0
    result[0x7b].d = 0
    result[0x7c].d = 0xffffffff
    __builtin_memset(result + 0x3e4, 0, 0x14)
    result[0x7f].d = 0xffffffff
    *(result + 0x3fc) = 0
    *(result + 0x3fe) = 0

return result
