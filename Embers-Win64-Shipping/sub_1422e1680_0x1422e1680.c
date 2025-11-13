// 函数: sub_1422e1680
// 地址: 0x1422e1680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = *arg1
truncf(zmm0.d)
float zmm6[0x4] = zmm0
zmm0 = *(arg1 + 4)
truncf(zmm0.d)
int32_t rcx = *arg2
float zmm2[0x4] = zmm0
float zmm5[0x4] = 0x3f000000
int32_t rax_1 = arg2[2] - rcx
int32_t var_80 = 0x3f800000
int32_t rcx_1 = arg2[1]
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(rcx))
int32_t var_7c = 0x3f800000
int32_t var_90 = 0x3f000000
int32_t var_8c = 0x3f800000
zmm0 = _mm_cvtepi32_ps(zx.o(rcx_1))
zmm6[0] = zmm6[0] f- zmm1.d
int32_t rax_2 = arg2[3]
zmm2[0] = zmm2[0] f- zmm0.d
zmm1 = _mm_cvtepi32_ps(zx.o(rax_1))
zmm0 = _mm_cvtepi32_ps(zx.o(rax_2 - rcx_1))
zmm6[0] = zmm6[0] f/ zmm1.d
zmm2[0] = zmm2[0] f/ zmm0.d
zmm0 = data_142d3f660
zmm5[0] = 0.5f - zmm2[0]
uint128_t var_78 = zmm0
zmm6[0] = zmm6[0] - 0.5f
zmm5[0] = zmm5[0] + zmm5[0]
zmm6[0] = zmm6[0] + zmm6[0]
zmm6[0] = zmm6[0] - 0.5f
float var_88[0x4]
var_88[0] = zmm6[0]
float temp0_4[0x4] = _mm_shuffle_ps(var_88, var_88, 0xe1)
temp0_4[0] = zmm5[0]
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xe1)
int64_t var_88_1 = temp0_5[0].q
float temp0_7[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_5, temp0_5, 0), *arg3)
zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_5, temp0_5, 0x55), arg3[1])
zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_5, temp0_5, 0xaa), arg3[2])
float temp0_12[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xff)
float temp0_13[0x4] = _mm_add_ps(temp0_7, zmm0)
zmm1 = _mm_add_ps(zmm1, __mulps_xmmps_memps(temp0_12, arg3[3]))
float var_98[0x4]
var_98[0] = zmm6[0]
float temp0_16[0x4] = _mm_shuffle_ps(var_98, var_98, 0xe1)
temp0_16[0] = zmm5[0]
float temp0_17[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xe1)
int64_t var_98_1 = temp0_17[0].q
float temp0_18[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0)
float zmm9[0x4] = _mm_add_ps(temp0_13, zmm1)
float temp0_23[0x4] = _mm_add_ps(__mulps_xmmps_memps(temp0_18, *arg3), 
    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_17, temp0_17, 0x55), arg3[1]))
zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_17, temp0_17, 0xaa), arg3[2])
float temp0_27[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_17, temp0_17, 0xff), arg3[3])
zmm0 = _mm_shuffle_ps(zmm9, zmm9, 0xff)
zmm1 = _mm_add_ps(zmm1, temp0_27)
float zmm3[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0x55)
float zmm4[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xaa)
var_88_1.d = zmm9[0]
var_88_1:4.d = zmm3[0]
float var_80_1 = zmm4[0]
float zmm8[0x4] = _mm_add_ps(temp0_23, zmm1)
zmm6 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
float zmm7[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xaa)

if (not(zmm0.d f== 0f))
    zmm2 = 0x3f800000
    zmm2[0] = 1f f/ zmm0.d
    zmm0.d = zmm2.d f* zmm9[0]
    zmm1.d = zmm2.d f* zmm3[0]
    zmm2[0] = zmm2[0] * zmm4[0]
    zmm9 = zmm0
    var_88_1.d = zmm0.d
    zmm3 = zmm1
    var_88_1:4.d = zmm1.d
    var_80_1 = zmm2[0]
    zmm4 = zmm2

zmm0 = zmm8[3]

if (not(zmm0.d f== 0f))
    zmm2 = 0x3f800000
    zmm2[0] = 1f f/ zmm0.d
    zmm0.d = zmm2.d f* zmm8[0]
    zmm1.d = zmm2.d f* zmm6[0]
    zmm2[0] = zmm2[0] * zmm7[0]
    zmm8 = zmm0
    zmm6 = zmm1
    zmm7 = zmm2

zmm8[0] = zmm8[0] - zmm9[0]
zmm6[0] = zmm6[0] - zmm3[0]
zmm7[0] = zmm7[0] - zmm4[0]
zmm0.d = zmm8.d f* zmm8[0]
zmm6[0] = zmm6[0] * zmm6[0]
zmm1.d = zmm7.d f* zmm7[0]
zmm6[0] = zmm6[0] f+ zmm0.d
zmm6[0] = zmm6[0] f+ zmm1.d

if (zmm6[0] == 1f)
    goto label_1422e1983

float result

if (zmm6[0] >= 9.99999994e-09f)
    zmm3 = zx.o(0)
    zmm4 = 0x3f000000
    zmm3[0] = zmm6.d
    zmm2 = 0x3f000000
    float temp0_35[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
    zmm3[0] = zmm3[0] * 0.5f
    zmm0.d = temp0_35.d f* temp0_35[0]
    zmm1.d = zmm3.d f* zmm0.d
    zmm2[0] = 0.5f f- zmm1.d
    zmm0.d = temp0_35.d f* zmm2[0]
    temp0_35[0] = temp0_35[0] f+ zmm0.d
    zmm1.d = temp0_35.d f* temp0_35[0]
    zmm3[0] = zmm3[0] f* zmm1.d
    zmm4[0] = 0.5f - zmm3[0]
    zmm0.d = temp0_35.d f* zmm4[0]
    temp0_35[0] = temp0_35[0] f+ zmm0.d
    zmm8[0] = zmm8[0] * temp0_35[0]
    zmm6[0] = zmm6[0] * temp0_35[0]
    zmm7[0] = zmm7[0] * temp0_35[0]
label_1422e1983:
    result = zmm7[0]
    var_98_1:4.d = zmm6[0]
    var_98_1.d = zmm8[0]
else
    var_98_1.d = data_143dbb1f8.d
    result = data_143dbb200.d
    var_98_1:4.d = data_143dbb1fc.d

*arg4 = var_88_1
arg4[1].d = var_80_1
*arg5 = var_98_1
arg5[1].d = result
return result
