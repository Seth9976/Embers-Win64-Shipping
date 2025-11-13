// 函数: sub_142bd4c10
// 地址: 0x142bd4c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg3, 0, 0x20)
uint64_t r10_1 = zx.q(*(arg1 + 0x350) + arg2)

if (r10_1.d u>= *(arg1 + 0x348))
    return 1

int64_t rdx = *(*(arg1 + 0x358) + (r10_1 << 3))
*(arg3 + 8) = rdx

if (*(arg1 + 0x5c) != 0)
    int64_t rax_2 = *(arg1 + 0x3a0)
    
    if (rax_2 != 0)
        int64_t rax_4 = zx.q(*(rax_2 + (r10_1 << 2))) + rdx
        *(arg3 + 0x18) = rdx
        *(arg3 + 0x10) = rax_4
        return 0
    
    int32_t rax_6 = *(arg1 + 0x398)
    int32_t rcx = 0
    
    if (rax_6 s>= 0)
        rcx = rax_6
    
    *(arg3 + 8) = sx.q(rcx) + rdx

int64_t rcx_2 = *(*(arg1 + 0x358) + (zx.q((r10_1 + 1).d) << 3))
*(arg3 + 0x18) = *(arg3 + 8)
*(arg3 + 0x10) = rcx_2
return 0
