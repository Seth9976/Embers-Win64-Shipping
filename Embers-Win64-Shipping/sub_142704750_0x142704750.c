// 函数: sub_142704750
// 地址: 0x142704750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float (* rdi)[0x4] = arg4
float zmm4[0x4] = *arg4
float zmm3[0x4] = data_14399f720
uint32_t zmm5[0x4] = data_143f72400
float temp0[0x4] = _mm_sub_ps(zmm4, zmm3)
float var_98 = 9.99999994e-09f
float zmm2[0x4] = var_98
float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
uint32_t temp0_4 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_1, _mm_and_ps(temp0, zmm5), 1))
uint32_t temp0_8

if (temp0_4 != 0)
    temp0_8 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_1, _mm_and_ps(_mm_add_ps(zmm3, zmm4), zmm5), 1))

void** result
float zmm1[0x4]
float zmm6[0x4]
float zmm7[0x4]
float zmm8[0x4]

if (temp0_4 == 0 || temp0_8 == 0)
    zmm5 = *arg2
    int32_t r14_1 = 0
    zmm7 = *(arg1 + 0x24)
    zmm1 = zmm5
    zmm4 = 0x3f800000
    zmm4[0] = 1f f/ *(arg1 + 4)
    int32_t r9_1 = *(arg1 + 0x40) - 1
    zmm3 = arg2[1]
    zmm2 = *arg3
    zmm6 = *(arg3 + 4)
    zmm1[0] = zmm1[0] - zmm2[0]
    zmm8 = *(arg1 + 0x28)
    zmm1[0] = zmm1[0] - zmm7[0]
    zmm1[0] = zmm1[0] * zmm4[0]
    int32_t i_2 = int.d(zmm1[0])
    zmm3[0] = zmm3[0] - zmm6[0]
    zmm3[0] = zmm3[0] - zmm8[0]
    zmm3[0] = zmm3[0] * zmm4[0]
    int32_t rdx_5 = int.d(zmm3[0])
    int32_t r10_1
    
    if (rdx_5 s>= 0)
        r10_1 = r9_1
        
        if (rdx_5 s< r9_1)
            r10_1 = rdx_5
    else
        r10_1 = 0
    
    result = zx.q(*(arg1 + 0x3c) - 1)
    int32_t i
    
    if (i_2 s>= 0)
        i = result.d
        
        if (i_2 s< result.d)
            i = i_2
    else
        i = 0
    
    zmm3[0] = zmm3[0] + zmm6[0]
    zmm2[0] = zmm2[0] f+ zmm5[0]
    zmm3[0] = zmm3[0] - zmm8[0]
    zmm2[0] = zmm2[0] - zmm7[0]
    zmm3[0] = zmm3[0] * zmm4[0]
    zmm2[0] = zmm2[0] * zmm4[0]
    int32_t rdx_6 = int.d(zmm3[0])
    int32_t result_2 = int.d(zmm2[0])
    
    if (rdx_6 s< 0)
        r9_1 = 0
    else if (rdx_6 s< r9_1)
        r9_1 = rdx_6
    
    if (result_2 s>= 0)
        if (result_2 s< result.d)
            result = zx.q(result_2)
        
        r14_1 = result.d
    
    for (; i s<= r14_1; i += 1)
        int32_t rdx_7 = r10_1
        
        if (r10_1 s<= r9_1)
            do
                int32_t rax_11 = *(arg1 + 0x40) * i + rdx_7
                rdx_7 += 1
                result = *(arg1 + 0x48)
                *(sx.q(rax_11) + result) = 1
            while (rdx_7 s<= r9_1)
