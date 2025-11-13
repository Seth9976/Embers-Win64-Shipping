// 函数: sub_141fe1d10
// 地址: 0x141fe1d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(*(arg1 + 0x18))

if (r9.d == 0)
    *arg2 = 0
    *arg3 = 0
    return 

float zmm4[0x4] = 0x7f7fc99e
int64_t i = 0
float zmm3[0x4] = 0xff7fc99e
int32_t r10 = 0
int128_t* i_3
float zmm1[0x4]
float zmm2[0x4]

if (r9.d s> 0 && r9.d u>= 8)
    int64_t rdx = *(arg1 + 0x10)
    float zmm5[0x4] = data_142d3f750
    zmm4 = data_143296ae0
    float zmm6[0x4] = zmm5
    float zmm7[0x4] = zmm4
    int32_t rcx_1 = r9.d & 0x80000007
    
    if (rcx_1 s< 0)
        rcx_1 = ((rcx_1 - 1) | 0xfffffff8) + 1
    
    i_3 = 0x58
    
    do
        zmm1 = *(i_3 + rdx + 0x2c)
        r10 += 8
        float zmm0[0x4] = *(i_3 + rdx)
        i += 8
        zmm2 = *(i_3 + rdx - 0x2c)
        zmm3 = *(i_3 + rdx - 0x58)
        i_3 = &i_3[0x16]
        float temp0_1[0x4] = _mm_unpacklo_ps(zmm3, zmm0[0].q)
        zmm0 = *(i_3 + rdx - 0xb0)
        float temp0_2[0x4] = _mm_unpacklo_ps(zmm2, zmm1[0].q)
        zmm1 = *(i_3 + rdx - 0x84)
        float temp0_3[0x4] = _mm_unpacklo_ps(temp0_1, temp0_2[0].q)
        float temp0_4[0x4] = _mm_unpacklo_ps(*(i_3 + rdx - 0xdc), zmm1[0].q)
        zmm5 = _mm_min_ps(zmm5, temp0_3)
        zmm4 = _mm_max_ps(zmm4, temp0_3)
        float temp0_8[0x4] =
            _mm_unpacklo_ps(_mm_unpacklo_ps(*(i_3 + rdx - 0x108), zmm0[0].q), temp0_4[0].q)
        zmm6 = _mm_min_ps(zmm6, temp0_8)
        zmm7 = _mm_max_ps(zmm7, temp0_8)
    while (i s< sx.q(r9.d - rcx_1))
    
    float temp0_11[0x4] = _mm_max_ps(zmm4, zmm7)
    float temp0_12[0x4] = _mm_min_ps(zmm5, zmm6)
    temp0_11[0].q = temp0_11 u>> 0x40
    float temp0_13[0x4] = _mm_max_ps(temp0_11, temp0_11)
    temp0_12[0].q = temp0_12 u>> 0x40
    float temp0_14[0x4] = _mm_min_ps(temp0_12, temp0_12)
    float temp0_15[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xf5)
    zmm3 = _mm_max_ss(temp0_13[0], temp0_15[0])
    float temp0_17[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xf5)
    zmm4 = _mm_min_ss(temp0_14[0], temp0_17[0])

int64_t r8 = sx.q(r10)

if (r8 s< r9)
    if (r9 - r8 s>= 4)
        int64_t r9_1 = *(arg1 + 0x10)
        float (* rdx_1)[0x4] = r8 * 0x2c
        i_3 = ((r9 - r8 - 4) u>> 2) + 1
        r8 += i_3 << 2
        int128_t* i_1
        
        do
            zmm2 = *(rdx_1 + r9_1)
            rdx_1 = &rdx_1[0xb]
            float temp0_19[0x4] = _mm_max_ss(zmm2[0], zmm3[0])
            zmm3 = *(r9_1 + rdx_1 - 0x58)
            float temp0_20[0x4] = _mm_min_ss(zmm2[0], zmm4[0])
            zmm4 = *(rdx_1 + r9_1 - 0x84)
            float temp0_21[0x4] = _mm_max_ss(zmm4[0], temp0_19[0])
            float temp0_22[0x4] = _mm_min_ss(zmm4[0], temp0_20[0])
            float temp0_23[0x4] = _mm_max_ss(zmm3[0], temp0_21[0])
            float temp0_24[0x4] = _mm_min_ss(zmm3[0], temp0_22[0])
            zmm1 = *(rdx_1 + r9_1 - 0x2c)
            zmm3 = _mm_max_ss(zmm1[0], temp0_23[0])
            zmm4 = _mm_min_ss(zmm1[0], temp0_24[0])
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    if (r8 s< r9)
        int64_t rdx_2 = *(arg1 + 0x10)
        i_3 = r8 * 0x2c
        int64_t i_4 = r9 - r8
        int64_t i_2
        
        do
            zmm1 = *(i_3 + rdx_2)
            i_3 += 0x2c
            zmm3 = _mm_max_ss(zmm1[0], zmm3[0])
            zmm4 = _mm_min_ss(zmm1[0], zmm4[0])
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)

*arg2 = zmm4[0]
*arg3 = zmm3[0]
