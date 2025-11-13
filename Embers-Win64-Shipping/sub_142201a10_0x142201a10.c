// 函数: sub_142201a10
// 地址: 0x142201a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float r8
float arg_18 = r8
void* var_f0 = arg4
float var_e8
sub_141fe56b0(arg1 + 0x38, &var_e8, *(arg2 + 0x12c), arg3, (*(arg2 + 0x18)).d, nullptr)
float zmm6[0x4] = 0x3f800000
float zmm7[0x4] = *(arg5 + 0x10)
float zmm8[0x4] = *(arg5 + 0x14)
zmm7[0] = zmm7[0] f- *(arg2 + 0x90)
zmm8[0] = zmm8[0] f- *(arg2 + 0x94)
float zmm9[0x4] = *(arg5 + 0x18)
zmm9[0] = zmm9[0] f- *(arg2 + 0x98)
zmm7[0] = zmm7[0] * zmm7[0]
zmm8[0] = zmm8[0] * zmm8[0]
zmm9[0] = zmm9[0] * zmm9[0]
zmm8[0] = zmm8[0] + zmm7[0]
zmm8[0] = zmm8[0] + zmm9[0]
float zmm2_1[0x4]

if (not(zmm8[0] == 1f))
    if (zmm8[0] >= 9.99999994e-09f)
        float zmm4_1[0x4] = 0x3f000000
        float temp0_1[0x4] = _mm_rsqrt_ss(zmm8[0], zmm8[0])
        zmm2_1 = 0x3f000000
        zmm8[0] = zmm8[0] * 0.5f
        temp0_1[0] = temp0_1[0] * temp0_1[0]
        zmm8[0] = zmm8[0] * temp0_1[0]
        zmm2_1[0] = 0.5f - zmm8[0]
        temp0_1[0] = temp0_1[0] * zmm2_1[0]
        temp0_1[0] = temp0_1[0] + temp0_1[0]
        temp0_1[0] = temp0_1[0] * temp0_1[0]
        zmm8[0] = zmm8[0] * temp0_1[0]
        zmm4_1[0] = 0.5f - zmm8[0]
        temp0_1[0] = temp0_1[0] * zmm4_1[0]
        temp0_1[0] = temp0_1[0] + temp0_1[0]
        arg_18 = temp0_1[0]
        zmm7[0] = zmm7[0] * temp0_1[0]
        zmm8[0] = zmm8[0] * temp0_1[0]
        zmm9[0] = zmm9[0] * temp0_1[0]
    else
        data_143dbb1f8
        zmm8 = data_143dbb1fc
        zmm9 = data_143dbb200

int32_t rcx_1 = *(arg1 + 0x30)
float zmm10[0x4] = 0x3f800000
float zmm11[0x4] = 0x3f800000

if ((rcx_1.b & 2) != 0)
    void* rax_1 = *(arg2 + 0x18)
    
    if (rax_1 != 0)
        zmm6 = *(rax_1 + 0x1e0)
        zmm10 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
        zmm11 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)

int32_t rcx_2 = rcx_1 & 1
float zmm0[0x4]
float zmm3_1[0x4]
int32_t var_e4
int32_t var_e0
float var_d8[0x4]

if ((*(*(*(arg2 + 0x28) + 0x30) + 0x59) & 1) != 0)
    if (rcx_2 == 0)
        goto label_142201c65
    
    float var_b8[0x4]
    zmm6, zmm8, zmm9, zmm10, zmm11 = sub_1408041d0(arg2 + 0xa0, &var_b8)
    int32_t var_cc_1 = 0
    var_d8[0] = var_e8[0]
    int64_t var_c8_1 = 0
    float temp0_4[0x4] = _mm_shuffle_ps(var_d8, var_d8, 0xe1)
    temp0_4[0] = var_e4[0]
    int32_t var_c0_1 = 0
    float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc6)
    temp0_5[0] = var_e0[0]
    float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc9)
    float var_88[0x4]
    float temp0_8[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_6, temp0_6, 0xff), var_88)
    float var_98[0x4]
    float temp0_10[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_6, temp0_6, 0xaa), var_98)
    float var_a8[0x4]
    float temp0_12[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_6, temp0_6, 0x55), var_a8)
    zmm3_1 = _mm_add_ps(_mm_add_ps(temp0_8, temp0_10), 
        _mm_add_ps(temp0_12, __mulps_xmmps_memps(_mm_shuffle_ps(temp0_6, temp0_6, 0), var_b8)))
    zmm0 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
    zmm2_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
