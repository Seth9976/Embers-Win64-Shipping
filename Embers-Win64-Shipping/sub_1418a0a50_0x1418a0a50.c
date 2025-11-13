// 函数: sub_1418a0a50
// 地址: 0x1418a0a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0xd8)

if (result == 0)
    return nullptr

result[3] = arg3
*result = &data_142fe99e0
result[1] = arg1
result[2] = arg2
result[4] = arg4
__builtin_memset(&result[5], 0, 0x24)
result[0xa] = 0
result[0xb].d = 0
result[0xc] = 0
result[0xd].d = 0
result[0xe] = 0
InitializeCriticalSection(&result[0xf])
SetCriticalSectionSpinCount(&result[0xf], 0xfa0)
__builtin_memset(&result[0x14], 0, 0x38)
return result
