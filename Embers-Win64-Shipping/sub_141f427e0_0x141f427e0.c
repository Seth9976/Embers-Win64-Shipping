// 函数: sub_141f427e0
// 地址: 0x141f427e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x16]

if (rcx == 0)
    return 

if ((*(arg1 + 0xf9) & 4) == 0)
    goto label_141f42c56

int64_t* rax_1 = sub_140d3c6e0(arg1 + 0x194)
uint64_t var_98
uint64_t var_88

if (rax_1 == 0)
    (*(*arg1 + 0x540))(arg1)
    *(arg1 + 0xf9) |= 0x10
    rcx = arg1[0x16]
label_141f42c56:
    int32_t rax_9 = *(arg3 + 8)
    var_88 = *arg3
    int32_t var_80_3 = rax_9
    int32_t rax_10 = arg2[2]
    var_98 = *arg2
    int32_t var_90_3 = rax_10
    sub_141f48a10(rcx, &var_98, &var_88, 0, 0, 0)
    return 

int32_t r14_1 = rax_1[0x26].d
rax_1[0x25]
void var_78
uint128_t zmm9_1
int64_t zmm10_1
zmm9_1, zmm10_1 = sub_141f2dda0(&var_78, rax_1)
void* rcx_3 = arg1[0x16]
float zmm3_1[0x4] = *(rcx_3 + 0x1d0)
zmm3_1[0] = zmm3_1[0] f- *arg2
float temp0_1[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
temp0_1[0] = temp0_1[0] f- arg2[1]
float temp0_2[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
temp0_2[0] = temp0_2[0] f- arg2[2]
zmm3_1[0] = zmm3_1[0] * zmm3_1[0]
uint128_t zmm7_1
zmm7_1.d = zmm3_1.d f+ *(arg1 + 0x17c)
temp0_1[0] = temp0_1[0] * temp0_1[0]
temp0_1[0] = temp0_1[0] f+ arg1[0x30].d
float zmm6_1[0x4] = temp0_2
temp0_2[0] = temp0_2[0] * temp0_2[0]
zmm6_1[0] = zmm6_1[0] f+ *(arg1 + 0x184)
temp0_1[0] = temp0_1[0] + zmm3_1[0]
*(arg1 + 0x17c) = zmm7_1.d
arg1[0x30].d = temp0_1[0]
*(arg1 + 0x184) = zmm6_1[0]
uint128_t zmm0_1 = *(arg1 + 0x16c)
temp0_1[0] = temp0_1[0] + temp0_2[0]
zmm0_1.d = zmm0_1.d f* zmm0_1.d

if (temp0_1[0] f<= zmm0_1.d)
    uint128_t var_58_1 = zmm9_1
    zmm9_1 = arg1[0x2d].d
    zmm0_1.d = zmm7_1.d f* zmm7_1.d
    temp0_1[0] = temp0_1[0] * temp0_1[0]
    zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
    temp0_1[0] = temp0_1[0] f+ zmm0_1.d
    zmm0_1.d = zmm9_1.d f* zmm9_1.d
    temp0_1[0] = temp0_1[0] + zmm6_1[0]
    
    if (not(temp0_1[0] f<= zmm0_1.d))
        float zmm1_1[0x4]
        
        if (not(temp0_1[0] != 1f))
            zmm0_1 = zx.o(*(arg1 + 0x17c))
            zmm1_1 = zmm0_1
            zmm6_1 = *(arg1 + 0x184)
            var_98 = zmm0_1.q
            zmm7_1 = var_98.d
            zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
        else if (temp0_1[0] >= 9.99999994e-09f)
            zmm3_1 = zx.o(0)
            float zmm2_1[0x4] = 0x3f000000
            zmm3_1[0] = temp0_1.d
            float temp0_4[0x4] = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
            zmm3_1[0] = zmm3_1[0] * 0.5f
            zmm0_1.d = temp0_4.d f* temp0_4[0]
            zmm3_1[0] = zmm3_1[0] f* zmm0_1.d
            zmm2_1[0] = 0.5f - zmm3_1[0]
            zmm0_1.d = temp0_4.d f* zmm2_1[0]
            temp0_4[0] = temp0_4[0] f+ zmm0_1.d
            temp0_4[0] = temp0_4[0] * temp0_4[0]
            zmm3_1[0] = zmm3_1[0] * temp0_4[0]
            zmm0_1.d = temp0_4.d f* (0.5f - zmm3_1[0])
            temp0_4[0] = temp0_4[0] f+ zmm0_1.d
            temp0_1[0] = temp0_1[0] * temp0_4[0]
            zmm7_1.d = zmm7_1.d f* temp0_4[0]
            zmm1_1 = temp0_1
            zmm6_1[0] = zmm6_1[0] * temp0_4[0]
        else
            zmm7_1 = data_143dbb1f8
            zmm1_1 = data_143dbb1fc
            zmm6_1 = data_143dbb200
        
        zmm7_1.d = zmm7_1.d f* zmm9_1.d
        zmm1_1[0] = zmm1_1[0] f* zmm9_1.d
        zmm6_1[0] = zmm6_1[0] f* zmm9_1.d
        *(arg1 + 0x17c) = (_mm_unpacklo_ps(zmm7_1, zmm1_1[0].q)).q
        *(arg1 + 0x184) = zmm6_1[0]
else
    *(arg1 + 0x17c) = data_143dbb1f8.q
    *(arg1 + 0x184) = data_143dbb200

if ((*(arg1 + 0xf9) & 8) == 0)
    *(rax_1 + 0x14c) &= 0xf7
    rax_1[0x25] = zmm10_1
    rax_1[0x26].d = r14_1
    *(arg1 + 0x1a0) = data_14399f720
else
    *(rcx_3 + 0x1c0)
    float (* rax_5)[0x4]
    float zmm7_2[0x4]
    rax_5, zmm7_2 = sub_140ade170(arg3, &var_88)
    float temp0_6[0x4] = _mm_shuffle_ps(zmm7_2, zmm7_2, 0x1b)
    float zmm4_2[0x4] = *rax_5 ^ 0x80000000
    float zmm1_2[0x4] = (*rax_5)[1] ^ 0x80000000
    float zmm3_2[0x4] = (*rax_5)[3]
    uint128_t zmm2_2 = (*rax_5)[2] ^ 0x80000000
    float temp0_7[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xe1)
    temp0_7[0] = zmm1_2[0]
    float temp0_8[0x4] = _mm_shuffle_ps(zmm7_2, zmm7_2, 0x4e)
    float temp0_9[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xc6)
    temp0_9[0] = zmm2_2.d
    zmm2_2 = *(arg1 + 0x1a0)
    float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0x27)
    temp0_10[0] = zmm3_2[0]
    float temp0_11[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0x39)
    var_88.o = temp0_11
    float temp0_13[0x4] = _mm_mul_ps(temp0_6, _mm_shuffle_ps(temp0_11, temp0_11, 0))
    zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xff), zmm7_2)
    float temp0_16[0x4] = __mulps_xmmps_memps(temp0_13, data_143f3b3b0)
    float temp0_17[0x4] = _mm_shuffle_ps(zmm7_2, zmm7_2, 0xb1)
    float temp0_18[0x4] = _mm_add_ps(temp0_16, zmm0_1)
    float temp0_20[0x4] = _mm_mul_ps(temp0_8, _mm_shuffle_ps(temp0_11, temp0_11, 0x55))
    zmm0_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x1b)
    float temp0_23[0x4] = _mm_mul_ps(temp0_17, _mm_shuffle_ps(temp0_11, temp0_11, 0xaa))
    float temp0_24[0x4] = __mulps_xmmps_memps(temp0_20, data_143f3b3a0)
    float temp0_25[0x4] = __mulps_xmmps_memps(temp0_23, data_143f3b390)
    float temp0_27[0x4] = _mm_add_ps(_mm_add_ps(temp0_18, temp0_24), temp0_25)
    float temp0_29[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_27, temp0_27, 0), zmm0_1)
    zmm0_1 = _mm_shuffle_ps(temp0_27, temp0_27, 0xff)
    float temp0_31[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0x55)
    zmm0_1 = _mm_mul_ps(zmm0_1, zmm2_2)
    float temp0_33[0x4] = __mulps_xmmps_memps(temp0_29, data_143f3b3b0)
    float temp0_34[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0xaa)
    float temp0_35[0x4] = _mm_add_ps(temp0_33, zmm0_1)
    float temp0_37[0x4] = _mm_mul_ps(temp0_31, _mm_shuffle_ps(zmm2_2, zmm2_2, 0x4e))
    float temp0_39[0x4] = _mm_mul_ps(temp0_34, _mm_shuffle_ps(zmm2_2, zmm2_2, 0xb1))
    float temp0_40[0x4] = __mulps_xmmps_memps(temp0_37, data_143f3b3a0)
    float temp0_41[0x4] = __mulps_xmmps_memps(temp0_39, data_143f3b390)
    *(arg1 + 0x1a0) = _mm_add_ps(_mm_add_ps(temp0_35, temp0_40), temp0_41)

int32_t rax_6 = *(arg3 + 8)
int64_t* rcx_5 = arg1[0x16]
var_98 = *arg3
int32_t var_90_2 = rax_6
int32_t rax_7 = arg2[2]
var_88 = *arg2
int32_t var_80_2 = rax_7
sub_141f48a10(rcx_5, &var_88, &var_98, 0, 0, 0)
*(arg1 + 0xf9) &= 0xef
sub_141f2f360(&var_78)
