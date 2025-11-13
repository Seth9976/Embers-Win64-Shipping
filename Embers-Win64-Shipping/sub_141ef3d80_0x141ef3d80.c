// 函数: sub_141ef3d80
// 地址: 0x141ef3d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = sub_141ea5e60(arg12) == 0
int64_t zmm0 = *arg8
int32_t rax_2 = arg8[1].d
int64_t var_48
int64_t var_38
int64_t var_28

if (cond:0)
    int64_t* rcx_2 = *(arg1 + 0x148)
    int32_t var_20_1 = rax_2
    var_28 = zmm0
    int32_t var_30_1 = arg7[1].d
    int32_t var_40_1 = arg3[1].d
    char var_60_1 = arg14
    var_38 = *arg7
    var_48 = *arg3
    return sub_14248a7d0(rcx_2, arg2.q, &var_48, zx.d(arg4), arg5, arg6.d, &var_38, &var_28, arg9, 
        arg10, arg11.b)

int64_t* rcx_1 = *(arg1 + 0x148)
int32_t var_40 = rax_2
var_48 = zmm0
int32_t var_30 = arg7[1].d
int32_t var_20 = arg3[1].d
char var_50_1 = arg14
char var_60
var_60.q = arg12
var_38 = *arg7
var_28 = *arg3
return sub_14248a5f0(rcx_1, arg2.q, &var_28, zx.d(arg4), arg5, arg6.d, &var_38, &var_48, arg9, 
    arg10, arg11, var_60, arg13)
