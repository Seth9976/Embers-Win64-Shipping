// 函数: sub_141cfc5b0
// 地址: 0x141cfc5b0
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

void* rcx_3 = sx.q(rdi) * 0x30 + *arg1
__builtin_memset(rcx_3, 0, 0x2c)
*(rcx_3 + 0x2c) = 1
return zx.q(arg1[4].d) | zx.q(rdi)
