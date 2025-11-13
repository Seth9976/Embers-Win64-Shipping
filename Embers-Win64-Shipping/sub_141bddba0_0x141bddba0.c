// 函数: sub_141bddba0
// 地址: 0x141bddba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm8
uint128_t var_58 = zmm8
uint128_t zmm9
uint128_t var_68 = zmm9
int64_t* rax = arg1[0xdc]
void var_f8
int64_t* var_f0
int64_t arg_8

if (rax != 0)
    int64_t rcx = arg1[0xdd]
    
    if (rcx != 0)
        int64_t* r8_1 = *rax
        int64_t* rbx_1 = r8_1
        void* rdx = &r8_1[sx.q(rax[1].d)]
        
        if (r8_1 != rdx)
            do
                if (*rbx_1 == rcx)
                    int32_t rbx_3 = ((rbx_1 - r8_1) s>> 3).d
                    
                    if (rbx_3 != 0xffffffff)
                        (*(*arg1 + 0x260))(arg1)
                        zmm8 = zx.o(0)
                        zmm9.q = fconvert.d(arg3.d)
                        
                        if (not(zmm9.q f!= 0.0) && sub_140f7b440(arg1) != 0)
                            zmm9 = zx.o(arg1[0x84])
                            
                            if (not(zmm9.q f!= 0.0))
                                return 1
                        
                        sub_140f74a00(arg1)
                        uint128_t zmm3 = zx.o(arg1[0x7d])
                        char r8_2 = arg1[0xec].b
                        arg3.q = zmm3.q f+ zmm9.q
                        uint128_t zmm1 = _mm_cvtpd_ps(zmm3)
                        uint128_t zmm2 = _mm_cvtpd_ps(arg3)
                        zmm1.d = zmm1.d f+ zmm1.d
                        zmm2.d = zmm2.d f+ zmm2.d
                        int64_t rcx_4 = int.q(zmm3.q)
                        arg3.d = -0.5f f- zmm1.d
                        zmm1 = zmm3
                        zmm2.d = zmm2.d f- 0.5f
                        int32_t r9_3 = (int.d(arg3.d) s>> 1) + (int.d(zmm2.d) s>> 1)
                        
                        if (r8_2 == 0)
                            if (rcx_4 != -0x8000000000000000)
                                arg3.q = float.d(rcx_4)
                                
                                if (not(arg3.q f== zmm1.q))
                                    zmm1.q = float.d(rcx_4 + ((
                                        zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm1, zmm1.q))) & 1) ^ 1))
                        else if (rcx_4 != -0x8000000000000000)
                            arg3.q = float.d(rcx_4)
                            
                            if (not(arg3.q f== zmm3.q))
                                zmm1.q = float.d(rcx_4
                                    - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm1, zmm1.q))) & 1))
                        
                        arg3.q = _mm_cvtepi32_pd(zx.q(r9_3)).q f+ zmm3.q
                        int64_t rcx_6 = int.q(arg3.q)
                        
                        if (r8_2 == 0)
                            if (rcx_6 != -0x8000000000000000)
                                zmm2.q = float.d(rcx_6)
                                
                                if (not(zmm2.q f== arg3.q))
                                    arg3.q = float.d(rcx_6 -
                                        (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(arg3, arg3.q))) & 1))
                        else if (rcx_6 != -0x8000000000000000)
                            zmm2.q = float.d(rcx_6)
                            
                            if (not(zmm2.q f== arg3.q))
                                arg3.q = float.d(rcx_6 + ((
                                    zx.q(_mm_movemask_pd(_mm_unpacklo_pd(arg3, arg3.q))) & 1) ^ 1))
                        
                        zmm2 = _mm_cvtepi32_pd(zx.q(rbx_3))
                        
                        if (zmm2.q f< zmm1.q || zmm2.q f> arg3.q)
                            arg3.q = zmm9.q f* 0.5
                            zmm2.q = zmm2.q f- arg3.q
                            
                            if (not(zmm2.q f< 0.0))
                                arg3.q = _mm_cvtepi32_pd(zx.q(*(arg1[0xdc] + 8))).q f- zmm9.q
                                zmm8 = _mm_min_sd(_mm_max_sd(arg3.q, 0).q, zmm2.q)
                            
                            sub_140f8c880(arg1, _mm_cvtpd_ps(zmm8).q)
                        else if (r8_2 != 0)
                            int64_t r9_4 = arg1[0x9f]
                            int64_t* var_e8
                            (*(r9_4 + 0xd0))(&arg1[0x9f], &var_e8, 
                                *arg1[0xdc] + (sx.q(rbx_3) << 3), r9_4)
                            int64_t* rcx_9 = var_e8
                            
                            if (rcx_9 != 0)
                                void var_108
                                int128_t* rax_20 =
                                    sub_140e12190(*(*(*rcx_9 + 0x50))(rcx_9, &var_108))
                                int64_t* var_100
                                
                                if (var_100 != 0)
                                    var_100[1].d -= 1
                                    
                                    if (var_100[1].d == 1)
                                        int64_t rdx_4 = *var_100
                                        (*rdx_4)(var_100, rdx_4)
                                        int32_t temp5_1 = *(var_100 + 0xc)
                                        *(var_100 + 0xc) -= 1
                                        
                                        if (temp5_1 == 1)
                                            (*(*var_100 + 8))(var_100, 1)
                                
                                zmm2.d = data_143dbb1f0:4.d.d f* *(rax_20 + 4)
                                zmm3.d = data_143dbb1f0.d.d f* *rax_20
                                zmm1 = zmm2
                                zmm2.d = zmm2.d f* *(rax_20 + 0x28)
                                zmm1.d = zmm1.d f* *(rax_20 + 0x24)
                                arg3.d = zmm3.d f* *(rax_20 + 0x1c)
                                zmm3.d = zmm3.d f* rax_20[2].d
                                zmm1.d = zmm1.d f+ arg3.d
                                zmm2.d = zmm2.d f+ zmm3.d
                                zmm1.d = zmm1.d f+ *(rax_20 + 0x2c)
                                zmm2.d = zmm2.d f+ rax_20[3].d
                                arg_8.d = zmm1.d
                                arg_8:4.d = zmm2.d
                                void var_d8
                                sub_140f66410(&var_d8, arg1[0x9b].d, &arg_8)
                                zmm2.d = data_143dbb1f0:4.d.d f* arg2[1]
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
                                arg_8.d = zmm1.d
                                arg_8:4.d = zmm2.d
                                void var_c8
                                sub_140f66410(&var_c8, arg1[0x9b].d, &arg_8)
                                uint128_t zmm7 = zx.o(arg1[0x7e])
                                int32_t var_d4
                                float var_c4
                                uint128_t zmm0_1
                                
                                if (var_d4.d f>= var_c4)
                                    zmm2 = *rax_20
                                    zmm3 = *(rax_20 + 4)
                                    zmm1.d = zmm3.d f* *(rax_20 + 0x24)
                                    zmm3.d = zmm3.d f* *(rax_20 + 0x28)
                                    zmm0_1.d = zmm2.d f* *(rax_20 + 0x1c)
                                    zmm2.d = zmm2.d f* rax_20[2].d
                                    zmm1.d = zmm1.d f+ zmm0_1.d
                                    zmm3.d = zmm3.d f+ zmm2.d
                                    zmm1.d = zmm1.d f+ *(rax_20 + 0x2c)
                                    zmm3.d = zmm3.d f+ rax_20[3].d
                                    arg_8.d = zmm1.d
                                    arg_8:4.d = zmm3.d
                                    void var_b8
                                    sub_140f66410(&var_b8, arg1[0x9b].d, &arg_8)
                                    zmm2 = *arg2
                                    zmm3 = arg2[1]
                                    zmm1.d = zmm3.d f* arg2[9]
                                    zmm3.d = zmm3.d f* arg2[0xa]
                                    float zmm0_2 = zmm2.d f* arg2[7]
                                    zmm2.d = zmm2.d f* arg2[8]
                                    zmm1.d = zmm1.d f+ zmm0_2
                                    zmm3.d = zmm3.d f+ zmm2.d
                                    zmm1.d = zmm1.d f+ arg2[0xb]
                                    zmm3.d = zmm3.d f+ arg2[0xc]
                                    arg_8.d = zmm1.d
                                    arg_8:4.d = zmm3.d
                                    void var_a8
                                    sub_140f66410(&var_a8, arg1[0x9b].d, &arg_8)
                                    int32_t var_a4
                                    zmm0_1 = var_a4
                                    int32_t var_b4
                                    int128_t zmm6 = var_b4
                                    
                                    if (not(zmm6.d f<= zmm0_1.d))
                                        int64_t* rsi_2 = arg1[0xb5]
                                        zmm6.d = zmm6.d f- zmm0_1.d
                                        zmm7 = zx.o(0)
                                        int128_t zmm11 = zx.o(0)
                                        void* r14_2 = &rsi_2[sx.q(arg1[0xb6].d)]
                                        
                                        while (rsi_2 != r14_2)
                                            int64_t* rcx_18 =
                                                *sub_141bb2520(&arg1[0xa0], &var_f8, rsi_2)
                                            void var_98
                                            uint128_t* rax_26 =
                                                sub_140e12190(*(*(*rcx_18 + 0x50))(rcx_18, &var_98))
                                            zmm3 = *(rax_26 + 4)
                                            zmm1 = *rax_26
                                            float zmm0_3 = zmm3.d f* *(rax_26 + 0x28)
                                            zmm2.d = zmm1.d f* rax_26[2].d
                                            zmm3.d = zmm3.d f* *(rax_26 + 0x24)
                                            zmm1.d = zmm1.d f* *(rax_26 + 0x1c)
                                            zmm2.d = zmm2.d f+ zmm0_3
                                            zmm3.d = zmm3.d f+ zmm1.d
                                            arg_8:4.d = zmm2.d
                                            arg_8.d = zmm3.d
                                            sub_140f66410(&var_108, arg1[0x9b].d, &arg_8)
                                            int64_t* var_90
                                            
                                            if (var_90 != 0)
                                                var_90[1].d -= 1
                                                
                                                if (var_90[1].d == 1)
                                                    (**var_90)(var_90)
                                                    int32_t temp8_1 = *(var_90 + 0xc)
                                                    *(var_90 + 0xc) -= 1
                                                    
                                                    if (temp8_1 == 1)
                                                        (*(*var_90 + 8))(var_90, 1)
                                            
                                            if (var_f0 != 0)
                                                var_f0[1].d -= 1
                                                
                                                if (var_f0[1].d == 1)
                                                    (**var_f0)(var_f0)
                                                    int32_t temp9_1 = *(var_f0 + 0xc)
                                                    *(var_f0 + 0xc) -= 1
                                                    
                                                    if (temp9_1 == 1)
                                                        (*(*var_f0 + 8))(var_f0, 1)
                                            
                                            int32_t var_104
                                            zmm0_1 = var_104
                                            
                                            if (zmm0_1.d f>= zmm6.d)
                                                zmm6.d = zmm6.d f/ zmm0_1.d
                                                zmm7.d = zmm7.d f+ zmm6.d
                                                break
                                            
                                            rsi_2 = &rsi_2[1]
                                            zmm6.d = zmm6.d f- zmm0_1.d
                                            zmm7.d = zmm7.d f+ 1f
                                        
                                        if (arg1[0x7b].b == 0)
                                            zmm11 = arg1[0xeb].d
                                        
                                        zmm7.q = fconvert.d(zmm7.d)
                                        zmm7.q = zmm7.q f+ arg1[0x7e]
                                        zmm0_1.q = fconvert.d(zmm11.d)
                                        zmm7.q = zmm7.q f+ zmm0_1.q
                                else
                                    zmm0_1.d = _mm_cvtepi32_ps(zx.o(rbx_3)).d f- arg1[0xeb].d
                                    zmm7 = _mm_cvtps_pd(zmm0_1.q)
                                
                                zmm0_1.q = _mm_cvtepi32_pd(zx.q(*(arg1[0xdc] + 8))).q f- zmm9.q
                                sub_140f8c880(arg1, 
                                    _mm_cvtpd_ps(_mm_min_sd(_mm_max_sd(zmm0_1.q, 0).q, zmm7.q)).q)
                            
                            int64_t* var_e0
                            
                            if (var_e0 != 0)
                                var_e0[1].d -= 1
                                
                                if (var_e0[1].d == 1)
                                    (**var_e0)(var_e0)
                                    int32_t temp4_1 = *(var_e0 + 0xc)
                                    *(var_e0 + 0xc) -= 1
                                    
                                    if (temp4_1 == 1)
                                        (*(*var_e0 + 8))(var_e0, 1)
                        
                        sub_140f89930(arg1)
                        arg1[0xdf] = arg1[0xdd]
                    
                    break
                
                rbx_1 = &rbx_1[1]
            while (rbx_1 != rdx)
        
        arg1[0xdd] = 0

if (arg1[0x7c].b != 0)
    int64_t rax_36 = arg1[0xdf]
    
    if (rax_36 != 0)
        arg_8 = rax_36
        int64_t rdi_1 = *(*(arg1[0x9f] + 0xd0))(&arg1[0x9f], &var_f8, &arg_8)
        
        if (var_f0 != 0)
            var_f0[1].d -= 1
            
            if (var_f0[1].d == 1)
                int64_t rdx_13 = *var_f0
                (*rdx_13)(var_f0, rdx_13)
                int32_t temp1_1 = *(var_f0 + 0xc)
                *(var_f0 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    int64_t r8_12 = *var_f0
                    (*(r8_12 + 8))(var_f0, 1, r8_12)
        
        int32_t r12
        r12.b = rdi_1 == 0
        return zx.q(r12)

return 0
