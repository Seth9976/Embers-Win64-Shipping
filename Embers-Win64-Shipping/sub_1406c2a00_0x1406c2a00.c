// 函数: sub_1406c2a00
// 地址: 0x1406c2a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_1406c8bf0()
int64_t* result_1 = result
void* r12 = result[0x23]

if (r12 == 0)
    int64_t r8_1 = *result
    result = (*(r8_1 + 0x390))(result, arg4, r8_1)
    r12 = result_1[0x23]

uint128_t zmm14 = 0x7fffffffffffffff
uint128_t zmm0_1
int128_t zmm6
uint128_t zmm7

if (*(arg1 + 0x1c0) == 3)
    result = zx.q(*(arg1 + 0x708))
    
    if (result.b != 1)
        if (result.b != 0)
        label_1406c2a87:
            
            if (*(arg1 + 0x6f0) != 0)
                result = zx.q(*(arg1 + 0x6c4))
                int32_t rcx_1
                
                if (result.d s< 0 || *(arg1 + 0x528) s> 2)
                    rcx_1 = *(arg1 + 0x6c8)
                
                if ((result.d s>= 0 && *(arg1 + 0x528) s<= 2)
                        || (rcx_1 s>= 0 && *(arg1 + 0x4d0) s<= 2))
                    arg4.o = zx.o(*(arg1 + 0x640))
                    arg4.q = arg4.q f- 0.001
                    arg4.o = __maxsd_xmmsd_memsd(arg4.q, 0x3feccccccccccccd)
                    result, arg4, arg3, zmm6, zmm7 = sub_1406c0510(arg1 + 0x628, arg4.o)
                else if ((result.d s< 0 || *(arg1 + 0x528) s> 0xa)
                        && (rcx_1 s< 0 || *(arg1 + 0x4d0) s> 0xa))
                    arg4.o = zx.o(*(arg1 + 0x640))
                    arg4.q = arg4.q f+ 0.001
                    arg4.o = __minsd_xmmsd_memsd(arg4.q, 0x3ff028f5c28f5c29)
                    result, arg4, arg3, zmm6, zmm7 = sub_1406c0510(arg1 + 0x628, arg4.o)
                else
                    arg3 = zx.o(*(arg1 + 0x640))
                    zmm0_1 = 0x3ff0000000000000
                    
                    if (not(arg3.q f== zmm0_1.q))
                        zmm0_1.q = zmm0_1.q f- arg3.q
                        arg4.o = zmm0_1
                        arg4.q = arg4.q f* 0.001
                        arg4.q = arg4.q f/ _mm_and_ps(zmm0_1, zmm14).q
                        arg4.q = arg4.q f+ arg3.q
                        result, arg4, arg3, zmm6, zmm7 = sub_1406c0510(arg1 + 0x628, arg4.o)
        else if (*(arg1 + 0x220) == 0 && *(arg1 + 0x228) == 0)
            goto label_1406c2a87

int128_t var_38 = zmm6
uint128_t var_48 = zmm7
int128_t zmm8
int128_t var_58 = zmm8
uint128_t zmm9
uint128_t var_68 = zmm9
uint128_t zmm10
uint128_t var_78 = zmm10
uint128_t zmm11
uint128_t var_88 = zmm11
uint128_t zmm12
uint128_t var_98 = zmm12
uint128_t zmm13
uint128_t var_a8 = zmm13
uint128_t zmm15
uint128_t var_c8 = zmm15

