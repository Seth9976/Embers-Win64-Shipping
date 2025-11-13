// 函数: sub_1403a0230
// 地址: 0x1403a0230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t (* r10)[0x10] = arg5
int64_t rdx = sx.q(arg2)
int64_t r9 = sx.q(arg4)
int32_t i_1 = 4
int32_t zmm0[0x4] = zx.o(0)
int32_t temp0_3[0x4]
int32_t i

do
    uint128_t zmm2 = *(arg3 + (r9 << 1)) | *(arg3 + r9 * 3) << 0x40
    int32_t zmm1[0x4] = __pavgb_xmmdq_memdq(zx.o(*arg3)[0].q | *(arg3 + r9) << 0x40, *r10)
    zmm2 = __pavgb_xmmdq_memdq(zmm2, r10[1])
    r10 = &r10[2]
    uint128_t zmm4 = *(arg1 + (rdx << 1)) | *(arg1 + rdx * 3) << 0x40
    temp0_3 = _mm_sad_epu8(zmm1, *arg1 | *(arg1 + rdx) << 0x40)
    zmm2 = _mm_sad_epu8(zmm2, zmm4)
    arg3 += r9 << 2
    arg1 += rdx << 2
    zmm0 = _mm_add_epi32(_mm_add_epi32(zmm0, temp0_3), zmm2)
    i = i_1
    i_1 -= 1
while (i s> 1)
temp0_3[0].q = zmm0 u>> 0x40
return zx.q(_mm_add_epi32(zmm0, temp0_3)[0])
