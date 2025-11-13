// 函数: sub_142a073f0
// 地址: 0x142a073f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t zmm5[0x8] = arg1[6]
int16_t zmm4[0x8] = arg1[2]
int16_t zmm0[0x8] = arg1[3]
int16_t temp0[0x8] = _mm_add_epi16(arg1[7], zmm5)
zmm5 = __psubw_xmmdq_memdq(zmm5, arg1[7])
int16_t temp0_2[0x8] = _mm_add_epi16(zmm0, zmm4)
zmm4 = __psubw_xmmdq_memdq(zmm4, arg1[3])
int32_t zmm6[0x4] = arg1[4]
int16_t zmm9[0x8] = *arg1
int16_t temp0_4[0x8] = _mm_add_epi16(arg1[1], zmm9)
zmm9 = __psubw_xmmdq_memdq(zmm9, arg1[1])
int16_t temp0_6[0x8] = _mm_add_epi16(zmm4, zmm9)
int16_t zmm13[0x8] = arg1[5]
int16_t temp0_7[0x8] = _mm_add_epi16(temp0_2, temp0_4)
int16_t temp0_8[0x8] = _mm_add_epi16(zmm13, zmm6)
int32_t temp0_9[0x4] = __psubw_xmmdq_memdq(zmm6, arg1[5])
int16_t temp0_10[0x8] = _mm_add_epi16(zmm5, temp0_9)
int16_t temp0_11[0x8] = _mm_add_epi16(temp0, temp0_8)
zmm13 = _mm_sub_epi16(temp0_8, temp0)
int16_t temp0_13[0x8] = _mm_add_epi16(temp0_10, temp0_6)
int16_t zmm12[0x8] = _mm_sub_epi16(temp0_6, temp0_10)
int16_t zmm10[0x8] = _mm_sub_epi16(temp0_4, temp0_2)
zmm9 = _mm_sub_epi16(zmm9, zmm4)
int32_t temp0_17[0x4] = _mm_sub_epi16(temp0_9, zmm5)
int16_t zmm11[0x8]

if (arg2 != 0)
    arg1[7] = temp0_13
    int16_t temp0_48[0x8] = _mm_add_epi16(temp0_11, temp0_7)
    arg1[6] = zmm12
    *arg1 = temp0_48
    int16_t temp0_49[0x8] = _mm_add_epi16(temp0_17, zmm9)
    int16_t temp0_50[0x8] = _mm_add_epi16(zmm13, zmm10)
    arg1[4] = temp0_49
    zmm10 = _mm_sub_epi16(zmm10, zmm13)
    arg1[3] = temp0_50
    zmm11 = _mm_sub_epi16(temp0_7, temp0_11)
    arg1[1] = zmm10
    zmm9 = _mm_sub_epi16(zmm9, temp0_17)
    arg1[2] = zmm11
    arg1[5] = zmm9
    return 

int16_t temp0_18[0x8] = _mm_add_epi16(zmm13, zmm10)
int16_t temp0_19[0x8] = _mm_add_epi16(temp0_11, temp0_7)
int32_t zmm7[0x4] = _mm_add_epi16(temp0_17, zmm9)
zmm9 = _mm_sub_epi16(zmm9, temp0_17)
zmm11 = _mm_sub_epi16(temp0_7, temp0_11)
int32_t temp0_23[0x4] = _mm_unpackhi_epi16(zmm7, zmm9[0].q)
int16_t zmm2[0x8] = _mm_unpacklo_epi16(zmm11, temp0_18[0].q)
zmm10 = _mm_sub_epi16(zmm10, zmm13)
zmm11 = _mm_unpackhi_epi16(zmm11, temp0_18[0].q)
zmm0 = _mm_unpacklo_epi16(zmm12, temp0_13[0].q)
zmm12 = _mm_unpackhi_epi16(zmm12, temp0_13[0].q)
int16_t zmm8[0x8] = _mm_unpackhi_epi16(temp0_19, zmm10[0].q)
zmm4 = zmm8
int32_t temp0_30[0x4] = _mm_unpacklo_epi16(temp0_19, zmm10[0].q)
zmm8 = _mm_unpackhi_epi32(zmm8, zmm11[0].q)
int16_t zmm3[0x8] = _mm_unpacklo_epi32(temp0_30, zmm2[0].q)
int32_t temp0_33[0x4] = _mm_unpackhi_epi32(temp0_30, zmm2[0].q)
int32_t temp0_34[0x4] = _mm_unpackhi_epi32(temp0_23, zmm12[0].q)
zmm5 = _mm_unpacklo_epi16(zmm7, zmm9[0].q)
zmm4 = _mm_unpacklo_epi32(zmm4, zmm11[0].q)
int16_t zmm1[0x8] = _mm_unpacklo_epi32(zmm5, zmm0[0].q)
zmm5 = _mm_unpackhi_epi32(zmm5, zmm0[0].q)
*arg1 = _mm_unpacklo_epi64(zmm3, zmm1[0].q)
arg1[2] = _mm_unpacklo_epi64(temp0_33, zmm5[0].q)
zmm2 = _mm_unpacklo_epi32(temp0_23, zmm12[0].q)
arg1[4] = _mm_unpacklo_epi64(zmm4, zmm2[0].q)
zmm0 = zmm8
zmm8 = _mm_unpackhi_epi64(zmm8, temp0_34[0].q)
zmm0 = _mm_unpacklo_epi64(zmm0, temp0_34[0].q)
zmm3 = _mm_unpackhi_epi64(zmm3, zmm1[0].q)
int32_t temp0_46[0x4] = _mm_unpackhi_epi64(temp0_33, zmm5[0].q)
zmm4 = _mm_unpackhi_epi64(zmm4, zmm2[0].q)
arg1[7] = zmm8
arg1[6] = zmm0
arg1[1] = zmm3
arg1[3] = temp0_46
arg1[5] = zmm4
