// 函数: sub_141cfc530
// 地址: 0x141cfc530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi

if (arg1[3].d == 0)
    rdi = arg1[1].d
    arg1[1].d = rdi + 1
    
    if (rdi + 1 s> *(arg1 + 0xc))
        sub_1405c4f50(arg1)
else
    int64_t r8_1 = sx.q(arg1[3].d)
    rdi = *(arg1[2] + (r8_1 << 2) - 4)
    arg1[3].d = (r8_1 - 1).d
    sub_1405dac90(&arg1[2])

__builtin_memset(sx.q(rdi) * 0x30 + *arg1, 0, 0x30)
return zx.q(arg1[4].d) | zx.q(rdi)
