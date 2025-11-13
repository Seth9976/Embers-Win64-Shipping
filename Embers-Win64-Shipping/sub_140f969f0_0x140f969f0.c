// 函数: sub_140f969f0
// 地址: 0x140f969f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x3a8)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142ef1740

if (result != -0x10)
    memset(&result[2], 0, 0x398)
    sub_140dddeb0(&result[2])
    result[2] = &data_142eeec80

return result