else
    zmm8 = *(arg3 + 4)
    zmm7 = *arg4
    zmm6 = *arg3
    zmm2 = *(arg4 + 0xc)
    float zmm9[0x4] = *(arg4 + 8)
    zmm8[0] = zmm8[0] * zmm9[0]
    void** result_1 = nullptr
    uint32_t zmm10[0x4] = *(arg4 + 4)
    zmm8[0] = zmm8[0] * zmm7[0]
    int32_t var_88_1 = 1
    zmm10[0] = zmm10[0] f* *(arg3 + 8)
    zmm9[0] = zmm9[0] * zmm6[0]
    zmm10[0] = zmm10[0] f- zmm8[0]
    zmm7[0] = zmm7[0] f* *(arg3 + 8)
    zmm10[0] = zmm10[0] f+ zmm10[0]
    zmm9[0] = zmm9[0] - zmm7[0]
    float zmm0[0x4] = zmm10
    zmm0[0] = zmm0[0] * zmm6[0]
    zmm2[0] = zmm2[0] f* zmm10[0]
    zmm8[0] = zmm8[0] - zmm0[0]
    zmm9[0] = zmm9[0] f* zmm10[0]
    zmm9[0] = zmm9[0] + zmm9[0]
    zmm2[0] = zmm2[0] + zmm6[0]
    zmm8[0] = zmm8[0] + zmm8[0]
    zmm9[0] = zmm9[0] * zmm9[0]
    zmm2[0] = zmm2[0] * zmm9[0]
    zmm10[0] = zmm10[0] f* zmm8[0]
    zmm7[0] = zmm7[0] * zmm8[0]
    zmm2[0] = zmm2[0] + zmm8[0]
    zmm10[0] = zmm10[0] f- zmm9[0]
    zmm9[0] = zmm9[0] - zmm7[0]
    zmm10[0] = zmm10[0] f+ zmm2[0]
    zmm9[0] = zmm9[0] + zmm2[0]
    zmm10[0] = zmm10[0] f+ *arg2
    zmm9[0] = zmm9[0] f+ arg2[1]
    sub_1405a4d70(&result_1)
    uint32_t* result_3 = result_1
    *result_3 = zmm10[0]
    result_3[1] = zmm9[0]
    zmm10 = (*rdi)[1]
    zmm9 = (*rdi)[2]
    zmm8 = *(arg3 + 4)
    zmm6 = *arg3 ^ 0x80000000
    float zmm5_1 = zmm10[0] f* *(arg3 + 8)
    zmm7 = *rdi
    zmm2 = (*rdi)[3]
    zmm8[0] = zmm8[0] * zmm9[0]
    zmm6[0] = zmm6[0] * zmm9[0]
    zmm5_1 = zmm5_1 - zmm8[0]
    zmm8[0] = zmm8[0] * zmm7[0]
    zmm7[0] = zmm7[0] f* *(arg3 + 8)
    zmm5_1 = zmm5_1 + zmm5_1
    zmm6[0] = zmm6[0] - zmm7[0]
    zmm6[0] = zmm6[0] f* zmm10[0]
    zmm8[0] = zmm8[0] - zmm6[0]
    zmm6[0] = zmm6[0] + zmm6[0]
    zmm8[0] = zmm8[0] + zmm8[0]
    zmm10[0] = zmm10[0] f* zmm8[0]
    int64_t r13_1 = sx.q(var_88_1)
    zmm9[0] = zmm9[0] * zmm5_1
    zmm2[0] = zmm2[0] * zmm5_1
    int32_t rax_2 = (r13_1 + 1).d
    zmm9[0] = zmm9[0] * zmm6[0]
    zmm2[0] = zmm2[0] + zmm6[0]
    zmm7[0] = zmm7[0] * zmm8[0]
    zmm10[0] = zmm10[0] f- zmm9[0]
    zmm2[0] = zmm2[0] * zmm6[0]
    zmm9[0] = zmm9[0] - zmm7[0]
    zmm2[0] = zmm2[0] + zmm8[0]
    zmm10[0] = zmm10[0] f+ zmm2[0]
    zmm9[0] = zmm9[0] + zmm2[0]
    zmm10[0] = zmm10[0] f+ *arg2
    zmm9[0] = zmm9[0] f+ arg2[1]
    
    if (rax_2 s> 0)
        sub_1405a4d70(&result_1)
    
    void** result_4 = result_1
    result_4[r13_1].d = zmm10[0]
    *(&result_4[r13_1] + 4) = zmm9[0]
    zmm9 = (*rdi)[2]
    zmm10 = (*rdi)[1]
    zmm8 = *(arg3 + 4) ^ 0x80000000
    zmm7 = *rdi
    zmm6 = *arg3 ^ 0x80000000
    zmm5_1 = zmm10[0] f* *(arg3 + 8)
    int64_t r13_2 = sx.q(rax_2)
    zmm2 = (*rdi)[3]
    zmm8[0] = zmm8[0] * zmm9[0]
    zmm6[0] = zmm6[0] * zmm9[0]
    int32_t rax_3 = (r13_2 + 1).d
    zmm5_1 = zmm5_1 - zmm8[0]
    zmm8[0] = zmm8[0] * zmm7[0]
    zmm7[0] = zmm7[0] f* *(arg3 + 8)
    zmm5_1 = zmm5_1 + zmm5_1
    zmm6[0] = zmm6[0] - zmm7[0]
    zmm6[0] = zmm6[0] f* zmm10[0]
    zmm2[0] = zmm2[0] * zmm5_1
    zmm8[0] = zmm8[0] - zmm6[0]
    zmm6[0] = zmm6[0] + zmm6[0]
    zmm9[0] = zmm9[0] * zmm5_1
    zmm2[0] = zmm2[0] + zmm6[0]
    zmm8[0] = zmm8[0] + zmm8[0]
    zmm9[0] = zmm9[0] * zmm6[0]
    zmm2[0] = zmm2[0] * zmm6[0]
    zmm10[0] = zmm10[0] f* zmm8[0]
    zmm2[0] = zmm2[0] + zmm8[0]
    zmm7[0] = zmm7[0] * zmm8[0]
    zmm10[0] = zmm10[0] f- zmm9[0]
    zmm9[0] = zmm9[0] - zmm7[0]
    zmm10[0] = zmm10[0] f+ zmm2[0]
    zmm9[0] = zmm9[0] + zmm2[0]
    zmm10[0] = zmm10[0] f+ *arg2
    zmm9[0] = zmm9[0] f+ arg2[1]
    
    if (rax_3 s> 0)
        sub_1405a4d70(&result_1)
    
    void** result_5 = result_1
    result_5[r13_2].d = zmm10[0]
    *(&result_5[r13_2] + 4) = zmm9[0]
    zmm10 = (*rdi)[2]
    zmm5_1 = zmm10[0]
    zmm3 = (*rdi)[1]
    zmm9 = *(arg3 + 4) ^ 0x80000000
    zmm8 = *rdi
    zmm7 = *arg3
    zmm2 = (*rdi)[3]
    zmm3[0] = zmm3[0] f* *(arg3 + 8)
    int64_t rdi_1 = sx.q(rax_3)
    zmm9[0] = zmm9[0] f* zmm10[0]
    zmm9[0] = zmm9[0] * zmm8[0]
    int32_t rax_4 = (rdi_1 + 1).d
    var_88_1 = rax_4
    zmm3[0] = zmm3[0] - zmm9[0]
    zmm8[0] = zmm8[0] f* *(arg3 + 8)
    zmm5_1 = zmm5_1 * zmm7[0]
    zmm3[0] = zmm3[0] + zmm3[0]
    zmm5_1 = zmm5_1 - zmm8[0]
    zmm3[0] = zmm3[0] * zmm7[0]
    zmm2[0] = zmm2[0] * zmm3[0]
    zmm9[0] = zmm9[0] - zmm3[0]
    float zmm0_1[0x4] = zmm10
    zmm5_1 = zmm5_1 + zmm5_1
    zmm10[0] = zmm10[0] f* zmm3[0]
    zmm2[0] = zmm2[0] + zmm7[0]
    zmm9[0] = zmm9[0] + zmm9[0]
    zmm0_1[0] = zmm0_1[0] * zmm5_1
    zmm2[0] = zmm2[0] * zmm5_1
    zmm9[0] = zmm9[0] * zmm8[0]
    zmm2[0] = zmm2[0] + zmm9[0]
    zmm9[0] = zmm9[0] * zmm3[0]
    zmm10[0] = zmm10[0] f- zmm9[0]
    zmm9[0] = zmm9[0] - zmm0_1[0]
    zmm10[0] = zmm10[0] f+ zmm2[0]
    zmm9[0] = zmm9[0] + zmm2[0]
    zmm10[0] = zmm10[0] f+ arg2[1]
    zmm9[0] = zmm9[0] f+ *arg2
    
    if (rax_4 s> 0)
        sub_1405a4d70(&result_1)
    
    result = result_1
    int32_t i_1 = 0
    result[rdi_1].d = zmm9[0]
    *(&result[rdi_1] + 4) = zmm10[0]
    
    if (*(arg1 + 0x3c) s> 0)
        zmm7 = 0x3f000000
        
        do
            int32_t j = 0
            
            if (*(arg1 + 0x40) s> 0)
                zmm6 = _mm_cvtepi32_ps(zx.o(i_1))
                zmm6[0] = zmm6[0] + zmm7[0]
                
                do
                    zmm1 = *(arg1 + 4)
                    float temp0_10[0x4] = _mm_cvtepi32_ps(zx.o(j))
                    temp0_10[0] = temp0_10[0] + zmm7[0]
                    zmm1[0] = zmm1[0] * zmm6[0]
                    zmm1[0] = zmm1[0] f+ *(arg1 + 0x24)
                    temp0_10[0] = temp0_10[0] * zmm1[0]
                    temp0_10[0] = temp0_10[0] f+ *(arg1 + 0x28)
                    var_98 = zmm1[0]
                    float var_94_1 = temp0_10[0]
                    result, zmm6, zmm7 = sub_142060c70(&var_98, &result_1)
                    
                    if (result.b != 0)
                        result = *(arg1 + 0x48)
                        *(sx.q(*(arg1 + 0x40) * i_1 + j) + result) = 1
                    
                    j += 1
                while (j s< *(arg1 + 0x40))
            
            i_1 += 1
        while (i_1 s< *(arg1 + 0x3c))
    
    void** result_6 = result_1
    
    if (result_6 != 0)
        return sub_140a74f90(result_6)
return result
