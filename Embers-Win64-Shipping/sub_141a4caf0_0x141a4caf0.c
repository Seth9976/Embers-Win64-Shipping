// 函数: sub_141a4caf0
// 地址: 0x141a4caf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18
sub_141a514d0(&arg_18)
*arg1 = 2
*(arg1 + 4) = 0
arg1[8] = 2
*(arg1 + 0xc) = 0
int32_t arg_8
int32_t arg_14

if (*arg2 != 2)
    sub_141a6d2f0(&arg_8, 0, arg_18, _mm_cvtps_pd((*(arg2 + 4)).q))
    arg_14 = arg_8
    *arg1 = 1.q

if (arg2[8] != 2)
    sub_141a6d2f0(&arg_8, 0, arg_18, _mm_cvtps_pd((*(arg2 + 0xc)).q))
    arg_14 = arg_8
    *(arg1 + 8) = 1.q

return arg1
