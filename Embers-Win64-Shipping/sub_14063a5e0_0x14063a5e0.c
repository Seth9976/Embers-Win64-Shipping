// 函数: sub_14063a5e0
// 地址: 0x14063a5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6 = arg2[1].d
uint128_t zmm7 = *arg2
uint128_t zmm3
zmm3.d = zmm7.d f* zmm7.d
int128_t zmm8 = arg3
uint128_t zmm9 = *(arg2 + 4)
uint128_t zmm1
zmm1.d = zmm6.d f* zmm6.d
uint128_t zmm0
zmm0.d = zmm9.d f* zmm9.d
zmm3.d = zmm3.d f+ zmm0.d
zmm3.d = zmm3.d f+ zmm1.d

if (not(zmm3.d f!= 1f))
    zmm0 = zx.o(*arg2)
    zmm6 = arg2[1].d
    zmm7 = zmm0.d
    zmm1 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
else if (zmm3.d f>= 9.99999994e-09f)
    uint128_t zmm5 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
    zmm3.d = zmm3.d f* 0.5f
    zmm0.d = zmm5.d f* zmm5.d
    zmm1.d = zmm3.d f* zmm0.d
    arg3.d = 0.5f f- zmm1.d
    zmm0.d = zmm5.d f* arg3.d
    zmm5.d = zmm5.d f+ zmm0.d
    zmm1.d = zmm5.d f* zmm5.d
    zmm3.d = zmm3.d f* zmm1.d
    zmm0.d = zmm5.d f* (0.5f f- zmm3.d)
    zmm5.d = zmm5.d f+ zmm0.d
    zmm9.d = zmm9.d f* zmm5.d
    zmm7.d = zmm7.d f* zmm5.d
    zmm1 = zmm9
    zmm6.d = zmm6.d f* zmm5.d
else
    zmm7 = data_143dbb1f8
    zmm1 = data_143dbb1fc
    zmm6 = data_143dbb200

zmm7.d = zmm7.d f* zmm8.d
zmm6.d = zmm6.d f* zmm8.d
zmm1.d = zmm1.d f* zmm8.d
*arg1 = zmm7.d
arg1[2] = zmm6.d
arg1[1] = zmm1.d
return arg1
