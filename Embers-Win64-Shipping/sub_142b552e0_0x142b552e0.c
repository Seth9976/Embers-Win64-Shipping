// 函数: sub_142b552e0
// 地址: 0x142b552e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
int32_t rax = sub_142acca60(_mm_cvtepi32_pd(zx.q(arg1 - arg2)), 0x5b5, &arg_8)
int32_t r8_1 = arg_8
*arg3 = (rax << 2) - r8_1 s/ 0x5b4 + r8_1 s/ 0x16d
int32_t r8_2

if (r8_1 != 0x5b4)
    r8_2 = r8_1 s% 0x16d
else
    r8_2 = 0x16d

*arg4 = r8_2 s/ 0x1e
*arg5 = r8_2 s% 0x1e + 1
return arg5
