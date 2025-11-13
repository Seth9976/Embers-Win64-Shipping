// 函数: sub_14038b591
// 地址: 0x14038b591
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm6[0x4]
int32_t var_28[0x4] = zmm6
int32_t zmm7[0x4]
int32_t var_18[0x4] = zmm7
int64_t rdx = sx.q(arg4)
int32_t (* rdi)[0x4] = arg2
int128_t* rsi_2 = arg1 - rdx * 2
int64_t i_1 = sx.q(arg5)
int64_t i

do
    int32_t zmm2[0x4] = *(rsi_2 + rdx + 0x10)
    int32_t temp0_1[0x4] = __pmullw_xmmdq_memdq(*(rsi_2 + rdx), arg6[1])
    int32_t temp0_2[0x4] = __pmullw_xmmdq_memdq(zmm2, arg6[1])
    int32_t zmm4[0x4] = *(rsi_2 + (rdx << 2) + 0x10)
    int32_t temp0_3[0x4] = __pmullw_xmmdq_memdq(*(rsi_2 + (rdx << 2)), arg6[4])
    int32_t temp0_4[0x4] = __pmullw_xmmdq_memdq(zmm4, arg6[4])
    zmm6 = *(rsi_2 + (rdx << 1) + 0x10)
    int32_t temp0_5[0x4] = __pmullw_xmmdq_memdq(*(rsi_2 + (rdx << 1)), arg6[2])
    int32_t temp0_6[0x4] = __pmullw_xmmdq_memdq(zmm6, arg6[2])
    int32_t zmm0[0x4] = rsi_2[1]
    int32_t temp0_7[0x4] = __pmullw_xmmdq_memdq(*rsi_2, *arg6)
    int32_t temp0_8[0x4] = __pmullw_xmmdq_memdq(zmm0, *arg6)
    int32_t temp0_9[0x4] = _mm_adds_epi16(temp0_1, temp0_3)
    int32_t temp0_10[0x4] = _mm_adds_epi16(temp0_2, temp0_4)
    int32_t temp0_11[0x4] = _mm_adds_epi16(temp0_9, temp0_5)
    int32_t temp0_12[0x4] = _mm_adds_epi16(temp0_10, temp0_6)
    int32_t temp0_13[0x4] = _mm_adds_epi16(temp0_11, temp0_7)
    int32_t temp0_14[0x4] = _mm_adds_epi16(temp0_12, temp0_8)
    rsi_2 += rdx
    zmm4 = *(rsi_2 + (rdx << 1) + 0x10)
    int32_t temp0_15[0x4] = __pmullw_xmmdq_memdq(*(rsi_2 + (rdx << 1)), arg6[3])
    int32_t temp0_16[0x4] = __pmullw_xmmdq_memdq(zmm4, arg6[3])
    zmm6 = *(rsi_2 + (rdx << 2) + 0x10)
    int32_t temp0_17[0x4] = __pmullw_xmmdq_memdq(*(rsi_2 + (rdx << 2)), arg6[5])
    int32_t temp0_18[0x4] = __pmullw_xmmdq_memdq(zmm6, arg6[5])
    zmm7 = *u"@@@@@@@"
    int32_t temp0_19[0x4] = _mm_adds_epi16(temp0_13, temp0_15)
    int32_t temp0_20[0x4] = _mm_adds_epi16(temp0_14, temp0_16)
    int32_t temp0_21[0x4] = _mm_adds_epi16(temp0_19, temp0_17)
    int32_t temp0_22[0x4] = _mm_adds_epi16(temp0_20, temp0_18)
    int32_t temp0_23[0x4] = _mm_adds_epi16(temp0_21, zmm7)
    int32_t temp0_24[0x4] = _mm_adds_epi16(temp0_22, zmm7)
    *rdi = _mm_packus_epi16(_mm_srai_epi16(temp0_23, 7), _mm_srai_epi16(temp0_24, 7))
    rdi += sx.q(arg3)
    i = i_1
    i_1 -= 1
while (i != 1)
return zx.o(0)
