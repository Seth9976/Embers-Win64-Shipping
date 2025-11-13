// 函数: sub_141f262a0
// 地址: 0x141f262a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm1 = *(arg3 + 8)
uint128_t zmm2 = *arg2
uint128_t zmm0
zmm0.d = zmm1.d f* *(arg2 + 4)
uint128_t zmm5 = *(arg3 + 4)
uint128_t zmm6 = *arg3
uint128_t zmm7
zmm7.d = zmm5.d f* *(arg2 + 8)
uint128_t zmm8 = zmm2
zmm2.d = zmm2.d f* zmm5.d
zmm7.d = zmm7.d f- zmm0.d
zmm8.d = zmm8.d f* zmm1.d
zmm0 = zmm6
zmm6.d = zmm6.d f* *(arg2 + 4)
zmm0.d = zmm0.d f* *(arg2 + 8)
zmm6.d = zmm6.d f- zmm2.d
zmm8.d = zmm8.d f- zmm0.d
zmm0.d = zmm7.d f* zmm7.d
zmm1.d = zmm6.d f* zmm6.d
zmm2.d = zmm8.d f* zmm8.d
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ zmm1.d

if (zmm2.d f== 1f)
    goto label_141f263c3

int32_t var_48
int32_t result

if (zmm2.d f>= 9.99999994e-09f)
    zmm5 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
    uint128_t zmm3
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
    zmm7.d = zmm7.d f* zmm5.d
    zmm8.d = zmm8.d f* zmm5.d
    zmm6.d = zmm6.d f* zmm5.d
label_141f263c3:
    result = zmm6.d
    int32_t var_44_1 = zmm8.d
    var_48 = zmm7.d
else
    var_48 = data_143dbb1f8.d
    result = data_143dbb200.d
    int32_t var_44 = data_143dbb1fc.d

*(arg1 + 0xd0) = var_48.q
*(arg1 + 0xd8) = result
return result
