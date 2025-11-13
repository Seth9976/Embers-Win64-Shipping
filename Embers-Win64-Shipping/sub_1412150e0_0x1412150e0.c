// 函数: sub_1412150e0
// 地址: 0x1412150e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int32_t var_98
void* rax_2 = sub_1412278f0(arg1, &var_98)
float zmm6[0x4] = *(rax_2 + 0xc) ^ 0x80000000
float zmm8[0x4] = *(rax_2 + 8)
float zmm7[0x4] = *(rax_2 + 4) ^ 0x80000000
zmm7[0] = zmm7[0] * zmm7[0]
zmm6[0] = zmm6[0] * zmm6[0]
zmm8[0] = zmm8[0] * zmm8[0]
zmm7[0] = zmm7[0] + zmm6[0]
zmm7[0] = zmm7[0] + zmm8[0]
float zmm2[0x4]
float zmm3[0x4]
float zmm4[0x4]

if (not(zmm7[0] == 1f))
    if (zmm7[0] >= 9.99999994e-09f)
        zmm4 = 0x3f000000
        zmm3 = zx.o(0)
        zmm2 = 0x3f000000
        zmm3[0] = zmm7[0]
        float temp0_1[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
        zmm3[0] = zmm3[0] * 0.5f
        temp0_1[0] = temp0_1[0] * temp0_1[0]
        zmm3[0] = zmm3[0] * temp0_1[0]
        zmm2[0] = 0.5f - zmm3[0]
        temp0_1[0] = temp0_1[0] * zmm2[0]
        temp0_1[0] = temp0_1[0] + temp0_1[0]
        temp0_1[0] = temp0_1[0] * temp0_1[0]
        zmm3[0] = zmm3[0] * temp0_1[0]
        zmm4[0] = 0.5f - zmm3[0]
        temp0_1[0] = temp0_1[0] * zmm4[0]
        temp0_1[0] = temp0_1[0] + temp0_1[0]
        float var_e8_1 = temp0_1[0]
        zmm6[0] = zmm6[0] * temp0_1[0]
        zmm7[0] = zmm7[0] * temp0_1[0]
        zmm8[0] = zmm8[0] * temp0_1[0]
    else
        zmm6 = data_143dbb1f8
        zmm7 = data_143dbb1fc
        zmm8 = data_143dbb200

int32_t* rcx = &var_98
var_98 = 0x3f62dfcf
zmm8[0] = zmm8[0] * 1.02332771f
int64_t rax_3 = 0
zmm7[0] = zmm7[0] * -1.02332771f
int64_t i_6 = 3
int64_t var_74 = 0
float var_90 = zmm8[0]
zmm4 = zx.o(0)
int32_t var_6c = 0
float var_94 = zmm7[0]
zmm2 = zx.o(0)
zmm6[0] = zmm6[0] * -1.02332771f
int64_t i_7 = 3
zmm6[0] = zmm6[0] * 0.858085215f
float var_8c = zmm6[0]
zmm7[0] = zmm7[0] * -0.858085215f
zmm6[0] = zmm6[0] * zmm7[0]
zmm7[0] = zmm7[0] * zmm8[0]
float var_88 = zmm6[0]
zmm8[0] = zmm8[0] * zmm8[0]
float var_84 = zmm7[0]
zmm6[0] = zmm6[0] * -0.858085215f
zmm8[0] = zmm8[0] * 0.743124902f
zmm6[0] = zmm6[0] * zmm8[0]
zmm8[0] = zmm8[0] - 0.247708291f
float var_7c = zmm6[0]
zmm7[0] = zmm7[0] * zmm7[0]
float var_80 = zmm8[0]
zmm6[0] = zmm6[0] * zmm6[0]
zmm6[0] = zmm6[0] - zmm7[0]
zmm6[0] = zmm6[0] * 0.429042608f
float var_78 = zmm6[0]
int64_t i

do
    float temp0_2[0x4] = __mulps_xmmps_memps(*(arg1 - &var_98 + rcx), *rcx)
    rcx = &rcx[4]
    float temp0_4[0x4] = _mm_add_ps(temp0_2, _mm_shuffle_ps(temp0_2, temp0_2, 0x4e))
    zmm2 = _mm_add_ps(zmm2, _mm_add_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0x39), temp0_4))
    i = i_7
    i_7 -= 1
while (i != 1)
float var_e4 = zmm2[0]
int64_t rcx_1 = 0
zmm2 = zmm4
int64_t i_8 = 3
int64_t i_1

do
    float temp0_8[0x4] = __mulps_xmmps_memps(*(&var_98 + rcx_1), *(rcx_1 + arg1 + 0x30))
    rcx_1 += 0x10
    float temp0_10[0x4] = _mm_add_ps(temp0_8, _mm_shuffle_ps(temp0_8, temp0_8, 0x4e))
    zmm2 = _mm_add_ps(zmm2, _mm_add_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0x39), temp0_10))
    i_1 = i_8
    i_8 -= 1
while (i_1 != 1)
float var_dc = zmm2[0]
zmm3 = zmm4
int64_t rcx_2 = 0
int64_t i_9 = 3
int64_t i_2

