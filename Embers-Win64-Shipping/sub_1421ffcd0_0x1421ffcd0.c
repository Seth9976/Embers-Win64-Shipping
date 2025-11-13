// 函数: sub_1421ffcd0
// 地址: 0x1421ffcd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *(arg2 + 0x18)
int64_t var_48
float var_40
float zmm1[0x4]

if ((*(*(*(arg2 + 0x28) + 0x30) + 0x59) & 1) == 0)
    zmm1 = zx.o(*(r9 + 0x4a0))
    float rax_2 = *(r9 + 0x4a8)
    _mm_shuffle_ps(zmm1, zmm1, 0x55)
    var_40 = rax_2
    var_48 = zmm1.q
else
    float zmm5[0x4] = *(r9 + 0x1e0)
    float zmm0[0x4] = *(r9 + 0x4a8)
    float temp0[0x4] = __mulps_xmmps_memps(*(r9 + 0x1c0), data_143f50590)
    float temp0_3[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(*(r9 + 0x4a0), zmm0[0].q), 
        _mm_unpacklo_ps(*(r9 + 0x4a4), 0)[0].q)
    float temp0_4[0x4] = _mm_shuffle_ps(temp0, temp0, 0xd2)
    float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0xc9), temp0_4)
    float temp0_7[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc9)
    float temp0_8[0x4] = _mm_rcp_ps(zmm5)
    float temp0_9[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xd2)
    float temp0_10[0x4] = _mm_shuffle_ps(temp0, temp0, 0xff)
    float temp0_12[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_9, temp0_7), temp0_6)
    float temp0_13[0x4] = _mm_mul_ps(temp0_8, temp0_8)
    float temp0_14[0x4] = _mm_add_ps(temp0_8, temp0_8)
    float temp0_15[0x4] = _mm_add_ps(temp0_12, temp0_12)
    float temp0_16[0x4] = _mm_mul_ps(temp0_13, zmm5)
    float temp0_17[0x4] = _mm_mul_ps(temp0_10, temp0_15)
    float temp0_18[0x4] = _mm_sub_ps(temp0_14, temp0_16)
    float temp0_20[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_15, temp0_15, 0xd2), temp0_7)
    float temp0_21[0x4] = _mm_add_ps(temp0_17, temp0_3)
    float temp0_22[0x4] = _mm_mul_ps(temp0_18, temp0_18)
    float temp0_23[0x4] = _mm_add_ps(temp0_18, temp0_18)
    float temp0_24[0x4] = _mm_mul_ps(temp0_22, zmm5)
    float temp0_26[0x4] =
        __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm5, data_143f50540), data_143f50580, 2)
    float temp0_27[0x4] = _mm_sub_ps(temp0_23, temp0_24)
    float temp0_30[0x4] =
        _mm_sub_ps(temp0_20, _mm_mul_ps(_mm_shuffle_ps(temp0_15, temp0_15, 0xc9), temp0_4))
    zmm1 = temp0_27 ^ zx.o(0)
    zmm5 = _mm_and_ps(temp0_26, zmm1) ^ temp0_27
    float temp0_33[0x4] = _mm_mul_ps(_mm_add_ps(temp0_30, temp0_21), zmm5)
    _mm_shuffle_ps(temp0_33, temp0_33, 0x55)
    _mm_shuffle_ps(temp0_33, temp0_33, 0xaa)

int64_t var_50 = 0
float zmm6_1
float zmm7_1
float zmm8_1
zmm6_1, zmm7_1, zmm8_1 = sub_141fe56b0(arg1 + 0x38, &var_48, *(arg2 + 0x12c), zmm1, r9.d, nullptr)
float zmm2_1 = var_48.d * zmm8_1
float zmm3_1 = var_48:4.d * zmm6_1
float zmm4_1 = var_40 * zmm7_1
float zmm1_1 = zmm3_1 f+ *(arg3 + 0x34)
*(arg3 + 0x30) = zmm2_1 f+ *(arg3 + 0x30)
float zmm0_1 = zmm4_1 f+ *(arg3 + 0x38)
*(arg3 + 0x34) = zmm1_1
*(arg3 + 0x38) = zmm0_1
zmm3_1 = zmm3_1 f+ *(arg3 + 0x24)
zmm4_1 = zmm4_1 f+ *(arg3 + 0x28)
*(arg3 + 0x20) = zmm2_1 f+ *(arg3 + 0x20)
*(arg3 + 0x24) = zmm3_1
*(arg3 + 0x28) = zmm4_1
return arg3
