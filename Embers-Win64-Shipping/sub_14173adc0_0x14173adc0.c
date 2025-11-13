// 函数: sub_14173adc0
// 地址: 0x14173adc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 == 0xffffffff)
    arg2[1].d = 0x3f800000
    *arg2 = 0
    return arg2

int64_t r8 = sx.q(arg4) * 3
int64_t rax_1 = *(arg1 + 0x10)
int32_t rax_2 = *(rax_1 + (r8 << 3) + 0x14)
*arg2 = *(rax_1 + (r8 << 3) + 0xc)
arg2[1].d = rax_2
return arg2
