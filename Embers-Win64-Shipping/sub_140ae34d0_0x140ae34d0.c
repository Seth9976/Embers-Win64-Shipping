// 函数: sub_140ae34d0
// 地址: 0x140ae34d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_98
float zmm9_1 = sub_140ad6800(&var_98, arg2, arg3)
int32_t var_8c
uint128_t zmm6 = var_8c
uint128_t zmm7 = 0xbf800000
float _X

if (zmm6.d f>= -1f)
    _X = _mm_min_ss(zmm6.d, 0x3f800000)
else
    _X = -1f

uint128_t zmm0 = acosf(_X)
zmm6.d = zmm6.d f* zmm6.d
uint128_t zmm3_1
zmm3_1.d = zmm0.d f+ zmm0.d
uint128_t zmm1
zmm1.d = 1f f- zmm6.d
zmm0 = _mm_sqrt_ss(0, _mm_max_ss(zmm1.d, 0).d)
uint128_t zmm12
uint128_t zmm13
uint128_t zmm14

if (zmm0.d f< 9.99999975e-05f)
    zmm13 = 0x3f800000
    zmm14 = zx.o(0)
    zmm12 = zx.o(0)
else
    zmm12.d = 1f f/ zmm0.d
    zmm13.d = zmm12.d f* var_98
    int32_t var_94
    zmm14.d = zmm12.d f* var_94
    int32_t var_90
    zmm12.d = zmm12.d f* var_90

zmm1.d = arg4.d f* 0.0174532924f
zmm1.d = zmm1.d f* zmm9_1

if (__andps_xmmxud_memxud(zmm3_1, data_142d3f770).d f<= zmm1.d)
    int32_t rax_2 = *(arg3 + 8)
    *arg1 = *arg3
    arg1[2] = rax_2
else
    zmm0 = zmm1 ^ data_142d3f780
    
    if (not(zmm3_1.d f>= zmm0.d))
        zmm3_1 = zmm0
    else if (not(zmm3_1.d f< zmm1.d))
        zmm3_1 = zmm1
    
    zmm3_1.d = zmm3_1.d f* 0.5f
    zmm0.d = zmm3_1.d f* 0.159154937f
    
    if (zmm3_1.d f< 0f)
        zmm0.d = zmm0.d f- 0.5f
    else
        zmm0.d = zmm0.d f+ 0.5f
    
    zmm0.d = _mm_cvtepi32_ps(zx.o(int.d(zmm0.d))).d f* 6.28318548f
    zmm3_1.d = zmm3_1.d f- zmm0.d
    
    if (not(zmm3_1.d f<= 1.57079637f))
        zmm0.d = 3.14159274f f- zmm3_1.d
        zmm3_1 = zmm0
    else if (zmm3_1.d f>= -1.57079637f)
        zmm7 = 0x3f800000
    else
        zmm0.d = -3.14159274f f- zmm3_1.d
        zmm3_1 = zmm0
    
    float rax_1 = *(arg2 + 8)
    uint128_t zmm2_1
    zmm2_1.d = zmm3_1.d f* zmm3_1.d
    zmm0.d = zmm2_1.d f* 2.3889859e-08f
    zmm1.d = 2.75255616e-06f f- zmm0.d
    zmm0.d = zmm2_1.d f* 2.60516146e-07f
    zmm1.d = zmm1.d f* zmm2_1.d
    zmm1.d = zmm1.d f- 0.000198408743f
    zmm1.d = zmm1.d f* zmm2_1.d
    zmm1.d = zmm1.d f+ 0.00833333097f
    zmm1.d = zmm1.d f* zmm2_1.d
    zmm1.d = zmm1.d f- 0.166666672f
    zmm1.d = zmm1.d f* zmm2_1.d
    zmm1.d = zmm1.d f+ 1f
    zmm1.d = zmm1.d f* zmm3_1.d
    zmm13.d = zmm13.d f* zmm1.d
    zmm12.d = zmm12.d f* zmm1.d
    zmm14.d = zmm14.d f* zmm1.d
    zmm1 = zx.o(*arg2)
    zmm9_1 = (((((2.47604949e-05f f- zmm0.d) f* zmm2_1.d - 0.00138883782f) f* zmm2_1.d
        + 0.0416666381f) f* zmm2_1.d - 0.5f) f* zmm2_1.d + 1f) f* zmm7.d
    var_98.q = zmm1.q
    int32_t zmm5_1 = var_98
    uint128_t zmm10
    zmm10.d = zmm14.d f* rax_1
    uint128_t zmm8_1
    zmm8_1.d = zmm12.d f* zmm5_1
    zmm7 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    zmm0.d = zmm12.d f* zmm7.d
    zmm6.d = zmm13.d f* zmm7.d
    zmm10.d = zmm10.d f- zmm0.d
    zmm0.d = zmm13.d f* rax_1
    zmm8_1.d = zmm8_1.d f- zmm0.d
    zmm0.d = zmm14.d f* zmm5_1
    zmm10.d = zmm10.d f+ zmm10.d
    zmm6.d = zmm6.d f- zmm0.d
    zmm8_1.d = zmm8_1.d f+ zmm8_1.d
    zmm2_1.d = zmm10.d f* zmm9_1
    zmm6.d = zmm6.d f+ zmm6.d
    zmm2_1.d = zmm2_1.d f+ zmm5_1
    zmm0.d = zmm8_1.d f* zmm12.d
    zmm3_1.d = zmm8_1.d f* zmm9_1
    zmm8_1.d = zmm8_1.d f* zmm13.d
    zmm1.d = zmm6.d f* zmm14.d
    float zmm4_1 = zmm6.d
    zmm6.d = zmm6.d f* zmm13.d
    zmm3_1.d = zmm3_1.d f+ zmm7.d
    zmm1.d = zmm1.d f- zmm0.d
    zmm0 = zmm10
    zmm10.d = zmm10.d f* zmm14.d
    zmm0.d = zmm0.d f* zmm12.d
    zmm1.d = zmm1.d f+ zmm2_1.d
    zmm8_1.d = zmm8_1.d f- zmm10.d
    zmm0.d = zmm0.d f- zmm6.d
    *arg1 = zmm1.d
    zmm0.d = zmm0.d f+ zmm3_1.d
    arg1[1] = zmm0.d
    zmm8_1.d = zmm8_1.d f+ zmm4_1 * zmm9_1 + rax_1
    arg1[2] = zmm8_1.d

return arg1
