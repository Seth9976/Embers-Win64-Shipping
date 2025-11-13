// 函数: sub_142c294c0
// 地址: 0x142c294c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_142bf7510(arg2, arg1, 2)

if (result == 0)
    return result

uint16_t rdx_1 = zx.w(*arg1)
uint32_t r9 = zx.d(arg1[1])

if (0 != rdx_1 * 0x100 + r9.w)
    return sub_142bf7510(arg2, arg3, (zx.d(rdx_1.b) << 8) + r9) != 0

int64_t rax
rax.b = 1
return 1
