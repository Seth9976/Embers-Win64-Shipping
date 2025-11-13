// 函数: sub_140597fc0
// 地址: 0x140597fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x38)

if (result == 0)
    return 0

__builtin_memset(&result[1], 0, 0x30)
*result = &data_142d40488
result[1].d = GetCurrentThreadId()
__builtin_memset(&result[2], 0, 0x24)
*(result + 0x34) = 1
*result = &data_142d40490
return result
