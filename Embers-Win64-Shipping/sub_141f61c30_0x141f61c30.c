// 函数: sub_141f61c30
// 地址: 0x141f61c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x410)
void* rcx

if (rax s<= 0)
    rcx = &data_143a2d880
else if (*(arg1 + 0x4e1) == 0 || arg3 s< rax)
    int32_t rax_1 = rax - 1
    
    if (arg3 s>= 0)
        if (arg3 s< rax_1)
            rax_1 = arg3
        
        rcx = sx.q(rax_1) * 0x2c + *(arg1 + 0x408)
    else
        rcx = *(arg1 + 0x408)
else
    rcx = *(arg1 + 0x408)

uint128_t zmm8 = *(rcx + 0x20)
float zmm7[0x4] = *(rcx + 0x1c)
float zmm6[0x4] = *(rcx + 0x24)
zmm7[0] = zmm7[0] * zmm7[0]
uint128_t zmm0
zmm0.d = zmm8.d f* zmm8.d
zmm6[0] = zmm6[0] * zmm6[0]
zmm7[0] = zmm7[0] f+ zmm0.d
zmm7[0] = zmm7[0] + zmm6[0]
uint64_t var_58
float var_50
float zmm2[0x4]

if (zmm7[0] != 1f)
    if (zmm7[0] >= 9.99999994e-09f)
        float zmm4[0x4] = 0x3f000000
        zmm0 = zmm7
        float zmm3[0x4] = zmm0
        float temp0_2[0x4] = _mm_rsqrt_ss(zmm0[0], zmm3[0])
        zmm2 = 0x3f000000
        zmm3[0] = zmm3[0] * 0.5f
        zmm0.d = temp0_2.d f* temp0_2[0]
        zmm3[0] = zmm3[0] f* zmm0.d
        zmm2[0] = 0.5f - zmm3[0]
        zmm0.d = temp0_2.d f* zmm2[0]
        temp0_2[0] = temp0_2[0] f+ zmm0.d
        temp0_2[0] = temp0_2[0] * temp0_2[0]
        zmm3[0] = zmm3[0] * temp0_2[0]
        zmm4[0] = 0.5f - zmm3[0]
        zmm0.d = temp0_2.d f* zmm4[0]
        temp0_2[0] = temp0_2[0] f+ zmm0.d
        zmm8.d = zmm8.d f* temp0_2[0]
        zmm7[0] = zmm7[0] * temp0_2[0]
        zmm2 = zmm8
        zmm6[0] = zmm6[0] * temp0_2[0]
    else
        zmm7 = data_143dbb1f8
        zmm2 = data_143dbb1fc
        zmm6 = data_143dbb200
    
    var_50 = zmm6[0]
    var_58:4.d = zmm2[0]
    var_58.d = zmm7[0]
else
    zmm0 = zx.o(*(rcx + 0x1c))
    zmm2 = zmm0
    var_50 = *(rcx + 0x24)
    zmm6 = var_50
    var_58 = zmm0.q
    zmm7 = var_58.d
    zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0x55)

uint64_t* rax_4

if (arg4 != 1)
    float var_40_1 = var_50
    uint64_t var_48
    rax_4 = &var_48
    var_48 = var_58
else
    float zmm5[0x4] = *(arg1 + 0x1c0)
    rax_4 = &var_58
    float temp0_3[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
    float temp0_4[0x4] = _mm_unpacklo_ps(zmm2, 0)
    float temp0_7[0x4] = __mulps_xmmps_memps(
        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm7, zmm6.q), temp0_4[0].q), *(arg1 + 0x1e0))
    float temp0_8[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
    float temp0_9[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
    zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0xc9), temp0_8)
    float temp0_14[0x4] =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0xd2), temp0_3), zmm0)
    float temp0_15[0x4] = _mm_add_ps(temp0_14, temp0_14)
    float temp0_16[0x4] = _mm_mul_ps(temp0_9, temp0_15)
    zmm0 = _mm_shuffle_ps(temp0_15, temp0_15, 0xc9)
    float temp0_18[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0xd2)
    zmm0 = _mm_mul_ps(zmm0, temp0_8)
    float temp0_20[0x4] = _mm_mul_ps(temp0_18, temp0_3)
    float temp0_21[0x4] = _mm_add_ps(temp0_16, temp0_7)
    float temp0_23[0x4] = _mm_add_ps(_mm_sub_ps(temp0_20, zmm0), temp0_21)
    var_58.d = temp0_23[0]
    zmm0 = _mm_shuffle_ps(temp0_23, temp0_23, 0x55)
    float var_50_1 = _mm_shuffle_ps(temp0_23, temp0_23, 0xaa)[0]
    var_58:4.d = zmm0.d

int32_t rax_6 = rax_4[1].d
*arg2 = *rax_4
arg2[1].d = rax_6
return arg2
