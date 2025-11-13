// 函数: sub_142a04a40
// 地址: 0x142a04a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg6)
int64_t var_30 = 0
int64_t var_38 = 0
int64_t r14 = sx.q(arg2)
int64_t var_30_1 = 0
int64_t var_38_1 = 0
int32_t arg_10
int32_t rdi_1 = sub_1403b3bb0(arg1, r14, arg3, arg4, arg5, rbp, 0x10, &arg6)
    + sub_1403b3bb0(&arg1[1], r14, arg3, arg4, &arg5[1], rbp, 0x10, &arg_10)
int32_t rax_3 = arg6 + arg_10
*arg7 = rax_3
int64_t rcx_2 = sx.q(rdi_1)
return zx.q(rax_3 - ((rcx_2 * rcx_2) s>> 9).d)
