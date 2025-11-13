// 函数: sub_140e91bb0
// 地址: 0x140e91bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x4e0)

if (result == 0)
    return 0

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142edf0d0

if (result != -0x10)
    memset(&result[2], 0, 0x4d0)
    sub_140dddeb0(&result[2])
    result[0x74] = 0
    result[0x75] = 0
    result[0x76].d = 0x3f800000
    result[2] = &data_142eda7a0
    result[0x77] = 0
    result[0x78] = 0
    sub_140d921c0(&result[0x79])
    result[0x80] = 0
    result[0x81] = 0
    __builtin_memset(&result[0x86], 0, 0x31)
    sub_140d91ed0(&result[0x8e])
    result[0x9a] = 0
    result[0x9b] = 0

return result
