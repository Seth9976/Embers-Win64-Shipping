// 函数: sub_141e7df70
// 地址: 0x141e7df70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x4] = *(arg3 + 4)
float zmm3[0x4] = *(arg3 + 8)
int32_t var_4c = 0x3f800000
float var_58[0x4]
var_58[0] = (*arg3)[0]
float temp0[0x4] = _mm_shuffle_ps(var_58, var_58, 0xe1)
temp0[0] = zmm2[0]
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
int64_t var_48 = 0
temp0_1[0] = zmm3[0]
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
int96_t var_58_1 = temp0_2[0].12
float temp0_4[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0xff), *(arg1 + 0x790))
int32_t var_40 = 0
float temp0_6[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0x55), *(arg1 + 0x770))
float temp0_8[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0xaa), *(arg1 + 0x780))
float temp0_10[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0), *(arg1 + 0x760))
float temp0_13[0x4] = _mm_add_ps(_mm_add_ps(temp0_4, temp0_8), _mm_add_ps(temp0_6, temp0_10))
var_58_1.d = temp0_13[0]
float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0x55)
float temp0_15[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xaa)
var_58_1:4.d = temp0_14[0]
var_58_1:8.d = temp0_15[0]

if (arg4 != 0)
    temp0_13[0] = temp0_13[0] * temp0_13[0]
    temp0_14[0] = temp0_14[0] * temp0_14[0]
    temp0_15[0] = temp0_15[0] * temp0_15[0]
    temp0_14[0] = temp0_14[0] + temp0_13[0]
    temp0_14[0] = temp0_14[0] + temp0_15[0]
    *arg4 = _mm_sqrt_ss(0, temp0_14[0])[0]

temp0_14[0] = temp0_14[0] * temp0_14[0]
temp0_13[0] = temp0_13[0] * temp0_13[0]
temp0_15[0] = temp0_15[0] * temp0_15[0]
temp0_14[0] = temp0_14[0] + temp0_13[0]
temp0_14[0] = temp0_14[0] + temp0_15[0]

if (not(temp0_14[0] != 1f))
    *arg2 = var_58_1.q
    arg2[1].d = var_58_1:8.d
else if (temp0_14[0] >= 9.99999994e-09f)
    float zmm4[0x4] = 0x3f000000
    zmm3 = zx.o(0)
    zmm2 = 0x3f000000
    zmm3[0] = temp0_14[0]
    float temp0_17[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
    zmm3[0] = zmm3[0] * 0.5f
    temp0_17[0] = temp0_17[0] * temp0_17[0]
    zmm3[0] = zmm3[0] * temp0_17[0]
    zmm2[0] = 0.5f - zmm3[0]
    temp0_17[0] = temp0_17[0] * zmm2[0]
    temp0_17[0] = temp0_17[0] + temp0_17[0]
    temp0_17[0] = temp0_17[0] * temp0_17[0]
    zmm3[0] = zmm3[0] * temp0_17[0]
    zmm4[0] = 0.5f - zmm3[0]
    temp0_17[0] = temp0_17[0] * zmm4[0]
    temp0_17[0] = temp0_17[0] + temp0_17[0]
    temp0_13[0] = temp0_13[0] * temp0_17[0]
    temp0_14[0] = temp0_14[0] * temp0_17[0]
    temp0_15[0] = temp0_15[0] * temp0_17[0]
    *arg2 = temp0_13[0]
    *(arg2 + 4) = temp0_14[0]
    arg2[1].d = temp0_15[0]
else
    int32_t rax_2 = data_143dbb200
    *arg2 = data_143dbb1f8.q
    arg2[1].d = rax_2

return arg2
