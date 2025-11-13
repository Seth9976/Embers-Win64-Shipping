// 函数: sub_141bde300
// 地址: 0x141bde300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_18 = zmm6
int64_t rcx = arg1[0xdd]
double zmm7[0x2]
double var_28[0x2] = zmm7
void var_48

if (rcx != 0)
    int64_t* rax_1 = arg1[0xdc]
    
    if (rax_1 != 0)
        int64_t* r8_1 = *rax_1
        int64_t* rdi_1 = r8_1
        void* rdx = &r8_1[sx.q(rax_1[1].d)]
        
        if (r8_1 != rdx)
            do
                if (*rdi_1 == rcx)
                    int32_t rdi_3 = ((rdi_1 - r8_1) s>> 3).d
                    
                    if (rdi_3 != 0xffffffff)
                        int128_t zmm0
                        int512_t zmm6_1
                        zmm0, zmm6_1 = sub_140f75d80(arg1, arg3)
                        zmm6_1.o = zmm0
                        int32_t zmm0_1
                        int128_t zmm8_1
                        zmm0_1, zmm6, zmm8_1 = sub_140f76110(arg1, zmm0.d)
                        void var_58
                        sub_140f66450(&var_58, arg1[0x9b].d, zmm0_1, zmm6.d)
                        int32_t* rax_3
                        uint128_t zmm0_2
                        rax_3, zmm0_2 = sub_140f66410(&var_48, arg1[0x9b].d, arg2)
                        zmm7 = rax_3[1]
                        int32_t var_54
                        zmm7[0].d = zmm7[0].d f/ var_54
                        (*(*arg1 + 0x260))(arg1)
                        zmm6 = zx.o(0)
                        
                        if (not(zmm0_2.d f!= 0f) && sub_140f7b440(arg1) != 0
                                && not(_mm_cvtpd_ps(zx.o(arg1[0x84])).d f!= 0f))
                            return 1
                        
                        sub_140f74a00(arg1)
                        int32_t rax_8 = (*(*arg1 + 0x268))(arg1)
                        uint128_t zmm3_1 = sub_140f769a0(arg1)
                        char r9_1 = arg1[0xec].b
                        zmm3_1.q = zmm3_1.q f/ _mm_cvtepi32_pd(zx.q(rax_8)).q
                        uint128_t zmm2_2 = _mm_cvtepi32_ps(zx.o(divs.dp.d(sx.q(rdi_3), rax_8)))
                        double zmm0_3[0x2] = _mm_cvtps_pd(zmm7[0])
                        zmm2_2.d = zmm2_2.d f+ zmm2_2.d
                        zmm0_3[0] = zmm0_3[0] f+ zmm3_1.q
                        uint128_t zmm1_1
                        zmm1_1.d = fconvert.s(zmm3_1.q)
                        zmm2_2.d = zmm2_2.d f- 0.5f
                        zmm1_1.d = zmm1_1.d f+ zmm1_1.d
                        int64_t rcx_10 = int.q(zmm3_1.q)
                        int32_t rdx_4 = int.d(zmm2_2.d)
                        zmm2_2 = _mm_cvtpd_ps(zmm0_3)
                        int32_t rdx_5 = rdx_4 s>> 1
                        zmm0_3 = 0xbf000000
                        zmm0_3[0].d = -0.5f f- zmm1_1.d
                        zmm1_1 = zmm3_1
                        zmm2_2.d = zmm2_2.d f+ zmm2_2.d
                        zmm2_2.d = zmm2_2.d f- 0.5f
                        int32_t r10_3 = (int.d(zmm0_3[0].d) s>> 1) + (int.d(zmm2_2.d) s>> 1)
                        
                        if (r9_1 == 0)
                            if (rcx_10 != -0x8000000000000000)
                                zmm0_3 = zx.o(0)
                                zmm0_3[0] = float.d(rcx_10)
                                
                                if (not(zmm0_3[0] f== zmm1_1.q))
                                    zmm1_1.q = float.d(rcx_10 + ((
                                        zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm1_1, zmm1_1.q)))
                                        & 1) ^ 1))
                        else if (rcx_10 != -0x8000000000000000)
                            zmm0_3 = zx.o(0)
                            zmm0_3[0] = float.d(rcx_10)
                            
                            if (not(zmm0_3[0] f== zmm3_1.q))
                                zmm1_1.q = float.d(rcx_10 -
                                    (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm1_1, zmm1_1.q))) & 1))
                        
                        zmm0_3 = _mm_cvtepi32_pd(zx.o(r10_3)[0])
                        zmm0_3[0] = zmm0_3[0] f+ zmm3_1.q
                        int64_t rcx_12 = int.q(zmm0_3[0])
                        int64_t rcx_13
                        
                        if (r9_1 == 0)
                            if (rcx_12 != -0x8000000000000000)
                                zmm2_2.q = float.d(rcx_12)
                                
                                if (not(zmm2_2.q f== zmm0_3[0]))
                                    rcx_13 = rcx_12 - (
                                        zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0_3, zmm0_3[0])))
                                        & 1)
                                    zmm0_3 = zx.o(0)
                                    zmm0_3[0] = float.d(rcx_13)
                        else if (rcx_12 != -0x8000000000000000)
                            zmm2_2.q = float.d(rcx_12)
                            
                            if (not(zmm2_2.q f== zmm0_3[0]))
                                rcx_13 = rcx_12 + ((
                                    zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0_3, zmm0_3[0]))) & 1) ^ 1)
                                zmm0_3 = zx.o(0)
                                zmm0_3[0] = float.d(rcx_13)
                        zmm2_2 = _mm_cvtepi32_pd(zx.q(rdx_5))
                        
                        if (zmm2_2.q f< zmm1_1.q || zmm2_2.q f> zmm0_3[0])
                            int64_t rax_24 = *arg1
                            zmm1_1.d = float.s(rdx_5)
                            int128_t var_38_1 = zmm8_1
                            zmm7[0].d = zmm7[0].d f* 0.5f
                            zmm6.d = float.s(rax_8)
                            zmm1_1.d = zmm1_1.d f- zmm7[0].d
                            zmm1_1.d = zmm1_1.d f* zmm6.d
                            zmm8_1 = _mm_cvtps_pd(zmm1_1.q)
                            int32_t rax_25 = (*(rax_24 + 0x290))(arg1)
                            zmm0_3 = zx.o(0)
                            zmm6.d = zmm6.d f* zmm7[0].d
                            zmm1_1 = zx.o(0)
                            zmm0_3[0].d = float.s(rax_25)
                            zmm0_3[0].d = zmm0_3[0].d f- zmm6.d
                            zmm2_2 = _mm_cvtps_pd(zmm0_3[0])
                            
                            if (not(zmm8_1.q f< zmm1_1.q))
                                zmm1_1 = _mm_min_sd(zmm2_2.q, zmm8_1.q)
                            
                            sub_140f8c880(arg1, _mm_cvtpd_ps(zmm1_1).q)
                        else if (r9_1 != 0)
                            if (not(zmm2_2.q f!= zmm1_1.q))
                                if (arg1[0x7b].b == 0 || rdx_5 s<= 0)
                                    zmm6 = arg1[0xeb].d
                                
                                zmm1_1.d = _mm_cvtepi32_ps(zx.o(rdx_5 * rax_8)).d f- zmm6.d
                                sub_140f8c880(arg1, zmm1_1.q)
                            else if (not(zmm2_2.q f!= zmm0_3[0]))
                                if (arg1[0x7b].b == 0)
                                    zmm6 = arg1[0xeb].d
                                
                                zmm1_1.d = _mm_cvtepi32_ps(zx.o(rdx_5)).d f- zmm7[0].d
                                zmm1_1.d = zmm1_1.d f+ 1f
                                zmm1_1.d = zmm1_1.d f+ zmm6.d
                                zmm1_1.d = zmm1_1.d f* _mm_cvtepi32_ps(zx.o(rax_8))[0].d
                                sub_140f8c880(arg1, zmm1_1.q)
                        
                        (*(*arg1 + 0x240))(arg1)
                        arg1[0xdf] = arg1[0xdd]
                    
                    break
                
                rdi_1 = &rdi_1[1]
            while (rdi_1 != rdx)
        
        arg1[0xdd] = 0

if (arg1[0x7c].b != 0)
    int64_t rax_28 = arg1[0xdf]
    
    if (rax_28 != 0)
        int64_t arg_8 = rax_28
        int64_t rdi_4 = *(*(arg1[0x9f] + 0xd0))(&arg1[0x9f], &var_48, &arg_8)
        int64_t* var_40
        
        if (var_40 != 0)
            var_40[1].d -= 1
            
            if (var_40[1].d == 1)
                (**var_40)(var_40)
                int32_t temp3_1 = *(var_40 + 0xc)
                *(var_40 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    int64_t r8_4 = *var_40
                    (*(r8_4 + 8))(var_40, 1, r8_4)
        
        int32_t rsi
        rsi.b = rdi_4 == 0
        return zx.q(rsi)

return 0
