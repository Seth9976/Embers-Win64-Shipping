// 函数: sub_1418f41c0
// 地址: 0x1418f41c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = arg3 * 2
sub_1418cfd70(arg1, arg2, rbp, 2)
arg1[8].d = arg3
*arg1 = &data_142feeea0
arg1[7] = 0
__builtin_memset(&arg1[9], 0, 0x18)
int64_t rsi = sx.q(arg1[0xa].d)
int32_t rax = rsi.d + rbp
arg1[0xa].d = rax

if (rax s> *(arg1 + 0x54))
    sub_1405a4f90(&arg1[9])

memset(&arg1[9][rsi * 2], 0, sx.q(rbp) << 4)
return arg1
