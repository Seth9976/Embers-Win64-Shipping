// 函数: sub_140cd6f60
// 地址: 0x140cd6f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x40)

if (result == 0)
    return 0

__builtin_memset(&result[1], 0, 0x38)
*result = &data_142d40488
result[1].d = GetCurrentThreadId()
*result = &data_142ea4ef0
__builtin_memset(&result[2], 0, 0x30)
return result
