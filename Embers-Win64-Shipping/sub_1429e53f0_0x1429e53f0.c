// 函数: sub_1429e53f0
// 地址: 0x1429e53f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbp = zx.q(arg6)
int64_t rsi = sx.q(arg3)
int64_t rdi_1 = rsi << 7
int32_t result =
    sub_142a29a70(arg1, rsi.d, &(&data_143604810)[rbp * 3], arg5, arg4, rbp.b, sx.d(*(arg2 + 4)))

if (result s<= 0)
    return result

int32_t r10_1 = *(rdi_1 + arg1 + 0x3400 + 0x18)
char var_30
var_30.d = result
sub_1429e3bc0(arg1 + 0x3400, rsi.d, rbp.b, 
    sx.q((r10_1 * arg4 + arg5) << 2) + *(rdi_1 + arg1 + 0x3400 + 0x10), r10_1, var_30)
return result
