// 函数: sub_1406c2650
// 地址: 0x1406c2650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x228) == 0)
    return 

void** rsi_1 = *(arg1 + (sx.q(*(arg1 + 0x2d0)) << 3) + 0x250)

if (*(arg1 + 0x230) != 0)
    int32_t rdx_1 = *(arg1 + 0x3b4)
    
    if (*(arg1 + 0x3a8) - rdx_1 s> 0)
        void* rbp_1 =
            *(arg1 + (sx.q(mods.dp.d(sx.q(*(arg1 + 0x3a0) + rdx_1), *(arg1 + 0x3ac))) << 3) + 0x320)
        arg3 = zx.o(*(rbp_1 + 0x30))
        uint128_t zmm0
        zmm0.d = float.s(zx.q(*(rbp_1 + 0xc)))
        zmm0.d = zmm0.d f* 0.00100000005f
        arg2.o = _mm_cvtps_pd(zmm0.q)
        arg2.q = arg2.q f+ arg3.q
        
        if (not(arg2.q f> rsi_1[6]) && *(rbp_1 + 0x5c) == 0)
            if (*(rbp_1 + 0x48) == 0 || *(rbp_1 + 0x4c) == 0)
                *(rbp_1 + 0x48) = rsi_1[9].d
                *(rbp_1 + 0x4c) = *(rsi_1 + 0x4c)
            
            arg2.o = 0x416312d000000000
            arg3.q = arg3.q f* arg2.q
            int64_t zmm3 = 0x3fe0000000000000
            arg3.q = arg3.q f+ zmm3
            int64_t rcx = int.q(arg3.q)
            
            if (rcx != -0x8000000000000000)
                zmm0.q = float.d(rcx)
                
                if (not(zmm0.q f== arg3.q))
                    arg3.q =
                        float.d(rcx - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(arg3, arg3.q))) & 1))
            
            int64_t rdi_1 = int.q(arg3.q)
            zmm0.q = *(rbp_1 + 0x38) f* arg2.q
            zmm0.q = zmm0.q f+ zmm3
            int64_t rcx_2 = int.q(zmm0.q)
            arg2.o = zx.o(0)
            
            if (rcx_2 != -0x8000000000000000)
                arg2.o = zx.o(0)
                arg2.q = float.d(rcx_2)
                
                if (not(arg2.q f== zmm0.q))
                    zmm0.q =
                        float.d(rcx_2 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0, zmm0.q))) & 1))
            
            int32_t i = 0
            
            if (*(rbp_1 + 0x14) s> 0)
                void** r12_1 = nullptr
                
                do
                    int32_t* rsi_2 = *(r12_1 + *(rbp_1 + 0x18))
                    int32_t rcx_4 = *(rbp_1 + 0x48)
                    int32_t rax_10 = *rsi_2
                    
                    if (rax_10 s< 0)
                        rax_10 = 0
                    else if (rax_10 s> rcx_4)
                        rax_10 = rcx_4
                    
                    *rsi_2 = rax_10
                    int32_t rdx_4 = *(rbp_1 + 0x4c)
                    int32_t rcx_5 = rsi_2[1]
                    
                    if (rcx_5 s< 0)
                        rcx_5 = 0
                    else if (rcx_5 s> rdx_4)
                        rcx_5 = rdx_4
                    
                    rsi_2[1] = rcx_5
                    int32_t rdx_6 = *(rbp_1 + 0x48) - rax_10
                    int32_t rax_11 = rsi_2[2]
                    
                    if (rax_11 s< 0)
                        rax_11 = 0
                    else if (rax_11 s> rdx_6)
                        rax_11 = rdx_6
                    
                    rsi_2[2] = rax_11
                    int32_t rdx_8 = *(rbp_1 + 0x4c) - rcx_5
                    int32_t rax_12 = rsi_2[3]
                    
                    if (rax_12 s< 0)
                        rax_12 = 0
                    else if (rax_12 s> rdx_8)
                        rax_12 = rdx_8
                    
                    rsi_2[3] = rax_12
                    
                    if (rsi_2[0x2a] - 2 u<= 1)
                        EnterCriticalSection(arg1 + 0xa0)
                        void*** rax_14 = sub_1406b4a40()
                        uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(rsi_2[1]))
                        int32_t arg_8 = _mm_cvtepi32_ps(zx.o(*rsi_2)).d
                        int32_t arg_c = zmm1.d
                        char* rdx_10
                        
                        if (rsi_2[0x2a] != 2)
                            rdx_10 = *(rsi_2 + 0xb8)
                        else
                            rdx_10 = *(rsi_2 + 0xb0)
                        
                        int64_t rax
                        rax, arg2, arg3 =
                            sub_1406bd310(&rax_14[2], rdx_10, arg_8.q, rdi_1, int.q(zmm0.q))
                        
                        if (rax.b != 0)
                            int64_t r8_3 = **(arg1 + 0x60)
                            uint128_t zmm0_2 = (&rax_14[2]).o
                            uint128_t var_48 = zmm0_2
                            void* rax_16 = _mm_bsrli_si128(zmm0_2, 8).q
                            
                            if (rax_16 != 0)
                                *(rax_16 + 8) += 1
                            
                            r8_3(arg1 + 0x60, &var_48)
                            int64_t* rsi_3 = var_48:8.q
                            
                            if (rsi_3 != 0)
                                rsi_3[1].d -= 1
                                
                                if (rsi_3[1].d == 1)
                                    (**rsi_3)(rsi_3)
                                    rax = zx.q(*(rsi_3 + 0xc))
                                    *(rsi_3 + 0xc) -= 1
                                    
                                    if (rax.d == 1)
                                        (*(*rsi_3 + 8))(rsi_3, 1)
                        
                        if (rax_14 != 0)
                            rax_14[1].d -= 1
                            
                            if (rax_14[1].d == 1)
                                (**rax_14)(rax_14)
                                rax = zx.q(*(rax_14 + 0xc))
                                *(rax_14 + 0xc) -= 1
                                
                                if (rax.d == 1)
                                    (*rax_14)[1](rax_14, 1)
                        
                        if (arg1 != -0xa0)
                            LeaveCriticalSection(arg1 + 0xa0)
                    
                    i += 1
                    r12_1 = &r12_1[1]
                while (i s< *(rbp_1 + 0x14))
            
            *(rbp_1 + 0x5c) = 1

if (*(rsi_1 + 0x5c) != 0)
    return 

void* r8_4 = *rsi_1
*(rsi_1 + 0x5d) = (*(r8_4 + 0x40) u>> 0x1f).b

if (sub_1406c2240(arg1, rsi_1, r8_4, arg1 + 0x1e8, arg2, arg3.q).d s>= 0)
    *(rsi_1 + 0x5c) = 1
