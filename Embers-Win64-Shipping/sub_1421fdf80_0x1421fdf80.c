// 函数: sub_1421fdf80
// 地址: 0x1421fdf80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** result = sub_1421b7c40(arg2, arg1)
int32_t* result_1 = result

if (result != 0)
    void* rax = sub_1421b85d0(arg1, arg2)
    sub_1421f3de0(arg1, arg2, result_1)
    result = sub_140d3e110(result_1)
    
    if (result.b != 0)
        void* rax_1 = sub_140d3c6e0(result_1)
        uint32_t rdx_3 = zx.d(*(arg1 + 0x68))
        int32_t rcx_6
        
        if (rdx_3 == 0)
            rcx_6 = *(arg1 + 0x48)
        else if (rdx_3 == 1)
            rcx_6 = *(arg1 + 0x64)
        else if (rdx_3 != 2)
            rcx_6 = 0
        else if (*(arg1 + 0x30) != 1)
            rcx_6 = sub_141f64920(rax_1)
        else
            void* rcx_5 = *(rax_1 + 0x430)
            
            if (rcx_5 == 0)
                rcx_6 = 0
            else
                rcx_6 = sub_142319650(rcx_5)
        
        result = zx.q(*(arg1 + 0x50))
        int32_t rbp_2
        
        if (result.b == 0 || *(arg1 + 0x68) == 1)
            rbp_2 = result_1[4]
            result = zx.q(rbp_2 + 1)
            
            if (result.d s>= rcx_6)
                result = nullptr
            
            result_1[4] = result.d
            goto label_1421fe0ae
        
        if (result.b == 1)
            int32_t rax_4 = *(rax + 4) * 0xbb38435
            uint128_t zmm2_1 = _mm_cvtepi32_ps(zx.o(rcx_6))
            *(rax + 4) = rax_4 + 0x3619636b
            zmm2_1.d = zmm2_1.d f- 0.5f
            result = zx.q((rax_4 + 0x3619636b) u>> 9) | 0x3f800000
            int128_t zmm0_1
            zmm0_1.d = result.d.d f- 1f
            zmm2_1.d = zmm2_1.d f* zmm0_1.d
            rbp_2 = int.d(zmm2_1.d)
            result_1[4] = rbp_2
        label_1421fe0ae:
            
            if (rbp_2 != 0xffffffff && rbp_2 s< rcx_6)
                int64_t rax_7 = *arg2
                int128_t var_48 = data_14399f720
                int32_t rax_8 = (*(rax_7 + 0x150))(arg2)
                char rax_9
                
                if (rax_8 s> 0)
                    int64_t rdx_5 = *arg2
                    rax_9 = (*(rdx_5 + 0x158))(arg2, rdx_5)
                
                int64_t r15
                
                if (rax_8 s<= 0 || rax_9 == 0)
                    r15.b = 0
                else
                    r15.b = 1
                
                int128_t* rax_10 = &var_48
                
                if (r15.b != 0)
                    rax_10 = nullptr
                
                int64_t var_60
                result = sub_1421f2770(arg1, result_1, arg2, rax_1, rbp_2, &var_60, rax_10)
                
                if (result.b == 1)
                    uint128_t zmm0_2 = zx.o(var_60)
                    *(sx.q(arg3) + arg4) = rbp_2
                    *(arg4 + 0x10) = zmm0_2.q
                    int32_t var_58
                    *(arg4 + 0x18) = var_58
                    
                    if (_finite(_mm_cvtps_pd((*(arg4 + 0x10)).q).q) != 0
                            && _finite(_mm_cvtps_pd((*(arg4 + 0x14)).q).q) != 0)
                        _finite(_mm_cvtps_pd((*(arg4 + 0x18)).q).q)
                    
                    result.b = (*(arg1 + 0x54)).b & 5
                    
                    if (result.b == 4)
                        int32_t zmm3_1 = *(arg1 + 0x58)
                        int64_t rcx_11 = sx.q(rbp_2) * 3
                        int64_t rax_15 = *(result_1 + 0x30)
                        zmm0_2.d = (*(rax_15 + (rcx_11 << 2) + 8)).d f- *(arg4 + 0x28)
                        uint128_t zmm5_1
                        zmm5_1.d = (*(rax_15 + (rcx_11 << 2))).d f- *(arg4 + 0x20)
                        int64_t zmm2_2
                        zmm2_2.d = (*(rax_15 + (rcx_11 << 2) + 4)).d f- *(arg4 + 0x24)
                        zmm0_2.d = zmm0_2.d f* zmm3_1
                        zmm5_1.d = zmm5_1.d f* zmm3_1
                        zmm0_2.d = zmm0_2.d f+ *(arg4 + 0x28)
                        zmm2_2.d = zmm2_2.d f* zmm3_1
                        zmm5_1.d = zmm5_1.d f+ *(arg4 + 0x20)
                        zmm2_2.d = zmm2_2.d f+ *(arg4 + 0x24)
                        int32_t var_58_1 = zmm0_2.d
                        *(arg4 + 0x20) = (_mm_unpacklo_ps(zmm5_1, zmm2_2)).q
                        *(arg4 + 0x28) = var_58_1
                        result = _finite(_mm_cvtps_pd((*(arg4 + 0x20)).q).q)
                        
                        if (result.d != 0)
                            result = _finite(_mm_cvtps_pd((*(arg4 + 0x24)).q).q)
                            
                            if (result.d != 0)
                                result = _finite(_mm_cvtps_pd((*(arg4 + 0x28)).q).q)
                    
                    if (r15.b != 0)
                        void* rdi_1 = arg4 + sx.q(rax_8)
                        int32_t* rax_17
                        float zmm6_1[0x4]
                        rax_17, zmm6_1 = sub_140ad3d90(&var_48, &var_60)
                        *(rdi_1 + 0x18) = *rax_17
                        *(rdi_1 + 0x20) = rax_17[2]
                        result = arg2[5]
                        
                        if ((*(result[6] + 0x59) & 1) != 0)
                            void* rax_19 = arg2[3]
                            uint128_t zmm0_3 = *(rdi_1 + 0x20)
                            float zmm2_3[0x4] = _mm_unpacklo_ps(*(rdi_1 + 0x1c), 0)
                            float zmm5_2[0x4] =
                                __mulps_xmmps_memps(*(rax_19 + 0x1c0), data_143f50590)
                            float var_38_1[0x4] = zmm6_1
                            zmm6_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(*(rdi_1 + 0x18), zmm0_3.q), 
                                zmm2_3[0].q)
                            float zmm4_1[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
                            float zmm1_1[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xd2)
                            zmm0_3 = _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0xc9), zmm1_1)
                            zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0xd2), zmm4_1)
                            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xff)
                            zmm2_3 = _mm_sub_ps(zmm2_3, zmm0_3)
                            zmm2_3 = _mm_add_ps(zmm2_3, zmm2_3)
                            zmm5_2 = _mm_mul_ps(zmm5_2, zmm2_3)
                            zmm0_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xc9), zmm1_1)
                            float zmm3_2[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xd2)
                            zmm5_2 = _mm_add_ps(zmm5_2, zmm6_1)
                            zmm3_2 =
                                _mm_add_ps(_mm_sub_ps(_mm_mul_ps(zmm3_2, zmm4_1), zmm0_3), zmm5_2)
                            result = zx.q(_mm_shuffle_ps(zmm3_2, zmm3_2, 0xaa).d)
                            *(rdi_1 + 0x18) = (_mm_unpacklo_ps(zmm3_2, 
                                _mm_shuffle_ps(zmm3_2, zmm3_2, 0x55)[0].q)).q
                            *(rdi_1 + 0x20) = result.d

return result
