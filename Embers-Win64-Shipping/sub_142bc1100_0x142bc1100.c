// 函数: sub_142bc1100
// 地址: 0x142bc1100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = *arg4
__builtin_memset(&arg1[1], 0, 0x30)
arg1[8] = 0
int16_t arg_30
arg1[8].w = arg_30
arg1[7] = arg3
*(arg1 + 0x42) = arg6
*(arg1 + 0x34) = arg2
*arg1 = arg4
int64_t rax_2 = sub_142b99a90(rsi, 8, 0, arg5, 0, &arg_30)
int32_t rdx = arg_30.d
arg1[4] = rax_2

if (rdx == 0)
    arg1[5] = rax_2
    arg1[6].d = arg5
    return zx.q(rdx)

sub_142b99980(rsi, rax_2)
uint64_t result = zx.q(arg_30.d)
arg1[4] = 0
return result
