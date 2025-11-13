// 函数: sub_142a1c190
// 地址: 0x142a1c190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t (* rax)[0x20] = arg3[2]
uint8_t (* r11_1)[0x20] = arg3[1] - rax
uint8_t (* r10_1)[0x20] = arg3[3] - rax
int32_t zmm6[0x8]
zmm6[0].o = zx.o(0)
uint8_t (* rbx_1)[0x20] = *arg3 - rax
int32_t zmm7[0x8] = zmm6
int32_t zmm8[0x8] = zmm6
int32_t zmm9[0x8] = zmm6
int64_t i_1 = 0x40
uint8_t zmm4[0x20]
int64_t i

do
    uint8_t zmm5[0x20] = *arg1
    zmm4 = arg1[1]
    uint16_t temp0_1[0x10] = __vpsadbw_ymmqq_ymmqq_memqq(zmm5, *(rbx_1 + rax))
    uint16_t temp0_2[0x10] = __vpsadbw_ymmqq_ymmqq_memqq(zmm4, *(rbx_1 + rax + 0x20))
    int32_t temp0_3[0x8] = _mm256_add_epi32(temp0_1, zmm6)
    uint16_t temp0_4[0x10] = __vpsadbw_ymmqq_ymmqq_memqq(zmm5, *(r11_1 + rax))
    zmm6 = _mm256_add_epi32(temp0_3, temp0_2)
    uint16_t temp0_6[0x10] = __vpsadbw_ymmqq_ymmqq_memqq(zmm4, *(r11_1 + rax + 0x20))
    int32_t temp0_7[0x8] = _mm256_add_epi32(temp0_4, zmm7)
    uint16_t temp0_8[0x10] = __vpsadbw_ymmqq_ymmqq_memqq(zmm5, *rax)
    zmm7 = _mm256_add_epi32(temp0_7, temp0_6)
    uint16_t temp0_10[0x10] = __vpsadbw_ymmqq_ymmqq_memqq(zmm4, rax[1])
    int32_t temp0_11[0x8] = _mm256_add_epi32(temp0_8, zmm8)
    uint16_t temp0_12[0x10] = __vpsadbw_ymmqq_ymmqq_memqq(zmm5, *(r10_1 + rax))
    zmm8 = _mm256_add_epi32(temp0_11, temp0_10)
    uint16_t temp0_14[0x10] = __vpsadbw_ymmqq_ymmqq_memqq(zmm4, *(r10_1 + rax + 0x20))
    rax = &(*rax)[sx.q(arg4)]
    arg1 += sx.q(arg2)
    zmm9 = _mm256_add_epi32(_mm256_add_epi32(temp0_12, zmm9), temp0_14)
    i = i_1
    i_1 -= 1
while (i != 1)
uint16_t zmm3[0x10] = _mm256_slli_si256(zmm7, 4) | zmm6
uint128_t temp0_18[0x2] = _mm256_slli_si256(zmm9, 4)
uint16_t result[0x10] = temp0_18 | zmm8
int32_t zmm2[0x8] = _mm256_unpacklo_epi64(zmm3, result)
result = _mm256_unpackhi_epi64(zmm3, result)
zmm4 = _mm256_add_epi32(result, zmm2)
temp0_18[0] = _mm256_extractf128_ps(zmm4[0].o, 1)
temp0_18[0] = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_18[0], zmm4[0].o)
*arg5 = temp0_18[0]
_mm256_zeroupper()
return result
