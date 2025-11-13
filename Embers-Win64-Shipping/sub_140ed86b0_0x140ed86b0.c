// 函数: sub_140ed86b0
// 地址: 0x140ed86b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = &__return_addr
uint128_t zmm6
uint128_t var_38 = zmm6
uint32_t zmm7[0x4]
uint32_t var_48[0x4] = zmm7
uint128_t zmm9
uint128_t var_68 = zmm9
uint32_t zmm11[0x4] = arg3
int128_t zmm14
int128_t var_b8 = zmm14

if (arg4 != 1)
label_140ed8725:
    zmm9 = zx.o(arg1[0x7e])
    int32_t r14_1 = int.d(fconvert.t(arg1[0x7d]))
    zmm7 = __andps_xmmxud_memxud(zmm11, data_142d3f770)
    
    if (zmm9.q f!= 0.0 || arg1[0x86].b == 0)
        result = 0
    else
        result = 1
    
    float zmm1
    
    if (arg4 != 0)
    label_140ed882b:
        
        if (result == 0)
            void* rax = arg1[0xdc]
            
            if (rax != 0 && *(rax + 8) s> 0)
                int128_t zmm15 = *(arg2 + 8)
                
                if (not(zmm11[0] f== 0f))
                    int64_t rcx_1 = sx.q(r14_1) << 4
                    int64_t var_158_1 = rcx_1
                    
                    do
                        int64_t* rax_1 = arg1[0xdc]
                        
                        if (r14_1 s>= rax_1[1].d)
                            break
                        
                        if (r14_1 s< 0)
                            break
                        
                        int64_t* r15_2 = *rax_1 + rcx_1
                        
                        if (*r15_2 != 0)
                            int64_t* var_150
                            sub_140ec04c0(&arg1[0x9e], &var_150, r15_2)
                            int64_t* r12_1 = var_150
                            int64_t* rbx_1
                            int64_t* var_148
                            
                            if (r12_1 != 0)
                                rbx_1 = var_148
                            else
                                int64_t var_130 = *r15_2
                                void* rax_3 = r15_2[1]
                                void* var_128_1 = rax_3
                                
                                if (rax_3 != 0)
                                    *(rax_3 + 8) += 1
                                
                                void var_f8
                                int64_t* rax_5 = (*(*arg1 + 0x2a8))(arg1, &var_f8, &var_130)
                                int64_t* rdi_1 = rax_5[1]
                                r12_1 = *rax_5
                                
                                if (rdi_1 != 0)
                                    rdi_1[1].d += 1
                                
                                rbx_1 = var_148
                                var_150 = r12_1
                                int64_t* rsi_1 = rbx_1
                                
                                if (rdi_1 != rbx_1)
                                    rbx_1 = rdi_1
                                    var_148 = rbx_1
                                    
                                    if (rsi_1 != 0)
                                        rsi_1[1].d -= 1
                                        
                                        if (rsi_1[1].d == 1)
                                            (**rsi_1)(rsi_1)
                                            int32_t temp6_1 = *(rsi_1 + 0xc)
                                            *(rsi_1 + 0xc) -= 1
                                            
                                            if (temp6_1 == 1)
                                                (*(*rsi_1 + 8))(rsi_1, 1)
                                else if (rdi_1 != 0)
                                    rdi_1[1].d -= 1
                                    
                                    if (rdi_1[1].d == 1)
                                        (**rdi_1)(rdi_1)
                                        int32_t temp5_1 = *(rdi_1 + 0xc)
                                        *(rdi_1 + 0xc) -= 1
                                        
                                        if (temp5_1 == 1)
                                            (*(*rdi_1 + 8))(rdi_1, 1)
                                
                                int64_t* var_f0
                                
                                if (var_f0 != 0)
                                    var_f0[1].d -= 1
                                    
                                    if (var_f0[1].d == 1)
                                        (**var_f0)(var_f0)
                                        int32_t temp7_1 = *(var_f0 + 0xc)
                                        *(var_f0 + 0xc) -= 1
                                        
                                        if (temp7_1 == 1)
                                            (*(*var_f0 + 8))(var_f0, 1)
                                
                                (*(*r12_1 + 0x10))(r12_1, zx.q(r14_1))
                                int64_t* var_120 = r12_1
                                int64_t* var_118_1 = rbx_1
                                
                                if (rbx_1 != 0)
                                    rbx_1[1].d += 1
                                
                                int64_t var_110 = *r15_2
                                void* rax_13 = r15_2[1]
                                void* var_108_1 = rax_13
                                
                                if (rax_13 != 0)
                                    *(rax_13 + 8) += 1
                                
                                int128_t zmm0_1 = sub_140eca900(&arg1[0x9e], &var_110, &var_120)
                                void var_e8
                                zmm7 = sub_140e25880(*(*(*r12_1 + 0x50))(r12_1, &var_e8), zmm15, 
                                    zmm0_1)
                                int64_t* var_e0
                                
                                if (var_e0 != 0)
                                    var_e0[1].d -= 1
                                    
                                    if (var_e0[1].d == 1)
                                        (**var_e0)(var_e0)
                                        int32_t temp13_1 = *(var_e0 + 0xc)
                                        *(var_e0 + 0xc) -= 1
                                        
                                        if (temp13_1 == 1)
                                            (*(*var_e0 + 8))(var_e0, 1)
                            void var_100
                            void var_d8
                            int64_t* rax_20 =
                                sub_140e13cf0(*(*(*r12_1 + 0x50))(r12_1, &var_d8), &var_100)
                            void var_140
                            sub_140f66410(&var_140, arg1[0x9b].d, rax_20)
                            int64_t* var_d0
                            
                            if (var_d0 != 0)
                                var_d0[1].d -= 1
                                
                                if (var_d0[1].d == 1)
                                    (**var_d0)(var_d0)
                                    int32_t temp1_1 = *(var_d0 + 0xc)
                                    *(var_d0 + 0xc) -= 1
                                    
                                    if (temp1_1 == 1)
                                        (*(*var_d0 + 8))(var_d0, 1)
                            
                            zmm6.d = fconvert.s(zmm9.q)
                            truncf(zmm6.d)
                            zmm6.d = zmm6.d f- zmm6.d
                            int64_t rax_25
                            int32_t rcx_21
                            int32_t var_13c
                            uint128_t zmm0_2
                            
                            if (zmm11[0] f<= 0f)
                                if (not(zmm6.d f!= 0f))
                                    zmm6 = 0x3f800000
                                    zmm9.q = zmm9.q f+ -0x4010000000000000
                                
                                zmm0_2 = var_13c
                                zmm6.d = zmm6.d f* zmm0_2.d
                                
                                if (zmm7[0] f<= zmm6.d)
                                    if (zmm7[0] f!= zmm6.d)
                                        zmm6.d = zmm6.d f- zmm7[0]
                                        zmm6.d = zmm6.d f/ zmm0_2.d
                                        zmm6.d = zmm6.d f+ _mm_cvtepi32_ps(zx.o(int.d(zmm9.q))).d
                                        zmm9.q = fconvert.d(zmm6.d)
                                    else
                                        zmm6.d = fconvert.s(zmm9.q)
                                        truncf(zmm6.d)
                                        zmm6.d = zmm6.d f- zmm6.d
                                        zmm0_2.q = fconvert.d((zmm6 ^ 0x80000000).d)
                                        zmm9.q = zmm9.q f+ zmm0_2.q
                                    
                                    goto label_140ed8cac
                                
                                if (r14_1 == 0)
                                    zmm9 = zx.o(0)
                                    goto label_140ed8cac
                                
                                zmm7[0] = zmm7[0] f- zmm6.d
                                zmm6.d = fconvert.s(zmm9.q)
                                truncf(zmm6.d)
                                zmm6.d = zmm6.d f- zmm6.d
                                rax_25 = -0x10
                                rcx_21 = -1
                                zmm0_2.q = fconvert.d((zmm6 ^ 0x80000000).d)
                                zmm9.q = zmm9.q f+ zmm0_2.q
                            else
                                arg3 = var_13c
                                zmm1 = (1f f- zmm6.d) f* arg3[0]
                                
                                if (zmm7[0] f<= zmm1)
                                    bool cond:7_1 = zmm7[0] f!= zmm1
                                    zmm0_2 = _mm_cvtepi32_ps(zx.o(int.d(zmm9.q)))
                                    
                                    if (cond:7_1)
                                        int128_t zmm10
                                        zmm10.d = 1f - (zmm1 f- zmm7[0]) f/ arg3[0]
                                        zmm10.d = zmm10.d f+ zmm0_2.d
                                        zmm9.q = fconvert.d(zmm10.d)
                                    else
                                        zmm0_2.d = zmm0_2.d f+ 1f
                                        zmm9 = _mm_cvtps_pd(zmm0_2.q)
                                    
                                    goto label_140ed8cac
                                
                                int32_t rcx_20 = *(arg1[0xdc] + 8)
                                
                                if (r14_1 == rcx_20)
                                    zmm9 = _mm_cvtepi32_pd(zx.q(rcx_20))
                                label_140ed8cac:
                                    
                                    if (rbx_1 == 0)
                                        break
                                    
                                    rbx_1[1].d -= 1
                                    
                                    if (rbx_1[1].d == 1)
                                        (**rbx_1)(rbx_1)
                                        int32_t temp10_1 = *(rbx_1 + 0xc)
                                        *(rbx_1 + 0xc) -= 1
                                        
                                        if (temp10_1 == 1)
                                            (*(*rbx_1 + 8))(rbx_1, 1)
                                    
                                    break
                                    break
                                
                                zmm7[0] = zmm7[0] f- zmm1
                                rax_25 = 0x10
                                rcx_21 = 1
                                zmm0_2.d = _mm_cvtepi32_ps(zx.o(int.d(zmm9.q))).d f+ 1f
                                zmm9 = _mm_cvtps_pd(zmm0_2.q)
                            int64_t rsi_3 = var_158_1 + rax_25
                            r14_1 += rcx_21
                            rcx_1 = rsi_3
                            var_158_1 = rcx_1
                            
                            if (rbx_1 != 0)
                                rbx_1[1].d -= 1
                                var_158_1 = rcx_1
                                
                                if (rbx_1[1].d == 1)
                                    (**rbx_1)(rbx_1)
                                    int32_t temp11_1 = *(rbx_1 + 0xc)
                                    *(rbx_1 + 0xc) -= 1
                                    rcx_1 = rsi_3
                                    var_158_1 = rcx_1
                                    
                                    if (temp11_1 == 1)
                                        (*(*rbx_1 + 8))(rbx_1, 1)
                                        rcx_1 = rsi_3
                                        var_158_1 = rcx_1
                        else
                            r14_1 += 1
                            rcx_1 += 0x10
                            var_158_1 = rcx_1
                    while (zmm7[0] f!= 0f)
            
            return (*(*arg1 + 0x258))(arg1, fconvert.s(zmm9.q))
    else
        int64_t zmm0
        
        if (not(zmm9.q f!= 0.0) && zmm11[0] f< 0f)
        label_140ed8795:
            zmm7 ^= data_142d3f780
        else if (arg1[0x86].b == 0 || not(zmm11[0] f> 0f))
            zmm0 = arg1[0x9c].d
            zmm0.d f- 0f
            bool cond:2_1 = zmm0.d f>= 0f
            
            if (not(zmm0.d f<= 0f))
                if (not(zmm11[0] f>= 0f))
                    goto label_140ed8795
                
                cond:2_1 = zmm0.d f>= 0f
            
            if (cond:2_1 || zmm11[0] f<= 0f)
                goto label_140ed882b
        
        zmm7[0] = zmm7[0] f/ *(arg2 + 8)
        zmm6 = arg1[0x9c].d
        zmm6.d f- 0f
        zmm0 = 0x3f800000
        zmm7[0] = zmm7[0] f+ zmm6.d
        arg1[0x9c].d = zmm7[0]
        
        if (not(zmm6.d f<= 0f))
            zmm1 = 1f
        else if (zmm6.d f>= 0f)
            zmm1 = (zx.o(0)).d
        else
            zmm1 = -1f
        
        zmm7[0] f- 0f
        
        if (not(zmm7[0] f> 0f))
            if (zmm7[0] f>= 0f)
                zmm0 = (zx.o(0)).q
            else
                zmm0 = 0xbf800000
        
        if (not(zmm1 f== zmm0.d) && not(zmm6.d f== 0f))
            arg1[0x9c].d = 0
            zmm7 = zx.o(0)
        
        zmm6.d = zmm6.d f- zmm7[0]
        
        if (not(zmm6.d f== 0f))
            result, zmm6 = sub_140f89930(arg1)
else if ((0x3f1a36e2e0000000 f<= arg1[0x7e] || not(zmm11[0] f< 0f))
        && (arg1[0x86].b == 0 || not(zmm11[0] f> 0f)))
    goto label_140ed8725

return result
