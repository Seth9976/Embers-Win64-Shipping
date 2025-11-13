// 函数: sub_141f3c070
// 地址: 0x141f3c070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = *(arg1 + 0x1e0)
float zmm4 = *(arg1 + 0x268)
float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
float zmm2 = zmm4 + zmm1[0]
float zmm3 = zmm4 + temp0[0]
zmm4 = zmm4 + _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
return _mm_sqrt_ss(0, zmm3 * zmm3 + zmm2 * zmm2 + zmm4 * zmm4)
