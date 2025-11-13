// 函数: sub_1422c6cd0
// 地址: 0x1422c6cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = zx.q(*(arg1 + 0x7c))

if (*(arg1 + 0x81) == 0)
    *(arg1 + 0x70) = 8
    return zx.q((rax << 3).d)

*(arg1 + 0x70) = 0x10
return zx.q(rax.d << 4)
