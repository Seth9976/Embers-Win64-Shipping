// 函数: sub_140ed9780
// 地址: 0x140ed9780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_28 = zmm6
int64_t i = arg1[0xdd]
double zmm7[0x2]
double var_38[0x2] = zmm7
int64_t var_68
void var_58

if (i != 0)
    int64_t* rax_1 = arg1[0xdc]
    
    if (rax_1 != 0)
        int64_t* rsi_1 = arg1[0xde]
        
        if (rsi_1 != 0)
            rsi_1[1].d += 1
            rax_1 = arg1[0xdc]
        
        int64_t* rdx = *rax_1
        int64_t* rdi_1 = rdx
        void* rax_4 = &rdx[sx.q(rax_1[1].d) * 2]
        int32_t rdi_2
        
        if (rdx == rax_4)
        label_140ed9802:
            rdi_2 = -1
        else
            while (*rdi_1 != i)
                rdi_1 = &rdi_1[2]
                
                if (rdi_1 == rax_4)
                    goto label_140ed9802
            
            rdi_2 = ((rdi_1 - rdx) s>> 4).d
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d == 1)
                (**rsi_1)(rsi_1)
                int32_t temp7_1 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rsi_1 + 8))(rsi_1, 1)
        
        if (rdi_2 != 0xffffffff)
            int128_t zmm0
            int512_t zmm6_1
            zmm0, zmm6_1 = sub_140f75d80(arg1, arg3)
            zmm6_1.o = zmm0
            int32_t zmm0_1
            int128_t zmm8_1
            zmm0_1, zmm6, zmm8_1 = sub_140f76110(arg1, zmm0.d)
            sub_140f66450(&var_58, arg1[0x9b].d, zmm0_1, zmm6.d)
            int32_t* rax_7
            uint128_t zmm0_2
            rax_7, zmm0_2 = sub_140f66410(&var_68, arg1[0x9b].d, arg2)
            zmm7 = rax_7[1]
            int32_t var_54
            zmm7[0].d = zmm7[0].d f/ var_54
            (*(*arg1 + 0x260))(arg1)
            zmm6 = zx.o(0)
            
            if (not(zmm0_2.d f!= 0f) && sub_140f7b440(arg1) != 0
                    && not(_mm_cvtpd_ps(zx.o(arg1[0x84])).d f!= 0f))
                return 1
            
            sub_140f74a00(arg1)
            int64_t rdx_3 = *arg1
            int32_t rax_10 = (*(rdx_3 + 0x268))(arg1, rdx_3)
            uint128_t zmm3_1 = sub_140f769a0(arg1)
            char r9_1 = arg1[0xee].b
            zmm3_1.q = zmm3_1.q f/ _mm_cvtepi32_pd(zx.q(rax_10)).q
            uint128_t zmm2_2 = _mm_cvtepi32_ps(zx.o(divs.dp.d(sx.q(rdi_2), rax_10)))
            double zmm0_3[0x2] = _mm_cvtps_pd(zmm7[0])
            zmm2_2.d = zmm2_2.d f+ zmm2_2.d
            zmm0_3[0] = zmm0_3[0] f+ zmm3_1.q
            uint128_t zmm1_1
            zmm1_1.d = fconvert.s(zmm3_1.q)
            zmm2_2.d = zmm2_2.d f- 0.5f
            zmm1_1.d = zmm1_1.d f+ zmm1_1.d
            int64_t rcx_11 = int.q(zmm3_1.q)
            int32_t rdx_5 = int.d(zmm2_2.d)
            zmm2_2 = _mm_cvtpd_ps(zmm0_3)
            int32_t rdx_6 = rdx_5 s>> 1
            zmm0_3 = 0xbf000000
            zmm0_3[0].d = -0.5f f- zmm1_1.d
            zmm1_1 = zmm3_1
            zmm2_2.d = zmm2_2.d f+ zmm2_2.d
            zmm2_2.d = zmm2_2.d f- 0.5f
            int32_t r10_3 = (int.d(zmm0_3[0].d) s>> 1) + (int.d(zmm2_2.d) s>> 1)
            
            if (r9_1 == 0)
                if (rcx_11 != -0x8000000000000000)
                    zmm0_3 = zx.o(0)
                    zmm0_3[0] = float.d(rcx_11)
                    
                    if (not(zmm0_3[0] f== zmm1_1.q))
                        zmm1_1.q = float.d(rcx_11
                            + ((zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm1_1, zmm1_1.q))) & 1) ^ 1))
            else if (rcx_11 != -0x8000000000000000)
                zmm0_3 = zx.o(0)
                zmm0_3[0] = float.d(rcx_11)
                
                if (not(zmm0_3[0] f== zmm3_1.q))
                    zmm1_1.q = float.d(rcx_11
                        - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm1_1, zmm1_1.q))) & 1))
            
            zmm0_3 = _mm_cvtepi32_pd(zx.o(r10_3)[0])
            zmm0_3[0] = zmm0_3[0] f+ zmm3_1.q
            int64_t rcx_13 = int.q(zmm0_3[0])
            int64_t rcx_14
            
            if (r9_1 == 0)
                if (rcx_13 != -0x8000000000000000)
                    zmm2_2.q = float.d(rcx_13)
                    
                    if (not(zmm2_2.q f== zmm0_3[0]))
                        rcx_14 =
                            rcx_13 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0_3, zmm0_3[0]))) & 1)
                        zmm0_3 = zx.o(0)
                        zmm0_3[0] = float.d(rcx_14)
            else if (rcx_13 != -0x8000000000000000)
                zmm2_2.q = float.d(rcx_13)
                
                if (not(zmm2_2.q f== zmm0_3[0]))
                    rcx_14 = rcx_13
                        + ((zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0_3, zmm0_3[0]))) & 1) ^ 1)
                    zmm0_3 = zx.o(0)
                    zmm0_3[0] = float.d(rcx_14)
            zmm2_2 = _mm_cvtepi32_pd(zx.q(rdx_6))
            
            if (zmm2_2.q f< zmm1_1.q || zmm2_2.q f> zmm0_3[0])
                int64_t rax_26 = *arg1
                zmm1_1.d = float.s(rdx_6)
                int128_t var_48_1 = zmm8_1
                zmm7[0].d = zmm7[0].d f* 0.5f
                zmm6.d = float.s(rax_10)
                zmm1_1.d = zmm1_1.d f- zmm7[0].d
                zmm1_1.d = zmm1_1.d f* zmm6.d
                zmm8_1 = _mm_cvtps_pd(zmm1_1.q)
                int32_t rax_27 = (*(rax_26 + 0x290))(arg1)
                zmm0_3 = zx.o(0)
                zmm6.d = zmm6.d f* zmm7[0].d
                zmm1_1 = zx.o(0)
                zmm0_3[0].d = float.s(rax_27)
                zmm0_3[0].d = zmm0_3[0].d f- zmm6.d
                zmm2_2 = _mm_cvtps_pd(zmm0_3[0])
                
                if (not(zmm8_1.q f< zmm1_1.q))
                    zmm1_1 = _mm_min_sd(zmm2_2.q, zmm8_1.q)
                
                sub_140f8c880(arg1, _mm_cvtpd_ps(zmm1_1).q)
            else if (r9_1 != 0)
                if (not(zmm2_2.q f!= zmm1_1.q))
                    if (arg1[0x7b].b == 0 || rdx_6 s<= 0)
                        zmm6 = arg1[0xed].d
                    
                    zmm1_1.d = _mm_cvtepi32_ps(zx.o(rdx_6 * rax_10)).d f- zmm6.d
                    sub_140f8c880(arg1, zmm1_1.q)
                else if (not(zmm2_2.q f!= zmm0_3[0]))
                    if (arg1[0x7b].b == 0)
                        zmm6 = arg1[0xed].d
                    
                    zmm1_1.d = _mm_cvtepi32_ps(zx.o(rdx_6)).d f- zmm7[0].d
                    zmm1_1.d = zmm1_1.d f+ 1f
                    zmm1_1.d = zmm1_1.d f+ zmm6.d
                    zmm1_1.d = zmm1_1.d f* _mm_cvtepi32_ps(zx.o(rax_10))[0].d
                    sub_140f8c880(arg1, zmm1_1.q)
            
            (*(*arg1 + 0x240))(arg1)
            int64_t* rdi_4 = arg1[0xde]
            var_68 = arg1[0xdd]
            
            if (rdi_4 != 0)
                rdi_4[1].d += 1
            
            if (&var_68 != &arg1[0xe0])
                var_68.o = *(arg1 + 0x700)
                *(arg1 + 0x700) = var_68.o
            
            if (rdi_4 != 0)
                rdi_4[1].d -= 1
                
                if (rdi_4[1].d == 1)
                    (**rdi_4)(rdi_4)
                    int32_t temp15_1 = *(rdi_4 + 0xc)
                    *(rdi_4 + 0xc) -= 1
                    
                    if (temp15_1 == 1)
                        (*(*rdi_4 + 8))(rdi_4, 1)
        
        sub_140ed5f50(&arg1[0xdd])

if (arg1[0x7c].b != 0)
    int64_t rax_32 = arg1[0xe0]
    
    if (rax_32 != 0)
        var_68 = rax_32
        int64_t* rax_33 = arg1[0xe1]
        
        if (rax_33 != 0)
            rax_33[1].d += 1
        
        int64_t rdi_5 = *(*(arg1[0x9d] + 0xd0))(&arg1[0x9d], &var_58, &var_68)
        int64_t* var_50
        
        if (var_50 != 0)
            var_50[1].d -= 1
            
            if (var_50[1].d == 1)
                (**var_50)(var_50)
                int32_t temp4_1 = *(var_50 + 0xc)
                *(var_50 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*var_50 + 8))(var_50, 1)
        
        if (rax_33 != 0)
            rax_33[1].d -= 1
            
            if (rax_33[1].d == 1)
                (**rax_33)(rax_33)
                int32_t temp6_1 = *(rax_33 + 0xc)
                *(rax_33 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rax_33 + 8))(rax_33, 1)
        
        int64_t result
        result.b = rdi_5 == 0
        return result

return 0
