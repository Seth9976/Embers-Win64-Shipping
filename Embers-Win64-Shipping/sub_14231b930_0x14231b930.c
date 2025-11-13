// 函数: sub_14231b930
// 地址: 0x14231b930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = *arg2
int32_t arg_18
int32_t* var_10 = &arg_18
int64_t (* var_18)(int32_t* arg1, int64_t* arg2) = sub_14230aef0
arg_18 = arg3
int32_t result
int512_t zmm0
result, zmm0 = sub_142311370(arg1, rdx, arg5, arg4, &var_18)

if (result == 0)
    return result

*(arg1 + 0x719) &= 0xbf
sub_141f4dc50(arg1, zmm0)
return sub_141f4d2c0(arg1) __tailcall
