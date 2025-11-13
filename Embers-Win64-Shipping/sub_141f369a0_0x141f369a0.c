// 函数: sub_141f369a0
// 地址: 0x141f369a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0xcc)
*arg2 = *(arg1 + 0xc4)
uint128_t zmm0 = zx.o(*(arg3 + 0x28))
arg2[1].d = rax
int32_t var_90 = *(arg3 + 0x30)
int64_t rax_2 = *arg1
uint64_t var_98 = zmm0.q
int32_t var_a8
(*(rax_2 + 0x4f0))(zmm0, &var_a8, &var_98)
float zmm2[0x4] = *(arg2 + 4)
uint128_t zmm3 = *arg2
int32_t var_a4
uint128_t zmm11 = var_a4
uint128_t zmm12 = var_a8
float zmm5 = arg2[1].d
int32_t var_a0
uint128_t zmm13 = var_a0
uint128_t zmm4
zmm4.d = zmm2.d f* zmm11.d
zmm0.d = zmm3.d f* zmm12.d
zmm4.d = zmm4.d f+ zmm0.d
zmm4.d = zmm4.d f+ zmm5 f* zmm13.d

if (not(zmm4.d f> 0f))
    zmm0 = zmm4 ^ data_142d3f780
    zmm13.d = zmm13.d f* zmm0.d
    zmm12.d = zmm12.d f* zmm0.d
    zmm11.d = zmm11.d f* zmm0.d
    uint128_t zmm9
    zmm9.d = zmm13.d f+ zmm5
    uint128_t zmm7
    zmm7.d = zmm12.d f+ zmm3.d
    uint128_t zmm8
    zmm8.d = zmm11.d f+ zmm2[0]
    
    if ((*(arg1 + 0xf9) & 3) != 0)
        zmm3 = arg1[0x24].d
        zmm0.d = zmm8.d f* zmm8.d
        zmm2 = zmm7
        zmm2[0] = zmm2[0] f* zmm7.d
        zmm2[0] = zmm2[0] f+ zmm0.d
        zmm2[0] = zmm2[0] + zmm9.d f* zmm9.d
        zmm4.d = zmm4.d f/ _mm_sqrt_ss(0, zmm2[0]).d
        zmm4 ^= data_142d3f780
        
        if (not(zmm4.d f< zmm3.d))
            zmm3 = _mm_min_ss(zmm4.d, 0x3f800000)
        
        zmm3.d = zmm3.d f* arg1[0x23].d
    else
        zmm3 = arg1[0x23].d
    
    zmm4.d = 1f f- zmm3.d
    
    if (zmm4.d f>= 0f)
        zmm4 = _mm_min_ss(zmm4.d, 0x3f800000)
    else
        zmm4 = zx.o(0)
    
    float temp0_4[0x4] = _mm_max_ss((*(arg1 + 0x114))[0], 0)
    zmm8.d = zmm8.d f* zmm4.d
    zmm9.d = zmm9.d f* zmm4.d
    zmm7.d = zmm7.d f* zmm4.d
    float zmm1 = temp0_4[0]
    zmm0.d = temp0_4.d f* zmm11.d
    temp0_4[0] = temp0_4[0] f* zmm13.d
    zmm0.d = zmm0.d f+ zmm8.d
    temp0_4[0] = temp0_4[0] f+ zmm9.d
    *(arg2 + 4) = zmm0.d
    arg2[1].d = temp0_4[0]
    *arg2
    zmm0.d = zmm1 f* zmm12.d f+ zmm7.d
    *arg2 = zmm0.q
    int32_t var_90_1 = arg2[1].d
    var_98 = zmm0.q
    void var_88
    uint64_t* rax_4 = sub_141f41d80(arg1, &var_88, &var_98, zmm3, zmm0, zx.o(0), zmm7, zmm8, zmm9)
    int32_t rax_5 = rax_4[1].d
    *arg2 = *rax_4
    arg2[1].d = rax_5

return arg2
