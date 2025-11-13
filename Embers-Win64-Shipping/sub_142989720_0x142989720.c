// 函数: sub_142989720
// 地址: 0x142989720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2 - 0f

if (not(is_unordered.d(arg2, 0f)) && not(arg2 != 0f))
    *arg1 = (arg2 u>> 0x10).w
    return arg1

int16_t r8 = *(&data_1436fbc50 + (zx.q(arg2) u>> 0x17 << 1))

if (r8 == 0)
    *arg1 = sub_142c998f0(arg2)
    return arg1

int32_t rcx_1 = arg2 & 0x7fffff
*arg1 = ((rcx_1 + 0xfff + (rcx_1 u>> 0xd & 1)) u>> 0xd).w + r8
return arg1
