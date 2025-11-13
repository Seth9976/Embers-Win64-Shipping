// 函数: sub_141bf1a50
// 地址: 0x141bf1a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (*(arg1 + 0x758) == 1)
    uint128_t zmm0
    zmm0.d = arg2.d f* *(arg1 + 0x780)
    
    if (*(arg1 + 0x794) == 0)
        zmm0 ^= data_142d3f780
    
    int64_t rax = *(arg1 + 0x738)
    zmm0.q = fconvert.d(zmm0.d)
    arg2.q = _mm_cvtepi32_pd(zx.q(rax.d)).q f* zmm0.q
    arg2.q = arg2.q f/ _mm_cvtepi32_pd(zx.q((rax u>> 0x20).d)).q
    int64_t rcx = int.q(arg2.q)
    uint128_t zmm2 = arg2
    
    if (rcx != -0x8000000000000000)
        zmm0.q = float.d(rcx)
        
        if (not(zmm0.q f== arg2.q))
            zmm2.q = float.d(rcx - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm2, zmm2.q))) & 1))
    
    arg2.q = arg2.q f- zmm2.q
    int32_t rax_4 = int.d(zmm2.q)
    
    if (not(arg2.q f<= 0.0))
        arg2 = _mm_min_sd(_mm_cvtps_pd(0x3f7fffff).q, arg2.q)
    
    zmm0 = _mm_cvtpd_ps(arg2)
    int32_t arg_c
    
    if (zmm0.d f>= 0f)
        arg_c = _mm_min_ss(zmm0.d, 0x3f7fffff).d
    else
        arg_c = 0
    
    int64_t rbx_1 = *(arg1 + 0x744)
    int32_t arg_8
    arg_8.q = rax_4.q
    zmm2.d = arg_c.d f+ *(arg1 + 0x748)
    arg2.d = zmm2.d f+ zmm2.d
    arg2.d = arg2.d f- 0.5f
    int32_t rcx_3 = int.d(arg2.d)
    arg2 = zmm2
    *(arg1 + 0x744) = (rcx_3 s>> 1) + rbx_1.d + rax_4
    int32_t rcx_7 = int.d(arg2.d)
    
    if (rcx_7 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_7)).d f== arg2.d))
        arg2 = _mm_cvtepi32_ps(zx.o(rcx_7 - (_mm_movemask_ps(_mm_unpacklo_ps(arg2, arg2.q)) & 1)))
    
    zmm2.d = zmm2.d f- arg2.d
    arg_8.q = 0
    int64_t arg_18 = 0
    *(arg1 + 0x748) = zmm2.d
    int64_t rax_7 = *(arg1 + 0x744)
    arg_8.q = rax_7
    int32_t temp0_13 = rax_7.d
    int64_t r13
    
    if (temp0_13 s< 0 || (temp0_13 == 0 && arg_c.d f< 0f))
        r13.b = 1
    else
        r13.b = 0
    
    int32_t r8_1 = *(arg1 + 0x74c)
    arg_8.q = rax_7
    int64_t r12
    
    if (rax_7.d s> r8_1 || (rax_7.d == r8_1 && 0f f>= r8_1.q:4.d))
        r12.b = 1
    else
        r12.b = 0
    
    char r9_1 = *(arg1 + 0x794)
    int64_t rdx_1 = *(arg1 + 0x750)
    arg_8.q = rbx_1
    int64_t r14
    
    if (r9_1 == 0)
        if (rbx_1.d s> rdx_1.d || (rbx_1.d == rdx_1.d && not(0f f<= rdx_1:4.d)))
            arg_8.q = rdx_1
            
            if (rdx_1.d s> rax_7.d || (rdx_1.d == rax_7.d && 0f f>= rax_7:4.d))
                r14.b = 1
            else
                r14.b = 0
        else
            r14.b = 0
    else if (rbx_1.d s< rdx_1.d || (rbx_1.d == rdx_1.d && not(0f f>= rdx_1:4.d)))
        arg_8.q = rdx_1
        
        if (rdx_1.d s< rax_7.d || (rdx_1.d == rax_7.d && not(0f f> rax_7:4.d)))
            r14.b = 1
        else
            r14.b = 0
    else
        r14.b = 0
    
    if (r13.b != 0 || r12.b != 0)
        *(arg1 + 0x77c) += 1
    else if (r14.b != 0 && *(arg1 + 0x77c) s>= *(arg1 + 0x778) - 1)
        *(arg1 + 0x77c) += 1
    
    int32_t rcx_12 = *(arg1 + 0x778)
    int64_t r15
    
    if (rcx_12 == 0 || *(arg1 + 0x77c) s< rcx_12)
        r15.b = 0
    else
        r15.b = 1
    
    if (r13.b == 0)
        if (r12.b != 0)
            arg_18.d = r8_1 - 1
            arg_18:4.d = __minss_xmmss_memss(0x3f7fffff, 0x3f7fffff).d
            
            if (r15.b != 0)
                *(arg1 + 0x744) = arg_18
            else if (*(arg1 + 0x788) != 2)
                arg_8.q = rax_7
                zmm2.d = 0f f- r8_1.q:4.d
                arg2.d = zmm2.d f+ zmm2.d
                arg2.d = arg2.d f- 0.5f
                int32_t rcx_21 = int.d(arg2.d) s>> 1
                int32_t rax_26 = rax_7.d - r8_1 + rcx_21
                zmm2.d = zmm2.d f- _mm_cvtepi32_ps(zx.o(rcx_21)).d
                
                if (zmm2.d f>= 0f)
                    arg_c = _mm_min_ss(zmm2.d, 0x3f7fffff).d
                    rbx_1 = rax_26.q
                    *(arg1 + 0x744) = rbx_1
                else
                    arg_c = 0
                    rbx_1 = rax_26.q
                    *(arg1 + 0x744) = rbx_1
            else
                rcx_12.b = r9_1 == 0
                *(arg1 + 0x794) = rcx_12.b
                arg_8.q = rax_7
                zmm2.d = 0f f- r8_1.q:4.d
                arg2.d = zmm2.d f+ zmm2.d
                arg2.d = arg2.d f- 0.5f
                int32_t rcx_18 = int.d(arg2.d) s>> 1
                int32_t r8_2 = rax_7.d - r8_1 + rcx_18
                zmm2.d = zmm2.d f- _mm_cvtepi32_ps(zx.o(rcx_18)).d
                
                if (zmm2.d f>= 0f)
                    arg_c = _mm_min_ss(zmm2.d, 0x3f7fffff).d
                else
                    arg_c = 0
                
                arg_8.q = arg_18
                zmm2.d = arg_c.d f- r8_2.q:4.d
                arg2.d = zmm2.d f+ zmm2.d
                arg2.d = arg2.d f- 0.5f
                int32_t rax_22 = int.d(arg2.d) s>> 1
                int32_t rdx_4 = r8_1 - 1 - r8_2 + rax_22
                zmm2.d = zmm2.d f- _mm_cvtepi32_ps(zx.o(rax_22)).d
                
                if (zmm2.d f>= 0f)
                    arg_c = _mm_min_ss(zmm2.d, 0x3f7fffff).d
                    *(arg1 + 0x744) = rdx_4.q
                else
                    arg_c = 0
                    *(arg1 + 0x744) = rdx_4.q
        else if (r14.b != 0 && r15.b != 0)
            *(arg1 + 0x744) = rdx_1
    else if (r15.b != 0)
        arg_8.q = 0
        *(arg1 + 0x744) = 0
    else if (*(arg1 + 0x788) != 2)
        arg_8.q = r8_1.q
        zmm2.d = 0f f+ *(arg1 + 0x748)
        arg2.d = zmm2.d f* 2f
        arg2.d = arg2.d f- 0.5f
        int32_t rax_12 = int.d(arg2.d)
        arg2 = zmm2
        *(arg1 + 0x744) += (rax_12 s>> 1) + r8_1
        int32_t rcx_14 = int.d(arg2.d)
        
        if (rcx_14 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_14)).d f== arg2.d))
            arg2 =
                _mm_cvtepi32_ps(zx.o(rcx_14 - (_mm_movemask_ps(_mm_unpacklo_ps(arg2, arg2.q)) & 1)))
        
        zmm2.d = zmm2.d f- arg2.d
        *(arg1 + 0x748) = zmm2.d
        rbx_1 = *(arg1 + 0x744)
    else
        arg_8.q = 0
        arg_8.q = rax_7
        rcx_12.b = r9_1 == 0
        *(arg1 + 0x794) = rcx_12.b
        arg_18 = 0
        int32_t temp1_1 = rax_7.d
        
        if (temp1_1 s> 0 || (temp1_1 == 0 && 0f >= 0f))
            *(arg1 + 0x744) = rax_7
        else
            arg_8.q = rax_7
            
            if (0f != 0f)
                arg2.d = 1f - 0f
                
                if (arg2.d f>= 0f)
                    arg_c = __minss_xmmss_memss(arg2.d, 0x3f7fffff).d
                    *(arg1 + 0x744) = (0xffffffff - rax_7.d).q
                else
                    arg_c = 0
                    *(arg1 + 0x744) = (0xffffffff - rax_7.d).q
            else
                arg_c = 0
                *(arg1 + 0x744) = neg.d(rax_7.d).q
    
    result = sub_140d3c6e0(arg1 + 0x418)
    int64_t* rbx_2
    
    if (result == 0 || *(arg1 + 0x420) == 0)
        rbx_2 = arg1 + 0x28
    else
        int64_t* rcx_23 = *(arg1 + 0x408)
        (*(*rcx_23 + 0x280))(rcx_23)
        int32_t rdx_5 = *(arg1 + 0x740)
        *(arg1 + 0x795) |= 1
        arg_8.q = rdx_5.q
        zmm2.d = rbx_1:4.d.d f+ 0f
        arg2.d = zmm2.d f+ zmm2.d
        arg2.d = arg2.d f- 0.5f
        int32_t rax_29 = int.d(arg2.d)
        arg2 = zmm2
        int32_t rcx_24 = int.d(arg2.d)
        
        if (rcx_24 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_24)).d f== arg2.d))
            arg2 =
                _mm_cvtepi32_ps(zx.o(rcx_24 - (_mm_movemask_ps(_mm_unpacklo_ps(arg2, arg2.q)) & 1)))
        
        zmm2.d = zmm2.d f- arg2.d
        
        if (zmm2.d f>= 0f)
            arg_c = _mm_min_ss(zmm2.d, 0x3f7fffff).d
        else
            arg_c = 0
        
        int64_t rcx_26 = *(arg1 + 0x744)
        arg_18.d = rdx_5
        arg_18:4.d = 0
        zmm2.d = rcx_26:4.d.d f+ arg_18:4.d
        arg2.d = zmm2.d f+ zmm2.d
        arg2.d = arg2.d f- 0.5f
        int32_t rax_36 = int.d(arg2.d)
        arg2 = zmm2
        int32_t rcx_27 = int.d(arg2.d)
        arg_18.d = (rax_36 s>> 1) + rcx_26.d + rdx_5
        
        if (rcx_27 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_27)).d f== arg2.d))
            arg2 =
                _mm_cvtepi32_ps(zx.o(rcx_27 - (_mm_movemask_ps(_mm_unpacklo_ps(arg2, arg2.q)) & 1)))
        
        zmm2.d = zmm2.d f- arg2.d
        
        if (zmm2.d f>= 0f)
            arg_18:4.d = _mm_min_ss(zmm2.d, 0x3f7fffff).d
        else
            arg_18:4.d = 0
        
        void var_d8
        char* rax_42 =
            sub_141a2f570(&var_d8, arg_18, ((rax_29 s>> 1) + rbx_1.d + rdx_5).q, *(arg1 + 0x738), 0)
        char rcx_30 = 0
        int64_t var_110_1 = 0x3f800000
        int32_t var_108_1 = 0
        int64_t var_100_1 = 0
        int64_t var_f8_1 = 0
        int128_t zmm1 = *(rax_42 + 0x10)
        int32_t var_ec_1 = 0x80000000
        uint128_t var_138 = *rax_42
        int32_t var_f0_1 = *(arg1 + 0x758)
        int128_t var_128_1 = zmm1
        uint64_t var_118_1 = *(rax_42 + 0x20)
        int32_t var_e8_1 = 0
        
        if (r13.b != 0 || r12.b != 0 || r14.b != 0)
            rcx_30 = 1
        
        char var_e4
        char var_e4_1 = (var_e4 & 0xc0) | rcx_30
        rbx_2 = arg1 + 0x28
        void var_b0
        sub_141a474c0(arg1 + 0x418, sub_141a2f010(&var_b0, &var_138), rbx_2, data_143f312e0)
        *(arg1 + 0x795) &= 0xfe
        result = sub_141b91d30(arg1)
        
        if (var_100_1 != 0)
            result = sub_140a74f90(var_100_1)
    
    if (r15.b != 0)
        bool cond:12_1 = *(arg1 + 0x784) == 0
        *(arg1 + 0x758) = 0
        
        if (not(cond:12_1))
            sub_141a64f00(&rbx_2[0x1f], rbx_2)
            sub_141a3cee0(&rbx_2[1], rbx_2)
        
        int64_t* rax_46 = sub_140d3c6e0(arg1 + 0x410)
        int64_t r8_5 = *rax_46
        (*(r8_5 + 0x2f0))(rax_46, arg1, r8_5)
        return sub_140920c10(arg1 + 0x760, arg1)

return result
