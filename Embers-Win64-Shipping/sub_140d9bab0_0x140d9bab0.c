// 函数: sub_140d9bab0
// 地址: 0x140d9bab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x34) & 1) == 0)
    return 

int32_t zmm2 = arg1[1].d
uint128_t zmm1
zmm1.d = 1f f/ zmm2
int64_t var_24_1 = 0
uint128_t zmm0
zmm0.d = zmm2
_mm_shuffle_ps(zmm0, zmm0, 0x93)
zmm0.d = zmm2
*(arg1 + 0x1c) = _mm_shuffle_ps(zmm0, zmm0, 0x39)
*(arg1 + 0x2c) = *arg1
zmm0.d = zmm1.d f* *(arg1 + 0xc)
zmm1.d = zmm1.d f* arg1[2].d
*(arg1 + 0x14) = zmm0.d
arg1[3].d = zmm1.d
