// 函数: sub_142204ad0
// 地址: 0x142204ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = sub_1421b7c40(arg2, arg1)
uint64_t result = sub_140d3e110(rax)

if (result.b != 0)
    result = sub_140d3c6e0(rax)
    char rdx_1 = (*(arg1 + 0x54)).b
    uint64_t result_1 = result
    
    if ((rdx_1 & 5) == 4)
        result = sub_142208620(arg1, rax, result, arg4.d)
        rdx_1 = (*(arg1 + 0x54)).b
    
    if ((rdx_1 & 1) != 0 && arg2[0x1e] != 0)
        int64_t rax_1 = *arg2
        float var_68[0x4] = data_14399f720
        int32_t rax_2 = (*(rax_1 + 0x150))(arg2, rdx_1)
        int64_t rbx_1 = sx.q(rax_2)
        char rax_3
        
        if (rax_2 s> 0)
            int64_t rdx_3 = *arg2
            rax_3 = (*(rdx_3 + 0x158))(arg2, rdx_3)
        
        int64_t r12
        
        if (rax_2 s<= 0 || rax_3 == 0)
            r12.b = 0
        else
            r12.b = 1
        
        float (* r13_1)[0x4] = &var_68
        
        if (r12.b != 0)
            r13_1 = nullptr
        
        void* rax_4 = arg2[3]
        uint32_t rax_5
        int128_t* rax_6
        
        if ((*(rax_4 + 0x433) & 8) == 0 && data_143de5480 != 0)
            rax_5.b = GetCurrentThreadId() == data_143de5470
            rax_6 = 0x620
        
        if ((*(rax_4 + 0x433) & 8) != 0 || data_143de5480 == 0 || rax_5.b != 0)
            rax_6 = 0x1c0
        
        int64_t rcx_7 = arg2[0x1e]
        int64_t r8_1 = arg2[0x1f]
        int32_t rdx_4 = *(arg2 + 0x114)
        int32_t rax_7 = arg2[0x23].d
        result = zx.q(rax_7 - 1)
        int64_t var_a0_1 = rcx_7
        int64_t rsi_1 = sx.q(result.d)
        int32_t var_a8_1 = rdx_4
        int64_t var_98_1 = r8_1
        
        if (rax_7 - 1 s>= 0)
            int64_t temp1_1
            
            do
                void* rbx_4 = zx.q(zx.d(*(r8_1 + (rsi_1 << 1))) * rdx_4) + rcx_7
                
                if ((*(rbx_4 + 0x5c) & 0x4000000) == 0)
                    int64_t var_78
                    result = sub_1421f2770(arg1, rax, arg2, result_1, *(sx.q(arg3) + rbx_4), 
                        &var_78, r13_1)
                    
                    if (result.b == 1)
                        *(rbx_4 + 0x10) = var_78
                        int32_t var_70
                        *(rbx_4 + 0x18) = var_70
                        result = _finite(_mm_cvtps_pd(*(rbx_4 + 0x10)).q)
                        
                        if (result.d != 0)
                            result = _finite(_mm_cvtps_pd(*(rbx_4 + 0x14)).q)
                            
                            if (result.d != 0)
                                result = _finite(_mm_cvtps_pd(*(rbx_4 + 0x18)).q)
                        
                        if (r12.b != 0)
                            void var_4c
                            int32_t* rax_11 = sub_140ad3d90(&var_68, &var_4c)
                            *(rbx_4 + rbx_1 + 0x18) = *rax_11
                            *(rbx_4 + rbx_1 + 0x20) = rax_11[2]
                            result = arg2[5]
                            
                            if ((*(*(result + 0x30) + 0x59) & 1) != 0)
                                float zmm6_1[0x4] = _mm_unpacklo_ps(
                                    _mm_unpacklo_ps(*(rbx_4 + rbx_1 + 0x18), 
                                        (*(rbx_4 + rbx_1 + 0x20)).q), 
                                    _mm_unpacklo_ps(*(rbx_4 + rbx_1 + 0x1c), 0)[0].q)
                                float zmm5_1[0x4] =
                                    __mulps_xmmps_memps(*(rax_6 + rax_4), data_143f50590)
                                uint128_t zmm0_2 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xc9)
                                float zmm2_1[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xd2)
                                float zmm1_1[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                                zmm0_2 = _mm_mul_ps(zmm0_2, zmm1_1)
                                float zmm4_1[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                                zmm2_1 = _mm_mul_ps(zmm2_1, zmm4_1)
                                zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                                zmm2_1 = _mm_sub_ps(zmm2_1, zmm0_2)
                                zmm2_1 = _mm_add_ps(zmm2_1, zmm2_1)
                                zmm5_1 = _mm_mul_ps(zmm5_1, zmm2_1)
                                zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9), zmm1_1)
                                float zmm3[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xd2)
                                zmm5_1 = _mm_add_ps(zmm5_1, zmm6_1)
                                zmm3 =
                                    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(zmm3, zmm4_1), zmm0_2), zmm5_1)
                                result = zx.q(_mm_shuffle_ps(zmm3, zmm3, 0xaa).d)
                                *(rbx_4 + rbx_1 + 0x18) =
                                    (_mm_unpacklo_ps(zmm3, _mm_shuffle_ps(zmm3, zmm3, 0x55)[0].q)).q
                                *(rbx_4 + rbx_1 + 0x20) = result.d
                    
                    r8_1 = var_98_1
                    rdx_4 = var_a8_1
                    rcx_7 = var_a0_1
                
                temp1_1 = rsi_1
                rsi_1 -= 1
            while (temp1_1 - 1 s>= 0)

return result
