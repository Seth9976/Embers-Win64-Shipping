// 函数: sub_140e48e20
// 地址: 0x140e48e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x3c0)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142ed9ed8

if (result != -0x10)
    memset(&result[2], 0, 0x3b0)
    sub_140dddeb0(&result[2])
    result[2] = &data_142ed7cb8
    result[0x74] = 0
    result[0x75].d = 0
    result[0x76] = 0
    result[0x77].d = 0

return result
