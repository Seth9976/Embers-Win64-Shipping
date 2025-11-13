// 函数: sub_140e49220
// 地址: 0x140e49220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x498)

if (result == 0)
    return 0

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142ed9f08

if (result != -0x10)
    memset(&result[2], 0, 0x488)
    sub_140dddeb0(&result[2])
    result[2] = &data_142ed89e8
    result[0x74] = &data_142ed8c30
    result[0x75] = 0
    result[0x76] = 0
    result[0x78] = 0
    result[0x79] = 0
    sub_140d91ed0(&result[0x7a])
    __builtin_memset(&result[0x86], 0, 0x30)
    sub_140a96170(&result[0x8d])
    result[0x90].b = 0
    result[0x91] = 0
    result[0x92].d = 0

return result
