// 函数: sub_140a2ebf0
// 地址: 0x140a2ebf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r8_1 = zx.d(arg2.b)
uint64_t rax = 0xff

if (r8_1 != 0xff)
    rax = zx.q(r8_1)

jump(*(**(arg1 + rax * 0x18 + 8) + 0x30))
