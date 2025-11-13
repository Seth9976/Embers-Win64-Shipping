// 函数: sub_140408050
// 地址: 0x140408050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float arg_18 = arg3[0]
int128_t zmm6
int128_t var_18 = zmm6
int128_t zmm8
int128_t var_38 = zmm8
float var_58 = 0f
float var_54 = 0f
int64_t rbp = sx.q(arg4)
sub_140400960(arg2, arg1, arg2, rbp.d, &var_58, &var_54)
float zmm4 = var_58
arg3[0] = arg3[0] * arg3[0]
arg3[0] = arg3[0] + var_54
zmm4 = zmm4 * arg3[0] * 2f
float result[0x4] = arg3
arg3[0] = arg3[0] + zmm4
result[0] = result[0] - zmm4

if (0.000600000028f > arg3[0] || 0.000600000028f > result[0])
    int64_t r9_1 = 0
    
    if (rbp s>= 4)
        void* rcx_5 = arg2 + 4
        void* rdx_7 = arg1 - arg2
        int64_t i_10 = ((rbp - 4) u>> 2) + 1
        r9_1 = i_10 << 2
        int64_t i
        
        do
            int32_t rax_13 = *(rcx_5 + rdx_7 - 4)
            rcx_5 += 0x10
            *(rcx_5 - 0x14) = rax_13
            *(rcx_5 - 0x10) = *(rcx_5 + rdx_7 - 0x10)
            *(rcx_5 - 0xc) = *(rcx_5 + rdx_7 - 0xc)
            *(rcx_5 - 8) = *(rcx_5 + rdx_7 - 8)
            i = i_10
            i_10 -= 1
        while (i != 1)
    
    if (r9_1 s< rbp)
        int32_t* rcx_6 = arg2 + (r9_1 << 2)
        int64_t i_8 = rbp - r9_1
        int64_t i_1
        
        do
            int32_t rax_17 = *(rcx_6 + arg1 - arg2)
            rcx_6 = &rcx_6[1]
            rcx_6[-1] = rax_17
            i_1 = i_8
            i_8 -= 1
        while (i_1 != 1)
