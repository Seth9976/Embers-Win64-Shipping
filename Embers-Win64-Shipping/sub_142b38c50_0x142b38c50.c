// 函数: sub_142b38c50
// 地址: 0x142b38c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* var_48 = arg4
int32_t var_40 = arg5
int64_t arg_8 = arg1.q
int128_t zmm6 = arg1
int64_t arg_20
memmove(&arg_20, &arg_8, 8)

if ((arg_20 & 0x8000000000000000) == 0)
    *arg6 = 0
else
    zmm6 ^= data_142d8e3c0
    *arg6 = 1

if (arg2 == 3 && arg3 == 0)
    *arg4 = arg3.b
    *arg7 = arg3
    return arg7

zmm6.q f- 0.0

if (not(is_unordered.q(zmm6.q, 0.0)) && not(zmm6.q f!= 0.0))
    *arg4 = 0x30
    *arg7 = 1
    *arg8 = 1
    return arg8

if (arg2 != 0)
    abort()
    noreturn

int128_t zmm7 = var_48.o
var_48.o = zmm7
char* rax_5
uint128_t zmm6_1
rax_5, zmm6_1 = sub_142b83e60(zmm6, 0, 0, &var_48, arg7, arg8)

if (rax_5.b == 0)
    var_48.o = zmm7
    sub_142b83310(zmm6_1, 0, arg3, &var_48, arg7, arg8)
    rax_5 = sx.q(*arg7)
    *(rax_5 + arg4) = 0

return rax_5
