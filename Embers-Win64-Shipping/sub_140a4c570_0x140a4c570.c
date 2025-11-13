// 函数: sub_140a4c570
// 地址: 0x140a4c570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0xa8)

if (result == 0)
    return nullptr

result[1] = arg1
*result = &data_142e5d190
result[2] = 0
result[3] = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    int32_t rdx = 0
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&result[2], rbx_1.d + 1)
        rdx = result[3].d
    
    int32_t rax = rdx + rbx_1.d + 1
    result[3].d = rax
    
    if (rax s> *(result + 0x1c))
        sub_140594770(&result[2])
    
    memcpy(result[2], arg2, (rbx_1.d + 1) * 2)

result[4] = 0
result[5] = 0
InitializeCriticalSection(&result[6])
SetCriticalSectionSpinCount(&result[6], 0xfa0)
InitializeCriticalSection(&result[0xb])
SetCriticalSectionSpinCount(&result[0xb], 0xfa0)
result[0x14].w = 0

if (sub_140a237d0(&result[2], u".pak", 1) == 0)
    *(result + 0xa1) = 1

__builtin_memset(&result[0x10], 0, 0x20)
return result
