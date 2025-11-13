// 函数: sub_1427ed7d0
// 地址: 0x1427ed7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm0 = *(arg1 + 4)
float zmm3 = *arg1
float zmm1[0x4] = *(arg1 + 8)
float zmm2[0x4] = *(arg1 + 0xc)
zmm1[0] = zmm1[0] * zmm1[0]
zmm2[0] = zmm2[0] * zmm2[0]
int32_t result = _mm_sqrt_ss(0, zmm3 * zmm3 f+ zmm0 f* zmm0 + zmm1[0] + zmm2[0])

if (not(result f== 0f))
    zmm1 = 0x3f800000
    zmm1[0] = 1f f/ result
    *arg1 = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), *arg1)

return result