else if (rcx_2 == 0)
label_142201c65:
    int32_t var_cc_2 = 0
    var_d8[0] = var_e8[0]
    int64_t var_c8_2 = 0
    float temp0_20[0x4] = _mm_shuffle_ps(var_d8, var_d8, 0xe1)
    temp0_20[0] = var_e4[0]
    int32_t var_c0_2 = 0
    float temp0_21[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xc6)
    temp0_21[0] = var_e0[0]
    float temp0_22[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0xc9)
    float temp0_24[0x4] =
        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_22, temp0_22, 0xff), *(arg2 + 0x90))
    float temp0_26[0x4] =
        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_22, temp0_22, 0xaa), *(arg2 + 0x80))
    float temp0_28[0x4] =
        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_22, temp0_22, 0x55), *(arg2 + 0x70))
    float temp0_33[0x4] = _mm_add_ps(_mm_add_ps(temp0_24, temp0_26), 
        _mm_add_ps(temp0_28, 
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_22, temp0_22, 0), *(arg2 + 0x60))))
    zmm3_1 = temp0_33
    zmm0 = _mm_shuffle_ps(temp0_33, temp0_33, 0x55)
    zmm2_1 = _mm_shuffle_ps(temp0_33, temp0_33, 0xaa)
else
    zmm2_1 = var_e0
    zmm0 = var_e4
    zmm3_1 = var_e8
int64_t r8_1 = *(arg2 + 0x18)
float zmm1[0x4] = *(arg2 + 0x12c)
zmm3_1[0] = zmm3_1[0] * zmm6[0]
zmm0[0] = zmm0[0] * zmm10[0]
zmm2_1[0] = zmm2_1[0] * zmm11[0]
var_e8 = zmm3_1[0]
float var_e4_1 = zmm0[0]
float var_e0_1 = zmm2_1[0]
int64_t result
int128_t zmm0_1
int32_t zmm6_1
int32_t zmm7_1
zmm0_1, result, zmm6_1, zmm7_1 = sub_141fe5610(arg1 + 0x80, zmm1, r8_1, arg4)
int128_t zmm3_2
zmm3_2.d = zmm0_1.d f* zmm7_1
int128_t zmm4_3
zmm4_3.d = zmm0_1.d f* zmm9[0]
zmm3_2.d = zmm3_2.d f* zmm6_1
zmm3_2.d = zmm3_2.d f+ var_e8
float zmm2_2 = zmm0_1.d * zmm8[0] * zmm10[0] + var_e4_1
zmm4_3.d = zmm4_3.d f* zmm11[0]
zmm0_1.d = zmm3_2.d f+ *(arg5 + 0x30)
zmm4_3.d = zmm4_3.d f+ var_e0_1
float zmm1_1 = zmm2_2 f+ *(arg5 + 0x34)
*(arg5 + 0x30) = zmm0_1.d
zmm0_1.d = zmm4_3.d f+ *(arg5 + 0x38)
*(arg5 + 0x34) = zmm1_1
*(arg5 + 0x38) = zmm0_1.d
zmm3_2.d = zmm3_2.d f+ *(arg5 + 0x20)
zmm2_2 = zmm2_2 f+ *(arg5 + 0x24)
zmm4_3.d = zmm4_3.d f+ *(arg5 + 0x28)
*(arg5 + 0x20) = zmm3_2.d
*(arg5 + 0x24) = zmm2_2
*(arg5 + 0x28) = zmm4_3.d
return result