if (*(arg1 + 0x228) != 0)
    zmm11 = 0x416312d000000000
    zmm12 = 0x3fe0000000000000
    zmm10 = 0x3eb0c6f7a0b5ed8d
    zmm9 = 0x3fb999999999999a
    zmm13 = 0x3fa47ae147ae147b
    
    while (*(arg1 + 0x699) != 0)
        int32_t rdx = *(arg1 + 0x2e4)
        
        if (*(arg1 + 0x2d8) != rdx)
            int64_t rcx_3 = sx.q(*(arg1 + 0x2d0))
            void* rbx = *(arg1 + 0x250 + (rcx_3 << 3))
            void* r14_1 =
                *(arg1 + 0x250 + (sx.q(mods.dp.d(sx.q(rcx_3.d + rdx), *(arg1 + 0x2dc))) << 3))
            char rax_3 = sub_1406c4a90(arg1)
            
            if (rax_3 == 1)
                arg4.o = zx.o(0)
                zmm0_1.q = *(r14_1 + 0x30) f* zmm11.q
                zmm0_1.q = zmm0_1.q f+ zmm12.q
                int64_t rcx_5 = int.q(zmm0_1.q)
                
                if (rcx_5 != -0x8000000000000000)
                    arg4.o = zx.o(0)
                    arg4.q = float.d(rcx_5)
                    
                    if (not(arg4.q f== zmm0_1.q))
                        zmm0_1.q = float.d(rcx_5
                            - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0_1, zmm0_1.q))) & 1))
                
                *(arg1 + 0x1c8) = int.q(zmm0_1.q)
            else if (rax_3 == 2)
                zmm0_1, arg4, arg3 = sub_1406bc060(arg1 + 0x628)
                zmm0_1.q = zmm0_1.q f* zmm11.q
                arg4.o = zx.o(0)
                zmm0_1.q = zmm0_1.q f+ zmm12.q
                int64_t rdx_3 = int.q(zmm0_1.q)
                
                if (rdx_3 != -0x8000000000000000)
                    arg4.o = zx.o(0)
                    arg4.q = float.d(rdx_3)
                    
                    if (not(arg4.q f== zmm0_1.q))
                        zmm0_1.q = float.d(rdx_3
                            - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0_1, zmm0_1.q))) & 1))
                
                *(arg1 + 0x1c8) = int.q(zmm0_1.q)
            
            int32_t rax_9 = *(r14_1 + 0x28)
            
            if (rax_9 == *(arg1 + 0x53c))
                if (*(rbx + 0x28) != rax_9)
                    *(arg1 + 0x6e0) = float.d(av_gettime_relative()) f* zmm10.q
                
                result = zx.q(*(arg1 + 0x1c0))
                
                if (result.d == 2)
                    break
                
                if (result.d == 5)
                    break
                
                if (*(rbx + 0x28) != *(r14_1 + 0x28))
                    zmm7 = zx.o(0)
                else
                    zmm7.q = *(r14_1 + 0x30) f- *(rbx + 0x30)
                    int32_t rax_11
                    rax_11.b = is_unordered.q(zmm7.q, zmm7.q)
                    
                    if (rax_11.b == 1 || zmm7.q f<= 0.0 || not(zmm7.q f<= *(arg1 + 0x6e8)))
                        zmm7 = zx.o(*(rbx + 0x38))
                
                char rax_12 = *(arg1 + 0x708)
                void* const rax_13
                
                if (rax_12 != 1)
                    if (rax_12 != 0)
                    label_1406c2dae:
                        rax_13 = 0x628
                    label_1406c2db7:
                        int128_t zmm0_3 = sub_1406bc060(rax_13 + arg1)
                        uint32_t zmm0_4[0x4]
                        zmm0_4, arg4 = sub_1406bc060(arg1 + 0x5f8)
                        uint128_t zmm3 = _mm_min_sd(zmm7.q, zmm9.q)
                        arg3.q = zmm0_4.q f- zmm0_3.q
                        
                        if (not(zmm3.q f>= zmm13.q))
                            zmm3 = zmm13
                        
                        if (is_unordered.q(arg3.q, arg3.q) != 1
                                && not(_mm_and_ps(arg3, zmm14)[0].q f>= *(arg1 + 0x6e8)))
                            if (not(arg3.q f> (zmm3 ^ -0x8000000000000000)[0].q))
                                zmm7.q = zmm7.q f+ arg3.q
                                zmm7 = _mm_max_sd(zmm7.q, 0)
                            else if (not(arg3.q f< zmm3.q))
                                if (zmm7.q f<= zmm9.q)
                                    zmm7.q = zmm7.q f+ zmm7.q
                                else
                                    zmm7.q = zmm7.q f+ arg3.q
                    else
                        if (*(arg1 + 0x220) != 0)
                            goto label_1406c2d8b
                        
                        if (*(arg1 + 0x228) == 0)
                            goto label_1406c2dae
                else if (*(arg1 + 0x228) == 0)
                label_1406c2d8b:
                    rax_13 = 0x5c8
                    goto label_1406c2db7
                result = av_gettime_relative()
                arg4.o = zmm7
                arg4.q = arg4.q f+ *(arg1 + 0x6e0)
                zmm6.q = float.d(result)
                zmm6.q = zmm6.q f* zmm10.q
                
                if (zmm6.q f< arg4.q)
                    arg4.q = arg4.q f- zmm6.q
                    arg4.o = __minsd_xmmsd_memsd(arg4.q, *arg2)
                    *arg2 = (arg4.o).q
                    break
                
                *(arg1 + 0x6e0) = (arg4.o).q
                
                if (not(zmm7.q f<= 0.0) && not(zmm6.q f- arg4.q f<= zmm9.q))
                    *(arg1 + 0x6e0) = zmm6.q
                
                EnterCriticalSection(arg1 + 0x2e8)
                zmm7 = zx.o(*(r14_1 + 0x30))
                
                if (is_unordered.q(zmm7.q, zmm7.q) != 1)
                    int32_t rbx_1 = *(r14_1 + 0x28)
                    int64_t rax_16 = av_gettime_relative()
                    *(arg1 + 0x5f8) = zmm7.q
                    *(arg1 + 0x618) = rbx_1
                    double zmm0_6 = float.d(rax_16) f* zmm10.q
                    zmm7.q = zmm7.q f- zmm0_6
                    *(arg1 + 0x608) = zmm0_6
                    *(arg1 + 0x600) = zmm7.q
                    arg4, arg3, zmm6 = sub_1406c1cf0(arg1 + 0x628, arg1 + 0x5f8)
                
                LeaveCriticalSection(arg1 + 0x2e8)
                int32_t rcx_14 = *(arg1 + 0x2e4)
                
                if (*(arg1 + 0x2d8) - rcx_14 s> 1)
                    void* rcx_16 = *(arg1 + 0x250 +
                        (sx.q(mods.dp.d(sx.q(*(arg1 + 0x2d0) + rcx_14 + 1), *(arg1 + 0x2dc))) << 3))
                    
                    if (*(r14_1 + 0x28) != *(rcx_16 + 0x28))
                        arg3 = zx.o(0)
                    else
                        arg3.q = *(rcx_16 + 0x30) f- *(r14_1 + 0x30)
                        int32_t rax_23
                        rax_23.b = is_unordered.q(arg3.q, arg3.q)
                        
                        if (rax_23.b == 1 || arg3.q f<= 0.0 || not(arg3.q f<= *(arg1 + 0x6e8)))
                            arg3 = zx.o(*(r14_1 + 0x38))
                    
                    if (*(arg1 + 0x6a0) == 0 && *(r12 + 0x29) != 0)
                        char rax_24 = *(arg1 + 0x708)
                        
                        if ((rax_24 != 1 && (rax_24 != 0 || *(arg1 + 0x220) != 0))
                                || *(arg1 + 0x228) == 0)
                            arg3.q = arg3.q f+ *(arg1 + 0x6e0)
                            
                            if (not(zmm6.q f<= arg3.q))
                                *(arg1 + 0x6d4) += 1
                                result = sub_1406be560(arg1 + 0x250)
                                continue
                
                if (*(arg1 + 0x230) != 0)
                    int32_t rcx_18 = *(arg1 + 0x3a8)
                    int32_t r8_2 = *(arg1 + 0x3b4)
                    
                    while (rcx_18 - r8_2 s> 0)
                        int32_t r11_1 = *(arg1 + 0x3ac)
                        int32_t r10_2 = *(arg1 + 0x3a0) + r8_2
                        void* r9_1 = *(arg1 + (sx.q(mods.dp.d(sx.q(r10_2), r11_1)) << 3) + 0x320)
                        void* const rcx_20
                        
                        if (rcx_18 - r8_2 s<= 1)
                            rcx_20 = nullptr
                        else
                            rcx_20 =
                                *(arg1 + (sx.q(mods.dp.d(sx.q(r10_2 + 1), r11_1)) << 3) + 0x320)
                        
                        if (*(r9_1 + 0x28) == *(arg1 + 0x594))
                            arg3 = zx.o(*(arg1 + 0x5f8))
                            double zmm0_5
                            zmm0_5.d = float.s(zx.q(*(r9_1 + 0x10)))
                            zmm0_5.d = zmm0_5.d f* 0.00100000005f
                            arg4.o = _mm_cvtps_pd(zmm0_5)
                            arg4.q = arg4.q f+ *(r9_1 + 0x30)
                            
                            if (not(arg3.q f> arg4.q))
                                if (rcx_20 == 0)
                                    break
                                
                                zmm0_5.d = float.s(zx.q(*(rcx_20 + 0xc)))
                                zmm0_5.d = zmm0_5.d f* 0.00100000005f
                                arg4.o = _mm_cvtps_pd(zmm0_5)
                                arg4.q = arg4.q f+ *(rcx_20 + 0x30)
                                
                                if (arg3.q f<= arg4.q)
                                    break
                        
                        sub_1406be560(arg1 + 0x320)
                        rcx_18 = *(arg1 + 0x3a8)
                        r8_2 = *(arg1 + 0x3b4)
                
                result = sub_1406be560(arg1 + 0x250)
                bool cond:3_1 = *(arg1 + 0x6a0) == 0
                *(arg1 + 0x6d0) = 1
                
                if (not(cond:3_1) && *(arg1 + 0x1c0) == 3)
                    result, arg4, arg3 = sub_1406c1bb0(arg1)
                
                break
            
            result = sub_1406be560(arg1 + 0x250)
    
    if (*(arg1 + 0x6d0) != 0 && *(arg1 + 0x2e4) != 0)
        result = sub_1406c2650(arg1, arg4, arg3)

*(arg1 + 0x6d0) = 0
return result
