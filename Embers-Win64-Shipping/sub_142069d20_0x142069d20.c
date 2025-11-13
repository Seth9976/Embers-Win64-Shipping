// 函数: sub_142069d20
// 地址: 0x142069d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = *(arg1 + 0x768)
int32_t r9 = 0
*(arg1 + 0x788) = 0
int32_t rcx = 0
int32_t i_1 = 0

if (r14[1].d != 0 && *(arg2 + 0x5b8) != 0)
    uint64_t rax = *r14
    int32_t i = *(rax + 0xc)
    int32_t r8_1 = *(rax + 0x1c)
    
    if (i s>= 0)
        int32_t i_2 = 0
        
        do
            i_1 = i_2
            rcx = r9
            i_2 = i
            r9 = r8_1
            
            if (r8_1 s< 0)
                break
            
            if (r8_1 - i s>= *(arg2 + 0x5b8))
                break
            
            *(arg1 + 0x788) = i
            i_1 = i_2
            *(arg1 + 0x78c) = r8_1
            int64_t rcx_1 = *r14
            i = *((sx.q(i) << 6) + rcx_1 + 0xc)
            r8_1 = *((sx.q(r8_1) << 6) + rcx_1 + 0x1c)
            rcx = r9
        while (i s>= 0)

if (rcx - i_1 + 1 s< 2)
    *(arg1 + 0x788) = -1
    return 

if (rcx - i_1 + 1 s> *(arg1 + 0x79c))
    sub_1413f6f70(arg1 + 0x790, rcx - i_1 + 1)
    rcx = *(arg1 + 0x78c)
    i_1 = *(arg1 + 0x788)

float zmm1[0x4] = *(arg2 + 0x1c0)
float temp0_1[0x4] = _mm_add_ps(zmm1, zmm1)
float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
float temp0_3[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
float temp0_4[0x4] = _mm_mul_ps(zmm1, temp0_1)
float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_1, temp0_1, 0x29), temp0_2)
float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_1, temp0_1, 0x12), temp0_3)
zmm1 = *(arg2 + 0x1e0)
float temp0_9[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x1a)
float temp0_10[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
float temp0_12[0x4] = _mm_add_ps(temp0_9, _mm_shuffle_ps(temp0_4, temp0_4, 1))
float zmm4[0x4] = data_143f43310
float temp0_13[0x4] = _mm_add_ps(temp0_8, temp0_6)
float temp0_14[0x4] = _mm_sub_ps(temp0_6, temp0_8)
float temp0_15[0x4] = _mm_sub_ps(zmm4, temp0_12)
float temp0_16[0x4] = _mm_mul_ps(temp0_13, zmm1)
float temp0_17[0x4] = _mm_mul_ps(temp0_10, temp0_14)
float zmm3[0x4] = __andps_xmmxud_memxud(_mm_mul_ps(temp0_15, zmm1), data_143f43320)
float temp0_20[0x4] = _mm_shuffle_ps(temp0_17, zmm3, 0x32)
float temp0_22[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_16, zmm3, 0), temp0_20, 0x82)
float temp0_23[0x4] = _mm_shuffle_ps(temp0_16, zmm3, 0x31)
float temp0_25[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_17, zmm3, 0x10), temp0_23, 0x88)
float zmm0[0x4] = *(arg2 + 0x1d0)
zmm4[0].q = zmm0 u>> 0x40
float temp0_26[0x4] = _mm_shuffle_ps(temp0_16, temp0_17, 0x12)
float temp0_27[0x4] = _mm_shuffle_ps(zmm0, zmm4, 0xc4)
float temp0_28[0x4] = _mm_shuffle_ps(temp0_26, zmm3, 0xe8)
float var_a8_1[0x4] = temp0_27
float var_d8[0x4] = temp0_22
float var_c8_1[0x4] = temp0_25
float var_b8_1[0x4] = temp0_28

if (i_1 s> rcx)
    return 

int128_t zmm8
int128_t var_48_1 = zmm8
float zmm9[0x4]
float var_58_1[0x4] = zmm9
int64_t rsi_3 = sx.q(i_1) << 6

do
    void* rcx_3 = **(arg1 + 0x768)
    int64_t var_10c = *(rcx_3 + rsi_3)
    int32_t var_104_1 = *(rcx_3 + rsi_3 + 8)
    int64_t var_100_1 = *(rcx_3 + rsi_3 + 0x10)
    int32_t var_f8_1 = *(rcx_3 + rsi_3 + 0x18)
    char var_f4_1 = 1
    uint64_t var_98[0x4]
    uint64_t* rax_8 = sub_140ae2b00(&var_10c, &var_98, &var_d8)
    int64_t r15_1 = sx.q(*(arg1 + 0x798))
    float zmm6_1[0x4] = *rax_8
    zmm9 = *(rax_8 + 0xc)
    float zmm5[0x4] = *(rax_8 + 4)
    zmm9[0] = zmm9[0] - zmm6_1[0]
    int32_t zmm4_1 = rax_8[1].d
    zmm8.d = rax_8[2].d.d f- zmm5[0]
    int64_t zmm7_1
    zmm7_1.d = (*(rax_8 + 0x14)).d f- zmm4_1
    zmm9[0] = zmm9[0] * zmm9[0]
    zmm9[0] = zmm9[0] * 0.5f
    int64_t zmm3_1
    zmm3_1.d = zmm8.q.d f* 0.5f
    int64_t zmm1_1 = zmm7_1
    zmm8.d = zmm8.d f* zmm8.d
    zmm7_1.d = zmm7_1.d f* zmm7_1.d
    zmm6_1[0] = zmm6_1[0] + zmm9[0]
    float temp0_29[0x4] = _mm_unpacklo_ps(zmm9, zmm3_1)
    zmm9[0] = zmm9[0] f+ zmm8.d
    zmm3_1.d = zmm3_1.d f+ zmm5[0]
    zmm1_1.d = zmm1_1.d f* 0.5f
    zmm9[0] = zmm9[0] f+ zmm7_1.d
    int64_t var_128_1 = (_mm_unpacklo_ps(zmm6_1, zmm3_1)).q
    int32_t var_e8_1 = zmm1_1.d
    zmm1_1.d = zmm1_1.d f+ zmm4_1
    zmm9[0] = zmm9[0] * 0.25f
    int32_t var_114_1 = var_e8_1
    int32_t var_dc_1 = zmm1_1.d
    float temp0_31[0x4] = _mm_sqrt_ss(0, zmm9[0])
    int32_t var_120_1 = var_dc_1
    int32_t rax_11 = (r15_1 + 1).d
    *(arg1 + 0x798) = rax_11
    float var_110_1 = temp0_31[0]
    
    if (rax_11 s> *(arg1 + 0x79c))
        sub_1405c50f0(arg1 + 0x790)
    
    int64_t rcx_6 = *(arg1 + 0x790)
    i_1 += 1
    rsi_3 += 0x40
    float (* rdx_5)[0x4] = r15_1 * 0x1c
    *(rdx_5 + rcx_6) = var_128_1.o
    *(rdx_5 + rcx_6 + 0x10) = temp0_29.q
    *(rdx_5 + rcx_6 + 0x18) = var_110_1
while (i_1 s<= *(arg1 + 0x78c))
