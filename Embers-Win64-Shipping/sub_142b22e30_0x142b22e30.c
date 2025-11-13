// 函数: sub_142b22e30
// 地址: 0x142b22e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax = *(arg1 + 8)
int32_t rax_2

if (rax s< 0)
    rax_2 = *(arg1 + 0xc)
else
    rax_2 = sx.d(rax) s>> 5

int32_t rcx = *(arg1 + 0x80)
int32_t rdi_1 = rcx - rax_2

if (rdi_1 s<= 0)
    *(arg1 + 0x80) = sub_142a4a4f0(arg1, rcx, neg.d(arg2))
    return 0

if (rdi_1 s< arg2)
    *(arg1 + 0x80) = sub_142a4a4f0(arg1, rax_2, rdi_1 - arg2)
    return zx.q(rdi_1)

*(arg1 + 0x80) = rcx - arg2
return zx.q(arg2)
