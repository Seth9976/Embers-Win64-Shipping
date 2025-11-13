// 函数: sub_140f53f30
// 地址: 0x140f53f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x60c) != *(arg4 + 0x50))
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    char rax_1 = sub_140e19840(arg1, arg6)
    
    if (rax_1 == 0)
        *(arg1 + 0x608) = rax_1
        *(arg1 + 0x60c) = 0xffffffff
        *arg2 = rax_1
    else if (*(arg1 + 0x608) != 0)
        float zmm9[0x4] = arg3[2]
        zmm9[0] = zmm9[0] f* *arg3
        float temp0_2[0x4] = __maxss_xmmss_memss(zmm9[0], 0x42c80000)
        int32_t rcx_6 = *sub_140ebd5a0(arg1 + 0x468)
        
        if (rcx_6 s> 1 && (*(arg4 + 8) & 3) != 0)
            arg5 = _mm_cvtepi32_ps(zx.o(rcx_6))
            temp0_2[0] = temp0_2[0] f* arg5.d
        
        uint128_t var_18_1 = arg7
        uint128_t zmm2
        
        if ((*(arg4 + 8) & 0xc) != 0)
            arg7.d = (*(arg4 + 0x28)).d f/ temp0_2[0]
            char* rax_5 = sub_140eff7d0(arg1 + 0x5a0)
            
            if (*rax_5 != 0)
                arg5 = sub_140f47740(arg1)
                zmm2.q = fconvert.d(arg5.d)
            
            if (*rax_5 == 0 || zmm2.q f!= *(arg1 + 0x618))
                if (*sub_140eff7d0(arg1 + 0x5b8) != 0)
                    arg5 = sub_140f47b20(arg1)
                    arg6.o = zx.o(0)
                    arg6.q = fconvert.d(arg5.d)
                    
                    if (not(arg6.q f!= *(arg1 + 0x618)))
                        arg6.o = arg7
                        arg5, arg6, arg8, arg9 = sub_140f2b070(arg1, arg6.o, 0)
            else
                arg6.o = arg7
                arg5, arg6, arg8, arg9 = sub_140f2ae30(arg1, arg6.o, 0)
        
        uint128_t var_28_1 = arg8
        uint128_t var_38_1 = arg9
        
        if (*(arg1 + 0x418) != 0)
            if (0f f>= *(arg4 + 0x28))
                arg9 = 0xbf800000
            else
                arg9 = 0x3f800000
            
            int32_t* rax_12
            
            if (*(arg1 + 0x484) != 0 && *(arg1 + 0x454) != 0)
                rax_12 = sub_140eff5d0(arg1 + 0x450, arg5.d)
            
            if (*(arg1 + 0x484) == 0 || *(arg1 + 0x454) == 0 || 0f f>= *rax_12)
                arg7 = *(arg4 + 0x28)
                arg5 = __andps_xmmxud_memxud(zx.o(*(arg1 + 0x618)), data_142d57d00)
                arg8 = 0x3ff0000000000000
                arg7.d = arg7.d f/ temp0_2[0]
                arg7 = __andps_xmmxud_memxud(arg7, data_142d3f770)
                
                if (not(arg5.q f< arg8.q))
                    arg8 = __minsd_xmmsd_memsd(arg5.q, 0x47efffffe0000000)
                
                int32_t* rax_16 = sub_140eff5d0(arg1 + 0x498, arg5.d)
                arg5 = _mm_cvtpd_ps(arg8)
                arg6.o = *rax_16
                arg7.d = arg7.d f* arg9.d
                arg7.d = arg7.d f* powf(arg5.d, arg6.d)
                zmm2 = _mm_cvtps_pd(arg7.q)
            else
                int32_t* rax_13 = sub_140ebd5a0(arg1 + 0x480)
                arg8 = *(arg4 + 0x28)
                arg5 = _mm_cvtepi32_ps(zx.o(*rax_13))
                arg8.d = arg8.d f/ arg5.d
                arg6.o = *sub_140eff5d0(arg1 + 0x498, arg5.d)
                float zmm0_14 = powf((*sub_140eff5d0(arg1 + 0x450, arg5.d)).d, arg6.d)
                arg8.d = __andps_xmmxud_memxud(arg8, data_142d3f770).d f* arg9.d
                arg8.d = arg8.d f* zmm0_14
                zmm2 = _mm_cvtps_pd(arg8.q)
            
            zmm2.q = zmm2.q f+ *(arg1 + 0x618)
        else
            void* r14
            void* arg_8 = r14
            
            if (*(arg1 + 0x4b4) == 0)
                r14.b = 0
            else
                int32_t* rax_7 = sub_140eff5d0(arg1 + 0x4b0, arg5.d)
                arg5 = sub_140f47b20(arg1)
                
                if (arg5.d f>= *rax_7)
                    r14.b = 0
                else
                    int32_t* rax_8 = sub_140eff5d0(arg1 + 0x4b0, arg5.d)
                    arg5 = sub_140f47740(arg1)
                    
                    if (arg5.d f<= *rax_8)
                        r14.b = 0
                    else
                        r14.b = 1
            
            uint128_t zmm11 = *sub_140eff5d0(arg1 + 0x498, arg5.d)
            uint128_t zmm0_1 = sub_140f47740(arg1)
            arg6.o = sub_140f47b20(arg1)
            uint128_t zmm0_3
            zmm0_3, arg6 = sub_140f45890(*(arg1 + 0x618), arg6.q, zmm0_1.d)
            arg8 = zmm0_3
            
            if (not(zmm11.d f== 1f))
                if (r14.b == 0)
                    arg6.o = zmm11
                    zmm0_3.d = 1f f- arg8.d
                    zmm0_3 = powf(zmm0_3.d, arg6.d)
                    arg8.d = 1f f- zmm0_3.d
                else
                    int32_t* rax_10 = sub_140eff5d0(arg1 + 0x4b0, zmm0_3.d)
                    uint128_t zmm0_4 = sub_140f47740(arg1)
                    arg6.o = sub_140f47b20(arg1)
                    zmm0_3, arg6 = sub_140f61ad0(arg8.d, 
                        sub_140f45890(_mm_cvtps_pd((*rax_10)[0])[0], arg6.q, zmm0_4.d), zmm11)
                    arg8 = zmm0_3
            
            arg8.d = arg8.d f* temp0_2[0]
            arg9 = zx.o(0)
            arg8.d = arg8.d f+ *(arg4 + 0x28)
            
            if (not(arg8.d f>= arg9.d))
                arg8 = zx.o(0)
            else if (not(arg8.d f< temp0_2[0]))
                arg8 = temp0_2
            
            arg8.d = arg8.d f/ temp0_2[0]
            
            if (not(arg8.d f< arg9.d))
                arg9 = _mm_min_ss(arg8.d, 0x3f800000)
            
            if (not(zmm11.d f== 1f))
                arg8.d = 1f f/ zmm11.d
                
                if (r14.b == 0)
                    arg6.o = arg8
                    zmm0_3.d = 1f f- arg9.d
                    arg9.d = 1f - powf(zmm0_3.d, arg6.d)
                else
                    int32_t* rax_11 = sub_140eff5d0(arg1 + 0x4b0, zmm0_3.d)
                    uint128_t zmm0_7 = sub_140f47740(arg1)
                    arg6.o = sub_140f47b20(arg1)
                    uint128_t zmm0_10
                    zmm0_10, arg6 = sub_140f61ad0(arg9.d, 
                        sub_140f45890(_mm_cvtps_pd((*rax_11)[0])[0], arg6.q, zmm0_7.d), arg8)
                    arg9 = zmm0_10
            
            arg7.q = fconvert.d(sub_140f47740(arg1))
            int128_t zmm10
            zmm10.d = 1f f- arg9.d
            arg6.o = zx.o(0)
            zmm2.q = fconvert.d(sub_140f47b20(arg1).d)
            arg6.q = fconvert.d(arg9.d)
            zmm2.q = zmm2.q f* _mm_cvtps_pd(zmm10.q)
            arg6.q = arg6.q f* arg7.q
            zmm2.q = zmm2.q f+ arg6.q
        
        arg6.o = zmm2
        int512_t zmm6
        int512_t zmm7
        int512_t zmm8
        zmm6, zmm7, zmm8 = sub_140f2d8d0(arg1, arg6, 0, 1)
        zmm8.o = var_38_1
        zmm7.o = var_28_1
        zmm6.o = var_18_1
        *arg2 = 1
    else
        arg5.d = __andps_xmmxud_memxud(*(arg4 + 0x28), data_142d3f770).d f+ *(arg1 + 0x448)
        *(arg1 + 0x448) = arg5.d
        
        if (not(sub_140e66040(data_143e29f28) f>= *(arg1 + 0x448)))
            sub_140f44b60(arg1)
            *(arg1 + 0x608) = 1
            sub_140910050(arg1 + 0x3c8)
        
        arg6.o = *(arg4 + 0x18)
        arg6.d = arg6.d f+ arg6.d
        arg6.d = arg6.d f+ 0.5f
        int32_t rcx_3 = int.d(arg6.d)
        arg6.o = *(arg4 + 0x1c)
        arg6.d = arg6.d f+ arg6.d
        *(arg1 + 0x610) = rcx_3 s>> 1
        arg6.d = arg6.d f+ 0.5f
        *(arg1 + 0x614) = int.d(arg6.d) s>> 1
        *arg2 = 1
    
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702

return arg2
