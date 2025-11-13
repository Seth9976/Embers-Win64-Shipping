// 函数: sub_141f5b2b0
// 地址: 0x141f5b2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x440)
int64_t* r14 = arg2

if (rdi != 0)
    void* rdi_1 = *(rdi + 0x130)
    
    if (rdi_1 != 0 && (*(rdi_1 + 0x28) & 1) == 0 && ((*(rdi_1 + 0x28) u>> 1).b & 1) != 0)
        uint32_t rcx = zx.d(*(arg1 + 0x525))
        float var_e8 = 1f
        float var_e4 = 1f
        float var_e0 = 1f
        int32_t* rax_2
        
        if (rcx == 0)
            rax_2 = &var_e8
        else if (rcx == 1)
            rax_2 = &var_e4
        else
            rax_2 = &var_e0
        
        int32_t rcx_3 = *(rdi_1 + 0x58)
        int32_t i_1 = 0
        *rax_2 = 0
        int64_t rbx = 0
        int32_t rax_3 = *(rdi_1 + 0x38)
        int32_t rdx = 0
        int64_t var_d8 = 0
        int32_t var_d0 = 0
        int32_t r15 = 0
        
        if (rcx_3 s>= rax_3)
            rax_3 = rcx_3
        
        int32_t var_cc = 0
        
        if (rax_3 s> 0)
            sub_140638cc0(&var_d8, rax_3)
            rcx_3 = *(rdi_1 + 0x58)
            rdx = var_d0
            r15 = var_cc
            rbx = var_d8
        
        int128_t zmm9 = var_e0
        int32_t i = 0
        int128_t zmm10 = var_e4
        int128_t zmm11 = var_e8
        float zmm6[0x4]
        float var_48[0x4] = zmm6
        float zmm7[0x4]
        float var_58[0x4] = zmm7
        float zmm8[0x4]
        float var_68[0x4] = zmm8
        float var_c8[0x3][0x4]
        float zmm0[0x4]
        float zmm1[0x4]
        float zmm2[0x4]
        float zmm3[0x4]
        
        if (rcx_3 s> 0)
            int64_t r14_1 = 0
            
            do
                void* rax_4 = *(rdi_1 + 0x50)
                uint32_t rcx_4 = zx.d(*(arg1 + 0x525))
                zmm0 = zx.o(*(rax_4 + r14_1))
                var_e0 = *(rax_4 + r14_1 + 8)
                zmm2 = var_e0
                var_e8.q = zmm0.q
                zmm1 = var_e4
                zmm2[0] = zmm2[0] f* zmm9.d
                zmm1[0] = zmm1[0] f* zmm10.d
                zmm0[0] = zmm0[0] f* zmm11.d
                
                if (rcx_4 == 0)
                    zmm2 = zmm0
                else if (rcx_4 == 1)
                    zmm2 = zmm1
                
                float (* rax_6)[0x4]
                rax_6, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11 = sub_141f57e90(arg1, &var_c8, zmm2)
                zmm6 = _mm_unpacklo_ps(zmm6, zmm8[0].q)
                zmm2 = _mm_unpacklo_ps(zmm7, 0)
                float zmm5_1[0x4] = *rax_6
                zmm6 = __mulps_xmmps_memps(_mm_unpacklo_ps(zmm6, zmm2[0].q), rax_6[2])
                zmm2 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                zmm1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc9), zmm2)
                zmm3 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd2), zmm1), zmm0)
                zmm3 = _mm_add_ps(zmm3, zmm3)
                zmm5_1 = _mm_mul_ps(zmm5_1, zmm3)
                float zmm4_1[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xd2), zmm1)
                zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
                zmm5_1 = _mm_add_ps(zmm5_1, zmm6)
                zmm4_1 = __addps_xmmps_memps(
                    _mm_add_ps(_mm_sub_ps(zmm4_1, _mm_mul_ps(zmm0, zmm2)), zmm5_1), rax_6[1])
                int32_t rax_7 = var_d0
                var_e8 = zmm4_1[0]
                zmm0 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
                rdx = rax_7 + 1
                var_e0 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)[0]
                var_e4 = zmm0[0]
                var_d0 = rdx
                
                if (rdx s> r15)
                    sub_140638a00(&var_d8)
                    rdx = var_d0
                    r15 = var_cc
                    rbx = var_d8
                
                i += 1
                r14_1 += 0xc
                int64_t rcx_8 = sx.q(rax_7) * 3
                float rax_9 = var_e0
                *(rbx + (rcx_8 << 2)) = var_e8.q
                *(rbx + (rcx_8 << 2) + 8) = rax_9
            while (i s< *(rdi_1 + 0x58))
            
            r14 = arg2
        
        (*(*r14 + 0x38))(r14, rbx, zx.q(rdx), *(rdi_1 + 0x60), *(rdi_1 + 0x68), arg1 + 0x1c0)
        int32_t r12 = 0
        
        if (r15 s< 0)
            int32_t var_d0_1 = 0
            
            if (r15 != 0)
                sub_140638cc0(&var_d8, 0)
                r15 = var_cc
                r12 = var_d0_1
                rbx = var_d8
        
        if (*(rdi_1 + 0x38) s> 0)
            void* r14_2 = nullptr
            
            do
                int64_t rax_12 = *(rdi_1 + 0x30)
                uint32_t rcx_11 = zx.d(*(arg1 + 0x525))
                zmm0 = zx.o(*(r14_2 + rax_12))
                var_e0 = *(r14_2 + rax_12 + 8)
                zmm2 = var_e0
                var_e8.q = zmm0.q
                zmm1 = var_e4
                zmm2[0] = zmm2[0] f* zmm9.d
                zmm1[0] = zmm1[0] f* zmm10.d
                zmm0[0] = zmm0[0] f* zmm11.d
                
                if (rcx_11 == 0)
                    zmm2 = zmm0
                else if (rcx_11 == 1)
                    zmm2 = zmm1
                
                float (* rax_14)[0x4]
                rax_14, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11 = sub_141f57e90(arg1, &var_c8, zmm2)
                zmm6 = _mm_unpacklo_ps(zmm6, zmm8[0].q)
                zmm2 = _mm_unpacklo_ps(zmm7, 0)
                float zmm5_2[0x4] = *rax_14
                zmm6 = __mulps_xmmps_memps(_mm_unpacklo_ps(zmm6, zmm2[0].q), rax_14[2])
                zmm2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xd2)
                zmm1 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
                zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xff)
                zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc9), zmm2)
                zmm3 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd2), zmm1), zmm0)
                zmm3 = _mm_add_ps(zmm3, zmm3)
                zmm5_2 = _mm_mul_ps(zmm5_2, zmm3)
                float zmm4_2[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xd2), zmm1)
                zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
                zmm5_2 = _mm_add_ps(zmm5_2, zmm6)
                zmm4_2 = __addps_xmmps_memps(
                    _mm_add_ps(_mm_sub_ps(zmm4_2, _mm_mul_ps(zmm0, zmm2)), zmm5_2), rax_14[1])
                int32_t rax_15 = r12
                r12 += 1
                var_e8 = zmm4_2[0]
                zmm0 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
                var_e0 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa)[0]
                var_e4 = zmm0[0]
                
                if (r12 s> r15)
                    sub_140638a00(&var_d8)
                    r15 = var_cc
                    rbx = var_d8
                
                i_1 += 1
                r14_2 += 0xc
                int64_t rcx_15 = sx.q(rax_15) * 3
                float rax_17 = var_e0
                *(rbx + (rcx_15 << 2)) = var_e8.q
                *(rbx + (rcx_15 << 2) + 8) = rax_17
            while (i_1 s< *(rdi_1 + 0x38))
            
            r14 = arg2
        
        (*(*r14 + 0x38))(r14, rbx, zx.q(r12), *(rdi_1 + 0x40), *(rdi_1 + 0x48), arg1 + 0x1c0)
        
        if (rbx != 0)
            sub_140a74f90(rbx)
        
        int64_t result
        result.b = 0
        return result

return 1
