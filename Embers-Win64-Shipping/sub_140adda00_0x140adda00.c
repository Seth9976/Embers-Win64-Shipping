// 函数: sub_140adda00
// 地址: 0x140adda00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6 = *(arg2 + 4)
int128_t zmm10 = arg2[1].d
uint128_t zmm11 = *arg2
uint128_t zmm0
zmm0.d = zmm6.d f* zmm6.d
uint128_t zmm2
zmm2.d = zmm11.d f* zmm11.d
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ zmm10.d f* zmm10.d
uint128_t zmm3
uint128_t zmm5
uint128_t zmm9

if (not(zmm2.d f!= 1f))
    zmm0 = zx.o(*arg2)
    zmm10 = arg2[1].d
    zmm11 = zmm0.d
    zmm9 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
else if (zmm2.d f>= 9.99999994e-09f)
    zmm5 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
    zmm3.d = zmm2.d f* 0.5f
    zmm0.d = zmm5.d f* zmm5.d
    zmm2.d = 0.5f - zmm3.d f* zmm0.d
    zmm0.d = zmm5.d f* zmm2.d
    zmm5.d = zmm5.d f+ zmm0.d
    zmm3.d = zmm3.d f* zmm5.d f* zmm5.d
    zmm0.d = zmm5.d f* (0.5f f- zmm3.d)
    zmm5.d = zmm5.d f+ zmm0.d
    zmm6.d = zmm6.d f* zmm5.d
    zmm11.d = zmm11.d f* zmm5.d
    zmm9 = zmm6
    zmm10.d = zmm10.d f* zmm5.d
else
    zmm11 = data_143dbb1f8
    zmm9 = data_143dbb1fc
    zmm10 = data_143dbb200

zmm6 = *(arg1 + 4)
zmm3 = *arg1
zmm0.d = zmm6.d f- arg3[1]
zmm5.d = zmm3.d f- *arg3
zmm0.d = zmm0.d f* zmm9.d
zmm5.d = zmm5.d f* zmm11.d
zmm5.d = zmm5.d f+ zmm0.d
zmm5.d = zmm5.d f+ (*(arg1 + 8) f- arg3[2]) f* zmm10.d
zmm9.d = zmm9.d f* zmm5.d
zmm11.d = zmm11.d f* zmm5.d
zmm9.d = zmm9.d f+ arg3[1]
zmm10.d = zmm10.d f* zmm5.d
zmm11.d = zmm11.d f+ *arg3
zmm10.d = zmm10.d f+ arg3[2]
zmm9.d = zmm9.d f- zmm6.d
zmm11.d = zmm11.d f- zmm3.d
zmm10.d = zmm10.d f- *(arg1 + 8)
zmm9.d = zmm9.d f* zmm9.d
zmm11.d = zmm11.d f* zmm11.d
zmm10.d = zmm10.d f* zmm10.d
zmm9.d = zmm9.d f+ zmm11.d
zmm9.d = zmm9.d f+ zmm10.d
return _mm_sqrt_ss(0, zmm9.d)
