// 函数: sub_1418a0e20
// 地址: 0x1418a0e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0xb8)

if (result == 0)
    return 0

*result = &data_142fe95b8
InitializeCriticalSection(&result[1])
SetCriticalSectionSpinCount(&result[1], 0xfa0)
void* rbp = data_1439c6860
result[6].d = 0
result[7] = 0
result[8] = 0

if (rbp != 0 && *rbp != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (*(rbp + (rdi_1 << 1)) != 0)
    
    int32_t rdx_1 = 0
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(&result[7], rdi_1.d + 1)
        rdx_1 = result[8].d
    
    int32_t rax = rdx_1 + rdi_1.d + 1
    result[8].d = rax
    
    if (rax s> *(result + 0x44))
        sub_140594770(&result[7])
    
    UnDecorator::getReferenceType(result[7], rbp, (rdi_1.d + 1) * 2)

sub_1418a3a50(&result[9], result[6].d)
result[0xc].d = 0
void* rcx_6 = &result[0xf]
result[0x11] = 0
result[0x12] = 0
__builtin_memset(&result[0x13], 0, 0x20)
__builtin_memset(&result[0xd], 0, 0x2c)
*(rcx_6 + 0x1c) = 0x80
void* rax_1 = *(rcx_6 + 0x10)

if (rax_1 != 0)
    rcx_6 = rax_1

*rcx_6 = 0
*(rcx_6 + 8) = 0
result[0x13].d = 0xffffffff
*(result + 0x9c) = 0
result[0x15] = 0
result[0x16].d = 0
return result
