// 函数: sub_142bfadd0
// 地址: 0x142bfadd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_142bf7510(arg2, arg1, 4)

if (rax == 0)
    return rax

uint32_t r8_3 = (zx.d(arg1[1]) << 0x10) + (zx.d(arg1[2]) << 8) + (zx.d(*arg1) << 0x18)
uint32_t rax_5 = zx.d(arg1[3])

if (r8_3 != neg.d(rax_5))
    return sub_142bf7510(arg2, arg3, r8_3 + rax_5) != 0

rax_5.b = 1
return rax_5
