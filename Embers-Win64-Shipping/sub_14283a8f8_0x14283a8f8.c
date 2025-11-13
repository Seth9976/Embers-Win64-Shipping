// 函数: sub_14283a8f8
// 地址: 0x14283a8f8
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_48 = zmm6
int128_t zmm7
int128_t var_58 = zmm7
int128_t zmm8
int128_t var_68 = zmm8
double zmm9[0x2]
double var_78[0x2] = zmm9
int128_t zmm10
int128_t var_88 = zmm10
void var_1c8
int64_t var_98 = __security_cookie ^ &var_1c8
int64_t rax_1
rax_1.b = *(arg1 + 4)
rax_1.b -= 1

if (rax_1.b u<= 1)
    if (*(arg1 + 0xd98) == 0)
        sub_1428394c0(arg1)
    else
        int32_t rax_2 = *(arg1 + 0xdb0)
        
        if (rax_2 != 0 && *(arg1 + 0xdac) u>= rax_2)
            sub_14283934c(arg1)
        
        sub_142838840(arg1)
        int64_t rdx = sx.q(*(arg1 + 0xe84))
        int32_t rcx_1 = *(arg1 + 0xe80)
        void* rax_5 = arg1 + ((rdx * 5 + 0x37d) << 2)
        int128_t zmm0_1
        
        if (rcx_1 u>= *rax_5)
            do
                if (rdx.d == 3)
                    zmm0_1.d = (*(rax_5 + 0xc)).d f* *(rax_5 + 4)
                    *(arg1 + 0xe88) = zmm0_1.d
                
                *(arg1 + 0xe80) = 0
                rdx = zx.q(rdx.d + 1)
                *(arg1 + 0xe84) = rdx.d
                rax_5 = arg1 + ((sx.q(rdx.d) * 5 + 0x37d) << 2)
            while (*rax_5 u<= 0)
            
            rcx_1 = 0
        
        zmm0_1.d = (*(rax_5 + 4)).d f* *(arg1 + 0xe88)
        int128_t zmm1_1 = *(rax_5 + 0xc)
        zmm0_1.d = zmm0_1.d f+ *(rax_5 + 8)
        
        if (not(zmm1_1.d f<= zmm0_1.d))
            zmm0_1 = zmm1_1
        label_14283aa0f:
            rdx = zx.q(rdx.d + 1)
            rcx_1 = 0
            *(arg1 + 0xe84) = rdx.d
        else if (not(zmm0_1.d f<= *(rax_5 + 0x10)))
            zmm0_1 = *(rax_5 + 0x10)
            goto label_14283aa0f
        
        *(arg1 + 0xe88) = zmm0_1.d
        *(arg1 + 0xe80) = rcx_1 + 1
        
        if (rdx.d == 6)
            sub_1428394c0(arg1)
        else
            int64_t rdx_1 = sx.q(*(arg1 + 0xf24))
            int32_t rcx_2 = *(arg1 + 0xf20)
            void* rax_12 = arg1 + ((rdx_1 * 5 + 0x3a5) << 2)
            
            if (rcx_2 u>= *rax_12)
                do
                    *(arg1 + 0xf20) = 0
                    rdx_1 = zx.q(rdx_1.d + 1)
                    *(arg1 + 0xf24) = rdx_1.d
                    rax_12 = arg1 + ((sx.q(rdx_1.d) * 5 + 0x3a5) << 2)
                while (*rax_12 u<= 0)
                
                rcx_2 = 0
            
            zmm0_1.d = (*(rax_12 + 4)).d f* *(arg1 + 0xf28)
            zmm1_1 = *(rax_12 + 0xc)
            zmm0_1.d = zmm0_1.d f+ *(rax_12 + 8)
            
            if (not(zmm1_1.d f<= zmm0_1.d))
                zmm0_1 = zmm1_1
                rcx_2 = 0
                *(arg1 + 0xf24) = (rdx_1 + 1).d
            else if (not(zmm0_1.d f<= *(rax_12 + 0x10)))
                zmm0_1 = *(rax_12 + 0x10)
                rcx_2 = 0
                *(arg1 + 0xf24) = (rdx_1 + 1).d
            
            zmm9 = 0x3f800000
            *(arg1 + 0xf20) = rcx_2 + 1
            int32_t rax_18 = *(arg1 + 0xdac)
            *(arg1 + 0xf28) = zmm0_1.d
            
            if (rax_18 u>= *(arg1 + 0xf38))
                zmm0_1 = *(arg1 + 0xf3c)
                zmm1_1.d = zmm0_1.d f+ *(arg1 + 0xf34)
                *(arg1 + 0xf34) = zmm1_1.d
                
                if (not(zmm1_1.d f<= 1f))
                    *(arg1 + 0xf3c) = (zmm0_1 ^ 0x80000000).d
                    zmm0_1.d = 0x40000000.d f- zmm1_1.d
                    *(arg1 + 0xf34) = zmm0_1.d
                else if (not(-1f f<= zmm1_1.d))
                    *(arg1 + 0xf3c) = (zmm0_1 ^ 0x80000000).d
                    zmm0_1.d = 0xc0000000.d f- zmm1_1.d
                    *(arg1 + 0xf34) = zmm0_1.d
            
            if (rax_18 u>= *(arg1 + 0xf50))
                zmm0_1 = *(arg1 + 0xf54)
                zmm1_1.d = zmm0_1.d f+ *(arg1 + 0xf4c)
                *(arg1 + 0xf4c) = zmm1_1.d
                
                if (not(zmm1_1.d f<= 1f))
                    *(arg1 + 0xf54) = (zmm0_1 ^ 0x80000000).d
                    *(arg1 + 0xf4c) = 2f f- zmm1_1.d
                else if (not(-1f f<= zmm1_1.d))
                    *(arg1 + 0xf54) = (zmm0_1 ^ 0x80000000).d
                    zmm0_1.d = -2f f- zmm1_1.d
                    *(arg1 + 0xf4c) = zmm0_1.d
            
            int32_t rax_19 = *(arg1 + 0xe84)
            
            if (rax_19 != 0)
                zmm1_1.d = (*(arg1 + 0xf48)).d f* *(arg1 + 0xf34)
                int128_t zmm0_3
                
                if (rax_19 != 1)
                    zmm0_1.d = 1f f- *(arg1 + 0xe88)
                    zmm0_1.d = zmm0_1.d f* 960f
                    zmm0_1.d = zmm0_1.d f- zmm1_1.d
                    zmm6 = sub_14283bb68(zmm0_1.d)
                    zmm7.d = sub_14283bb34((*(arg1 + 0xdd4)).d).d f* zmm6.d
                    
                    if (*(arg1 + 0xd94) == 0)
                        zmm6 = *(arg1 + 0xe8c)
                    else
                        zmm6 = *(arg1 + 0xe90)
                    
                    zmm0_3.d = sub_14283bb34((*(arg1 + 0xdd8)).d).d f* *(arg1 + 0xe88)
                    
                    if (not(zmm6.d f> zmm0_3.d))
                        goto label_14283ac69
                    
                    sub_1428394c0(arg1)
                else
                    zmm6 = sub_14283bb68((zmm1_1 ^ 0x80000000).d)
                    zmm7.d = sub_14283bb34((*(arg1 + 0xdd4)).d).d f* zmm6.d
                    zmm7.d = zmm7.d f* *(arg1 + 0xe88)
                label_14283ac69:
                    zmm0_3 = *(arg1 + 0xdb4)
                    zmm6 = zx.o(0)
                    zmm0_3.d f- zmm6.d
                    zmm7.d = zmm7.d f- zmm0_3.d
                    zmm7.d = zmm7.d f* 0.015625f
                    *(arg1 + 0xdc4) = zmm7.d
                    
                    if (not(is_unordered.d(zmm0_3.d, zmm6.d)) && not(zmm0_3.d f!= zmm6.d))
                        zmm7.d f- zmm6.d
                    
                    if (is_unordered.d(zmm0_3.d, zmm6.d) || zmm0_3.d f!= zmm6.d
                            || is_unordered.d(zmm7.d, zmm6.d) || not(zmm7.d f== zmm6.d))
                        zmm0_3.d = (*(arg1 + 0xf44)).d f* *(arg1 + 0xf34)
                        zmm0_3.d = zmm0_3.d f+ *(arg1 + 0xdd0)
                        zmm0_3.d = zmm0_3.d f+ *(arg1 + 0xf58) f* *(arg1 + 0xf4c)
                        zmm0_3.d = zmm0_3.d f+ *(arg1 + 0xf30) f* *(arg1 + 0xf28)
                        float zmm0_6 = sub_14283bdf4(zmm0_3.d) f/ *(arg1 + 0xddc)
                        zmm0_6 f- zmm6.d
                        *(arg1 + 0xdc0) = zmm0_6
                        
                        if (not(is_unordered.d(zmm0_6, zmm6.d)) && not(zmm0_6 f!= zmm6.d))
                            *(arg1 + 0xdc0) = 0x3f800000
                        
                        float zmm0_7[0x2] = sub_14283bdd0(
                            *(arg1 + 0xf40) f* *(arg1 + 0xf34) f+ *(arg1 + 0xf5c)
                            + *(arg1 + 0xf2c) f* *(arg1 + 0xf28))
                        zmm8.d = (*(arg1 + 0xda4)).d f* 0.449999988f
                        
                        if (not(zmm0_7[0] f> zmm8.d))
                            zmm8 = _mm_max_ss(0x40a00000, zmm0_7[0])
                        
                        zmm0_7 = zmm8.q
                        zmm0_7[0] = zmm0_7[0] f- *(arg1 + 0xf60)
                        
                        if (not(fabs(_mm_cvtps_pd(zmm0_7)) <= 0.01))
                            double zmm0_8
                            zmm0_8.d = zmm8.q.d f/ *(arg1 + 0xda4)
                            double zmm1_4[0x2] = _mm_cvtps_pd(zmm0_8)
                            zmm1_4[0] = zmm1_4[0] * 6.2831853071795862
                            zmm6 = _mm_cvtps_pd(_mm_cvtpd_ps(zmm1_4))
                            zmm7.d = fconvert.s(sin(zmm6.q))
                            double zmm0_10 = cos(zmm6.q)
                            zmm1_4 = *(arg1 + 0xf64)
                            float zmm2_1 = fconvert.s(zmm0_10)
                            zmm1_4[0].d = zmm1_4[0].d f+ zmm1_4[0].d
                            zmm7.d = zmm7.d f/ zmm1_4[0].d
                            zmm1_4 = 0x3f800000
                            zmm0_10.d = zmm7.q.d f+ 1f
                            zmm1_4[0].d = 1f f/ zmm0_10.d
                            zmm9[0].d = 1f - zmm2_1
                            float zmm3_1 = zmm2_1 * -2f f* zmm1_4[0].d
                            zmm0_10.d = 1f f- zmm7.d
                            zmm9[0].d = zmm9[0].d f* zmm1_4[0].d
                            zmm0_10.d = zmm0_10.d f* zmm1_4[0].d
                            zmm9[0].d = zmm9[0].d f* *(arg1 + 0xf68)
                            zmm9[0].d = zmm9[0].d f* 0.5f
                            int32_t rax_20
                            
                            if (*(arg1 + 0xf74) == 0)
                                zmm0_10.d = zmm0_10.d f- *(arg1 + 0xf84)
                                zmm9[0].d = zmm9[0].d f- *(arg1 + 0xf78)
                                zmm9[0].d = zmm9[0].d f- *(arg1 + 0xf7c)
                                rax_20 = 0x40
                                zmm0_10.d = zmm0_10.d f* 0.015625f
                                zmm9[0].d = zmm9[0].d f* 0.015625f
                                zmm9[0].d = zmm9[0].d f* 0.015625f
                                *(arg1 + 0xf90) = (zmm3_1 f- *(arg1 + 0xf80)) * 0.015625f
                                *(arg1 + 0xf94) = zmm0_10.d
                                *(arg1 + 0xf88) = zmm9[0].d
                                *(arg1 + 0xf8c) = zmm9[0].d
                            else
                                *(arg1 + 0xf74) = 0
                                rax_20 = 0
                                *(arg1 + 0xf80) = zmm3_1
                                *(arg1 + 0xf84) = zmm0_10.d
                                *(arg1 + 0xf78) = zmm9[0].d
                                *(arg1 + 0xf7c) = zmm9[0].d
                            
                            *(arg1 + 0xf98) = rax_20
                            *(arg1 + 0xf60) = zmm8.d
                        
                        int32_t rcx_3 = *(arg1 + 0xfb8)
                        void var_198
                        *(arg1 + 0xdc8) = &var_198
                        int32_t rax_21
                        
                        if (rcx_3 == 0)
                            rax_21 = sub_14283d394(arg1)
                        else if (rcx_3 == 1)
                            rax_21 = sub_14283d14c(arg1)
                        else if (rcx_3 == 7)
                            rax_21 = sub_14283c808(arg1)
                        else
                            rax_21 = sub_14283c35c(arg1)
                        
                        if (rax_21 s> 0)
                            sub_142838a58(arg1, rax_21, arg2, arg3, arg4, arg5)
                        
                        if (rax_21 s< 0x40)
                            sub_1428394c0(arg1)
            
            *(arg1 + 0xdac) += 0x40

__security_check_cookie(var_98 ^ &var_1c8)
return 0
