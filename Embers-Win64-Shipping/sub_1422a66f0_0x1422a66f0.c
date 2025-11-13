// 函数: sub_1422a66f0
// 地址: 0x1422a66f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x10)

if (result == 0)
    return result

float zmm5[0x4] = *(result + 0x60)
float zmm2[0x4] = *(result + 0x70)
int128_t zmm3 = *arg2
float zmm4 = zmm5[0] + zmm2[0]
int128_t zmm8 = *(arg2 + 8)
int128_t zmm9 = *(arg2 + 4)
int128_t zmm10
zmm10.d = zmm8.d f+ *(arg2 + 0x14)
zmm8.d = zmm8.d f- *(arg2 + 0x14)
int128_t zmm12
zmm12.d = zmm9.d f+ arg2[1].d
zmm9.d = zmm9.d f- arg2[1].d
float temp0[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
float temp0_1[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
zmm5[0] = zmm5[0] - zmm2[0]
int128_t zmm14 = zmm3
float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
zmm3.d = zmm3.d f- *(arg2 + 0xc)
zmm14.d = zmm14.d f+ *(arg2 + 0xc)
float temp0_3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
temp0[0] = temp0[0] + temp0_2[0]
temp0_1[0] = temp0_1[0] + temp0_3[0]
temp0[0] = temp0[0] - temp0_2[0]
temp0_1[0] = temp0_1[0] - temp0_3[0]

if (zmm3.d f> zmm4 || zmm5[0] f> zmm14.d || zmm9.d f> temp0[0] || temp0[0] f> zmm12.d
        || zmm8.d f> temp0_1[0] || temp0_1[0] f> zmm10.d)
    result.b = 0
else
    result.b = 1

return result
