// 函数: sub_1421daed0
// 地址: 0x1421daed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg11 = *(arg2 + 0x80)
arg11[1] = *(arg2 + 0x90)
arg11[2] = *(arg2 + 0xa0)
arg11[3] = *(arg2 + 0xb0)
uint32_t var_58[0x4]
sub_140631b10(arg2 + 0x80, &var_58)
int32_t result_1
int32_t result_2 = result_1
arg11[4] = var_58
arg11[8].q = arg3
uint128_t var_48
arg11[5] = var_48
uint32_t var_38[0x4]
arg11[6] = var_38
uint128_t var_28
arg11[7] = var_28
void var_78
int64_t* rax = sub_141996dc0(arg7, &var_78, arg4 * result_2)
*arg8 = *rax
arg8[1].q = rax[2]
sub_1419a4810(arg7)
arg11[9].q = *arg8
*(arg11 + 0x88) = arg4
*(arg11 + 0x8c) = result_2
int32_t arg_20
(*(*arg1 + 0x68))(arg1, &result_1, &arg_20)
int64_t* rax_3 = sub_141996c30(arg6, &var_78, result_1, arg_20)
*arg9 = *rax_3
arg9[1].q = rax_3[2]
arg11[0xa].q = *arg9
uint64_t result = zx.q(result_1)
*(arg11 + 0x98) = result.d
arg11[0xb].q = 0

if ((arg1[5].b & 1) != 0)
    int64_t* rax_5 = sub_141996dc0(arg7, &var_78, arg4 * arg5)
    *arg10 = *rax_5
    arg10[2] = rax_5[2]
    sub_1419a4810(arg7)
    result = *arg10
    arg11[0xb].q = result

return result
