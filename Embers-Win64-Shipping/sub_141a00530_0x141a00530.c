// 函数: sub_141a00530
// 地址: 0x141a00530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x40) += 1
int64_t rdi = sx.q(*(arg1 + 0x30))
int32_t rax = (rdi + 1).d
*(arg1 + 0x30) = rax

if (rax s> *(arg1 + 0x34))
    sub_1407c36f0(arg1 + 0x28, rdi.d)

void* rax_2 = *(arg1 + 0x28)

if ((rax_2.b & 1) != 0)
    rax_2 = (rax_2 s>> 1) + arg1 + 0x28

*(rax_2 + (rdi << 1)) = arg2
return zx.q(rdi.d)
