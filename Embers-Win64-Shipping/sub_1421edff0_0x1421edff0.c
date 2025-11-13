// 函数: sub_1421edff0
// 地址: 0x1421edff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (*(arg1 + 0x98) != 0)
    int32_t result_1 = *(arg1 + 0xc)
    result = zx.q(*(arg1 + 0x8c))
    
    if (result.d s>= 0 && result_1 s> result.d)
        result_1 = result.d
    
    int32_t rdx_1 = arg4[1].d + result_1
    int128_t zmm6
    
    if (rdx_1 s> *(arg4 + 0xc))
        result, zmm6 = sub_14083ae50(arg4, rdx_1)
    
    int32_t rdx_4
    
    if (*(arg1 + 0xa0) == 0)
        rdx_4 = arg4[3].d + result_1
    else
        rdx_4 = *(arg3 + 8) * result_1 + arg4[3].d
    
    if (rdx_4 s> *(arg4 + 0x1c))
        result, zmm6 = sub_14083ae70(&arg4[2], rdx_4)
    
    int64_t r8 = *(arg1 + 0x28)
    int64_t r9 = *(arg1 + 0x30)
    int64_t var_88_1 = r8
    int64_t var_80_1 = r9
    
    if (result_1 s> 0)
        int64_t r12_1 = 0
        int32_t r15_1 = 1
        int128_t var_48_1 = zmm6
        zmm6 = 0x38d1b717
        int32_t arg_8 = 1
        
        do
            if (r15_1 s< result_1)
                *(r9 + (r12_1 << 1) + 2)
            
            void* rcx_4 = sx.q(zx.d(*(r9 + (r12_1 << 1))) * *(arg1 + 0x10)) + r8
            float* rdx_8 = sx.q(*(arg1 + 0x98)) + rcx_4
            
            if (rdx_8[8].b != 0)
                uint32_t zmm2[0x4] = *(rcx_4 + 0x50)
                uint128_t zmm0 = *(rcx_4 + 0x54)
                zmm2[0] = zmm2[0] f* *(arg1 + 0x38)
                char rax_4 = *(arg1 + 0xb2)
                zmm0.d = zmm0.d f* *(arg1 + 0x3c)
                uint32_t temp0_1[0x4] = _mm_and_ps(zmm2, 0x7fffffff)
                zmm0 = _mm_and_ps(zmm0, 0x7fffffff)
                
                if (rax_4 u<= 1 || rax_4 == 6)
                    zmm0 = temp0_1
                
                bool cond:1_1 = *(rdx_8 + 0x22) != 0
                temp0_1[0] = temp0_1[0] f+ zmm0.d
                float zmm4[0x4] = *(rcx_4 + 0x6c)
                zmm0 = rdx_8[7]
                float zmm5 = zmm4[0] f* *(rcx_4 + 0x60)
                char rax_5 = *(rdx_8 + 0x21)
                temp0_1[0] = temp0_1[0] f* rdx_8[6]
                zmm4[0] = zmm4[0] f* *(rcx_4 + 0x64)
                zmm4[0] = zmm4[0] f* *(rcx_4 + 0x68)
                zmm5 = zmm5 * *rdx_8
                zmm4[0] = zmm4[0] * rdx_8[1]
                zmm4[0] = zmm4[0] * rdx_8[2]
                float zmm1[0x4] = *(arg1 + 0x9c)
                temp0_1[0] = temp0_1[0] f* 0.5f
                float var_d4_1 = zmm4[0]
                uint32_t var_cc_1 = temp0_1[0]
                float var_d0_1 = zmm4[0]
                int32_t var_c8_1 = zmm0.d
                float var_c4_1 = zmm1[0]
                
                if (not(cond:1_1))
                    float temp0_4[0x4]
                    
                    if (not(temp0_1[0] f> zmm6.d))
                        temp0_4 = _mm_max_ss(_mm_max_ss(zmm4[0], zmm5)[0], zmm4[0])
                    
                    if (temp0_1[0] f> zmm6.d || not(temp0_4[0] f<= zmm6.d))
                        int32_t rax_6 = *(rcx_4 + 0x18)
                        uint64_t var_108 = *(rcx_4 + 0x10)
                        int64_t var_b8 = 0
                        int32_t var_b0_1 = 0
                        sub_1421da940(rcx_4, arg1, arg2, &var_108, &var_b8)
                        int32_t* rax_7
                        
                        if (*(arg1 + 0xb0) == 0)
                            int32_t var_70_1 = rax_6
                            uint64_t var_78
                            rax_7 = &var_78
                            var_78 = var_108
                        else
                            uint32_t var_a8
                            rax_7 = &var_a8
                            zmm1 = var_108:4.d
                            int32_t var_8c_1 = 0x3f800000
                            float var_98[0x4]
                            var_98[0] = var_108.d.d
                            int64_t var_e8_1 = 0
                            float temp0_5[0x4] = _mm_shuffle_ps(var_98, var_98, 0xe1)
                            temp0_5[0] = zmm1[0]
                            int32_t var_e0_1 = 0
                            float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc6)
                            temp0_6[0] = rax_6[0]
                            float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xc9)
                            var_98 = temp0_7
                            zmm2 =
                                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_7, temp0_7, 0xff), arg2[3])
                            zmm0 =
                                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_7, temp0_7, 0xaa), arg2[2])
                            float temp0_13[0x4] =
                                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_7, temp0_7, 0x55), arg2[1])
                            zmm2 = _mm_add_ps(_mm_add_ps(zmm2, zmm0), 
                                _mm_add_ps(temp0_13, 
                                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_7, temp0_7, 0), 
                                        *arg2)))
                            var_a8 = zmm2[0]
                            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                            uint32_t var_a0_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
                            int32_t var_a4_1 = zmm0.d
                        
                        if (arg4[5].d != 0)
                            int64_t r15_2 = sx.q(arg4[5].d)
                            int32_t var_f4_1 = 0
                            int32_t var_f8 = var_f8 ^ ((arg4[3].d ^ var_f8) & 0x7fffffff)
                            int32_t rax_12 = (r15_2 + 1).d
                            arg4[5].d = rax_12
                            
                            if (rax_12 s> *(arg4 + 0x2c))
                                zmm6 = sub_14083a310(&arg4[4], r15_2.d)
                            
                            *(arg4[4] + (r15_2 << 3)) = var_f8.q
                            r15_1 = arg_8
                        
                        int64_t rsi_2 = sx.q(arg4[3].d)
                        int32_t rax_14 = (rsi_2 + 1).d
                        arg4[3].d = rax_14
                        
                        if (rax_14 s> *(arg4 + 0x1c))
                            zmm6 = sub_14083aa30(&arg4[2], rsi_2.d)
                        
                        int64_t rcx_10 = arg4[2]
                        int64_t rdx_12 = rsi_2 * 3
                        int32_t rax_16 = rax_7[2]
                        *(rcx_10 + (rdx_12 << 2)) = *rax_7
                        *(rcx_10 + (rdx_12 << 2) + 8) = rax_16
                        int64_t rsi_3 = sx.q(arg4[1].d)
                        int32_t rax_17 = (rsi_3 + 1).d
                        arg4[1].d = rax_17
                        
                        if (rax_17 s> *(arg4 + 0xc))
                            zmm6 = sub_14083a9e0(arg4, rsi_3.d)
                        
                        int64_t rcx_12 = *arg4
                        r8 = var_88_1
                        r9 = var_80_1
                        uint128_t* rdx_14 = rsi_3 * 0x1c
                        *(rdx_14 + rcx_12) = zmm5.o
                        *(rdx_14 + rcx_12 + 0x10) = var_c8_1.q
                        *(rdx_14 + rcx_12 + 0x18) = rax_5.d
            
            r15_1 += 1
            result = sx.q(result_1)
            r12_1 += 1
            arg_8 = r15_1
        while (r12_1 s< result)

return result
