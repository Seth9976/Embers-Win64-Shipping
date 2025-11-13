// 函数: sub_142b305b0
// 地址: 0x142b305b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r14 = zx.q(arg2)

if (*arg3 s> 0)
    return 0

int32_t rax_1 = sub_142b2ffc0(*(arg1 + 0x240), *(arg1 + 0x230), *(arg1 + 0x260), r14.d)
int64_t rdi = sx.q(rax_1)

if (rax_1 s>= 0)
    int32_t rcx_1 = *(arg1 + 0x230)
    
    if (rcx_1 s> 0 && rcx_1 - rdi.d s> 0)
        return zx.q(*(*(arg1 + 0x240) + (rdi << 2)))
    
    return 0

int32_t rdx_1 = *(arg1 + 0x250)
int32_t r15 = *(arg1 + 0x250)
char rax_5

if (rdx_1 + 1 s< 0 || *(arg1 + 0x254) s< rdx_1 + 1)
    rax_5 = sub_142aeb240(arg1 + 0x248, rdx_1 + 1, arg3)

if ((rdx_1 + 1 s>= 0 && *(arg1 + 0x254) s>= rdx_1 + 1) || rax_5 != 0)
    *(*(arg1 + 0x260) + (sx.q(*(arg1 + 0x250)) << 3)) = r14 << 0x20
    *(arg1 + 0x250) += 1

sub_142ae7ee0(arg1 + 0x228, r15, not.d(rdi.d), arg3)
return zx.q(r15)
