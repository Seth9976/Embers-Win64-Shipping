// 函数: sub_141f743b0
// 地址: 0x141f743b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm3 = *arg3
uint128_t zmm2 = *arg2
uint128_t zmm0
zmm0.d = arg4[2].d f* 6f
uint128_t zmm9 = *(arg2 + 4)
uint128_t zmm10 = *(arg3 + 4)
int32_t arg_8 = zmm0.d
zmm0 = zmm3
int128_t zmm11 = arg6
uint128_t zmm15 = zmm2
zmm2.d = zmm2.d f* 6f
uint128_t zmm8 = *(arg5 + 4)
uint128_t zmm14 = *(arg5 + 8)
float zmm4 = *arg4 * 6f
int128_t zmm12
zmm12.d = arg4[1].d f* 6f
uint128_t zmm1 = *arg5
zmm3.d = zmm3.d f+ zmm1.d
zmm0.d = zmm0.d f* 4f
zmm15.d = zmm15.d f* -6f
zmm3.d = zmm3.d f* 3f
zmm15.d = zmm15.d f- zmm0.d
int128_t zmm13
zmm13.d = zmm11.d f* zmm11.d
zmm3.d = zmm3.d f+ zmm2.d
zmm0.d = zmm1.d f+ zmm1.d
zmm2 = zmm9
zmm9.d = zmm9.d f* 6f
zmm1.d = zmm8.d f+ zmm8.d
zmm2.d = zmm2.d f* -6f
zmm15.d = zmm15.d f- zmm0.d
zmm0 = zmm10
zmm10.d = zmm10.d f+ zmm8.d
zmm0.d = zmm0.d f* 4f
zmm3.d = zmm3.d f- zmm4
zmm2.d = zmm2.d f- zmm0.d
zmm10.d = zmm10.d f* 3f
zmm15.d = zmm15.d f+ zmm4
zmm3.d = zmm3.d f* zmm13.d
zmm2.d = zmm2.d f- zmm1.d
zmm10.d = zmm10.d f+ zmm9.d
zmm15.d = zmm15.d f* zmm11.d
zmm1.d = zmm14.d f+ zmm14.d
zmm2.d = zmm2.d f+ zmm12.d
zmm10.d = zmm10.d f- zmm12.d
zmm15.d = zmm15.d f+ zmm3.d
zmm3 = *(arg3 + 8)
zmm0.d = zmm3.d f* 4f
zmm2.d = zmm2.d f* zmm11.d
zmm10.d = zmm10.d f* zmm13.d
zmm2.d = zmm2.d f+ zmm10.d
arg6 = zmm2.d
zmm2 = *(arg2 + 8)
zmm8.d = zmm2.d f* -6f
zmm8.d = zmm8.d f- zmm0.d
zmm8.d = zmm8.d f- zmm1.d
zmm8.d = zmm8.d f+ arg_8
zmm8.d = zmm8.d f* zmm11.d
zmm2.d = zmm2.d f* 6f
zmm3.d = zmm3.d f+ zmm14.d
uint128_t zmm7
zmm7.d = (*arg3).d f+ zmm15.d
uint128_t zmm6
zmm6.d = arg6.d f+ *(arg3 + 4)
zmm3.d = zmm3.d f* 3f
zmm3.d = zmm3.d f+ zmm2.d
zmm0.d = zmm7.d f* zmm7.d
int32_t var_c4 = zmm6.d
zmm2.d = zmm6.d f* zmm6.d
zmm3.d = zmm3.d f- arg_8
zmm2.d = zmm2.d f+ zmm0.d
zmm3.d = zmm3.d f* zmm13.d
zmm8.d = zmm8.d f+ zmm3.d
zmm8.d = zmm8.d f+ *(arg3 + 8)
zmm1.d = zmm8.d f* zmm8.d
zmm2.d = zmm2.d f+ zmm1.d

if (not(zmm2.d f!= 1f))
    *arg1 = zmm7.d.q
    arg1[2] = zmm8.d
else if (zmm2.d f>= 9.99999994e-09f)
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
    zmm7.d = zmm7.d f* zmm5.d
    zmm6.d = zmm6.d f* zmm5.d
    zmm8.d = zmm8.d f* zmm5.d
    *arg1 = zmm7.d
    arg1[1] = zmm6.d
    arg1[2] = zmm8.d
else
    int32_t rax_3 = data_143dbb200
    *arg1 = data_143dbb1f8.q
    arg1[2] = rax_3

return arg1
