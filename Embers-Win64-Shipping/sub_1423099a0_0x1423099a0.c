// 函数: sub_1423099a0
// 地址: 0x1423099a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = *arg2
int32_t arg_18
int32_t* var_10 = &arg_18
arg_18 = arg3
void* (* var_18)(float* arg1, int64_t* arg2) = sub_14230afd0
int32_t result
int512_t zmm0
result, zmm0 = sub_142311370(arg1, rdx, 1, arg4, &var_18)

if (result == 0)
    return result

*(arg1 + 0x719) &= 0xbf
sub_141f4dc50(arg1, zmm0)
return sub_141f4d2c0(arg1) __tailcall
