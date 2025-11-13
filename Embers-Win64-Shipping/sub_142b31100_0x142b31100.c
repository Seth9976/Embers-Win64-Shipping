// 函数: sub_142b31100
// 地址: 0x142b31100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg3)
int64_t rbp = sx.q(arg2)

if (*arg5 s> 0)
    return 0

int64_t r14_1 = sx.q(*(arg1 + 0x250))
int32_t rdx = *(arg1 + 0x250)
char rax_5

if (rdx + 1 s< 0 || *(arg1 + 0x254) s< rdx + 1)
    rax_5 = sub_142aeb240(arg1 + 0x248, rdx + 1, arg5)

if ((rdx + 1 s>= 0 && *(arg1 + 0x254) s>= rdx + 1) || rax_5 != 0)
    *(*(arg1 + 0x260) + (sx.q(*(arg1 + 0x250)) << 3)) = arg4 | sx.q(rdi.d << 8) | rbp << 0x1c
    *(arg1 + 0x250) += 1

if (*arg5 s> 0)
    return 0

int64_t rsi_1 = 0
int64_t rcx_4

if (rbp.d s< 0 || rbp.d s>= *(arg1 + 0x250))
    rcx_4 = 0
else
    rcx_4 = *(*(arg1 + 0x260) + (rbp << 3))

sub_142aeb3c0(arg1 + 0x248, sx.q(r14_1.d << 8) | (rcx_4 & 0xfffffffff00000ff), rbp.d)
int32_t temp1_1 = rdi.d

if (temp1_1 != 0)
    if (temp1_1 s>= 0 && rdi.d s< *(arg1 + 0x250))
        rsi_1 = *(*(arg1 + 0x260) + (rdi << 3))
    
    sub_142aeb3c0(arg1 + 0x248, r14_1 << 0x1c | (rsi_1 & 0xffff00000fffffff), rdi.d)

return zx.q(r14_1.d)
