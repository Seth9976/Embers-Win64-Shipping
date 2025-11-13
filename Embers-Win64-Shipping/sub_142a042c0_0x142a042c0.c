// 函数: sub_142a042c0
// 地址: 0x142a042c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = sx.q(arg6)
int64_t var_30 = 0
int64_t var_38 = 0
int64_t r15 = sx.q(arg2)
int64_t var_30_1 = 0
int64_t var_38_1 = 0
int64_t var_30_2 = 0
int64_t var_38_2 = 0
int32_t arg_10
int32_t rsi_1 = sub_1403b9940(arg1, r15, arg3, arg4, arg5, r14, arg8, 0x40, 0x40, &arg6)
    + sub_1403b9940(&arg1[1], r15, arg3, arg4, &arg5[1], r14, &arg8[1], 0x40, 0x40, &arg_10)
arg6 += arg_10
int64_t var_30_3 = 0
int64_t var_38_3 = 0
int32_t rsi_2 =
    rsi_1 + sub_1403b9940(&arg1[2], r15, arg3, arg4, &arg5[2], r14, &arg8[2], 0x40, 0x40, &arg_10)
arg6 += arg_10
int32_t rsi_3 =
    rsi_2 + sub_1403b9940(&arg1[3], r15, arg3, arg4, &arg5[3], r14, &arg8[3], 0x40, 0x40, &arg_10)
int32_t rax_9 = arg6 + arg_10
*arg7 = rax_9
int64_t rcx_4 = sx.q(rsi_3)
return zx.q(rax_9 - ((rcx_4 * rcx_4) s>> 0xc).d)
