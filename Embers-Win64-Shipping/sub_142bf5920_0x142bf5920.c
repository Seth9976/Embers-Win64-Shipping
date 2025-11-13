// 函数: sub_142bf5920
// 地址: 0x142bf5920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = zx.q(arg2)
int32_t rdx = *(arg1 + 0x60)
int32_t rdx_1 = rdx + rdi.d

if (rdx != neg.d(rdi.d) && rdx_1 u>= *(arg1 + 0x68))
    char rax_1 = sub_142bf4fb0(arg1, rdx_1)
    
    if (rax_1 == 0)
        return rax_1

uint64_t rcx = zx.q(*(arg1 + 0x5c))
int64_t r9 = *(arg1 + 0x70)
memmove(r9 + (rcx + rdi) * 0x14, r9 + rcx * 0x14, (*(arg1 + 0x60) - rcx.d) * 0x14)
int32_t rcx_2 = *(arg1 + 0x5c)
uint64_t rdx_3 = zx.q(*(arg1 + 0x60))

if (rcx_2 + rdi.d u> rdx_3.d)
    memset(*(arg1 + 0x70) + rdx_3 * 0x14, 0, zx.q(rcx_2 - rdx_3.d + rdi.d) * 0x14)

*(arg1 + 0x60) += rdi.d
int32_t rax_7
rax_7.b = 1
*(arg1 + 0x5c) += rdi.d
return rax_7
