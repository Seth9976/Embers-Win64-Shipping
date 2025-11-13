// 函数: sub_141effad0
// 地址: 0x141effad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6 = *(arg1 + 0xc4)
uint128_t zmm7 = *(arg1 + 0xc8)
uint128_t zmm2
zmm2.d = zmm6.d f* zmm6.d
uint128_t zmm0
zmm0.d = zmm7.d f* zmm7.d
uint128_t zmm8 = *(arg1 + 0xcc)
zmm2.d = zmm2.d f+ zmm0.d
uint128_t zmm1
zmm1.d = zmm8.d f* zmm8.d
zmm2.d = zmm2.d f+ zmm1.d
int32_t result

if (zmm2.d f!= 1f)
    int32_t result_1
    uint128_t zmm3
    
    if (zmm2.d f>= 9.99999994e-09f)
        uint128_t zmm5 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
        zmm3.d = zmm2.d f* 0.5f
        zmm0.d = zmm5.d f* zmm5.d
        zmm1.d = zmm3.d f* zmm0.d
        zmm2.d = 0.5f f- zmm1.d
        zmm0.d = zmm5.d f* zmm2.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm1.d = zmm5.d f* zmm5.d
        zmm3.d = zmm3.d f* zmm1.d
        zmm0.d = zmm5.d f* (0.5f f- zmm3.d)
        zmm5.d = zmm5.d f+ zmm0.d
        zmm6.d = zmm6.d f* zmm5.d
        zmm7.d = zmm7.d f* zmm5.d
        zmm0.d = zmm6.d
        zmm8.d = zmm8.d f* zmm5.d
        _mm_shuffle_ps(zmm0, zmm0, 0xe1)
        zmm1.d = zmm7.d
        result_1 = zmm8.d
        zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0xe1)
    else
        zmm3 = data_143dbb1fc
        result_1 = data_143dbb200.d
        zmm0.d = data_143dbb1f8.d
        _mm_shuffle_ps(zmm0, zmm0, 0xe1)
        zmm0.d = zmm3.d
        zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0xe1)
    result = result_1
else
    zmm0 = zx.o(*(arg1 + 0xc4))
    result = *(arg1 + 0xcc)

*(arg1 + 0x22c) = zmm0.q
*(arg1 + 0x234) = result
*(arg1 + 0x28c) = 0x3f800000
return result
