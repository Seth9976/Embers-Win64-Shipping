// 函数: sub_140f968d0
// 地址: 0x140f968d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x450)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142ef1730

if (result != -0x10)
    memset(&result[2], 0, 0x440)
    sub_140dddeb0(&result[2])
    result[2] = &data_142eef5a8
    __builtin_memset(&result[0x74], 0, 0x90)
    result[0x86] = 2
    result[0x87].w = 0
    result[0x88] = 0
    result[0x89].d = 0

return result
