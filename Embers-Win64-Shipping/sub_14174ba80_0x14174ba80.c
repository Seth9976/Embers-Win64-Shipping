// 函数: sub_14174ba80
// 地址: 0x14174ba80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg9 = 0xffffffff
uint128_t zmm0
zmm0.d = arg4.d f* *arg3
zmm0.d = zmm0.d f+ *arg2
float zmm1 = arg4.d f* arg3[1] f+ arg2[1]
int32_t var_48 = zmm0.d
zmm0.d = arg4.d f* arg3[2]
float var_44 = zmm1
zmm0.d = zmm0.d f+ arg2[2]
int32_t var_40 = zmm0.d
zmm0 = arg5
int64_t var_28
int64_t* rax_1
float zmm6_1
rax_1, zmm6_1 = sub_141737e80(arg1, &var_28, arg2, &var_48, zmm0, zmm0.d)
char var_1c

if (var_1c == 0)
    rax_1.b = 0
    return rax_1

*arg7 = var_28
int32_t var_20
arg7[1].d = var_20
int64_t var_38
(*(*arg1 + 0x20))(arg1, &var_28, &var_38)
*arg8 = var_38
int64_t zmm0_1 = (zx.o(0)).q
int32_t var_30
arg8[1].d = var_30

if (not(zmm6_1 <= 0f))
    zmm0_1.d = arg7[1].d.d f- arg2[2]
    float zmm2_1 = *(arg7 + 4) f- arg2[1]
    float zmm1_1 = *arg7 f- *arg2
    zmm0_1.d = zmm0_1.d f* zmm0_1.d
    zmm0_1 = _mm_sqrt_ss(0, zmm2_1 * zmm2_1 + zmm1_1 * zmm1_1 f+ zmm0_1.d)

*arg6 = zmm0_1.d
int32_t* rax_5
rax_5.b = 1
return rax_5
