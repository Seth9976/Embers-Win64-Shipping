// 函数: sub_142b4f6d0
// 地址: 0x142b4f6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x18)

if (rax == 0xffff)
    rax.b = 0
    return rax

int32_t rdi = rax + 0x3e8

if (rdi s> 0xffff)
    rdi = 0xffff

int64_t rax_1 = sub_142a7dd00(sx.q(rdi) << 4)

if (rax_1 == 0)
    return rax_1

memcpy(rax_1, *(arg1 + 0x10), *(arg1 + 0x1c) << 4)
sub_142a7dcd0(*(arg1 + 0x10))
*(arg1 + 0x10) = rax_1
int64_t rax_2
rax_2.b = 1
*(arg1 + 0x18) = rdi
return rax_2
