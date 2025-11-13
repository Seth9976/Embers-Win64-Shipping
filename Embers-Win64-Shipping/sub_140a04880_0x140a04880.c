// 函数: sub_140a04880
// 地址: 0x140a04880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t zmm7
int128_t zmm8

if (arg3 == 1)
    zmm6 = *arg1
    zmm7 = *(arg1 + 4)
    zmm8 = *(arg1 + 8)
else if (arg3 == 2)
    zmm6 = arg1[1].d
    zmm7 = *(arg1 + 0x14)
    zmm8 = *(arg1 + 0x18)
else if (arg3 == 3)
    zmm6 = arg1[2].d
    zmm7 = *(arg1 + 0x24)
    zmm8 = *(arg1 + 0x28)
else
    zmm6 = data_143dbb1f8
    zmm7 = data_143dbb1fc
    zmm8 = data_143dbb200

uint128_t zmm2
zmm2.d = zmm7.d f* zmm7.d
uint128_t zmm0
zmm0.d = zmm6.d f* zmm6.d
zmm2.d = zmm2.d f+ zmm0.d
int32_t var_44 = zmm7.d
zmm2.d = zmm2.d f+ zmm8.d f* zmm8.d

if (not(zmm2.d f!= 1f))
    *arg2 = zmm6.d.q
    arg2[1].d = zmm8.d
else if (zmm2.d f>= 9.99999994e-09f)
    float zmm3 = zmm2.d
    uint128_t zmm5 = _mm_rsqrt_ss(zmm2.d, zmm3)
    zmm3 = zmm3 * 0.5f
    zmm0.d = zmm5.d f* zmm5.d
    zmm2.d = 0.5f - zmm3 f* zmm0.d
    zmm0.d = zmm5.d f* zmm2.d
    zmm5.d = zmm5.d f+ zmm0.d
    zmm0.d = zmm5.d f* (0.5f - zmm3 * zmm5.d f* zmm5.d)
    zmm5.d = zmm5.d f+ zmm0.d
    zmm0.d = zmm5.d f* zmm6.d
    float zmm1 = zmm5.d f* zmm7.d
    zmm5.d = zmm5.d f* zmm8.d
    *arg2 = zmm0.d
    *(arg2 + 4) = zmm1
    arg2[1].d = zmm5.d
else
    int32_t rax_2 = data_143dbb200
    *arg2 = data_143dbb1f8.q
    arg2[1].d = rax_2

return arg2
