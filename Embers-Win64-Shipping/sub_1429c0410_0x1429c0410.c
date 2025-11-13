// 函数: sub_1429c0410
// 地址: 0x1429c0410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t var_48 = -2
int64_t rbp = sx.q(arg5)

if (rbp.d s> 0)
    result = nullptr
    __builtin_memset(arg2, 0, rbp << 2)

int64_t rsi = sx.q(arg6)

if (rsi.d != 0)
    int128_t var_40
    __builtin_memset(&var_40, 0, 0x18)
    int64_t r15_1 = 0
    int32_t rdi_2 = arg7
    int32_t zmm2[0x4]
    
    if (rdi_2 s> 1)
        sub_1429b1550(&var_40, rsi)
        int32_t i = 0
        
        if (rsi.d s> 0)
            if (rsi.d u>= 0x10)
                zmm2 = data_142e11d00
                int32_t rax_1 = rsi.d & 0x8000000f
                
                if (rax_1 s< 0)
                    rax_1 = ((rax_1 - 1) | 0xfffffff0) + 1
                
                int32_t rdi_3 = 8
                int64_t rdx_1 = 0x20
                
                do
                    *(var_40.q + rdx_1 - 0x20) = _mm_add_epi32(_mm_shuffle_epi32(zx.o(i), 0), zmm2)
                    *(var_40.q + rdx_1 - 0x10) =
                        _mm_add_epi32(_mm_shuffle_epi32(zx.o(rdi_3 - 4), 0), zmm2)
                    *(var_40.q + rdx_1) = _mm_add_epi32(_mm_shuffle_epi32(zx.o(rdi_3), 0), zmm2)
                    *(var_40.q + rdx_1 + 0x10) =
                        _mm_add_epi32(_mm_shuffle_epi32(zx.o(rdi_3 + 4), 0), zmm2)
                    i += 0x10
                    rdi_3 += 0x10
                    rdx_1 += 0x40
                while (i s< rsi.d - rax_1)
                
                rdi_2 = arg7
            
            if (i s< rsi.d)
                int64_t rdx_2 = sx.q(i) << 2
                
                do
                    *(var_40.q + rdx_2) = i
                    i += 1
                    rdx_2 += 4
                while (i s< rsi.d)
        
        result = (*(*arg1 + 0x10))(arg1, var_40.q, arg3, arg4, rbp.d, rsi.d, rdi_2)
        int64_t var_30
        r15_1 = var_30
    
    int32_t i_1 = 0
    int32_t* r13_1 = var_40.q
    
    if (rsi.d s> 0)
        int32_t* r12_1 = r13_1
        uint128_t zmm4 = 0x3ff0000000000000
        
        do
            int32_t i_2
            
            if (rdi_2 s<= 1)
                i_2 = i_1
            else
                i_2 = *r12_1
            
            float zmm3[0x2] = *(arg2 + 8)
            
            if (zmm3[0] >= 1f)
                break
            
            int64_t rcx_3 = 0
            uint128_t zmm0
            uint128_t zmm1
            
            if (rbp s>= 4)
                int64_t i_3 = sx.q(i_2)
                zmm0 = _mm_cvtps_pd(zmm3)
                zmm2 = zmm4
                zmm2[0].q = zmm2[0].q f- zmm0.q
                void* rdx_4 = arg2 + 8
                void* r9_1 = arg3 + 0x10
                int64_t j_1 = ((rbp - 4) u>> 2) + 1
                rcx_3 = j_1 << 2
                int64_t j
                
                do
                    zmm1.q = _mm_cvtps_pd((*(*(r9_1 - 0x10) + (i_3 << 2))).q).q f* zmm2[0].q
                    zmm1.q = zmm1.q f+ _mm_cvtps_pd((*(rdx_4 - 8)).q).q
                    *(rdx_4 - 8) = _mm_cvtpd_ps(zmm1).d
                    zmm1.q = _mm_cvtps_pd((*(*(r9_1 - 8) + (i_3 << 2))).q).q f* zmm2[0].q
                    zmm1.q = zmm1.q f+ _mm_cvtps_pd((*(rdx_4 - 4)).q).q
                    *(rdx_4 - 4) = _mm_cvtpd_ps(zmm1).d
                    zmm1.q = _mm_cvtps_pd((*(*r9_1 + (i_3 << 2))).q).q f* zmm2[0].q
                    zmm1.q = zmm1.q f+ _mm_cvtps_pd((*rdx_4).q).q
                    *rdx_4 = _mm_cvtpd_ps(zmm1).d
                    result = *(r9_1 + 8)
                    zmm1.q = _mm_cvtps_pd((*(result + (i_3 << 2))).q).q f* zmm2[0].q
                    zmm1.q = zmm1.q f+ _mm_cvtps_pd((*(rdx_4 + 4)).q).q
                    *(rdx_4 + 4) = _mm_cvtpd_ps(zmm1).d
                    r9_1 += 0x20
                    rdx_4 += 0x10
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                rdi_2 = arg7
            
            if (rcx_3 s< rbp)
                zmm0.q = fconvert.d(zmm3[0])
                zmm2 = zmm4
                zmm2[0].q = zmm2[0].q f- zmm0.q
                
                do
                    result = *(arg3 + (rcx_3 << 3))
                    zmm1.q = _mm_cvtps_pd((*(result + (sx.q(i_2) << 2))).q).q f* zmm2[0].q
                    zmm1.q = zmm1.q f+ _mm_cvtps_pd((*(arg2 + (rcx_3 << 2))).q).q
                    *(arg2 + (rcx_3 << 2)) = _mm_cvtpd_ps(zmm1).d
                    rcx_3 += 1
                while (rcx_3 s< rbp)
            
            i_1 += 1
            r12_1 = &r12_1[1]
        while (i_1 s< rsi.d)
        
        r13_1 = var_40.q
    
    if (r13_1 != 0)
        int32_t* rax_16 = r13_1
        
        if (((r15_1 - r13_1) & 0xfffffffffffffffc) u>= 0x1000)
            r13_1 = *(r13_1 - 8)
            
            if (rax_16 - r13_1 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        return j_sub_140a74f90(r13_1)

return result
