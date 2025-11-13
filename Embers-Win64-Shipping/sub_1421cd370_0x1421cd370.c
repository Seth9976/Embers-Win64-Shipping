// 函数: sub_1421cd370
// 地址: 0x1421cd370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = zx.q(arg3)
bool r9 = sub_140b5b8a0(*(arg1 + 0x30), 0).b == 0
int64_t result
result.b = *(arg1 + 0x34) != 0
result.b |= r9

if (result.b != 0)
    void* rdx = *(arg2 + 0x18)
    result = sx.q(*(rdx + 0x608))
    
    if (result.d s> 0)
        int64_t* rdx_1 = *(rdx + 0x600)
        int64_t result_2 = result
        int64_t r8 = 0
        
        do
            int64_t* r14_1 = *rdx_1
            
            if (r14_1 != 0)
                result = *(arg1 + 0x30)
                
                if (*(r14_1[2] + 0x28) == result)
                    if (r14_1 != 0)
                        int64_t r8_1 = *(arg2 + 0xf8)
                        int64_t var_e8_1 = r8_1
                        char rdx_2 = *(*(*(arg2 + 0x28) + 0x30) + 0x59) & 1
                        int64_t rcx_3 = *(arg2 + 0xf0)
                        int32_t rdx_3 = *(arg2 + 0x114)
                        int32_t rax_3 = *(arg2 + 0x118)
                        char r13_1 = *(*(r14_1[5] + 0x30) + 0x59) & 1
                        result = zx.q(rax_3 - 1)
                        int64_t var_f0_1 = rcx_3
                        int64_t r12_1 = sx.q(result.d)
                        int32_t var_f8_1 = rdx_3
                        
                        if (rax_3 - 1 s>= 0)
                            float zmm6[0x4]
                            float var_48_1[0x4] = zmm6
                            float zmm7[0x4]
                            float var_58_1[0x4] = zmm7
                            float zmm8[0x4]
                            float var_68_1[0x4] = zmm8
                            float zmm9[0x4]
                            float var_78_1[0x4] = zmm9
                            float zmm10[0x4]
                            float var_88_1[0x4] = zmm10
                            int64_t temp1_1
                            
                            do
                                void* rbx_3 = zx.q(zx.d(*(r8_1 + (r12_1 << 1))) * rdx_3) + rcx_3
                                
                                if ((*(rbx_3 + 0x5c) & 0x4000000) == 0)
                                    int32_t* rdi_1 = rdi + rbx_3
                                    int32_t rdx_4 = *rdi_1
                                    float zmm0[0x4]
                                    float zmm1[0x4]
                                    
                                    if (rdx_4 != 0xffffffff)
                                        result = (*(*r14_1 + 0x108))(r14_1, rdx_4)
                                        int64_t result_1 = result
                                        
                                        if (result == 0)
                                            goto label_1421cd580
                                        
                                        result = zx.q(rdi_1[1])
                                        
                                        if (result.d == 0 || result_1 == result
                                                || (*(arg1 + 0xa8) & 1) != 0)
                                            int64_t var_e0
                                            int32_t var_d8
                                            int64_t var_d0
                                            int32_t var_c8
                                            zmm10 = sub_141fe5610(arg1 + 0x38, *(result_1 + 0xc), 
                                                *(arg2 + 0x18), nullptr, var_f8_1, var_f0_1, 
                                                var_e8_1, var_e0, var_d8, var_d0, var_c8)
                                            var_e0 = *(result_1 + 0x10)
                                            var_d8 = *(result_1 + 0x18)
                                            result = zx.q(*(rbx_3 + 0x18))
                                            var_d0 = *(rbx_3 + 0x10)
                                            var_c8 = result.d
                                            
                                            if (rdx_2 == r13_1)
                                                zmm8 = var_d8
                                                zmm7 = var_e0:4.d
                                                zmm6 = var_e0.d
                                            label_1421cd7b8:
                                                zmm9 = var_d0.d
                                                zmm0 = var_d0:4.d
                                                zmm1 = var_c8
                                            else
                                                float zmm2_1[0x4]
                                                float zmm3[0x4]
                                                float zmm4_1[0x4]
                                                float zmm5_1[0x4]
                                                
                                                if (r13_1 == 0)
                                                    zmm8 = var_d8
                                                    zmm7 = var_e0:4.d
                                                    zmm6 = var_e0.d
                                                else
                                                    result = *(arg2 + 0x18)
                                                    zmm5_1 = _mm_unpacklo_ps(var_e0.d, var_d8[0].q)
                                                    zmm4_1 = *(result + 0x1c0)
                                                    zmm5_1 = __mulps_xmmps_memps(
                                                        _mm_unpacklo_ps(zmm5_1, 
                                                            _mm_unpacklo_ps(var_e0:4.d, 0)[0].q), 
                                                        *(result + 0x1e0))
                                                    zmm3 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
                                                    zmm1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2)
                                                    zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
                                                    zmm0 = _mm_mul_ps(
                                                        _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9), zmm1)
                                                    zmm2_1 = _mm_sub_ps(
                                                        _mm_mul_ps(
                                                            _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2), 
                                                            zmm3), 
                                                        zmm0)
                                                    zmm2_1 = _mm_add_ps(zmm2_1, zmm2_1)
                                                    zmm4_1 = _mm_mul_ps(zmm4_1, zmm2_1)
                                                    zmm0 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9)
                                                    zmm6 = _mm_mul_ps(
                                                        _mm_shuffle_ps(zmm2_1, zmm2_1, 0xd2), zmm3)
                                                    zmm0 = _mm_mul_ps(zmm0, zmm1)
                                                    zmm4_1 = _mm_add_ps(zmm4_1, zmm5_1)
                                                    zmm6 =
                                                        _mm_add_ps(_mm_sub_ps(zmm6, zmm0), zmm4_1)
                                                    zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                                                    zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                                                
                                                if (rdx_2 == 0)
                                                    goto label_1421cd7b8
                                                
                                                result = *(arg2 + 0x18)
                                                zmm2_1 = *(rbx_3 + 0x14)
                                                zmm5_1 = _mm_unpacklo_ps(*(rbx_3 + 0x10), 
                                                    (*(rbx_3 + 0x18))[0].q)
                                                zmm4_1 = *(result + 0x1c0)
                                                zmm2_1 = _mm_unpacklo_ps(zmm2_1, zx.o(0)[0].q)
                                                zmm1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
                                                zmm5_1 = __mulps_xmmps_memps(
                                                    _mm_unpacklo_ps(zmm5_1, zmm2_1[0].q), 
                                                    *(result + 0x1e0))
                                                zmm2_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2)
                                                zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
                                                zmm0 = _mm_mul_ps(
                                                    _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9), zmm2_1)
                                                zmm3 = _mm_sub_ps(
                                                    _mm_mul_ps(
                                                        _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2), 
                                                        zmm1), 
                                                    zmm0)
                                                zmm3 = _mm_add_ps(zmm3, zmm3)
                                                zmm4_1 = _mm_mul_ps(zmm4_1, zmm3)
                                                zmm9 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xd2), 
                                                    zmm1)
                                                zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
                                                zmm4_1 = _mm_add_ps(zmm4_1, zmm5_1)
                                                zmm9 = _mm_add_ps(
                                                    _mm_sub_ps(zmm9, _mm_mul_ps(zmm0, zmm2_1)), 
                                                    zmm4_1)
                                                zmm0 = _mm_shuffle_ps(zmm9, zmm9, 0x55)
                                                zmm1 = _mm_shuffle_ps(zmm9, zmm9, 0xaa)
                                            
                                            zmm6[0] = zmm6[0] - zmm9[0]
                                            zmm7[0] = zmm7[0] - zmm0[0]
                                            zmm8[0] = zmm8[0] - zmm1[0]
                                            zmm6[0] = zmm6[0] * zmm6[0]
                                            zmm9 = zmm7
                                            zmm9[0] = zmm9[0] * zmm7[0]
                                            zmm8[0] = zmm8[0] * zmm8[0]
                                            zmm9[0] = zmm9[0] + zmm6[0]
                                            zmm9[0] = zmm9[0] + zmm8[0]
                                            zmm0 = _mm_sqrt_ss(0, zmm9[0])
                                            
                                            if (zmm0[0] > zmm10[0])
                                                goto label_1421cd580
                                            
                                            int64_t r8_3
                                            
                                            if ((*(arg1 + 0x68) & 1) == 0)
                                                zmm1 = *(result_1 + 0xc)
                                                r8_3 = *(arg2 + 0x18)
                                            else
                                                zmm1 = zmm10
                                                r8_3 = 0
                                                zmm1[0] = zmm1[0] - zmm0[0]
                                                zmm1[0] = zmm1[0] / zmm10[0]
                                            
                                            zmm0, zmm6, zmm7 =
                                                sub_141fe5610(arg1 + 0x70, zmm1, r8_3, nullptr)
                                            
                                            if (not(zmm9[0] <= 9.99999994e-09f))
                                                float zmm3_1[0x4] = zx.o(0)
                                                zmm3_1[0] = zmm9[0]
                                                float zmm5_2[0x4] =
                                                    _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
                                                zmm3_1[0] = zmm3_1[0] * 0.5f
                                                zmm5_2[0] = zmm5_2[0] * zmm5_2[0]
                                                zmm3_1[0] = zmm3_1[0] * zmm5_2[0]
                                                zmm5_2[0] = zmm5_2[0] * (0.5f - zmm3_1[0])
                                                zmm5_2[0] = zmm5_2[0] + zmm5_2[0]
                                                zmm5_2[0] = zmm5_2[0] * zmm5_2[0]
                                                zmm3_1[0] = zmm3_1[0] * zmm5_2[0]
                                                zmm5_2[0] = zmm5_2[0] * (0.5f - zmm3_1[0])
                                                zmm5_2[0] = zmm5_2[0] + zmm5_2[0]
                                                zmm5_2[0] = zmm5_2[0] * zmm6[0]
                                                zmm5_2[0] = zmm5_2[0] * zmm7[0]
                                                zmm5_2[0] = zmm5_2[0] * zmm8[0]
                                                zmm6 = zmm5_2
                                                zmm7 = zmm5_2
                                                zmm8 = zmm5_2
                                            
                                            rcx_3 = var_f0_1
                                            rdx_3 = var_f8_1
                                            r8_1 = var_e8_1
                                            zmm6[0] = zmm6[0] * zmm0[0]
                                            zmm7[0] = zmm7[0] * zmm0[0]
                                            zmm8[0] = zmm8[0] * zmm0[0]
                                            zmm6[0] = zmm6[0] f* arg4.d
                                            zmm7[0] = zmm7[0] f* arg4.d
                                            zmm8[0] = zmm8[0] f* arg4.d
                                            zmm6[0] = zmm6[0] f+ *(rbx_3 + 0x30)
                                            *(rbx_3 + 0x30) = zmm6[0]
                                            zmm7[0] = zmm7[0] f+ *(rbx_3 + 0x34)
                                            *(rbx_3 + 0x34) = zmm7[0]
                                            zmm8[0] = zmm8[0] f+ *(rbx_3 + 0x38)
                                            *(rbx_3 + 0x38) = zmm8[0]
                                            *(rdi_1 + 8) = *(result_1 + 0x30)
                                            result = zx.q(*(result_1 + 0x38))
                                            rdi_1[4] = result.d
                                            rdi = zx.q(arg3)
                                            
                                            if ((*(arg1 + 0xa0) & 1) != 0)
                                                zmm6[0] = zmm6[0] f+ *(rbx_3 + 0x20)
                                                zmm7[0] = zmm7[0] f+ *(rbx_3 + 0x24)
                                                zmm8[0] = zmm8[0] f+ *(rbx_3 + 0x28)
                                                *(rbx_3 + 0x20) = zmm6[0]
                                                *(rbx_3 + 0x24) = zmm7[0]
                                                *(rbx_3 + 0x28) = zmm8[0]
                                        else
                                            *rdi_1 = 0xffffffff
                                            rdi_1[1] = 0
                                        label_1421cd580:
                                            r8_1 = var_e8_1
                                            rdx_3 = var_f8_1
                                            rcx_3 = var_f0_1
                                            rdi = zx.q(arg3)
                                    else
                                        rdx_3 = var_f8_1
                                        
                                        if ((*(arg1 + 0xa8) & 2) != 0)
                                            zmm0 = rdi_1[2]
                                            zmm0[0] = zmm0[0] f+ *(rbx_3 + 0x30)
                                            *(rbx_3 + 0x30) = zmm0[0]
                                            zmm1 = rdi_1[3]
                                            zmm1[0] = zmm1[0] f+ *(rbx_3 + 0x34)
                                            *(rbx_3 + 0x34) = zmm1[0]
                                            zmm0 = rdi_1[4]
                                            zmm0[0] = zmm0[0] f+ *(rbx_3 + 0x38)
                                            *(rbx_3 + 0x38) = zmm0[0]
                                        
                                        rdi = zx.q(arg3)
                                
                                temp1_1 = r12_1
                                r12_1 -= 1
                            while (temp1_1 - 1 s>= 0)
                    
                    break
            
            r8 += 1
            rdx_1 = &rdx_1[1]
        while (r8 s< result_2)

return result
