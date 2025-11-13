// 函数: sub_141df7e10
// 地址: 0x141df7e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x14)
int32_t rdx_1 = (arg2 + 0x1f) & 0xffffffe0

if (rdx_1 s> rax || rax s> 0x20)
    int32_t rax_3 = 0x20
    
    if (rdx_1 s>= 0x20)
        rax_3 = rdx_1
    
    *(arg1 + 0x14) = rax_3
    int64_t rax_4 = sub_141dd36e0(arg1, 0)
    *(arg1 + 0x10) = 0
    return rax_4

void* rax_1 = *(arg1 + 8)
uint32_t rdx_4 = (*(arg1 + 0x10) + 0x1f) u>> 5
void* rdi = arg1

if (rax_1 != 0)
    rdi = rax_1

if (rdx_4 u> 8)
    int64_t rax_2 = memset(rdi, 0, zx.q(rdx_4) << 2)
    *(arg1 + 0x10) = 0
    return rax_2

if (rdx_4 == 0)
    *(arg1 + 0x10) = 0
    return rax_1

__builtin_memset(rdi, 0, zx.q(rdx_4) << 2)
*(arg1 + 0x10) = 0
return 0
