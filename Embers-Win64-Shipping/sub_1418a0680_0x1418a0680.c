// 函数: sub_1418a0680
// 地址: 0x1418a0680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x90)

if (result == 0)
    return nullptr

result[2] = arg2
*result = &data_142fe97b8
result[1] = arg1
result[3] = arg3
__builtin_memset(&result[4], 0, 0x24)
InitializeCriticalSection(&result[9])
SetCriticalSectionSpinCount(&result[9], 0xfa0)
result[0xe].d = 4
result[0xf] = 0
result[0x10] = 0
result[0x11] = 5
sub_1406105e0(&result[0x10])
__builtin_memset(result[0x10], 0, 0x14)
return result
