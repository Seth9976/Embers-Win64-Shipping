// 函数: sub_142b23470
// 地址: 0x142b23470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 s< 0x300)
    int64_t rax
    rax.b = 0
    return rax

if (arg1 s> 0xffff)
    arg1 = zx.d((arg1 s>> 0xa).w - 0x2840)

uint64_t rdx = zx.q(*((sx.q(arg1) s>> 5) + 0x14367b600))

if (rdx.d == 0 || not(test_bit(*((rdx << 2) + 0x14367c600), arg1 & 0x1f)))
    return 0

int32_t rax_3
rax_3.b = 1
return rax_3
