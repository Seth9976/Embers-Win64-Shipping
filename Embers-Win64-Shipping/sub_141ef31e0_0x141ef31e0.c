// 函数: sub_141ef31e0
// 地址: 0x141ef31e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float __saved_zmm6[0x4] = arg5
arg5 = *arg3
float __saved_zmm7[0x4] = arg6
float zmm2[0x4] = arg5
arg6 = *(arg3 + 4)
zmm2[0] = zmm2[0] * arg5[0]
arg6[0] = arg6[0] * arg6[0]
uint128_t __saved_zmm8 = arg7
arg7 = *(arg3 + 8)
zmm2[0] = zmm2[0] + arg6[0]
uint128_t zmm1
zmm1.d = arg7.d f* arg7.d
zmm2[0] = zmm2[0] f+ zmm1.d
uint64_t var_48
int32_t var_40
float zmm0[0x4]

if (zmm2[0] <= 1f)
    zmm1 = zx.o(*arg3)
    int32_t rax_1 = *(arg3 + 8)
    zmm0 = zmm1
    zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
    var_40 = rax_1
    arg6 = zmm0
    arg7 = var_40
    var_48 = zmm1.q
    arg5 = var_48.d
else
    arg4 = zmm2
    float temp0[0x4] = _mm_rsqrt_ss(zmm2[0], arg4.d)
    zmm2 = 0x3f000000
    arg4.d = arg4.d f* 0.5f
    temp0[0] = temp0[0] * temp0[0]
    zmm1.d = arg4.d f* temp0[0]
    zmm2[0] = 0.5f f- zmm1.d
    temp0[0] = temp0[0] * zmm2[0]
    temp0[0] = temp0[0] + temp0[0]
    zmm0 = temp0
    zmm1.d = temp0.d f* temp0[0]
    arg4.d = arg4.d f* zmm1.d
    zmm0[0] = zmm0[0] * (0.5f f- arg4.d)
    temp0[0] = temp0[0] + zmm0[0]
    arg5[0] = arg5[0] * temp0[0]
    arg6[0] = arg6[0] * temp0[0]
    arg7.d = arg7.d f* temp0[0]

(*(*arg1 + 0x6d0))(zmm0, zmm1, zmm2, arg4, var_48, var_40, __saved_zmm8, __saved_zmm7, __saved_zmm6)
arg5[0] = arg5[0] * zmm0[0]
arg6[0] = arg6[0] * zmm0[0]
arg7.d = arg7.d f* zmm0[0]
*arg2 = arg5[0]
arg2[1] = arg6[0]
arg2[2] = arg7.d
return arg2
