// 函数: sub_1421e0ad0
// 地址: 0x1421e0ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rcx = zx.d(*(arg3 + 0xb3))
uint64_t var_118 = 0
int32_t var_110 = 0
uint64_t var_108 = 0
int32_t var_100 = 0
uint128_t zmm0
uint128_t zmm1
uint128_t zmm6
float zmm7[0x4]
float zmm8[0x4]
float zmm9[0x4]
float zmm10[0x4]
float zmm11[0x4]

if (rcx != 0)
    int128_t* rdx
    
    if (*(arg3 + 0xb0) == 0)
        rdx = &data_14399f6e0
    else
        rdx = arg2 + 0x80
    
    sub_1421e0780(rcx, rdx, &var_118, &var_108)
    zmm11 = var_110
    zmm10 = var_118:4.d
    zmm7 = var_118.d
    zmm9 = var_100
    zmm8 = var_108:4.d
    zmm6 = var_108.d
else
    uint128_t zmm2 = data_142d4cc00
    zmm8 = *(arg4 + 0x430)
    zmm9 = *(arg4 + 0x420)
    zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(arg4 + 0x410))
    int64_t var_e8_1 = 0
    zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
    float temp0_5[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(arg4 + 0x400))
    uint32_t var_e0_1 = rcx
    zmm1 = _mm_mul_ps(zmm1, zmm9)
    uint128_t var_98_1 = zmm2
    zmm7 = _mm_add_ps(_mm_add_ps(temp0_5, zmm0), 
        _mm_add_ps(zmm1, _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm8)))
    var_e8_1.o = zmm7
    zmm0.d = zmm7.d f* zmm7[0]
    zmm10 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
    zmm11 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
    zmm1.d = zmm10.d f* zmm10[0]
    zmm1.d = zmm1.d f+ zmm0.d
    zmm0.d = zmm11.d f* zmm11[0]
    zmm1.d = zmm1.d f+ zmm0.d
    uint128_t zmm3
    
    if (zmm1.d f<= 9.99999994e-09f)
        zmm7 = zx.o(0)
        zmm10 = zx.o(0)
        zmm11 = zx.o(0)
    else
        zmm3.d = zmm1.d
        float temp0_14[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3.d)
        zmm3.d = zmm3.d f* 0.5f
        zmm0.d = temp0_14.d f* temp0_14[0]
        zmm1.d = zmm3.d f* zmm0.d
        zmm2.d = 0.5f f- zmm1.d
        zmm0.d = temp0_14.d f* zmm2.d
        temp0_14[0] = temp0_14[0] f+ zmm0.d
        zmm1.d = temp0_14.d f* temp0_14[0]
        zmm3.d = zmm3.d f* zmm1.d
        zmm0.d = temp0_14.d f* (0.5f f- zmm3.d)
        temp0_14[0] = temp0_14[0] f+ zmm0.d
        float arg_8 = temp0_14[0]
        zmm7[0] = zmm7[0] * temp0_14[0]
        zmm10[0] = zmm10[0] * temp0_14[0]
        zmm11[0] = zmm11[0] * temp0_14[0]
    
    zmm2 = data_142d4cc20
    zmm6 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(arg4 + 0x400))
    int64_t var_d8_1 = 0
    zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
    zmm7 ^= 0x80000000
    zmm10 ^= 0x80000000
    zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(arg4 + 0x410))
    zmm11 ^= 0x80000000
    int32_t var_d0_1 = 0
    zmm1 = _mm_mul_ps(zmm1, zmm9)
    uint128_t var_88_1 = zmm2
    zmm6 = _mm_add_ps(zmm6, zmm0)
    zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm8)
    var_118.d = zmm7[0]
    var_118:4.d = zmm10[0]
    float var_110_1 = zmm11[0]
    zmm6 = _mm_add_ps(zmm6, _mm_add_ps(zmm1, zmm2))
    var_d8_1.o = zmm6
    zmm0.d = zmm6.d f* zmm6.d
    zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
    zmm9 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
    zmm1.d = zmm8.d f* zmm8[0]
    zmm1.d = zmm1.d f+ zmm0.d
    zmm0.d = zmm9.d f* zmm9[0]
    zmm1.d = zmm1.d f+ zmm0.d
    
    if (zmm1.d f<= 9.99999994e-09f)
        zmm6 = zx.o(0)
        zmm8 = zx.o(0)
        zmm9 = zx.o(0)
    else
        zmm3.d = zmm1.d
        float temp0_28[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3.d)
        zmm3.d = zmm3.d f* 0.5f
        zmm0.d = temp0_28.d f* temp0_28[0]
        zmm1.d = zmm3.d f* zmm0.d
        zmm2.d = 0.5f f- zmm1.d
        zmm0.d = temp0_28.d f* zmm2.d
        temp0_28[0] = temp0_28[0] f+ zmm0.d
        zmm1.d = temp0_28.d f* temp0_28[0]
        zmm3.d = zmm3.d f* zmm1.d
        zmm0.d = temp0_28.d f* (0.5f f- zmm3.d)
        temp0_28[0] = temp0_28[0] f+ zmm0.d
        float arg_18 = temp0_28[0]
        zmm6.d = zmm6.d f* temp0_28[0]
        zmm8[0] = zmm8[0] * temp0_28[0]
        zmm9[0] = zmm9[0] * temp0_28[0]
    
    zmm6 ^= 0x80000000
    zmm8 ^= 0x80000000
    zmm9 ^= 0x80000000
    var_108.d = zmm6.d
    var_108:4.d = zmm8[0]
    float var_100_1 = zmm9[0]

int64_t* rcx_1 = data_143f0f180
int32_t var_ec = 0
zmm0.d = zmm7[0]
zmm1 = zx.o(*(arg3 + 0xb2))
_mm_shuffle_ps(zmm0, zmm0, 0xe1)
zmm0.d = zmm10[0]
int32_t var_c8 = zmm6.d
_mm_shuffle_ps(zmm0, zmm0, 0xc6)
zmm0.d = zmm11[0]
float var_c4 = zmm8[0]
zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0xc9)
uint128_t var_f8 = zmm0
var_f8:4.q = 0
int32_t var_ec_1 = 0
uint128_t var_b8 = zmm0
zmm1 = _mm_cvtepi32_ps(zmm1)
int32_t var_bc = 0
float var_c0 = zmm9[0]
zmm0.d = zmm1.d
var_f8 = zmm0
uint128_t var_a8 = zmm0
(*(*rcx_1 + 0xf8))(rcx_1, &var_f8, &var_c8, &data_143f4d4f0, 1, 1)
void* rax_2 = var_f8.q
*arg1 = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

sub_1405d1550(&var_f8)
return arg1
