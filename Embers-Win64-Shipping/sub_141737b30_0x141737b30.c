// 函数: sub_141737b30
// 地址: 0x141737b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm12 = *arg3
uint128_t zmm10
zmm10.d = (*arg4).d f- zmm12.d
int128_t zmm13 = *(arg3 + 4)
uint128_t zmm11
zmm11.d = (*(arg4 + 4)).d f- zmm13.d
int128_t zmm14 = *(arg3 + 8)
int128_t zmm9
zmm9.d = arg4[1].d.d f- zmm14.d
uint128_t zmm0
zmm0.d = zmm10.d f* zmm10.d
uint128_t zmm2
zmm2.d = zmm11.d f* zmm11.d
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ zmm9.d f* zmm9.d
int32_t arg_8 = _mm_sqrt_ss(0, zmm2.d).d
uint128_t zmm3
uint128_t zmm4
uint128_t zmm5

if (not(zmm2.d f== 1f))
    if (zmm2.d f>= 9.99999994e-09f)
        zmm5 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
        zmm3.d = zmm2.d f* 0.5f
        zmm0.d = zmm5.d f* zmm5.d
        zmm2.d = 0.5f - zmm3.d f* zmm0.d
        zmm0.d = zmm5.d f* zmm2.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm3.d = zmm3.d f* zmm5.d f* zmm5.d
        zmm4.d = 0.5f f- zmm3.d
        zmm0.d = zmm5.d f* zmm4.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm10.d = zmm10.d f* zmm5.d
        zmm11.d = zmm11.d f* zmm5.d
        zmm9.d = zmm9.d f* zmm5.d
    else
        zmm10 = data_143dbb1f8
        zmm11 = data_143dbb1fc
        zmm9 = data_143dbb200

zmm0 = arg5
int32_t var_c8
int32_t* rax = &var_c8
uint128_t zmm15 = *(arg1 + 0xc)
int128_t zmm6 = *arg1
zmm4 = *(arg1 + 4)
zmm2.d = arg1[1].d.d f* zmm0.d
float zmm1 = *(arg1 + 0x14) f* zmm0.d
zmm3.d = zmm15.d f* zmm0.d
uint128_t zmm7
zmm7.d = zmm4.d f+ zmm2.d
zmm0 = *(arg1 + 8)
zmm4.d = zmm4.d f- zmm2.d
zmm5 = zmm0
zmm0.d = zmm0.d f- zmm1
zmm5.d = zmm5.d f+ zmm1
uint128_t zmm8
zmm8.d = zmm3.d f+ zmm6.d
int32_t var_b4 = zmm7.d
zmm6.d = zmm6.d f- zmm3.d
int32_t var_c4 = zmm4.d
zmm7.d = zmm7.d f- zmm13.d
int32_t var_c0 = zmm0.d
zmm4.d = zmm4.d f- zmm13.d
int32_t var_b0 = zmm5.d
zmm0.d = zmm0.d f- zmm14.d
int32_t var_b8 = zmm8.d
zmm5.d = zmm5.d f- zmm14.d
var_c8 = zmm6.d
zmm8.d = zmm8.d f- zmm12.d
zmm7.d = zmm7.d f* zmm7.d
zmm6.d = zmm6.d f- zmm12.d
zmm4.d = zmm4.d f* zmm4.d
zmm0.d = zmm0.d f* zmm0.d
zmm5.d = zmm5.d f* zmm5.d
zmm6.d = zmm6.d f* zmm6.d
zmm8.d = zmm8.d f* zmm8.d
zmm6.d = zmm6.d f+ zmm4.d
zmm8.d = zmm8.d f+ zmm7.d
zmm6.d = zmm6.d f+ zmm0.d
zmm8.d = zmm8.d f+ zmm5.d
float temp0_2 = _mm_sqrt_ss(0, zmm6.d)
zmm6 = arg1[1].d
zmm7.d = zmm11.d f* zmm6.d

if (_mm_sqrt_ss(0, zmm8.d).d f<= temp0_2)
    rax = &var_b8

zmm0 = zx.o(*rax)
zmm4.d = zmm0.d f- zmm12.d
zmm5.d = rax[2].d f- zmm14.d
zmm2.d = _mm_shuffle_ps(zmm0, zmm0, 0x55).d f- zmm13.d
zmm0.d = zmm10.d f* zmm15.d
zmm4.d = zmm4.d f* zmm15.d
zmm7.d = zmm7.d f+ zmm0.d
zmm2.d = zmm2.d f* zmm6.d
zmm0 = *(arg1 + 0x14)
zmm2.d = zmm2.d f+ zmm4.d
zmm5.d = zmm5.d f* zmm0.d
zmm7.d = zmm7.d f+ zmm9.d f* zmm0.d
zmm2.d = zmm2.d f+ zmm5.d
int32_t rax_2

if (zmm7.d f!= 0f)
    zmm2.d = zmm2.d f/ zmm7.d
    
    if (zmm2.d f< 0f || zmm2.d f> arg_8)
    label_141737e22:
        int32_t var_b0_2 = 0
        zmm0 = _mm_unpacklo_ps(zx.o(0), 0)
        *(arg2 + 0xc) = 0
        rax_2 = var_b0_2
        *arg2 = zmm0.q
    else
        zmm10.d = zmm10.d f* zmm2.d
        *(arg2 + 0xc) = 1
        zmm11.d = zmm11.d f* zmm2.d
        zmm9.d = zmm9.d f* zmm2.d
        zmm10.d = zmm10.d f+ zmm12.d
        zmm11.d = zmm11.d f+ zmm13.d
        zmm9.d = zmm9.d f+ zmm14.d
        rax_2 = zmm9.d
        *arg2 = (_mm_unpacklo_ps(zmm10, zmm11.q)).q
else
    if (zmm2.d f!= 0f)
        goto label_141737e22
    
    *arg2 = *arg4
    rax_2 = arg4[1].d
    *(arg2 + 0xc) = 1

arg2[1].d = rax_2
return arg2