do
    float temp0_14[0x4] = __mulps_xmmps_memps(*(&var_98 + rcx_2), *(rcx_2 + arg1 + 0x60))
    rcx_2 += 0x10
    float temp0_16[0x4] = _mm_add_ps(temp0_14, _mm_shuffle_ps(temp0_14, temp0_14, 0x4e))
    zmm3 = _mm_add_ps(zmm3, _mm_add_ps(_mm_shuffle_ps(temp0_16, temp0_16, 0x39), temp0_16))
    i_2 = i_9
    i_9 -= 1
while (i_2 != 1)
zmm6 ^= 0x80000000
float var_e8_2 = zmm3[0]
zmm8 ^= 0x80000000
int64_t var_74_1 = 0
zmm7 ^= 0x80000000
int32_t var_6c_1 = 0
var_98 = 0x3f62dfcf
zmm7[0] = zmm7[0] * -1.02332771f
int32_t* rcx_3 = &var_98
zmm8[0] = zmm8[0] * 1.02332771f
zmm2 = zmm4
int64_t i_10 = 3
float var_94_1 = zmm7[0]
zmm6[0] = zmm6[0] * -1.02332771f
float var_90_1 = zmm8[0]
zmm6[0] = zmm6[0] * 0.858085215f
float var_8c_1 = zmm6[0]
zmm7[0] = zmm7[0] * -0.858085215f
zmm6[0] = zmm6[0] * zmm7[0]
zmm7[0] = zmm7[0] * zmm8[0]
float var_88_1 = zmm6[0]
zmm8[0] = zmm8[0] * zmm8[0]
float var_84_1 = zmm7[0]
zmm6[0] = zmm6[0] * zmm6[0]
zmm8[0] = zmm8[0] * 0.743124902f
zmm7[0] = zmm7[0] * zmm7[0]
zmm8[0] = zmm8[0] - 0.247708291f
zmm6[0] = zmm6[0] * -0.858085215f
zmm6[0] = zmm6[0] - zmm7[0]
zmm6[0] = zmm6[0] * zmm8[0]
float var_80_1 = zmm8[0]
zmm6[0] = zmm6[0] * 0.429042608f
float var_7c_1 = zmm6[0]
float var_78_1 = zmm6[0]
int64_t i_3

do
    float temp0_20[0x4] = __mulps_xmmps_memps(*(arg1 - &var_98 + rcx_3), *rcx_3)
    rcx_3 = &rcx_3[4]
    float temp0_22[0x4] = _mm_add_ps(temp0_20, _mm_shuffle_ps(temp0_20, temp0_20, 0x4e))
    zmm2 = _mm_add_ps(zmm2, _mm_add_ps(_mm_shuffle_ps(temp0_22, temp0_22, 0x39), temp0_22))
    i_3 = i_10
    i_10 -= 1
while (i_3 != 1)
float var_e0 = zmm2[0]
int64_t rcx_4 = 0
zmm2 = zmm4
int64_t i_11 = 3
int64_t i_4

do
    float temp0_26[0x4] = __mulps_xmmps_memps(*(&var_98 + rcx_4), *(rcx_4 + arg1 + 0x30))
    rcx_4 += 0x10
    float temp0_28[0x4] = _mm_add_ps(temp0_26, _mm_shuffle_ps(temp0_26, temp0_26, 0x4e))
    zmm2 = _mm_add_ps(zmm2, _mm_add_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0x39), temp0_28))
    i_4 = i_11
    i_11 -= 1
while (i_4 != 1)
float var_d8 = zmm2[0]
int64_t i_5

do
    float temp0_32[0x4] = __mulps_xmmps_memps(*(&var_98 + rax_3), *(rax_3 + arg1 + 0x60))
    rax_3 += 0x10
    float temp0_34[0x4] = _mm_add_ps(temp0_32, _mm_shuffle_ps(temp0_32, temp0_32, 0x4e))
    zmm4 = _mm_add_ps(zmm4, _mm_add_ps(_mm_shuffle_ps(temp0_34, temp0_34, 0x39), temp0_34))
    i_5 = i_6
    i_6 -= 1
while (i_5 != 1)
float zmm0[0x4] = var_e4
float zmm1[0x4] = var_e8_2
zmm0[0] = zmm0[0] * 0.0500000007f
zmm1[0] = zmm1[0] * 0.0500000007f
zmm0[0] = zmm0[0] - var_e0
zmm1[0] = zmm1[0] - zmm4[0]
float temp0_38[0x4] = _mm_max_ss(zmm0[0], 0)
float temp0_39[0x4] = _mm_max_ss(zmm1[0], 0)
float var_d0 = temp0_38[0]
zmm0 = var_dc
zmm0[0] = zmm0[0] * 0.0500000007f
float var_c8 = temp0_39[0]
zmm0[0] = zmm0[0] - var_d8
float var_cc = _mm_max_ss(zmm0[0], 0)[0]
void var_b0
float var_c0[0x4] = __mulps_xmmps_memps(*sub_140acc990(&var_b0, &var_d0), data_142f426f0)
float (* result)[0x4] = sub_14121ae30(arg1, &var_c0)
__security_check_cookie(rax_1 ^ &var_108)
return result
