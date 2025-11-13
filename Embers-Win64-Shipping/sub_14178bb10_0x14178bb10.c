// 函数: sub_14178bb10
// 地址: 0x14178bb10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t result = __security_cookie ^ &var_c8
int64_t result_1 = result
int64_t* rdi = nullptr

if (*(arg2 + 0xc) u>= 2)
    rdi = arg2

if (rdi != 0)
    void* r8_1 = *rdi
    int64_t rcx = sx.q(rdi[1].d)
    result = *(r8_1 + 0x398)
    
    if (*(rcx + result) == 4)
        int64_t rax_1 = *(r8_1 + 0x1b8)
        int64_t rdx = rcx * 3
        int64_t rcx_1 = *(r8_1 + 0x3f8)
        *(rcx_1 + (rdx << 2)) = *(rax_1 + (rdx << 2))
        *(rcx_1 + (rdx << 2) + 8) = *(rax_1 + (rdx << 2) + 8)
        int64_t r8_2 = sx.q(rdi[1].d) * 3
        void* rax_4 = *rdi
        int64_t rcx_2 = *(rax_4 + 0x1d0)
        int64_t rdx_1 = *(rax_4 + 0x410)
        *(rdx_1 + (r8_2 << 2)) = *(rcx_2 + (r8_2 << 2))
        *(rdx_1 + (r8_2 << 2) + 8) = *(rcx_2 + (r8_2 << 2) + 8)
        void* rax_6 = *arg1
        int64_t* i = *(rax_6 + 0x10)
        int64_t var_88
        int128_t* var_78
        uint128_t var_68
        
        for (void* r14_3 = &i[sx.q(*(rax_6 + 0x18)) * 8]; i != r14_3; i = &i[8])
            int64_t rax_7 = *i
            int128_t* rdx_2 = nullptr
            var_88 = rax_7
            var_78 = nullptr
            
            if (rax_7 != 0)
                void* rax_8 = i[2]
                void* rcx_3 = &i[4]
                
                if (rax_8 != 0)
                    rcx_3 = rax_8
                
                (**rcx_3)(rcx_3, &var_78)
                rdx_2 = var_78
            
            int128_t* rcx_4 = &var_68
            
            if (rdx_2 != 0)
                rcx_4 = rdx_2
            
            int32_t var_90 = (*arg1[1]).d
            var_88((*(*rcx_4 + 8))(rcx_4, rdx_2), rdi, &var_90)
            
            if (var_88 != 0)
                int128_t* rax_13 = var_78
                int128_t* rcx_6 = &var_68
                
                if (rax_13 != 0)
                    rcx_6 = rax_13
                
                (*(*rcx_6 + 0x10))(rcx_6)
        
        int64_t* rcx_7 = arg1[2]
        uint128_t zmm6
        uint128_t var_28_1 = zmm6
        int64_t r8_4 = *rcx_7
        (*(r8_4 + 0x18))(rcx_7, rdi, r8_4)
        int64_t* rcx_8 = arg1[3]
        int64_t r8_5 = *rcx_8
        (*(r8_5 + 0x18))(rcx_8, rdi, r8_5)
        int64_t* rcx_9 = arg1[4]
        int64_t r8_6 = *rcx_9
        (*(r8_6 + 0x18))(rcx_9, rdi, r8_6)
        uint128_t zmm3 = data_1439b8ea4
        float var_a0
        uint128_t zmm0
        int64_t zmm1
        uint128_t zmm2
        uint128_t zmm4_1
        uint128_t zmm5_1
        
        if (not(zmm3.d f< 0f))
            int64_t rcx_10 = sx.q(rdi[1].d) * 3
            int64_t rdx_8 = *(*rdi + 0x1d0)
            zmm5_1 = *(rdx_8 + (rcx_10 << 2) + 4)
            zmm6 = *(rdx_8 + (rcx_10 << 2))
            zmm4_1 = *(rdx_8 + (rcx_10 << 2) + 8)
            zmm2.d = zmm6.d f* zmm6.d
            zmm0.d = zmm5_1.d f* zmm5_1.d
            zmm1.d = zmm4_1.q.d f* zmm4_1.d
            zmm2.d = zmm2.d f+ zmm0.d
            zmm2.d = zmm2.d f+ zmm1.d
            
            if (not(zmm2.d f<= *arg1[5]))
                zmm3.d = zmm3.d f/ _mm_sqrt_ss(0, zmm2.d).d
                zmm4_1.d = zmm4_1.d f* zmm3.d
                zmm0.d = zmm3.d f* zmm6.d
                zmm1.d = zmm3.q.d f* zmm5_1.d
                var_a0 = zmm4_1.d
                *(rdx_8 + (rcx_10 << 2)) = (_mm_unpacklo_ps(zmm0, zmm1)).q
                *(rdx_8 + (rcx_10 << 2) + 8) = var_a0
        
        zmm3 = data_1439b8ea8
        
        if (not(zmm3.d f< 0f))
            int64_t rcx_11 = sx.q(rdi[1].d) * 3
            int64_t rdx_9 = *(*rdi + 0x1b8)
            zmm5_1 = *(rdx_9 + (rcx_11 << 2) + 4)
            zmm4_1 = *(rdx_9 + (rcx_11 << 2))
            zmm6 = *(rdx_9 + (rcx_11 << 2) + 8)
            zmm2.d = zmm4_1.d f* zmm4_1.d
            zmm0.d = zmm5_1.d f* zmm5_1.d
            zmm1.d = zmm6.q.d f* zmm6.d
            zmm2.d = zmm2.d f+ zmm0.d
            zmm2.d = zmm2.d f+ zmm1.d
            
            if (not(zmm2.d f<= *arg1[6]))
                zmm3.d = zmm3.d f/ _mm_sqrt_ss(0, zmm2.d).d
                zmm4_1.d = zmm4_1.d f* zmm3.d
                zmm5_1.d = zmm5_1.d f* zmm3.d
                zmm6.d = zmm6.d f* zmm3.d
                *(rdx_9 + (rcx_11 << 2)) = (_mm_unpacklo_ps(zmm4_1, zmm5_1.q)).q
                var_a0 = zmm6.d
                *(rdx_9 + (rcx_11 << 2) + 8) = var_a0
        
        int64_t* rcx_12 = arg1[7]
        int64_t r8_7 = *rcx_12
        (*(r8_7 + 0x18))(rcx_12, rdi, r8_7, zmm3)
        void* r9_1 = *rdi
        int64_t r8_8 = sx.q(rdi[1].d)
        result = *(r9_1 + 0x158)
        
        if (*(r8_8 + result) != 0)
            int64_t rcx_13 = *(r9_1 + 0x3c8)
            int64_t rdx_11 = r8_8 * 3
            int64_t rax_26 = *(r9_1 + 0x128)
            var_88.o = *((r8_8 << 4) + *(r9_1 + 0x3e0))
            zmm0 = *(rcx_13 + (rdx_11 << 2) + 4)
            zmm3 = _mm_unpacklo_ps(*(rcx_13 + (rdx_11 << 2)), *(rcx_13 + (rdx_11 << 2) + 8))
            zmm0 = _mm_unpacklo_ps(zmm0, 0)
            zmm2 = data_14399f66c
            var_78.o = _mm_unpacklo_ps(zmm3, zmm0.q)
            var_68 = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, data_14399f670.q), 
                _mm_unpacklo_ps(zmm2, 0).q)
            float var_a8
            sub_1417598c0(rax_26 + r8_8 * 0x18, &var_a8, &var_88)
            void* r10_1 = *rdi
            int64_t r9_2 = sx.q(rdi[1].d)
            int64_t rcx_16 = *(r10_1 + 0x1b8)
            int64_t rdx_13 = r9_2 * 3
            uint32_t zmm4_2[0x4] = *arg1[1]
            zmm4_2[0] = zmm4_2[0] f* *(rcx_16 + (rdx_13 << 2))
            zmm4_2[0] = zmm4_2[0] f* *(rcx_16 + (rdx_13 << 2) + 4)
            zmm4_2[0] = zmm4_2[0] f* *(rcx_16 + (rdx_13 << 2) + 8)
            uint32_t temp0_11[0x4] = _mm_and_ps(zmm4_2, 0x7fffffff)
            uint32_t temp0_12[0x4] = _mm_and_ps(zmm4_2, 0x7fffffff)
            float var_a4
            float zmm1_1 = var_a4 f- temp0_12[0]
            uint32_t temp0_13[0x4] = _mm_and_ps(zmm4_2, 0x7fffffff)
            float var_a4_1 = zmm1_1
            var_a8 = var_a8 f- temp0_11[0]
            float var_9c
            float var_9c_1 = var_9c f+ temp0_11[0]
            float var_a0_1 = var_a0 f- temp0_13[0]
            float var_94
            float var_94_1 = var_94 f+ temp0_13[0]
            float var_98
            float var_98_1 = var_98 f+ temp0_12[0]
            result = sub_141756120(r10_1, r9_2.d, &var_a8)

__security_check_cookie(result_1 ^ &var_c8)
return result
