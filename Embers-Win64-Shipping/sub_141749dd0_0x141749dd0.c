// 函数: sub_141749dd0
// 地址: 0x141749dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm1 = arg5
int32_t var_68 = 0x7f7fffff
void* var_48 = arg1 + 0x10
*arg9 = 0xffffffff
uint64_t var_40 = *arg2
int32_t var_38 = arg2[2]
uint64_t var_34 = *arg3
int32_t var_2c = arg3[2]
int32_t var_4c = 0xffffffff
int32_t var_28 = zmm1.d
void** rax_3
int32_t zmm6_1

if (zmm1.d f<= 0f)
    rax_3, zmm6_1 = sub_141742470(arg1, arg2, arg3, arg4, &var_68)
else
    float var_78 = (_mm_unpacklo_ps(zmm1, zmm1.q)).d
    rax_3, zmm6_1 = sub_141682540(arg1, arg2, arg3, arg4[0], var_78, &var_68, var_68)

int64_t zmm0_1 = var_68

if (zmm0_1.d f> zmm6_1)
    rax_3.b = 0
    return rax_3

*arg6 = zmm0_1.d
int64_t var_64
*arg7 = var_64
int32_t var_5c
arg7[1].d = var_5c
int64_t var_58
*arg8 = var_58
int32_t var_50
arg8[1].d = var_50
*arg9 = var_4c
int32_t rax_7
rax_7.b = 1
return rax_7
