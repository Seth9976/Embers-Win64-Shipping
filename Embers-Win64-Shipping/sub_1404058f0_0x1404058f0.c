// 函数: sub_1404058f0
// 地址: 0x1404058f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg5)
float result_1[0x4] = *(arg4 + (r10 << 2))
float zmm8[0x4] = *(arg4 + ((sx.q(*(arg1 + 8)) + r10) << 2))
result_1[0] = result_1[0] * result_1[0]
double zmm0 = zmm8[0].q
result_1[0] = result_1[0] + 1e-15f
zmm0.d = zmm0.d f* zmm8[0]
result_1[0] = result_1[0] f+ zmm0.d
float result[0x4] = sqrt(_mm_cvtps_pd(result_1[0].q))
int64_t r8 = sx.q(arg6)
float zmm1[0x4] = zx.o(0)
int32_t i = 0
zmm1[0] = fconvert.s(result[0].q)
zmm1[0] = zmm1[0] + 1e-15f
result_1[0] = result_1[0] / zmm1[0]
zmm8[0] = zmm8[0] / zmm1[0]

if (r8.d s> 0 && r8.d u>= 8)
    float zmm2[0x4] = result_1[0]
    float zmm3[0x4] = zmm8[0]
    int64_t rcx = sx.q((r8 - 1).d)
    zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0)
    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
    
    if (arg2 u> arg3 + (rcx << 2) || arg2 + (rcx << 2) u< arg3)
        int32_t rax_5 = r8.d & 0x80000007
        
        if (rax_5 s< 0)
            rax_5 = ((rax_5 - 1) | 0xfffffff8) + 1
        
        do
            int64_t i_3 = sx.q(i)
            *(arg2 + (i_3 << 2)) = _mm_add_ps(_mm_mul_ps(*(arg3 + (i_3 << 2)), zmm3), 
                _mm_mul_ps(*(arg2 + (i_3 << 2)), zmm2))
            int32_t rax_8 = i + 4
            i += 8
            int64_t rcx_1 = sx.q(rax_8)
            result = *(arg2 + (rcx_1 << 2))
            zmm1 = _mm_mul_ps(*(arg3 + (rcx_1 << 2)), zmm3)
            result = _mm_mul_ps(result, zmm2)
            *(arg2 + (rcx_1 << 2)) = _mm_add_ps(zmm1, result)
        while (i s< r8.d - rax_5)

int64_t i_6 = sx.q(i)

if (i_6 s< r8)
    if (r8 - i_6 s>= 4)
        int64_t r8_2 = arg3 - arg2
        void* rax_12 = arg2 + 4 + (i_6 << 2)
        int64_t i_5 = ((r8 - i_6 - 4) u>> 2) + 1
        i_6 += i_5 << 2
        int64_t i_1
        
        do
            rax_12 += 0x10
            zmm8[0] = zmm8[0] f* *(rax_12 + r8_2 - 0x14)
            result_1[0] = result_1[0] f* *(rax_12 - 0x14)
            zmm8[0] = zmm8[0] + result_1[0]
            *(rax_12 - 0x14) = zmm8[0]
            zmm8[0] = zmm8[0] f* *(r8_2 + rax_12 - 0x10)
            result_1[0] = result_1[0] f* *(rax_12 - 0x10)
            zmm8[0] = zmm8[0] + result_1[0]
            *(rax_12 - 0x10) = zmm8[0]
            result_1[0] = result_1[0] f* *(rax_12 - 0xc)
            zmm8[0] = zmm8[0] f* *(r8_2 + rax_12 - 0xc)
            zmm8[0] = zmm8[0] + result_1[0]
            result = result_1
            *(rax_12 - 0xc) = zmm8[0]
            result[0] = result[0] f* *(rax_12 - 8)
            zmm8[0] = zmm8[0] f* *(r8_2 + rax_12 - 8)
            zmm8[0] = zmm8[0] + result[0]
            *(rax_12 - 8) = zmm8[0]
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
    
    if (i_6 s< r8)
        void* rax_13 = arg2 + (i_6 << 2)
        int64_t i_4 = r8 - i_6
        int64_t i_2
        
        do
            result = result_1
            rax_13 += 4
            zmm8[0] = zmm8[0] f* *(arg3 - arg2 + rax_13 - 4)
            result[0] = result[0] f* *(rax_13 - 4)
            zmm8[0] = zmm8[0] + result[0]
            *(rax_13 - 4) = zmm8[0]
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)

return result
