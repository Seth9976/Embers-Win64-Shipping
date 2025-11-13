// 函数: sub_142bf9030
// 地址: 0x142bf9030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_5

if (arg2 u< (zx.d(*(arg1 + 9)) << 0x10) + (zx.d(*(arg1 + 0xa)) << 8) + (zx.d(*(arg1 + 8)) << 0x18)
        + zx.d(*(arg1 + 0xb)))
    rax_5 = arg1 + ((zx.q(arg2) + 3) << 2)
else
    rax_5 = &data_14369a5d0

uint64_t r9 = zx.q(*(rax_5 + 2))
uint64_t r10 = zx.q(*rax_5)
uint64_t r8_5 = zx.q(*(rax_5 + 1))
uint64_t r11 = zx.q(*(rax_5 + 3))

if ((r10.d << 0x18) + (r9.d << 8) + (r8_5.d << 0x10) != neg.d(r11.d))
    return (((((r10 << 8) + r8_5) << 8) + r9) << 8) + arg1 + r11

return &data_14369a5d0
