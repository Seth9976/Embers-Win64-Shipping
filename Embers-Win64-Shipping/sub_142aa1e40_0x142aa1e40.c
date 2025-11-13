// 函数: sub_142aa1e40
// 地址: 0x142aa1e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 8) == 0)
    int64_t rax
    rax.b = 0
    return rax

int32_t rax_2 = *(arg1 + 0x10) * 2
int32_t rdi = arg3 + (arg2 << 1).d

if (rax_2 s>= rdi)
    rdi = rax_2

if (rdi s< 0xc8)
    rdi = 0xc8

int64_t rax_3 = sub_142b18680(*(arg1 + 0x20), rdi, arg3)

if (rax_3 == 0)
    *(arg1 + 8) = rax_3
    *(arg1 + 0x10) = rax_3.d
    return rax_3

*(arg1 + 8) = rax_3
rax_3.b = 1
*(arg1 + 0x10) = rdi
return rax_3
