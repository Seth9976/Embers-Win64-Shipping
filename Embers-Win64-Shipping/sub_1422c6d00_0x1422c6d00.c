// 函数: sub_1422c6d00
// 地址: 0x1422c6d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = zx.q(*(arg1 + 0x7c) * *(arg1 + 0x78))

if (*(arg1 + 0x80) == 0)
    *(arg1 + 0x74) = 4
    return zx.q((rax << 2).d)

*(arg1 + 0x74) = 8
return zx.q((rax << 3).d)
