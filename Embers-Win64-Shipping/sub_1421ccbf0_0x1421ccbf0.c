// 函数: sub_1421ccbf0
// 地址: 0x1421ccbf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm9[0x4]
float var_68[0x4] = zmm9
float zmm10[0x4]
float var_78[0x4] = zmm10
int32_t result
float var_b8
float var_b4
float var_b0
float zmm2[0x4]

if ((*(arg1 + 0x30) & 1) == 0 || (*(*(*(arg2 + 0x28) + 0x30) + 0x59) & 1) == 0)
    int32_t rax_4 = *(arg2 + 0x118)
    int64_t r15_1 = *(arg2 + 0xf0)
    result = rax_4 - 1
    int32_t r12_1 = *(arg2 + 0x114)
    int64_t r13_1 = *(arg2 + 0xf8)
    int64_t result_2 = sx.q(result)
    
    if (rax_4 - 1 s>= 0)
        int64_t result_3
        
        do
            void* rbx_6 = zx.q(zx.d(*(r13_1 + (result_2 << 1))) * r12_1) + r15_1
            
            if ((*(rbx_6 + 0x5c) & 0x4000000) == 0)
                int64_t var_c0_2 = 0
                float zmm8_2
                result, zmm8_2 = sub_141fe56b0(arg1 + 0x38, &var_b8, *(rbx_6 + 0xc), arg3, 
                    (*(arg2 + 0x18)).d, nullptr)
                zmm2 = var_b8
                float zmm3_2[0x4] = var_b4
                zmm2[0] = zmm2[0] * zmm8_2
                zmm3_2[0] = zmm3_2[0] * zmm8_2
                float zmm4_2 = var_b0 * zmm8_2
                float zmm0_2 = zmm2[0] f+ *(rbx_6 + 0x30)
                arg3 = zmm3_2
                arg3[0] = arg3[0] f+ *(rbx_6 + 0x34)
                *(rbx_6 + 0x30) = zmm0_2
                zmm0_2 = zmm4_2 f+ *(rbx_6 + 0x38)
                *(rbx_6 + 0x34) = arg3[0]
                *(rbx_6 + 0x38) = zmm0_2
                zmm2[0] = zmm2[0] f+ *(rbx_6 + 0x20)
                zmm3_2[0] = zmm3_2[0] f+ *(rbx_6 + 0x24)
                zmm4_2 = zmm4_2 f+ *(rbx_6 + 0x28)
                *(rbx_6 + 0x20) = zmm2[0]
                *(rbx_6 + 0x24) = zmm3_2[0]
                *(rbx_6 + 0x28) = zmm4_2
            
            result_3 = result_2
            result_2 -= 1
        while (result_3 - 1 s>= 0)
else
    void* rax_2 = *(arg2 + 0x18)
    int64_t r15 = *(arg2 + 0xf0)
    int32_t r12 = *(arg2 + 0x114)
    int64_t r13 = *(arg2 + 0xf8)
    *(rax_2 + 0x1c0)
    *(rax_2 + 0x1e0)
    int32_t rax_3 = *(arg2 + 0x118)
    result = rax_3 - 1
    int64_t result_1 = sx.q(result)
    
    if (rax_3 - 1 s>= 0)
        float zmm6[0x4]
        float var_38_1[0x4] = zmm6
        float zmm7[0x4]
        float var_48_1[0x4] = zmm7
        int64_t result_4
        
        do
            void* rbx_3 = zx.q(zx.d(*(r13 + (result_1 << 1))) * r12) + r15
            
            if ((*(rbx_3 + 0x5c) & 0x4000000) == 0)
                int64_t var_c0_1 = 0
                int32_t zmm8_1
                result, zmm8_1, zmm9, zmm10 = sub_141fe56b0(arg1 + 0x38, &var_b8, *(rbx_3 + 0xc), 
                    arg3, (*(arg2 + 0x18)).d, nullptr)
                zmm6 = __mulps_xmmps_memps(zmm10, data_143f4eb20)
                zmm7 = var_b8
                zmm2 = _mm_unpacklo_ps(var_b4, 0)
                zmm7 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm7, var_b0[0].q), zmm2[0].q)
                float zmm3_1[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
                arg3 = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
                float zmm0_1[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xc9), arg3)
                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xd2), zmm3_1)
                float zmm4_1[0x4] = _mm_rcp_ps(zmm9)
                zmm2 = _mm_sub_ps(zmm2, zmm0_1)
                zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                zmm0_1 = _mm_mul_ps(zmm4_1, zmm4_1)
                zmm4_1 = _mm_add_ps(zmm4_1, zmm4_1)
                zmm2 = _mm_add_ps(zmm2, zmm2)
                zmm0_1 = _mm_mul_ps(zmm0_1, zmm9)
                zmm6 = _mm_mul_ps(zmm6, zmm2)
                zmm4_1 = _mm_sub_ps(zmm4_1, zmm0_1)
                float zmm5_1[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xd2), zmm3_1)
                zmm6 = _mm_add_ps(zmm6, zmm7)
                zmm0_1 = _mm_mul_ps(zmm4_1, zmm4_1)
                zmm4_1 = _mm_sub_ps(_mm_add_ps(zmm4_1, zmm4_1), _mm_mul_ps(zmm0_1, zmm9))
                zmm0_1 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                zmm2 = __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm9, data_143f4dee0), 
                    data_143f4eb10, 2)
                zmm5_1 = _mm_sub_ps(zmm5_1, _mm_mul_ps(zmm0_1, arg3))
                zmm2 = _mm_and_ps(zmm2, zmm4_1 ^ zx.o(0)) ^ zmm4_1
                zmm5_1 = _mm_mul_ps(_mm_add_ps(zmm5_1, zmm6), zmm2)
                var_b8 = zmm5_1[0]
                arg3 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
                zmm2 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa)
                zmm5_1[0] = zmm5_1[0] f* zmm8_1
                var_b4 = arg3[0]
                arg3[0] = arg3[0] f* zmm8_1
                var_b0 = zmm2[0]
                zmm5_1[0] = zmm5_1[0] f+ *(rbx_3 + 0x30)
                zmm2[0] = zmm2[0] f* zmm8_1
                *(rbx_3 + 0x30) = zmm5_1[0]
                arg3[0] = arg3[0] f+ *(rbx_3 + 0x34)
                *(rbx_3 + 0x34) = arg3[0]
                zmm2[0] = zmm2[0] f+ *(rbx_3 + 0x38)
                *(rbx_3 + 0x38) = zmm2[0]
                zmm5_1[0] = zmm5_1[0] f+ *(rbx_3 + 0x20)
                arg3[0] = arg3[0] f+ *(rbx_3 + 0x24)
                *(rbx_3 + 0x20) = zmm5_1[0]
                zmm2[0] = zmm2[0] f+ *(rbx_3 + 0x28)
                *(rbx_3 + 0x24) = arg3[0]
                *(rbx_3 + 0x28) = zmm2[0]
            
            result_4 = result_1
            result_1 -= 1
        while (result_4 - 1 s>= 0)
return result
