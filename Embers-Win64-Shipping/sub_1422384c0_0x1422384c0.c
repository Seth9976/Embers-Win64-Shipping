// 函数: sub_1422384c0
// 地址: 0x1422384c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg3 + 0x28) = *arg2
float zmm2 = arg1[0xb]
float zmm0[0x2] = arg1[0xc]
arg3[3] = arg1[0xd]
arg3[2] = zmm0[0]

if (zmm2 > 0f)
    zmm2 = _mm_max_ss(zmm2, 0x38d1b717)
else
    zmm2 = _mm_min_ss(zmm2, 0xb8d1b717)

bool cond:1 = zmm0[0] > 0f
arg3[1] = zmm2

if (cond:1)
    zmm0 = _mm_max_ss(zmm0[0], 0x38d1b717)
else
    zmm0 = _mm_min_ss(zmm0[0], 0xb8d1b717)

arg3[2] = zmm0[0]
zmm0 = arg3[3]

if (zmm0[0] > 0f)
    zmm0 = _mm_max_ss(zmm0[0], 0x38d1b717)
else
    zmm0 = _mm_min_ss(zmm0[0], 0xb8d1b717)

arg3[3] = zmm0[0]

if (arg1[0x11].b != 0)
    arg3[8].b |= 2

if (*arg3 == 5 && (_fpclass(_mm_cvtps_pd(arg3[1])).d & 0x207) == 0
        && (_fpclass(_mm_cvtps_pd(arg3[2])).d & 0x207) == 0
        && (_fpclass(_mm_cvtps_pd(arg3[3])).d & 0x207) == 0 && sub_142227e30(&arg3[4]).b != 0)
    uint32_t zmm2_1[0x4] = arg3[1]
    uint32_t temp0_9[0x4] = _mm_and_ps(arg3[3], 0x7fffffff)
    uint32_t zmm3_1[0x4] = arg3[2]
    uint32_t temp0_10[0x4] = _mm_and_ps(zmm2_1, 0x7fffffff)
    uint32_t temp0_11[0x4] = _mm_and_ps(zmm3_1, 0x7fffffff)
    
    if (not(_mm_max_ss(_mm_max_ss(temp0_9[0], temp0_11[0])[0], temp0_10[0])[0] f> 1000000f) && not(
            _mm_min_ss(_mm_min_ss(temp0_9[0], temp0_11[0])[0], temp0_10[0])[0] f< 9.99999997e-07f)
            && *(arg3 + 0x28) != 0)
        uint32_t (* rax_1)[0x4] = *(arg1 + 0x10)
        zmm2_1 = *rax_1
        zmm3_1 = rax_1[1]
        *arg4 = zmm2_1[0]
        rax_1.b = 1
        arg4[1] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)[0]
        arg4[2] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)[0]
        uint32_t zmm0_1[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
        uint32_t zmm1_1[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
        arg4[3] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)[0]
        arg4[5] = zmm0_1[0]
        arg4[6] = zmm1_1[0]
        arg4[4] = zmm3_1[0]
        zmm3_1[0] = zmm3_1[0] f* *arg1
        arg4[4] = zmm3_1[0]
        zmm0_1 = arg1[1]
        zmm0_1[0] = zmm0_1[0] f* arg4[5]
        arg4[5] = zmm0_1[0]
        zmm1_1 = arg1[2]
        zmm1_1[0] = zmm1_1[0] f* arg4[6]
        arg4[6] = zmm1_1[0]
        return rax_1

int64_t rax
rax.b = 0
return rax
