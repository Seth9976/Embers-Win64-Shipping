// 函数: sub_1403bb180
// 地址: 0x1403bb180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm2[0x4] = arg3[1]
int64_t r8 = arg2 * 3
int32_t i_1 = 8
int32_t temp0[0x4] = _mm_sad_epu8(*arg3, zx.o(0))
int32_t temp0_1[0x4] = _mm_sad_epu8(zmm2, zx.o(0))
int32_t result[0x4] = _mm_add_epi16(temp0, temp0_1)
temp0_1[0].q = result u>> 0x40
result = _mm_shufflelo_epi16(
    _mm_srai_epi16(__paddw_xmmdq_memdq(_mm_add_epi16(result, temp0_1), data_14427f030), 5), 0)
int32_t temp0_7[0x4] = _mm_unpacklo_epi64(result, result[0].q)
result = _mm_packus_epi16(temp0_7, temp0_7)
int32_t i

do
    *arg1 = result
    arg1[1] = result
    *(arg1 + arg2) = result
    *(arg1 + arg2 + 0x10) = result
    *(arg1 + (arg2 << 1)) = result
    *(arg1 + (arg2 << 1) + 0x10) = result
    *(arg1 + r8) = result
    *(arg1 + r8 + 0x10) = result
    arg1 = &(*arg1)[arg2]
    i = i_1
    i_1 -= 1
while (i != 1)
return result
