// 函数: sub_141b774b0
// 地址: 0x141b774b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x3b8)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_1430849e0

if (result != -0x10)
    memset(&result[2], 0, 0x3a8)
    sub_140dddeb0(&result[2])
    sub_1405ab8c0(&result[0x74])
    result[2] = &data_143072ad8
    result[0x74] = &data_143072d18

return result
