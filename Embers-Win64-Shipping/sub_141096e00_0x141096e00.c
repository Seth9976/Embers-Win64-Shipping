// 函数: sub_141096e00
// 地址: 0x141096e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = *(arg1 + 0xc) ^ data_142d3f780
int128_t zmm7 = *(arg1 + 4) ^ data_142d3f780
int64_t zmm0
zmm0.d = zmm6.q.d f* zmm6.d
int64_t zmm2
zmm2.d = zmm7.q.d f* zmm7.d
int128_t zmm8 = *(arg1 + 8)
zmm2.d = zmm2.d f+ zmm0.d
int32_t var_44 = zmm7.d
zmm2.d = zmm2.d f+ zmm8.d f* zmm8.d

if (not(zmm2.d f!= 1f))
    *arg2 = zmm6.d.q
    arg2[1].d = zmm8.d
else if (zmm2.d f>= 9.99999994e-09f)
    int64_t zmm3
    zmm3.d = zmm2.d
    int64_t temp0_1 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
    zmm3.d = zmm3.d f* 0.5f
    zmm0.d = temp0_1.d f* temp0_1.d
    zmm2.d = 0.5f - zmm3.d f* zmm0.d
    zmm0.d = temp0_1.d f* zmm2.d
    int64_t zmm5
    zmm5.d = temp0_1.d f+ zmm0.d
    zmm3.d = zmm3.d f* zmm5.d f* zmm5.d
    zmm0.d = zmm5.d f* (0.5f f- zmm3.d)
    zmm5.d = zmm5.d f+ zmm0.d
    zmm6.d = zmm6.d f* zmm5.d
    zmm7.d = zmm7.d f* zmm5.d
    zmm8.d = zmm8.d f* zmm5.d
    *arg2 = zmm6.d
    *(arg2 + 4) = zmm7.d
    arg2[1].d = zmm8.d
else
    int32_t rax_2 = data_143dbb200
    *arg2 = data_143dbb1f8.q
    arg2[1].d = rax_2

return arg2
