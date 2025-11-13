// 函数: sub_140e91840
// 地址: 0x140e91840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x408)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142edf1a0

if (result != -0x10)
    memset(&result[2], 0, 0x3f8)
    sub_140f20ae0(&result[2])
    result[2] = &data_142edddd0
    result[0x57] = &data_142ede028
    result[0x77] = 0
    result[0x78].d = 0
    result[0x79] = 0
    result[0x7a] = 0
    __builtin_memset(&result[0x7c], 0, 0x20)

return result
