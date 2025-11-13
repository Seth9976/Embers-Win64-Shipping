// 函数: sub_14231b9a0
// 地址: 0x14231b9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = *arg2
char arg_18 = arg3
char* var_10 = &arg_18
int64_t (* var_18)(char* arg1, int64_t* arg2, int512_t arg3 @ zmm1) = sub_14230af20
int32_t result
int512_t zmm0
result, zmm0 = sub_142311370(arg1, rdx, arg4, 0, &var_18)

if (result == 0)
    return result

var_18 = nullptr

if ((*(*arg1 + 0x3e8))(arg1, var_18) != 0)
    zmm0 = sub_141f49140(arg1, arg1[0xf4].d)

sub_141f4dc50(arg1, zmm0)
return sub_141f4d2c0(arg1) __tailcall
