// 函数: sub_141f64ab0
// 地址: 0x141f64ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 - 0x58)

if (rcx == 0)
    void* const* rax_4
    rax_4.b = 0
    return rax_4

(*(*(rcx + 0x40) + 0x10))(rcx + 0x40)
uint32_t rcx_2 = zx.d(*(arg1 + 0x8d))
int32_t var_a8 = 0x3f800000
int32_t var_a4 = 0x3f800000
float var_a0 = 1f
int32_t* rax_1

if (rcx_2 == 0)
    rax_1 = &var_a8
else if (rcx_2 == 1)
    rax_1 = &var_a4
else
    rax_1 = &var_a0

void* rbx = *arg2
*rax_1 = 0
void* rbp = rbx + sx.q(arg2[1].d) * 0xc
int64_t rax_2

if (rbx != rbp)
    float zmm6[0x4]
    float var_18_1[0x4] = zmm6
    float zmm7[0x4]
    float var_28_1[0x4] = zmm7
    float zmm8[0x4]
    float var_38_1[0x4] = zmm8
    int128_t zmm9 = var_a0
    int128_t zmm10 = var_a4
    int128_t zmm11 = var_a8
    
    do
        float zmm0[0x4] = *rbx
        float zmm1[0x4] = *(rbx + 4)
        float zmm2[0x4] = *(rbx + 8)
        uint32_t rcx_5 = zx.d(*(arg1 + 0x8d))
        zmm0[0] = zmm0[0] f* zmm11.d
        zmm1[0] = zmm1[0] f* zmm10.d
        zmm2[0] = zmm2[0] f* zmm9.d
        
        if (rcx_5 == 0)
            zmm2 = zmm0
        else if (rcx_5 == 1)
            zmm2 = zmm1
        
        float var_98[0x3][0x4]
        float (* rax_3)[0x4]
        rax_3, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11 = sub_141f57e90(arg1 - 0x498, &var_98, zmm2)
        zmm6 = _mm_unpacklo_ps(zmm6, zmm8[0].q)
        zmm2 = _mm_unpacklo_ps(zmm7, 0)
        float zmm5_1[0x4] = *rax_3
        zmm6 = __mulps_xmmps_memps(_mm_unpacklo_ps(zmm6, zmm2[0].q), rax_3[2])
        zmm1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
        zmm2 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
        zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc9), zmm2)
        float zmm3_1[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd2), zmm1), zmm0)
        zmm3_1 = _mm_add_ps(zmm3_1, zmm3_1)
        zmm5_1 = _mm_mul_ps(zmm5_1, zmm3_1)
        float zmm4_1[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xd2)
        zmm0 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc9)
        zmm4_1 = _mm_mul_ps(zmm4_1, zmm1)
        zmm0 = _mm_mul_ps(zmm0, zmm2)
        zmm5_1 = _mm_add_ps(zmm5_1, zmm6)
        zmm4_1 = __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(zmm4_1, zmm0), zmm5_1), rax_3[1])
        var_a0 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)[0]
        rax_2 = zx.q(var_a0)
        *rbx = (_mm_unpacklo_ps(zmm4_1, _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)[0].q)).q
        *(rbx + 8) = rax_2.d
        rbx += 0xc
    while (rbx != rbp)

arg2[8].d |= 2
rax_2.b = 1
return rax_2
