// 函数: sub_142a1c0c0
// 地址: 0x142a1c0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t (* rax)[0x20] = arg3[2]
uint8_t (* r11_1)[0x20] = arg3[1] - rax
uint8_t (* r10_1)[0x20] = arg3[3] - rax
int32_t zmm3[0x8]
zmm3[0].o = zx.o(0)
uint8_t (* rbx_1)[0x20] = *arg3 - rax
int32_t zmm4[0x8] = zmm3
int32_t zmm5[0x8] = zmm3
int32_t zmm6[0x8] = zmm3
int64_t i_1 = 0x20
uint8_t zmm2[0x20]
int64_t i

do
    zmm2 = *arg1
    zmm3 = _mm256_add_epi32(__vpsadbw_ymmqq_ymmqq_memqq(zmm2, *(rbx_1 + rax)), zmm3)
    zmm4 = _mm256_add_epi32(__vpsadbw_ymmqq_ymmqq_memqq(zmm2, *(r11_1 + rax)), zmm4)
    zmm5 = _mm256_add_epi32(__vpsadbw_ymmqq_ymmqq_memqq(zmm2, *rax), zmm5)
    uint16_t temp0_7[0x10] = __vpsadbw_ymmqq_ymmqq_memqq(zmm2, *(r10_1 + rax))
    rax = &(*rax)[sx.q(arg4)]
    arg1 += sx.q(arg2)
    zmm6 = _mm256_add_epi32(temp0_7, zmm6)
    i = i_1
    i_1 -= 1
while (i != 1)
zmm3 |= _mm256_slli_si256(zmm4, 4)
uint16_t zmm1[0x10] = _mm256_slli_si256(zmm6, 4)
uint64_t zmm0[0x4] = zmm1 | zmm5
zmm2 = _mm256_unpacklo_epi64(zmm3, zmm0)
uint64_t result[0x4] = _mm256_unpackhi_epi64(zmm3, zmm0)
int32_t temp0_12[0x8] = _mm256_add_epi32(result, zmm2)
zmm1[0].o = _mm256_extractf128_ps(temp0_12[0].o, 1)
zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_12[0].o)
*arg5 = zmm1[0].o
_mm256_zeroupper()
return result
