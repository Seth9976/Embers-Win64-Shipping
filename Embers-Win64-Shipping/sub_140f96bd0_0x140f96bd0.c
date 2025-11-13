// 函数: sub_140f96bd0
// 地址: 0x140f96bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x440)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142ef1790

if (result != -0x10)
    memset(&result[2], 0, 0x430)
    sub_140dddeb0(&result[2])
    result[2] = &data_142eede90
    result[0x74] = 0
    result[0x75] = 0
    sub_140d91ed0(&result[0x76])
    result[0x82] = 0
    result[0x83].d = 0

return result
