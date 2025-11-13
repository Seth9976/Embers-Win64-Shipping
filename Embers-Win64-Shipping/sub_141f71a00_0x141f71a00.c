// 函数: sub_141f71a00
// 地址: 0x141f71a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg1 + 0x430)

if (result != 0)
    int64_t i_2 = sx.q(*(result + 0x190))
    
    if (i_2.d == arg2[1].d)
        uint64_t* rcx = *(arg1 + 0x520)
        void* const rax_1
        int32_t rdi_1
        
        if (rcx == 0)
            rax_1 = j_sub_140a82f30(0x20)
            rdi_1 = 0
            
            if (rax_1 == 0)
                rax_1 = nullptr
            else
                __builtin_memset(rax_1, 0, 0x20)
            
            *(arg1 + 0x520) = rax_1
        else
            rdi_1 = 0
            rcx[1].d = 0
            
            if (*(rcx + 0xc) s<= 0xffffffff)
                sub_1405a52a0(rcx, 0)
            
            int64_t* rcx_2 = *(arg1 + 0x520) + 0x10
            int32_t rax = *(rcx_2 + 0xc)
            rcx_2[1].d = 0
            
            if (rax s< 0 && rax != 0)
                sub_1405a5220(rcx_2, 0)
            
            rax_1 = *(arg1 + 0x520)
        
        sub_140780b40(rax_1 + 0x10, arg2)
        int64_t* rcx_4 = *(arg1 + 0x520)
        result = zx.q(rcx_4[1].d + i_2.d)
        rcx_4[1].d = result.d
        
        if (result.d s> *(rcx_4 + 0xc))
            result = sub_1405c4fe0(rcx_4)
        
        float (* var_e8)[0x4] = nullptr
        float (* r14_1)[0x4] = nullptr
        int32_t var_dc_1 = 0
        int32_t var_e0_1 = i_2.d
        
        if (i_2.d s> 0)
            result = sub_1405c4fe0(&var_e8)
            r14_1 = var_e8
        
        int64_t i_1 = i_2
        
        if (i_2.d s> 0)
            float (* rsi_1)[0x4] = r14_1
            int64_t r13_1 = 0
            float zmm6[0x4]
            float var_38_1[0x4] = zmm6
            int64_t r15_1 = 0
            float zmm7[0x4]
            float var_48_1[0x4] = zmm7
            float zmm8[0x4]
            float var_58_1[0x4] = zmm8
            float zmm11[0x4] = data_143f3b900
            uint32_t zmm12[0x4] = data_143f3b880
            float zmm9[0x4]
            float var_68_1[0x4] = zmm9
            float zmm10[0x4]
            float var_78_1[0x4] = zmm10
            int64_t i
            
            do
                zmm6 = data_143f3b8d0
                int128_t* rcx_6 = *(*(arg1 + 0x520) + 0x10)
                float zmm5_1[0x4] = *(rcx_6 + r13_1)
                zmm7 = *(rcx_6 + r13_1 + 0x20)
                zmm8 = *(rcx_6 + r13_1 + 0x10)
                float zmm1[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
                zmm1 = _mm_add_ps(zmm1, _mm_shuffle_ps(zmm1, zmm1, 0x4e))
                float zmm4_1[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0x39), zmm1)
                zmm1 = _mm_rsqrt_ps(zmm4_1)
                float zmm3[0x4] = _mm_mul_ps(zmm4_1, zmm6)
                float zmm2[0x4] = _mm_add_ps(
                    _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(zmm1, zmm1), zmm3)), zmm1), 
                    zmm1)
                zmm6 = _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(zmm2, zmm2), zmm3))
                float zmm0_1[0x4] = _mm_cmpeq_ps(zmm11, zmm4_1, 2)
                zmm4_1 = data_143f3b870
                zmm6 = _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm6, zmm2), zmm2), zmm5_1)
                zmm5_1 = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
                zmm6 = _mm_and_ps(zmm6 ^ data_143f3b8c0, zmm0_1) ^ data_143f3b8c0
                zmm3 = zmm6
                zmm2 = _mm_add_ps(zmm6, zmm6)
                zmm0_1 = _mm_shuffle_ps(zmm6, zmm6, 4)
                zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                zmm3 = _mm_mul_ps(zmm3, zmm2)
                zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x29), zmm0_1)
                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x12), zmm6)
                zmm0_1 = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 1), _mm_shuffle_ps(zmm3, zmm3, 0x1a))
                zmm6 = _mm_add_ps(zmm2, zmm1)
                zmm1 = _mm_sub_ps(zmm1, zmm2)
                zmm4_1[0].q = zmm8 u>> 0x40
                zmm2 = _mm_sub_ps(zmm4_1, zmm0_1)
                zmm8 = _mm_shuffle_ps(zmm8, zmm4_1, 0xc4)
                zmm6 = _mm_mul_ps(zmm6, zmm7)
                zmm5_1 = _mm_mul_ps(zmm5_1, zmm1)
                zmm2 = _mm_and_ps(_mm_mul_ps(zmm2, zmm7), zmm12)
                zmm0_1 = _mm_shuffle_ps(zmm5_1, zmm2, 0x32)
                zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm2, 0), zmm0_1, 0x82)
                *rsi_1 = zmm3
                zmm0_1 = _mm_shuffle_ps(zmm6, zmm2, 0x31)
                zmm1 = _mm_shuffle_ps(zmm5_1, zmm2, 0x10)
                zmm6 = _mm_shuffle_ps(zmm6, zmm5_1, 0x12)
                zmm1 = _mm_shuffle_ps(zmm1, zmm0_1, 0x88)
                zmm6 = _mm_shuffle_ps(zmm6, zmm2, 0xe8)
                rsi_1[1] = zmm1
                rsi_1[2] = zmm6
                rsi_1[3] = zmm8
                
                if (rdi_1 s> 0)
                    void* rax_3 = *(arg1 + 0x430)
                    zmm10 = _mm_shuffle_ps(zmm3, zmm3, 0)
                    zmm0_1 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                    zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                    int64_t rcx_7 = *(rax_3 + 0x188)
                    zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0xff)
                    float (* rax_6)[0x4] = &r14_1[sx.q(*(rcx_7 + r15_1 + 8)) * 4]
                    zmm7 = rax_6[1]
                    zmm6 = *rax_6
                    zmm8 = rax_6[2]
                    zmm9 = rax_6[3]
                    zmm0_1 = _mm_mul_ps(zmm0_1, zmm7)
                    zmm1 = _mm_mul_ps(zmm1, zmm8)
                    zmm2 = _mm_mul_ps(zmm2, zmm9)
                    zmm10 = _mm_add_ps(
                        _mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm10, zmm6), zmm0_1), zmm1), zmm2)
                    zmm2 = rsi_1[1]
                    zmm0_1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                    zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                    zmm5_1 = _mm_shuffle_ps(zmm2, zmm2, 0)
                    zmm0_1 = _mm_mul_ps(zmm0_1, zmm7)
                    zmm1 = _mm_mul_ps(zmm1, zmm8)
                    zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm9)
                    zmm5_1 = _mm_add_ps(
                        _mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm5_1, zmm6), zmm0_1), zmm1), zmm2)
                    zmm2 = rsi_1[2]
                    zmm4_1 = _mm_shuffle_ps(zmm2, zmm2, 0)
                    zmm0_1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                    zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                    zmm0_1 = _mm_mul_ps(zmm0_1, zmm7)
                    zmm1 = _mm_mul_ps(zmm1, zmm8)
                    zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm9)
                    zmm4_1 = _mm_add_ps(
                        _mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm4_1, zmm6), zmm0_1), zmm1), zmm2)
                    zmm2 = rsi_1[3]
                    *rsi_1 = zmm10
                    zmm3 = _mm_shuffle_ps(zmm2, zmm2, 0)
                    zmm0_1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                    zmm3 = _mm_mul_ps(zmm3, zmm6)
                    zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                    rsi_1[1] = zmm5_1
                    zmm0_1 = _mm_mul_ps(zmm0_1, zmm7)
                    zmm1 = _mm_mul_ps(zmm1, zmm8)
                    zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                    zmm3 = _mm_add_ps(zmm3, zmm0_1)
                    zmm2 = _mm_mul_ps(zmm2, zmm9)
                    rsi_1[2] = zmm4_1
                    rsi_1[3] = _mm_add_ps(_mm_add_ps(zmm3, zmm1), zmm2)
                
                int64_t rbx_1 = **(arg1 + 0x520)
                uint32_t var_d8[0x4][0x4]
                result, zmm11, zmm12 = sub_140631b10(&r14_1[sx.q(rdi_1) * 4], &var_d8)
                rdi_1 += 1
                void* rdx_5 = rsi_1 - r14_1
                r13_1 += 0x30
                r15_1 += 0xc
                rsi_1 = &rsi_1[4]
                *(rdx_5 + rbx_1) = *result
                *(rdx_5 + rbx_1 + 0x10) = *(result + 0x10)
                *(rdx_5 + rbx_1 + 0x20) = *(result + 0x20)
                *(rdx_5 + rbx_1 + 0x30) = *(result + 0x30)
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        if (r14_1 != 0)
            return sub_140a74f90(r14_1)

return result
