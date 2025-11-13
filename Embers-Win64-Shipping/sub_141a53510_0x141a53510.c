// 函数: sub_141a53510
// 地址: 0x141a53510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = *(arg3 + 0xf8)
int64_t rax = zmm0.q
int64_t r9 = zmm0:8.q
int64_t arg_20 = rax
int64_t var_28 = r9

if (rax.b == 2 || r9.b == 2)
    *arg1 = zmm0
    return arg1

int64_t r9_1 = *(arg3 + 0x108)
int64_t r8 = *(arg3 + 0x110)
int32_t arg_1c = 0
int32_t arg_18 = 1
sub_1408ec700(&arg_18, arg_18.q, r8, r9_1)
int32_t rax_2 = zmm0:0xc.d - arg2[2]
int32_t rdx_2 = *arg2 + zmm0:4.d
int32_t rcx_2 = arg_18 + rdx_2
arg_20:4.d = rdx_2

if (rax_2 s>= rcx_2)
    rcx_2 = rax_2

*arg1 = arg_20
var_28:4.d = rcx_2
arg1[1] = var_28
return arg1
