// 函数: sub_142784360
// 地址: 0x142784360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_3a8
int64_t rax_2 = __security_cookie ^ &var_3a8
uint128_t zmm6
uint128_t var_38_1 = zmm6
uint128_t zmm7
uint128_t var_48_1 = zmm7
uint128_t zmm8
uint128_t var_58_1 = zmm8
int64_t var_368 = arg1
int64_t var_360_1 = arg1 - 0x58 + sx.q(arg2) * 0x58
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_358_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_350
memset(&var_350, 0, 0x2e8)
int64_t* r14_1 = &var_368

while (true)
    uint128_t zmm2 = *r14_1
    uint32_t rbp_1 = (r14_1[2]).d
    uint128_t* r11_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rdx_3 = ((i - r11_1) s/ 0x58).d + 1
    
    if (rbp_1 == 0)
    label_142784780:
        sub_142781700(r11_1, rdx_3, zx.q(arg3), arg4)
    else
        while (true)
            uint128_t zmm0_2
            uint128_t zmm1
            uint128_t zmm3
            uint128_t zmm4_1
            uint128_t zmm5_1
            
            if (rdx_3 s<= 8)
                for (; i u> r11_1; i -= 0x58)
                    int32_t* rax_28 = r11_1
                    int32_t* rcx_14 = r11_1 + 0x58
                    
                    if (r11_1 + 0x58 u<= i)
                        zmm6 = *arg4
                        zmm7 = *(arg4 + 4)
                        zmm8 = *(arg4 + 8)
                        
                        do
                            zmm5_1.d = zmm7.d f- rax_28[1]
                            zmm2.d = zmm6.d f- *rax_28
                            zmm4_1.d = zmm7.d f- rcx_14[1]
                            zmm3.d = zmm6.d f- *rcx_14
                            zmm5_1.d = zmm5_1.d f* zmm5_1.d
                            zmm0_2.d = zmm8.d f- rax_28[2]
                            zmm4_1.d = zmm4_1.d f* zmm4_1.d
                            zmm1.d = zmm8.d f- rcx_14[2]
                            zmm2.d = zmm2.d f* zmm2.d
                            zmm3.d = zmm3.d f* zmm3.d
                            zmm5_1.d = zmm5_1.d f+ zmm2.d
                            zmm0_2.d = zmm0_2.d f* zmm0_2.d
                            zmm4_1.d = zmm4_1.d f+ zmm3.d
                            zmm1.d = zmm1.d f* zmm1.d
                            zmm5_1.d = zmm5_1.d f+ zmm0_2.d
                            zmm4_1.d = zmm4_1.d f+ zmm1.d
                            
                            if (zmm4_1.d f> zmm5_1.d)
                                rax_28 = rcx_14
                            
                            rcx_14 = &rcx_14[0x16]
                        while (rcx_14 u<= i)
                    
                    if (rax_28 != i)
                        zmm3 = *rax_28
                        zmm4_1 = *(rax_28 + 0x10)
                        zmm5_1 = *(rax_28 + 0x20)
                        zmm6 = *(rax_28 + 0x30)
                        zmm7 = *(rax_28 + 0x40)
                        zmm2 = zx.o(*(rax_28 + 0x50))
                        *rax_28 = *i
                        *(rax_28 + 0x10) = *(i + 0x10)
                        *(rax_28 + 0x20) = *(i + 0x20)
                        *(rax_28 + 0x30) = *(i + 0x30)
                        *(rax_28 + 0x40) = *(i + 0x40)
                        *(rax_28 + 0x50) = *(i + 0x50)
                        *i = zmm3
                        *(i + 0x10) = zmm4_1
                        *(i + 0x20) = zmm5_1
                        *(i + 0x30) = zmm6
                        *(i + 0x40) = zmm7
                        *(i + 0x50) = zmm2.q
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rdx_3)
            void* rax_15 = sx.q((temp1_1 - temp0_3) s>> 1) * 0x58 + r11_1
            
            if (rax_15 != r11_1)
                zmm3 = *rax_15
                zmm4_1 = *(rax_15 + 0x10)
                zmm5_1 = *(rax_15 + 0x20)
                zmm6 = *(rax_15 + 0x30)
                zmm7 = *(rax_15 + 0x40)
                zmm2 = zx.o(*(rax_15 + 0x50))
                *rax_15 = *r11_1
                *(rax_15 + 0x10) = r11_1[1]
                *(rax_15 + 0x20) = r11_1[2]
                *(rax_15 + 0x30) = r11_1[3]
                *(rax_15 + 0x40) = r11_1[4]
                *(rax_15 + 0x50) = r11_1[5].q
                *r11_1 = zmm3
                r11_1[1] = zmm4_1
                r11_1[2] = zmm5_1
                r11_1[3] = zmm6
                r11_1[4] = zmm7
                r11_1[5].q = zmm2.q
            
            int32_t* r10_1 = i + 0x58
            uint128_t* r9 = r11_1
            
            while (true)
                r9 += 0x58
                
                if (r9 u<= i)
                    zmm4_1 = *arg4
                    zmm5_1 = *(arg4 + 4)
                    zmm2 = *(arg4 + 8)
                    zmm3.d = zmm5_1.d f- *(r11_1 + 4)
                    zmm5_1.d = zmm5_1.d f- *(r9 + 4)
                    zmm1.d = zmm4_1.d f- *r11_1
                    zmm4_1.d = zmm4_1.d f- *r9
                    zmm0_2.d = zmm2.d f- *(r11_1 + 8)
                    zmm2.d = zmm2.d f- *(r9 + 8)
                    zmm3.d = zmm3.d f* zmm3.d
                    zmm5_1.d = zmm5_1.d f* zmm5_1.d
                    zmm1.d = zmm1.d f* zmm1.d
                    zmm4_1.d = zmm4_1.d f* zmm4_1.d
                    zmm3.d = zmm3.d f+ zmm1.d
                    zmm0_2.d = zmm0_2.d f* zmm0_2.d
                    zmm5_1.d = zmm5_1.d f+ zmm4_1.d
                    zmm2.d = zmm2.d f* zmm2.d
                    zmm3.d = zmm3.d f+ zmm0_2.d
                    zmm5_1.d = zmm5_1.d f+ zmm2.d
                    
                    if (zmm3.d f>= zmm5_1.d)
                        continue
                
                do
                    r10_1 = &r10_1[-0x16]
                    
                    if (r10_1 u<= r11_1)
                        break
                    
                    zmm4_1 = *arg4
                    zmm5_1 = *(arg4 + 4)
                    zmm2 = *(arg4 + 8)
                    zmm3.d = zmm5_1.d f- r10_1[1]
                    zmm5_1.d = zmm5_1.d f- *(r11_1 + 4)
                    zmm1.d = zmm4_1.d f- *r10_1
                    zmm4_1.d = zmm4_1.d f- *r11_1
                    zmm0_2.d = zmm2.d f- r10_1[2]
                    zmm2.d = zmm2.d f- *(r11_1 + 8)
                    zmm3.d = zmm3.d f* zmm3.d
                    zmm5_1.d = zmm5_1.d f* zmm5_1.d
                    zmm1.d = zmm1.d f* zmm1.d
                    zmm4_1.d = zmm4_1.d f* zmm4_1.d
                    zmm3.d = zmm3.d f+ zmm1.d
                    zmm0_2.d = zmm0_2.d f* zmm0_2.d
                    zmm5_1.d = zmm5_1.d f+ zmm4_1.d
                    zmm2.d = zmm2.d f* zmm2.d
                    zmm3.d = zmm3.d f+ zmm0_2.d
                    zmm5_1.d = zmm5_1.d f+ zmm2.d
                while (zmm3.d f>= zmm5_1.d)
                
                if (r9 u> r10_1)
                    break
                
                if (r9 != r10_1)
                    zmm3 = *r9
                    zmm4_1 = r9[1]
                    zmm5_1 = r9[2]
                    zmm6 = r9[3]
                    zmm7 = r9[4]
                    zmm2 = zx.o(r9[5].q)
                    *r9 = *r10_1
                    r9[1] = *(r10_1 + 0x10)
                    r9[2] = *(r10_1 + 0x20)
                    r9[3] = *(r10_1 + 0x30)
                    r9[4] = *(r10_1 + 0x40)
                    r9[5].q = *(r10_1 + 0x50)
                    *r10_1 = zmm3
                    *(r10_1 + 0x10) = zmm4_1
                    *(r10_1 + 0x20) = zmm5_1
                    *(r10_1 + 0x30) = zmm6
                    *(r10_1 + 0x40) = zmm7
                    *(r10_1 + 0x50) = zmm2.q
            
            if (r11_1 != r10_1)
                zmm3 = *r11_1
                zmm4_1 = r11_1[1]
                zmm5_1 = r11_1[2]
                zmm6 = r11_1[3]
                zmm7 = r11_1[4]
                zmm2 = zx.o(r11_1[5].q)
                *r11_1 = *r10_1
                r11_1[1] = *(r10_1 + 0x10)
                r11_1[2] = *(r10_1 + 0x20)
                r11_1[3] = *(r10_1 + 0x30)
                r11_1[4] = *(r10_1 + 0x40)
                r11_1[5].q = *(r10_1 + 0x50)
                *r10_1 = zmm3
                *(r10_1 + 0x10) = zmm4_1
                *(r10_1 + 0x20) = zmm5_1
                *(r10_1 + 0x30) = zmm6
                *(r10_1 + 0x40) = zmm7
                *(r10_1 + 0x50) = zmm2.q
            
            rbp_1 -= 1
            
            if ((r10_1 - r11_1 - 0x58) s/ 0x58 s< (i - r9) s/ 0x58)
                if (i u> r9)
                    *r14_1 = r9
                    r14_1[1] = i
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (r11_1 + 0x58 u>= r10_1)
                    break
                
                i = &r10_1[-0x16]
            else
                if (r11_1 + 0x58 u< r10_1)
                    *r14_1 = r11_1
                    r14_1[1] = &r10_1[-0x16]
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (i u<= r9)
                    break
                
                r11_1 = r9
            
            rdx_3 = ((i - r11_1) s/ 0x58).d + 1
            
            if (rbp_1 == 0)
                goto label_142784780
    
    r14_1 -= 0x18
    
    if (r14_1 u< &var_368)
        break

__security_check_cookie(rax_2 ^ &var_3a8)
