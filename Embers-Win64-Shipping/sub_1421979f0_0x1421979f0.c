// 函数: sub_1421979f0
// 地址: 0x1421979f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_141dd15d0(arg1)
float zmm4[0x4] = arg1[0x5b].d

if (not(zmm4[0] == 3.40282347e+38f))
    float zmm2_1[0x4] = *(arg1 + 0x2a0)
    arg1[0x5b].d = 0x7f7fffff
    float temp0_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
    *(arg1 + 0x2a0) =
        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, temp0_1[0].q), _mm_unpacklo_ps(temp0_2, 0)[0].q)

return result
