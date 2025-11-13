// 函数: sub_141830ce0
// 地址: 0x141830ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x88)

if (result == 0)
    return result

*result = &data_142fe58e0
result[1].d = 3
*(result + 0xc) = 0x42
*(result + 0x14) = 0
*(result + 0x1c) = 0
*(result + 0x24) = 0x100000
result[5].w = 0x100
__builtin_memset(&result[6], 0, 0x1c)
result[0xa] = 0
result[0xb] = 0
InitializeCriticalSection(&result[0xc])
SetCriticalSectionSpinCount(&result[0xc], 0xfa0)

if (arg1 s> *(result + 0x5c))
    sub_1405c5510(&result[0xa], arg1)

int32_t rax = result[0xb].d

if (arg1 s> rax)
    result[0xb].d = arg1
    
    if (arg1 s> *(result + 0x5c))
        sub_1405daba0(&result[0xa])
else if (arg1 s< rax && arg1 != rax)
    result[0xb].d = arg1
    sub_1405dac10(&result[0xa])

return result
