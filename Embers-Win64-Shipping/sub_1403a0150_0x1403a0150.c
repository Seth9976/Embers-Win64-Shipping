// 函数: sub_1403a0150
// 地址: 0x1403a0150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(arg2)
int64_t r9 = sx.q(arg4)
int32_t i_1 = 2
int32_t zmm0[0x4] = zx.o(0)
int32_t temp0_1[0x4]
int32_t i

do
    uint128_t zmm2 = *(arg3 + (r9 << 1)) | *(arg3 + r9 * 3) << 0x40
    uint128_t zmm4 = *(arg1 + (rdx << 1)) | *(arg1 + rdx * 3) << 0x40
    temp0_1 = _mm_sad_epu8(zx.o(*arg3)[0].q | *(arg3 + r9) << 0x40, *arg1 | *(arg1 + rdx) << 0x40)
    zmm2 = _mm_sad_epu8(zmm2, zmm4)
    arg3 += r9 << 2
    arg1 += rdx << 2
    zmm0 = _mm_add_epi32(_mm_add_epi32(zmm0, temp0_1), zmm2)
    i = i_1
    i_1 -= 1
while (i s> 1)
temp0_1[0].q = zmm0 u>> 0x40
return zx.q(_mm_add_epi32(zmm0, temp0_1)[0])
