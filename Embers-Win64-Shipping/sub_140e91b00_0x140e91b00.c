// 函数: sub_140e91b00
// 地址: 0x140e91b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x3d8)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142edf100

if (result != -0x10)
    memset(&result[2], 0, 0x3c8)
    sub_140dddeb0(&result[2])
    result[0x74] = 0
    result[0x75] = 0
    result[0x76].d = 0x3f800000
    result[2] = &data_142eda280
    __builtin_memset(&result[0x77], 0, 0x20)

return result
