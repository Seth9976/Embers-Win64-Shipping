// 函数: sub_142292e30
// 地址: 0x142292e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm8
zmm8.d = 1f / arg3
int128_t zmm6
zmm6.d = arg1.d f/ arg4.d
int128_t zmm10 = arg2
zmm6.d = zmm6.d f* -1f f/ zmm8.d
arg1.q = fconvert.d(zmm6.d)
arg1.q = arg1.q f* 0.33333333333333331
int128_t zmm7 = exp(arg1.q)
arg2.q = fconvert.d(expf(zmm6.d).d)
zmm8.d = zmm8.d f* arg4.d
zmm7.q = zmm7.q f+ arg2.q
zmm7.q = zmm7.q f/ _mm_cvtps_pd(zmm8.q).q
zmm7.q = zmm7.q f* 0.039788734665751418
zmm7.q = _mm_max_sd(zmm7.q, 0).q f* fconvert.d(zmm10.d)
int64_t result
result.d = fconvert.s(zmm7.q)
return result
