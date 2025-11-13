// 函数: sub_142a1bca0
// 地址: 0x142a1bca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t (* rax_1)[0x20] = arg5
int64_t i_1 = 0x10
int32_t zmm5[0x8]
zmm5[0].o = zx.o(0)
uint8_t temp0_3[0x20]
int64_t i

do
    uint16_t temp0_2[0x10] =
        __vpsadbw_ymmqq_ymmqq_memqq(__vpavgb_ymmqq_ymmqq_memqq(*rax_1, *arg3), *arg1)
    temp0_3 = __vpavgb_ymmqq_ymmqq_memqq(rax_1[1], *(sx.q(arg4) + arg3))
    int32_t zmm2[0x8] = __vpsadbw_ymmqq_ymmqq_memqq(temp0_3, *(sx.q(arg2) + arg1))
    arg1 = &(*arg1)[sx.q(arg2 * 2)]
    rax_1 = &rax_1[2]
    arg3 = &(*arg3)[sx.q(arg4 * 2)]
    zmm5 = _mm256_add_epi32(_mm256_add_epi32(zmm2, temp0_2), zmm5)
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t temp0_8[0x8] = _mm256_add_epi32(_mm256_srli_si256(zmm5, 8), zmm5)
temp0_3[0].o = _mm256_extracti128_si256(temp0_8, 1)
temp0_3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_3[0].o, temp0_8[0].o)
uint64_t result = zx.q(temp0_3[0].d)
_mm256_zeroupper()
return result