else
    result[0].q = fconvert.d(result[0])
    float zmm1_1[0x4] = zx.o(0)
    zmm1_1[0] = fconvert.s(sqrt(result[0].q))
    double _X = fconvert.d(arg3[0])
    zmm8.d = 1f / zmm1_1[0]
    var_54 = zmm8.d
    result = sqrt(_X)
    zmm1_1 = zx.o(0)
    int32_t i_2 = 0
    zmm1_1[0] = fconvert.s(result[0].q)
    zmm6.d = 1f / zmm1_1[0]
    var_58 = zmm6.d
    float zmm2[0x4]
    
    if (rbp.d s> 0 && rbp.d u>= 8)
        float zmm3_1[0x4] = arg_18
        float zmm4_1[0x4] = var_54
        float zmm5_1[0x4] = var_58
        int64_t rcx_1 = sx.q((rbp - 1).d)
        zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0)
        zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0)
        zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0)
        
        if (arg2 u> arg1 + (rcx_1 << 2) || arg2 + (rcx_1 << 2) u< arg1)
            int32_t rax_4 = rbp.d & 0x80000007
            
            if (rax_4 s< 0)
                rax_4 = ((rax_4 - 1) | 0xfffffff8) + 1
            
            do
                int64_t i_5 = sx.q(i_2)
                zmm1_1 = *(arg2 + (i_5 << 2))
                zmm2 = _mm_mul_ps(*(arg1 + (i_5 << 2)), zmm3_1)
                result = _mm_sub_ps(zmm2, zmm1_1)
                zmm1_1 = _mm_add_ps(zmm1_1, zmm2)
                result = _mm_mul_ps(result, zmm4_1)
                zmm1_1 = _mm_mul_ps(zmm1_1, zmm5_1)
                *(arg1 + (i_5 << 2)) = result
                *(arg2 + (i_5 << 2)) = zmm1_1
                int32_t rax_7 = i_2 + 4
                i_2 += 8
                int64_t rcx_2 = sx.q(rax_7)
                zmm1_1 = *(arg2 + (rcx_2 << 2))
                zmm2 = _mm_mul_ps(*(arg1 + (rcx_2 << 2)), zmm3_1)
                result = _mm_sub_ps(zmm2, zmm1_1)
                zmm1_1 = _mm_add_ps(zmm1_1, zmm2)
                result = _mm_mul_ps(result, zmm4_1)
                zmm1_1 = _mm_mul_ps(zmm1_1, zmm5_1)
                *(arg1 + (rcx_2 << 2)) = result
                *(arg2 + (rcx_2 << 2)) = zmm1_1
            while (i_2 s< rbp.d - rax_4)
    
    int64_t i_9 = sx.q(i_2)
    
    if (i_9 s< rbp)
        if (rbp - i_9 s>= 4)
            void* rcx_4 = arg1 - arg2
            void* rax_11 = arg2 + 4 + (i_9 << 2)
            int64_t i_6 = ((rbp - i_9 - 4) u>> 2) + 1
            i_9 += i_6 << 2
            int64_t i_3
            
            do
                zmm1_1 = *(rax_11 - 4)
                rax_11 += 0x10
                arg3[0] = arg3[0] f* *(rcx_4 + rax_11 - 0x14)
                arg3[0] = arg3[0] - zmm1_1[0]
                zmm1_1[0] = zmm1_1[0] + arg3[0]
                arg3[0] = arg3[0] f* zmm8.d
                zmm1_1[0] = zmm1_1[0] f* zmm6.d
                *(rcx_4 + rax_11 - 0x14) = arg3[0]
                *(rax_11 - 0x14) = zmm1_1[0]
                zmm1_1 = *(rax_11 - 0x10)
                arg3[0] = arg3[0] f* *(rcx_4 + rax_11 - 0x10)
                arg3[0] = arg3[0] - zmm1_1[0]
                zmm1_1[0] = zmm1_1[0] + arg3[0]
                arg3[0] = arg3[0] f* zmm8.d
                zmm1_1[0] = zmm1_1[0] f* zmm6.d
                *(rcx_4 + rax_11 - 0x10) = arg3[0]
                *(rax_11 - 0x10) = zmm1_1[0]
                zmm1_1 = *(rax_11 - 0xc)
                arg3[0] = arg3[0] f* *(rcx_4 + rax_11 - 0xc)
                arg3[0] = arg3[0] - zmm1_1[0]
                zmm1_1[0] = zmm1_1[0] + arg3[0]
                arg3[0] = arg3[0] f* zmm8.d
                zmm1_1[0] = zmm1_1[0] f* zmm6.d
                *(rcx_4 + rax_11 - 0xc) = arg3[0]
                *(rax_11 - 0xc) = zmm1_1[0]
                zmm1_1 = *(rax_11 - 8)
                arg3[0] = arg3[0] f* *(rcx_4 + rax_11 - 8)
                result = arg3
                result[0] = result[0] - zmm1_1[0]
                zmm1_1[0] = zmm1_1[0] + arg3[0]
                result[0] = result[0] f* zmm8.d
                zmm1_1[0] = zmm1_1[0] f* zmm6.d
                *(rcx_4 + rax_11 - 8) = result[0]
                *(rax_11 - 8) = zmm1_1[0]
                i_3 = i_6
                i_6 -= 1
            while (i_3 != 1)
        
        if (i_9 s< rbp)
            void* rdi_1 = arg1 - arg2
            float (* rax_12)[0x4] = arg2 + (i_9 << 2)
            int64_t i_7 = rbp - i_9
            int64_t i_4
            
            do
                zmm2 = *rax_12
                rax_12 = &(*rax_12)[1]
                arg3[0] = arg3[0] f* *(rax_12 + rdi_1 - 4)
                result = arg3
                result[0] = result[0] - zmm2[0]
                zmm2[0] = zmm2[0] + arg3[0]
                result[0] = result[0] f* zmm8.d
                zmm2[0] = zmm2[0] f* zmm6.d
                *(rax_12 + rdi_1 - 4) = result[0]
                (*rax_12)[-1] = zmm2[0]
                i_4 = i_7
                i_7 -= 1
            while (i_4 != 1)

return result
