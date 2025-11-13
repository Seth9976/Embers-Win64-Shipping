// 函数: sub_14039fc30
// 地址: 0x14039fc30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t (* r10)[0x10] = arg5
int64_t rdx = sx.q(arg2)
int64_t r9 = sx.q(arg4)
int32_t i_1 = 0x20
int32_t zmm0[0x4] = zx.o(0)
uint8_t zmm1[0x10]
int32_t i

do
    uint8_t zmm2[0x10] = arg3[1]
    int32_t zmm3[0x4] = *(arg3 + r9)
    int32_t zmm4[0x4] = *(arg3 + r9 + 0x10)
    uint8_t temp0_1[0x10] = __pavgb_xmmdq_memdq(*arg3, *r10)
    uint8_t temp0_2[0x10] = __pavgb_xmmdq_memdq(zmm2, r10[1])
    zmm3 = __pavgb_xmmdq_memdq(zmm3, r10[2])
    zmm4 = __pavgb_xmmdq_memdq(zmm4, r10[3])
    r10 = &r10[4]
    zmm1 = __psadbw_xmmdq_memdq(temp0_1, *arg1)
    zmm2 = __psadbw_xmmdq_memdq(temp0_2, *(arg1 + 0x10))
    int32_t temp0_7[0x4] = __psadbw_xmmdq_memdq(zmm3, *(arg1 + rdx))
    int32_t temp0_8[0x4] = __psadbw_xmmdq_memdq(zmm4, *(arg1 + rdx + 0x10))
    zmm1 = _mm_add_epi32(zmm1, zmm2)
    int32_t temp0_10[0x4] = _mm_add_epi32(temp0_7, temp0_8)
    arg3 += r9 << 1
    arg1 += rdx << 1
    zmm0 = _mm_add_epi32(_mm_add_epi32(zmm0, zmm1), temp0_10)
    i = i_1
    i_1 -= 1
while (i s> 1)
zmm1[0].q = zmm0 u>> 0x40
return zx.q(_mm_add_epi32(zmm0, zmm1)[0])
