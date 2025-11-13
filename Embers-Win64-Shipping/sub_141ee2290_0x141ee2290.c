// 函数: sub_141ee2290
// 地址: 0x141ee2290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x948))()
arg3[0] = arg3[0] * 0.0174532924f
float zmm1[0x4] = zx.o(0)
zmm1[0] = arg3[0]
float zmm0[0x4] = __libm_sse2_sincosf_(zmm1)
float zmm6 = zmm0[0]
int32_t var_30 = 0x3f000000
float var_34 = zmm6
float temp0[0x4] = _mm_shuffle_ps(zmm0, zmm0, 1)
float zmm1_1 = zmm0[0] * zmm6
temp0[0] = temp0[0] * temp0[0]
float var_38 = temp0[0]
temp0[0] = temp0[0] + zmm1_1
temp0[0] = temp0[0] + 0.25f

if (not(temp0[0] != 1f))
    *arg2 = var_38.q
    arg2[1].d = 0x3f000000
    return arg2

if (not(temp0[0] >= 9.99999994e-09f))
    int32_t rax_2 = data_143dbb200
    *arg2 = data_143dbb1f8.q
    arg2[1].d = rax_2
    return arg2

float zmm3[0x4] = zx.o(0)
float zmm2[0x4] = 0x3f000000
zmm3[0] = temp0[0]
float temp0_1[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
zmm3[0] = zmm3[0] * 0.5f
temp0_1[0] = temp0_1[0] * temp0_1[0]
zmm2[0] = 0.5f - zmm3[0] * temp0_1[0]
temp0_1[0] = temp0_1[0] * zmm2[0]
temp0_1[0] = temp0_1[0] + temp0_1[0]
zmm3[0] = zmm3[0] * temp0_1[0] * temp0_1[0]
temp0_1[0] = temp0_1[0] * (0.5f - zmm3[0])
temp0_1[0] = temp0_1[0] + temp0_1[0]
temp0[0] = temp0[0] * temp0_1[0]
zmm6 = zmm6 * temp0_1[0]
temp0_1[0] = temp0_1[0] * 0.5f
*arg2 = temp0[0]
*(arg2 + 4) = zmm6
arg2[1].d = temp0_1[0]
return arg2
