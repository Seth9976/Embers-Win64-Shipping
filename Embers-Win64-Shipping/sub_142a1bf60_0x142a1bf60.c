// 函数: sub_142a1bf60
// 地址: 0x142a1bf60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_1 = 0x20
int32_t zmm4[0x8]
zmm4[0].o = zx.o(0)
uint8_t zmm1[0x20]
uint8_t zmm2[0x20]
int64_t i

do
    zmm2 = arg3[1]
    uint16_t temp0_1[0x10] = __vpsadbw_ymmqq_ymmqq_memqq(*arg3, *arg1)
    zmm1 = __vpsadbw_ymmqq_ymmqq_memqq(zmm2, arg1[1])
    arg1 = &(*arg1)[sx.q(arg2)]
    arg3 += sx.q(arg4)
    zmm4 = _mm256_add_epi32(_mm256_add_epi32(zmm1, temp0_1), zmm4)
    i = i_1
    i_1 -= 1
while (i != 1)
zmm2 = _mm256_add_epi32(_mm256_srli_si256(zmm4, 8), zmm4)
zmm1[0].o = _mm256_extracti128_si256(zmm2, 1)
zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
uint64_t result = zx.q(zmm1[0].d)
_mm256_zeroupper()
return result
