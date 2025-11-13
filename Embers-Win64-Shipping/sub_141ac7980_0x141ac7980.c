// 函数: sub_141ac7980
// 地址: 0x141ac7980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
uint64_t result = __security_cookie ^ &var_118
uint64_t result_2 = result
int128_t zmm9 = 0x3727c5ac
float zmm7[0x4] = arg3

if (not(zmm7[0] < 9.99999975e-06f))
    int128_t zmm8 = 0x3f7fff58
    
    if (zmm7[0] < 0.999989986f)
        int32_t rax_1 = *(arg1 + 0x34)
        int32_t i_7 = 0
        *(arg1 + 0x30) = 0
        
        if (rax_1 s< 0 && rax_1 != 0)
            sub_1405c5510(arg1 + 0x28, 0)
        
        int64_t count = sx.q(*(arg1 + 8))
        int64_t rbx_1 = sx.q(*(arg1 + 0x30))
        int32_t rax_2 = (rbx_1 + count).d
        *(arg1 + 0x30) = rax_2
        
        if (rax_2 s> *(arg1 + 0x34))
            sub_1405daba0(arg1 + 0x28)
        
        memset(rbx_1 + *(arg1 + 0x28), 0, count)
        int32_t result_3 = arg2[1].d
        void* rcx_4 = nullptr
        void* var_e0 = nullptr
        int32_t result_1 = 0
        int32_t var_d4_1 = 0
        
        if (result_3 s> 0)
            sub_1405c4fe0(&var_e0)
            rcx_4 = var_e0
            result_1 = result_3
        else if (result_3 s< 0 && result_3 != 0)
            sub_1407c3fe0(&var_e0)
            rcx_4 = var_e0
            result_1 = result_3
        
        int32_t i = 0
        int32_t i_3
        float var_f0
        float zmm0_1[0x4]
        uint32_t zmm6[0x4]
        float zmm10[0x4]
        
        if (arg2[1].d s> 0)
            void* rbx_2 = rcx_4 + 0x30
            void* rax_4 = -0x30 - rcx_4
            void* var_d0_1 = rax_4
            
            do
                int32_t* r12_1 = rax_4 + rbx_2
                i_3 = *(r12_1 + *arg2)
                sub_141ea4020(*(arg1 + 0x10), &var_f0, &i_3)
                int64_t rdx_3 = sx.q(var_f0)
                
                if (rdx_3.d == 0xffffffff)
                    int64_t rax_14 = *arg2
                    *(rbx_2 - 0x20) = *(rax_14 + r12_1 + 0x10)
                    *(rbx_2 - 0x10) = *(rax_14 + r12_1 + 0x20)
                    zmm0_1 = *(rax_14 + r12_1 + 0x30)
                else
                    int64_t rax_6 = sx.q(arg2[1].d)
                    int32_t r8_3 = 0
                    int64_t rcx_9 = 0
                    int32_t* r10_1
                    
                    if (rax_6.d s> 0)
                        r10_1 = *arg2
                        int32_t* rax_7 = r10_1
                        
                        while (rdx_3.d != *rax_7)
                            r8_3 += 1
                            rcx_9 += 1
                            rax_7 = &rax_7[0x10]
                            
                            if (rcx_9 s>= rax_6)
                                goto label_141ac7b21
                    
                    void* r8_6
                    
                    if (rax_6.d s<= 0 || r8_3 == 0xffffffff)
                    label_141ac7b21:
                        
                        if (*(rdx_3 + *(arg1 + 0x18)) == 0)
                            sub_141a98300(arg1, rdx_3.d)
                        
                        r10_1 = *arg2
                        r8_6 = rdx_3 * 0x30 + *arg1
                    else
                        r8_6 = &r10_1[4 + sx.q(r8_3) * 0x10]
                    
                    float var_c8[0x3][0x4]
                    float (* rax_11)[0x4]
                    rax_11, zmm6, zmm7, zmm8, zmm9, zmm10 =
                        sub_140ad7d70(&r10_1[4 + sx.q(i) * 0x10], &var_c8, r8_6)
                    *(rbx_2 - 0x20) = *rax_11
                    *(rbx_2 - 0x10) = rax_11[1]
                    zmm0_1 = rax_11[2]
                
                *rbx_2 = zmm0_1
                i += 1
                *(rbx_2 - 0x30) = i_3
                rbx_2 += 0x40
                *(sx.q(i_3) + *(arg1 + 0x28)) = 1
                rax_4 = var_d0_1
            while (i s< arg2[1].d)
        
        int32_t rbx_3 = *(arg1 + 8)
        
        if (rbx_3 != 0)
            do
                void* rcx_14 = *(arg1 + 0x10)
                i_3 = i_7
                sub_141ea4020(rcx_14, &var_f0, &i_3)
                int64_t rax_17 = sx.q(var_f0)
                
                if (rax_17.d != 0xffffffff)
                    int64_t r8_9 = *(arg1 + 0x28)
                    int64_t i_6 = sx.q(i_3)
                    *(i_6 + r8_9) |= *(rax_17 + r8_9)
                
                i_7 += 1
            while (i_7 != rbx_3)
            
            rbx_3 = *(arg1 + 8)
        
        int32_t i_1 = rbx_3 - 1
        
        if (i_1 != 0xffffffff)
            int64_t i_4 = sx.q(i_1)
            
            do
                if (i_1 != 0 && *(i_4 + *(arg1 + 0x28)) != 0)
                    int64_t rax_20 = *(arg1 + 0x18)
                    i_3 = i_1
                    
                    if (*(sx.q(i_1) + rax_20) == 1)
                        sub_141ea4020(*(arg1 + 0x10), &var_f0, &i_3)
                        zmm6, zmm7 =
                            sub_140ae0920(sx.q(i_3) * 0x30 + *arg1, sx.q(var_f0) * 0x30 + *arg1)
                        *(sx.q(i_3) + *(arg1 + 0x18)) = 0
                
                i_1 -= 1
                i_4 -= 1
            while (i_1 != 0xffffffff)
        
        result = zx.q(result_1)
        void* r9_2 = var_e0
        
        if (result.d s> 0)
            float var_88_1[0x4] = zmm10
            int128_t* rdx_10 = r9_2 + 0x30
            zmm10 = data_143f2b8f0
            uint64_t i_5 = zx.q(result.d)
            uint32_t var_48_1[0x4] = zmm6
            var_f0 = zmm7[0]
            uint64_t i_2
            
            do
                result = sx.q(rdx_10[-3].d)
                float (* rcx_23)[0x4] = result * 0x30 + *arg1
                
                if (not(zmm7[0] f<= zmm9.d))
                    if (zmm7[0] f< zmm8.d)
                        float zmm1[0x4] = __subps_xmmps_memps(rdx_10[-1], rcx_23[1])
                        float zmm5_1[0x4] = var_f0
                        zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0)
                        rcx_23[1] = __addps_xmmps_memps(_mm_mul_ps(zmm1, zmm5_1), rcx_23[1])
                        rcx_23[2] = __addps_xmmps_memps(
                            _mm_mul_ps(__subps_xmmps_memps(*rdx_10, rcx_23[2]), zmm5_1), rcx_23[2])
                        float zmm3[0x4] = *rcx_23
                        arg3 = _mm_sub_ps(zx.o(0), zmm3)
                        zmm1 = __mulps_xmmps_memps(zmm3, rdx_10[-2])
                        zmm1 = _mm_add_ps(zmm1, _mm_shuffle_ps(zmm1, zmm1, 0x4e))
                        zmm6 = _mm_cmpeq_ps(zx.o(0), 
                            _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0x39), zmm1), 2)
                        zmm0_1 = data_143f2b810
                        zmm6 = _mm_and_ps(zmm6, zmm3 ^ arg3)
                        zmm0_1 = _mm_sub_ps(zmm0_1, zmm5_1)
                        zmm5_1 = __mulps_xmmps_memps(zmm5_1, rdx_10[-2])
                        zmm6 = _mm_add_ps(_mm_mul_ps(zmm6 ^ arg3, zmm0_1), zmm5_1)
                        zmm5_1 = data_143f2b8b0
                        zmm1 = _mm_mul_ps(zmm6, zmm6)
                        zmm1 = _mm_add_ps(zmm1, _mm_shuffle_ps(zmm1, zmm1, 0x4e))
                        float zmm4_1[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0x39), zmm1)
                        zmm1 = _mm_rsqrt_ps(zmm4_1)
                        zmm3 = _mm_mul_ps(zmm4_1, zmm5_1)
                        arg3 = _mm_add_ps(
                            _mm_mul_ps(
                                _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(zmm1, zmm1), zmm3)), 
                                zmm1), 
                            zmm1)
                        zmm5_1 = _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(arg3, arg3), zmm3))
                        zmm0_1 = _mm_cmpeq_ps(zmm10, zmm4_1, 2)
                        *rcx_23 = _mm_and_ps(
                            _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm5_1, arg3), arg3), zmm6)
                                ^ data_143f2b8a0, 
                            zmm0_1) ^ data_143f2b8a0
                    else
                        *rcx_23 = rdx_10[-2]
                        rcx_23[1] = rdx_10[-1]
                        rcx_23[2] = *rdx_10
                
                rdx_10 = &rdx_10[4]
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)
        
        if (r9_2 != 0)
            result = sub_140a74f90(r9_2)
    else
        result = sub_141acc900(arg1, arg2)

__security_check_cookie(result_2 ^ &var_118)
return result
