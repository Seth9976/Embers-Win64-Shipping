// 函数: sub_140ae1ec0
// 地址: 0x140ae1ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_78 = *arg1
int32_t var_88
sub_140adf5d0(&var_78, &var_88)
float zmm2[0x4] = arg1[2]
float zmm11[0x4] = arg1[1]
float zmm8[0x2] = var_88
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
int128_t zmm10
zmm10.q = fconvert.d(temp0[0])
int64_t zmm5 = fconvert.d(zmm2[0])
int64_t var_98 = zmm10.q
zmm2 = zx.o(0)
float temp0_2[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xaa)
zmm2[0].q = fconvert.d(zmm11[0])
int64_t zmm4 = fconvert.d(temp0_2[0])
int64_t r8 = zmm2[0].q
int64_t var_a0 = fconvert.d(temp0_1[0])
int64_t var_a8 = zmm5
_mm_shuffle_ps(zmm11, zmm11, 0x55)[0]
int32_t var_80
float var_b0[0x2] = _mm_cvtps_pd(var_80)
int32_t var_84
float var_b8[0x2] = _mm_cvtps_pd(var_84)
float var_c0[0x2] = _mm_cvtps_pd(zmm8)
int64_t var_c8 = zmm4
sub_140a2e390(arg2, u"%f,%f,%f|%f,%f,%f|%f,%f,%f", r8)
return arg2
