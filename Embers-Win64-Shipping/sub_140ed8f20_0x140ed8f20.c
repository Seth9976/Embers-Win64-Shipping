// 函数: sub_140ed8f20
// 地址: 0x140ed8f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm8
uint128_t var_58 = zmm8
uint128_t zmm9
uint128_t var_68 = zmm9
int64_t* rax = arg1[0xdc]
int64_t var_110
void var_100
int64_t* var_f8

if (rax != 0)
    int64_t i = arg1[0xdd]
    
    if (i != 0)
        int64_t* rsi_1 = arg1[0xde]
        
        if (rsi_1 != 0)
            rsi_1[1].d += 1
            rax = arg1[0xdc]
        
        int64_t* rdx = *rax
        int64_t* rbx_1 = rdx
        void* rax_3 = &rdx[sx.q(rax[1].d) * 2]
        int32_t rbx_2
        
        if (rdx == rax_3)
        label_140ed8fa7:
            rbx_2 = -1
        else
            while (*rbx_1 != i)
                rbx_1 = &rbx_1[2]
                
                if (rbx_1 == rax_3)
                    goto label_140ed8fa7
            
            rbx_2 = ((rbx_1 - rdx) s>> 4).d
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d == 1)
                (**rsi_1)(rsi_1)
                int32_t temp5_1 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rsi_1 + 8))(rsi_1, 1)
        
        if (rbx_2 != 0xffffffff)
            (*(*arg1 + 0x260))(arg1)
            zmm8 = zx.o(0)
            zmm9.q = fconvert.d(arg3.d)
            
            if (not(zmm9.q f!= 0.0) && sub_140f7b440(arg1) != 0)
                zmm9 = zx.o(arg1[0x84])
                
                if (not(zmm9.q f!= 0.0))
                    return 1
            
            sub_140f74a00(arg1)
            uint128_t zmm3 = zx.o(arg1[0x7d])
            char r8_1 = arg1[0xee].b
            arg3.q = zmm3.q f+ zmm9.q
            uint128_t zmm1 = _mm_cvtpd_ps(zmm3)
            uint128_t zmm2 = _mm_cvtpd_ps(arg3)
            zmm1.d = zmm1.d f+ zmm1.d
            zmm2.d = zmm2.d f+ zmm2.d
            int64_t rcx_5 = int.q(zmm3.q)
            arg3.d = -0.5f f- zmm1.d
            zmm1 = zmm3
            zmm2.d = zmm2.d f- 0.5f
            int32_t r9_3 = (int.d(arg3.d) s>> 1) + (int.d(zmm2.d) s>> 1)
            
            if (r8_1 == 0)
                if (rcx_5 != -0x8000000000000000)
                    arg3.q = float.d(rcx_5)
                    
                    if (not(arg3.q f== zmm1.q))
                        zmm1.q = float.d(rcx_5
                            + ((zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm1, zmm1.q))) & 1) ^ 1))
            else if (rcx_5 != -0x8000000000000000)
                arg3.q = float.d(rcx_5)
                
                if (not(arg3.q f== zmm3.q))
                    zmm1.q =
                        float.d(rcx_5 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm1, zmm1.q))) & 1))
            
            arg3.q = _mm_cvtepi32_pd(zx.q(r9_3)).q f+ zmm3.q
            int64_t rcx_7 = int.q(arg3.q)
            
            if (r8_1 == 0)
                if (rcx_7 != -0x8000000000000000)
                    zmm2.q = float.d(rcx_7)
                    
                    if (not(zmm2.q f== arg3.q))
                        arg3.q = float.d(rcx_7
                            - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(arg3, arg3.q))) & 1))
            else if (rcx_7 != -0x8000000000000000)
                zmm2.q = float.d(rcx_7)
                
                if (not(zmm2.q f== arg3.q))
                    arg3.q = float.d(rcx_7
                        + ((zx.q(_mm_movemask_pd(_mm_unpacklo_pd(arg3, arg3.q))) & 1) ^ 1))
            
            zmm2 = _mm_cvtepi32_pd(zx.q(rbx_2))
            
            if (zmm2.q f< zmm1.q || zmm2.q f> arg3.q)
                arg3.q = zmm9.q f* 0.5
                zmm2.q = zmm2.q f- arg3.q
                
                if (not(zmm2.q f< 0.0))
                    arg3.q = _mm_cvtepi32_pd(zx.q(*(arg1[0xdc] + 8))).q f- zmm9.q
                    zmm8 = _mm_min_sd(_mm_max_sd(arg3.q, 0).q, zmm2.q)
                
                sub_140f8c880(arg1, _mm_cvtpd_ps(zmm8).q)
            else if (r8_1 != 0)
                int64_t r9_4 = arg1[0x9d]
                int64_t* var_f0
                (*(r9_4 + 0xd0))(&arg1[0x9d], &var_f0, (sx.q(rbx_2) << 4) + *arg1[0xdc], r9_4)
                int64_t* rcx_10 = var_f0
                
                if (rcx_10 != 0)
                    int128_t* rax_23 = sub_140e12190(*(*(*rcx_10 + 0x50))(rcx_10, &var_110))
                    int64_t* var_108
                    
                    if (var_108 != 0)
                        var_108[1].d -= 1
                        
                        if (var_108[1].d == 1)
                            int64_t rdx_3 = *var_108
                            (*rdx_3)(var_108, rdx_3)
                            int32_t temp10_1 = *(var_108 + 0xc)
                            *(var_108 + 0xc) -= 1
                            
                            if (temp10_1 == 1)
                                (*(*var_108 + 8))(var_108, 1)
                    
                    zmm2.d = data_143dbb1f0:4.d.d f* *(rax_23 + 4)
                    int32_t rdx_4 = arg1[0x9b].d
                    zmm3.d = data_143dbb1f0.d.d f* *rax_23
                    zmm1 = zmm2
                    zmm2.d = zmm2.d f* *(rax_23 + 0x28)
                    zmm1.d = zmm1.d f* *(rax_23 + 0x24)
                    arg3.d = zmm3.d f* *(rax_23 + 0x1c)
                    zmm3.d = zmm3.d f* rax_23[2].d
                    zmm1.d = zmm1.d f+ arg3.d
                    zmm2.d = zmm2.d f+ zmm3.d
                    zmm1.d = zmm1.d f+ *(rax_23 + 0x2c)
                    zmm2.d = zmm2.d f+ rax_23[3].d
                    int32_t var_118 = zmm1.d
                    int32_t var_114_1 = zmm2.d
                    void var_e0
                    sub_140f66410(&var_e0, rdx_4, &var_118)
                    zmm2.d = data_143dbb1f0:4.d.d f* arg2[1]
                    int32_t rdx_5 = arg1[0x9b].d
                    zmm3.d = data_143dbb1f0.d.d f* *arg2
                    zmm1 = zmm2
                    zmm2.d = zmm2.d f* arg2[0xa]
                    zmm1.d = zmm1.d f* arg2[9]
                    float zmm0 = zmm3.d f* arg2[7]
                    zmm3.d = zmm3.d f* arg2[8]
                    zmm1.d = zmm1.d f+ zmm0
                    zmm2.d = zmm2.d f+ zmm3.d
                    zmm1.d = zmm1.d f+ arg2[0xb]
                    zmm2.d = zmm2.d f+ arg2[0xc]
                    var_118 = zmm1.d
                    int32_t var_114_2 = zmm2.d
                    void var_d0
                    sub_140f66410(&var_d0, rdx_5, &var_118)
                    uint128_t zmm7 = zx.o(arg1[0x7e])
                    int32_t var_dc
                    float var_cc
                    uint128_t zmm0_1
                    
                    if (var_dc.d f>= var_cc)
                        zmm2 = *rax_23
                        zmm3 = *(rax_23 + 4)
                        int32_t rdx_6 = arg1[0x9b].d
                        zmm1.d = zmm3.d f* *(rax_23 + 0x24)
                        zmm3.d = zmm3.d f* *(rax_23 + 0x28)
                        zmm0_1.d = zmm2.d f* *(rax_23 + 0x1c)
                        zmm2.d = zmm2.d f* rax_23[2].d
                        zmm1.d = zmm1.d f+ zmm0_1.d
                        zmm3.d = zmm3.d f+ zmm2.d
                        zmm1.d = zmm1.d f+ *(rax_23 + 0x2c)
                        zmm3.d = zmm3.d f+ rax_23[3].d
                        var_118 = zmm1.d
                        int32_t var_114_3 = zmm3.d
                        void var_c0
                        sub_140f66410(&var_c0, rdx_6, &var_118)
                        zmm2 = *arg2
                        zmm3 = arg2[1]
                        int32_t rdx_7 = arg1[0x9b].d
                        zmm1.d = zmm3.d f* arg2[9]
                        zmm3.d = zmm3.d f* arg2[0xa]
                        float zmm0_2 = zmm2.d f* arg2[7]
                        zmm2.d = zmm2.d f* arg2[8]
                        zmm1.d = zmm1.d f+ zmm0_2
                        zmm3.d = zmm3.d f+ zmm2.d
                        zmm1.d = zmm1.d f+ arg2[0xb]
                        zmm3.d = zmm3.d f+ arg2[0xc]
                        var_118 = zmm1.d
                        int32_t var_114_4 = zmm3.d
                        void var_b0
                        sub_140f66410(&var_b0, rdx_7, &var_118)
                        int32_t var_ac
                        zmm0_1 = var_ac
                        int32_t var_bc
                        int128_t zmm6 = var_bc
                        
                        if (not(zmm6.d f<= zmm0_1.d))
                            int64_t* rsi_3 = arg1[0xb3]
                            zmm6.d = zmm6.d f- zmm0_1.d
                            zmm7 = zx.o(0)
                            void* r14_4 = &rsi_3[sx.q(arg1[0xb4].d) * 2]
                            int128_t zmm11 = zx.o(0)
                            
                            while (rsi_3 != r14_4)
                                int64_t* rcx_19 = *sub_140ec04c0(&arg1[0x9e], &var_100, rsi_3)
                                void var_a0
                                uint128_t* rax_28 =
                                    sub_140e12190(*(*(*rcx_19 + 0x50))(rcx_19, &var_a0))
                                int32_t rdx_10 = arg1[0x9b].d
                                zmm3 = *(rax_28 + 4)
                                zmm1 = *rax_28
                                float zmm0_3 = zmm3.d f* *(rax_28 + 0x28)
                                zmm2.d = zmm1.d f* rax_28[2].d
                                zmm3.d = zmm3.d f* *(rax_28 + 0x24)
                                zmm1.d = zmm1.d f* *(rax_28 + 0x1c)
                                zmm2.d = zmm2.d f+ zmm0_3
                                zmm3.d = zmm3.d f+ zmm1.d
                                int32_t var_114_5 = zmm2.d
                                var_118 = zmm3.d
                                sub_140f66410(&var_110, rdx_10, &var_118)
                                int64_t* var_98
                                
                                if (var_98 != 0)
                                    var_98[1].d -= 1
                                    
                                    if (var_98[1].d == 1)
                                        (**var_98)(var_98)
                                        int32_t temp14_1 = *(var_98 + 0xc)
                                        *(var_98 + 0xc) -= 1
                                        
                                        if (temp14_1 == 1)
                                            (*(*var_98 + 8))(var_98, 1)
                                
                                if (var_f8 != 0)
                                    var_f8[1].d -= 1
                                    
                                    if (var_f8[1].d == 1)
                                        (**var_f8)(var_f8)
                                        int32_t temp15_1 = *(var_f8 + 0xc)
                                        *(var_f8 + 0xc) -= 1
                                        
                                        if (temp15_1 == 1)
                                            (*(*var_f8 + 8))(var_f8, 1)
                                
                                zmm0_1 = var_110:4.d
                                
                                if (zmm0_1.d f>= zmm6.d)
                                    zmm6.d = zmm6.d f/ zmm0_1.d
                                    zmm7.d = zmm7.d f+ zmm6.d
                                    break
                                
                                rsi_3 = &rsi_3[2]
                                zmm6.d = zmm6.d f- zmm0_1.d
                                zmm7.d = zmm7.d f+ 1f
                            
                            if (arg1[0x7b].b == 0)
                                zmm11 = arg1[0xed].d
                            
                            zmm7.q = fconvert.d(zmm7.d)
                            zmm7.q = zmm7.q f+ arg1[0x7e]
                            zmm0_1.q = fconvert.d(zmm11.d)
                            zmm7.q = zmm7.q f+ zmm0_1.q
                    else
                        zmm0_1.d = _mm_cvtepi32_ps(zx.o(rbx_2)).d f- arg1[0xed].d
                        zmm7 = _mm_cvtps_pd(zmm0_1.q)
                    
                    zmm0_1.q = _mm_cvtepi32_pd(zx.q(*(arg1[0xdc] + 8))).q f- zmm9.q
                    sub_140f8c880(arg1, 
                        _mm_cvtpd_ps(_mm_min_sd(_mm_max_sd(zmm0_1.q, 0).q, zmm7.q)).q)
                
                int64_t* var_e8
                
                if (var_e8 != 0)
                    var_e8[1].d -= 1
                    
                    if (var_e8[1].d == 1)
                        (**var_e8)(var_e8)
                        int32_t temp9_1 = *(var_e8 + 0xc)
                        *(var_e8 + 0xc) -= 1
                        
                        if (temp9_1 == 1)
                            (*(*var_e8 + 8))(var_e8, 1)
            
            sub_140f89930(arg1)
            int64_t* rbx_7 = arg1[0xde]
            var_110 = arg1[0xdd]
            
            if (rbx_7 != 0)
                rbx_7[1].d += 1
            
            if (&var_110 != &arg1[0xe0])
                var_110.o = *(arg1 + 0x700)
                *(arg1 + 0x700) = var_110.o
            
            if (rbx_7 != 0)
                rbx_7[1].d -= 1
                
                if (rbx_7[1].d == 1)
                    (**rbx_7)(rbx_7)
                    int32_t temp11_1 = *(rbx_7 + 0xc)
                    *(rbx_7 + 0xc) -= 1
                    
                    if (temp11_1 == 1)
                        (*(*rbx_7 + 8))(rbx_7, 1)
        
        sub_140ed5f50(&arg1[0xdd])

if (arg1[0x7c].b != 0)
    int64_t rax_40 = arg1[0xe0]
    
    if (rax_40 != 0)
        var_110 = rax_40
        int64_t* rax_41 = arg1[0xe1]
        
        if (rax_41 != 0)
            rax_41[1].d += 1
        
        int64_t rdi_1 = *(*(arg1[0x9d] + 0xd0))(&arg1[0x9d], &var_100, &var_110)
        
        if (var_f8 != 0)
            var_f8[1].d -= 1
            
            if (var_f8[1].d == 1)
                (**var_f8)(var_f8)
                int32_t temp2_1 = *(var_f8 + 0xc)
                *(var_f8 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*var_f8 + 8))(var_f8, 1)
        
        if (rax_41 != 0)
            rax_41[1].d -= 1
            
            if (rax_41[1].d == 1)
                (**rax_41)(rax_41)
                int32_t temp4_1 = *(rax_41 + 0xc)
                *(rax_41 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rax_41 + 8))(rax_41, 1)
        
        int64_t result
        result.b = rdi_1 == 0
        return result

return 0
