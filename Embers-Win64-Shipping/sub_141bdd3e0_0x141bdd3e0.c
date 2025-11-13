// 函数: sub_141bdd3e0
// 地址: 0x141bdd3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = &__return_addr
uint128_t zmm6
uint128_t var_38 = zmm6
void* const rsi = arg2
uint128_t zmm7
uint128_t var_48 = zmm7
uint32_t zmm8[0x4]
uint32_t var_58[0x4] = zmm8
uint32_t zmm11[0x4] = arg3
int128_t zmm14
int128_t var_b8 = zmm14

if (arg4 != 1)
label_141bdd455:
    zmm7 = zx.o(arg1[0x7e])
    int32_t r14_1 = int.d(fconvert.t(arg1[0x7d]))
    zmm8 = __andps_xmmxud_memxud(zmm11, data_142d3f770)
    int64_t rbx
    
    if (zmm7.q f!= 0.0 || arg1[0x86].b == 0)
        rbx.b = 0
    else
        rbx.b = 1
    
    if (arg4 == 0)
        if (zmm7.q f!= 0.0)
            arg2 = nullptr
        else
            arg2.b = 1
        
        result = sub_140edb000(&arg1[0x9c], arg2.b, arg1[0x86].b, zmm11[0])
    
    if (arg4 == 0 && result != 0)
        zmm11[0] f- 0f
        
        if (not(zmm11[0] f> 0f))
            if (zmm11[0] f>= 0f)
                zmm8 = zx.o(0)
            else
                zmm8 ^= data_142d3f780
        
        if (not(sub_140ed8eb0(&arg1[0x9c], rsi, zmm8[0]).d f== 0f))
            result, zmm6 = sub_140f89930(arg1)
    else if (rbx.b == 0)
        void* rax = arg1[0xdc]
        
        if (rax != 0 && *(rax + 8) s> 0)
            int128_t zmm15 = *(rsi + 8)
            
            if (not(zmm11[0] f== 0f))
                int64_t r12_1 = sx.q(r14_1) << 3
                
                do
                    void** rax_2 = arg1[0xdc]
                    
                    if (r14_1 s>= rax_2[1].d)
                        break
                    
                    if (r14_1 s< 0)
                        break
                    
                    int64_t* r13_2 = *rax_2 + r12_1
                    
                    if (*r13_2 != 0)
                        int64_t* var_120
                        sub_141bb2520(&arg1[0xa0], &var_120, r13_2)
                        int64_t* r15_1 = var_120
                        int64_t* rbx_1
                        int64_t* var_118
                        
                        if (r15_1 != 0)
                            rbx_1 = var_118
                        else
                            void var_100
                            int64_t* rax_4 = (*(*arg1 + 0x2a8))(arg1, &var_100, *r13_2)
                            int64_t* rdi_1 = rax_4[1]
                            r15_1 = *rax_4
                            
                            if (rdi_1 != 0)
                                rdi_1[1].d += 1
                            
                            rbx_1 = var_118
                            var_120 = r15_1
                            int64_t* rsi_1 = rbx_1
                            
                            if (rdi_1 != rbx_1)
                                rbx_1 = rdi_1
                                var_118 = rbx_1
                                
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
                            
                            int64_t* var_f8
                            
                            if (var_f8 != 0)
                                var_f8[1].d -= 1
                                
                                if (var_f8[1].d == 1)
                                    (**var_f8)(var_f8)
                                    int32_t temp7_1 = *(var_f8 + 0xc)
                                    *(var_f8 + 0xc) -= 1
                                    
                                    if (temp7_1 == 1)
                                        (*(*var_f8 + 8))(var_f8, 1)
                            
                            (*(*r15_1 + 0x10))(r15_1, zx.q(r14_1))
                            int64_t* var_110 = r15_1
                            int64_t* var_108_1 = rbx_1
                            
                            if (rbx_1 != 0)
                                rbx_1[1].d += 1
                            
                            int128_t zmm0_2 = sub_141bbed80(&arg1[0xa0], *r13_2, &var_110)
                            void var_f0
                            zmm7 = sub_140e25880(*(*(*r15_1 + 0x50))(r15_1, &var_f0), zmm15, zmm0_2)
                            int64_t* var_e8
                            
                            if (var_e8 != 0)
                                var_e8[1].d -= 1
                                
                                if (var_e8[1].d == 1)
                                    (**var_e8)(var_e8)
                                    int32_t temp11_1 = *(var_e8 + 0xc)
                                    *(var_e8 + 0xc) -= 1
                                    
                                    if (temp11_1 == 1)
                                        (*(*var_e8 + 8))(var_e8, 1)
                        void var_138
                        void var_e0
                        int64_t* rax_17 =
                            sub_140e13cf0(*(*(*r15_1 + 0x50))(r15_1, &var_e0), &var_138)
                        void var_130
                        sub_140f66410(&var_130, arg1[0x9b].d, rax_17)
                        int64_t* var_d8
                        
                        if (var_d8 != 0)
                            var_d8[1].d -= 1
                            
                            if (var_d8[1].d == 1)
                                (**var_d8)(var_d8)
                                int32_t temp1_1 = *(var_d8 + 0xc)
                                *(var_d8 + 0xc) -= 1
                                
                                if (temp1_1 == 1)
                                    (*(*var_d8 + 8))(var_d8, 1)
                        
                        zmm6.d = fconvert.s(zmm7.q)
                        truncf(zmm6.d)
                        zmm6.d = zmm6.d f- zmm6.d
                        int32_t var_12c
                        int64_t rax_22
                        int32_t rcx_22
                        uint128_t zmm0_3
                        
                        if (zmm11[0] f<= 0f)
                            if (not(zmm6.d f!= 0f))
                                zmm6 = 0x3f800000
                                zmm7.q = zmm7.q f+ -0x4010000000000000
                            
                            zmm0_3 = var_12c
                            zmm6.d = zmm6.d f* zmm0_3.d
                            
                            if (zmm8[0] f<= zmm6.d)
                                if (zmm8[0] f!= zmm6.d)
                                    zmm6.d = zmm6.d f- zmm8[0]
                                    zmm6.d = zmm6.d f/ zmm0_3.d
                                    zmm6.d = zmm6.d f+ _mm_cvtepi32_ps(zx.o(int.d(zmm7.q))).d
                                    zmm7.q = fconvert.d(zmm6.d)
                                else
                                    zmm6.d = fconvert.s(zmm7.q)
                                    truncf(zmm6.d)
                                    zmm6.d = zmm6.d f- zmm6.d
                                    zmm0_3.q = fconvert.d((zmm6 ^ 0x80000000).d)
                                    zmm7.q = zmm7.q f+ zmm0_3.q
                                
                                goto label_141bdd919
                            
                            if (r14_1 == 0)
                                zmm7 = zx.o(0)
                                goto label_141bdd919
                            
                            zmm8[0] = zmm8[0] f- zmm6.d
                            zmm6.d = fconvert.s(zmm7.q)
                            truncf(zmm6.d)
                            zmm6.d = zmm6.d f- zmm6.d
                            rax_22 = -8
                            rcx_22 = -1
                            zmm0_3.q = fconvert.d((zmm6 ^ 0x80000000).d)
                            zmm7.q = zmm7.q f+ zmm0_3.q
                            goto label_141bdd848
                        
                        arg3 = var_12c
                        float zmm1 = (1f f- zmm6.d) f* arg3[0]
                        
                        if (zmm8[0] f<= zmm1)
                            bool cond:4_1 = zmm8[0] f!= zmm1
                            zmm0_3 = _mm_cvtepi32_ps(zx.o(int.d(zmm7.q)))
                            
                            if (cond:4_1)
                                int128_t zmm10
                                zmm10.d = 1f - (zmm1 f- zmm8[0]) f/ arg3[0]
                                zmm10.d = zmm10.d f+ zmm0_3.d
                                zmm7.q = fconvert.d(zmm10.d)
                            else
                                zmm0_3.d = zmm0_3.d f+ 1f
                                zmm7 = _mm_cvtps_pd(zmm0_3.q)
                            
                            goto label_141bdd919
                        
                        int32_t rcx_21 = *(arg1[0xdc] + 8)
                        
                        if (r14_1 == rcx_21)
                            zmm7 = _mm_cvtepi32_pd(zx.q(rcx_21))
                        label_141bdd919:
                            
                            if (rbx_1 == 0)
                                break
                            
                            rbx_1[1].d -= 1
                            
                            if (rbx_1[1].d == 1)
                                (**rbx_1)(rbx_1)
                                int32_t temp12_1 = *(rbx_1 + 0xc)
                                *(rbx_1 + 0xc) -= 1
                                
                                if (temp12_1 == 1)
                                    (*(*rbx_1 + 8))(rbx_1, 1)
                            
                            break
                        
                        zmm8[0] = zmm8[0] f- zmm1
                        rax_22 = 8
                        rcx_22 = 1
                        zmm0_3.d = _mm_cvtepi32_ps(zx.o(int.d(zmm7.q))).d f+ 1f
                        zmm7 = _mm_cvtps_pd(zmm0_3.q)
                    label_141bdd848:
                        r14_1 += rcx_22
                        r12_1 += rax_22
                        
                        if (rbx_1 != 0)
                            rbx_1[1].d -= 1
                            
                            if (rbx_1[1].d == 1)
                                (**rbx_1)(rbx_1)
                                int32_t temp13_1 = *(rbx_1 + 0xc)
                                *(rbx_1 + 0xc) -= 1
                                
                                if (temp13_1 == 1)
                                    (*(*rbx_1 + 8))(rbx_1, 1)
                    else
                        r14_1 += 1
                        r12_1 += 8
                while (zmm8[0] f!= 0f)
        
        return (*(*arg1 + 0x258))(arg1, fconvert.s(zmm7.q))
else if ((0x3f1a36e2e0000000 f<= arg1[0x7e] || not(zmm11[0] f< 0f))
        && (arg1[0x86].b == 0 || not(zmm11[0] f> 0f)))
    goto label_141bdd455

return result
