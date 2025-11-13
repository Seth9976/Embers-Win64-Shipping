// 函数: sub_142297ff0
// 地址: 0x142297ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float __saved_zmm6[0x4] = arg5
arg5 = *arg3
uint128_t __saved_zmm7 = arg6
arg6 = *arg2
arg5[0] = arg5[0] f- arg6.d
float __saved_zmm9[0x4] = arg8
float __saved_zmm10[0x4] = arg9
arg9 = *(arg3 + 8)
arg9[0] = arg9[0] f- *(arg2 + 8)
float __saved_zmm11[0x4] = arg10
arg10 = *(arg3 + 4)
arg10[0] = arg10[0] f- *(arg2 + 4)
arg5[0] = arg5[0] * arg5[0]
float __saved_zmm12[0x4] = arg11
float zmm1 = arg9[0] * arg9[0]
arg10[0] = arg10[0] * arg10[0]
arg10[0] = arg10[0] + arg5[0]
arg10[0] = arg10[0] + zmm1

if (not(arg10[0] <= 9.99999994e-09f))
    float temp0_1[0x4] = _mm_rsqrt_ss(arg10[0], arg10[0])
    float zmm2[0x4] = 0x3f000000
    arg10[0] = arg10[0] * 0.5f
    temp0_1[0] = temp0_1[0] * temp0_1[0]
    zmm2[0] = 0.5f - arg10[0] * temp0_1[0]
    temp0_1[0] = temp0_1[0] * zmm2[0]
    temp0_1[0] = temp0_1[0] + temp0_1[0]
    zmm1 = temp0_1[0] * temp0_1[0]
    arg10[0] = arg10[0] * zmm1
    temp0_1[0] = temp0_1[0] * (0.5f - arg10[0])
    temp0_1[0] = temp0_1[0] + temp0_1[0]
    arg5[0] = arg5[0] * temp0_1[0]
    arg10[0] = arg10[0] * temp0_1[0]
    arg9[0] = arg9[0] * temp0_1[0]

arg8 = arg5
arg9[0] = arg9[0] * arg4[0]
arg8[0] = arg8[0] * arg4[0]
arg10[0] = arg10[0] * arg4[0]
arg9[0] = arg9[0] * 0.333333343f
arg8[0] = arg8[0] f+ arg6.d
arg4[0] = arg4[0] * arg5[0]
arg5 = arg13
arg4[0] = arg4[0] * -0.333333343f
int64_t rax_1 = *arg1
arg8[0] = arg8[0] + arg9[0]
arg6 = _mm_cvtepi32_ps(zx.o(arg14))
float var_88 = arg8[0]
arg10[0] = arg10[0] f+ *(arg2 + 4)
float var_a0 = arg5[0]
float var_84 = arg10[0]
arg9[0] = arg9[0] f+ *(arg2 + 8)
arg9[0] = arg9[0] + arg4[0]
(*(rax_1 + 0x30))(arg9, zmm1, &var_88, arg12, 0, var_a0, arg6.d, 0, var_88, arg9[0], __saved_zmm12, 
    __saved_zmm11, __saved_zmm10, __saved_zmm9, arg7, __saved_zmm7, __saved_zmm6)
arg8[0] = arg8[0] f+ *arg2
arg9[0] = arg9[0] f+ *(arg2 + 8)
arg10[0] = arg10[0] f+ *(arg2 + 4)
int64_t rax_2 = *arg1
arg8[0] = arg8[0] - arg9[0]
arg9[0] = arg9[0] - arg4[0]
float var_a0_1 = arg5[0]
float var_84_1 = arg10[0]
var_88 = arg8[0]
return (*(rax_2 + 0x30))(arg1, arg2, &var_88, arg12, 0, var_a0_1, arg6.d, 0, var_88, arg9[0])
