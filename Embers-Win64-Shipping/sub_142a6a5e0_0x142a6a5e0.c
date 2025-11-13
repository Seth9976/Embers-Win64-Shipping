// 函数: sub_142a6a5e0
// 地址: 0x142a6a5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10

if (arg1 s>= 0x575)
    uint64_t rdx_2 = zx.q((arg1 - 0x575) s/ 0x43)
    r10.b = arg1 - 0x575 - rdx_2.d * 0x43 s>= 0x21
    return zx.q(arg1 - (r10 + (rdx_2 << 1).d) + 0x243)

r10.b = (0x574 - arg1) s% 0x43 s<= 0x21
int32_t temp2
int32_t temp3
temp2:temp3 = muls.dp.d(0x7a44c6b, arg1 - 0x574)
int32_t rdx_7 = temp2 s>> 1
return zx.q(arg1 - (r10 + (((rdx_7 u>> 0x1f) - 1 + rdx_7) << 1)) + 0x243)
