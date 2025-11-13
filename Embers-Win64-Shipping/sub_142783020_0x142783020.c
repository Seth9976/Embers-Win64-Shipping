// 函数: sub_142783020
// 地址: 0x142783020
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
int64_t var_360_1 = arg1 - 0x1c + sx.q(arg2) * 0x1c
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
    int32_t rdx_3 = ((i - r11_1) s/ 0x1c).d + 1
    
    if (rbp_1 == 0)
    label_14278338b:
        sub_142780990(r11_1, rdx_3, zx.q(arg3), arg4)
    else
        while (true)
            uint128_t zmm0_2
            uint128_t zmm1
            uint128_t zmm3
            uint128_t zmm4_1
            uint128_t zmm5_1
            
            if (rdx_3 s<= 8)
                for (; i u> r11_1; i -= 0x1c)
                    int32_t* rdx_14 = r11_1
                    int32_t* rax_29 = r11_1 + 0x1c
                    
                    if (r11_1 + 0x1c u<= i)
                        zmm6 = *arg4
                        zmm7 = *(arg4 + 4)
                        zmm8 = *(arg4 + 8)
                        
                        do
                            zmm5_1.d = zmm7.d f- rdx_14[1]
                            zmm2.d = zmm6.d f- *rdx_14
                            zmm4_1.d = zmm7.d f- rax_29[1]
                            zmm3.d = zmm6.d f- *rax_29
                            zmm5_1.d = zmm5_1.d f* zmm5_1.d
                            zmm0_2.d = zmm8.d f- rdx_14[2]
                            zmm4_1.d = zmm4_1.d f* zmm4_1.d
                            zmm1.d = zmm8.d f- rax_29[2]
                            zmm2.d = zmm2.d f* zmm2.d
                            zmm3.d = zmm3.d f* zmm3.d
                            zmm5_1.d = zmm5_1.d f+ zmm2.d
                            zmm0_2.d = zmm0_2.d f* zmm0_2.d
                            zmm4_1.d = zmm4_1.d f+ zmm3.d
                            zmm1.d = zmm1.d f* zmm1.d
                            zmm5_1.d = zmm5_1.d f+ zmm0_2.d
                            zmm4_1.d = zmm4_1.d f+ zmm1.d
                            
                            if (zmm4_1.d f> zmm5_1.d)
                                rdx_14 = rax_29
                            
                            rax_29 = &rax_29[7]
                        while (rax_29 u<= i)
                    
                    if (rdx_14 != i)
                        int32_t rcx_17 = rdx_14[6]
                        zmm3 = *rdx_14
                        zmm2 = zx.o(*(rdx_14 + 0x10))
                        *rdx_14 = *i
                        *(rdx_14 + 0x10) = *(i + 0x10)
                        rdx_14[6] = *(i + 0x18)
                        *i = zmm3
                        *(i + 0x10) = zmm2.q
                        *(i + 0x18) = rcx_17
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rdx_3)
            void* rdx_6 = sx.q((temp1_1 - temp0_3) s>> 1) * 0x1c + r11_1
            
            if (rdx_6 != r11_1)
                int32_t rcx_4 = *(rdx_6 + 0x18)
                zmm3 = *rdx_6
                zmm2 = zx.o(*(rdx_6 + 0x10))
                *rdx_6 = *r11_1
                *(rdx_6 + 0x10) = r11_1[1].q
                *(rdx_6 + 0x18) = *(r11_1 + 0x18)
                *r11_1 = zmm3
                r11_1[1].q = zmm2.q
                *(r11_1 + 0x18) = rcx_4
            
            int32_t* r9 = i + 0x1c
            uint128_t* r10_1 = r11_1
            
            while (true)
                r10_1 += 0x1c
                
                if (r10_1 u<= i)
                    zmm4_1 = *arg4
                    zmm5_1 = *(arg4 + 4)
                    zmm2 = *(arg4 + 8)
                    zmm3.d = zmm5_1.d f- *(r11_1 + 4)
                    zmm5_1.d = zmm5_1.d f- *(r10_1 + 4)
                    zmm1.d = zmm4_1.d f- *r11_1
                    zmm4_1.d = zmm4_1.d f- *r10_1
                    zmm0_2.d = zmm2.d f- *(r11_1 + 8)
                    zmm2.d = zmm2.d f- *(r10_1 + 8)
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
                    r9 = &r9[-7]
                    
                    if (r9 u<= r11_1)
                        break
                    
                    zmm4_1 = *arg4
                    zmm5_1 = *(arg4 + 4)
                    zmm2 = *(arg4 + 8)
                    zmm3.d = zmm5_1.d f- r9[1]
                    zmm5_1.d = zmm5_1.d f- *(r11_1 + 4)
                    zmm1.d = zmm4_1.d f- *r9
                    zmm4_1.d = zmm4_1.d f- *r11_1
                    zmm0_2.d = zmm2.d f- r9[2]
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
                
                if (r10_1 u> r9)
                    break
                
                if (r10_1 != r9)
                    int32_t rcx_5 = *(r10_1 + 0x18)
                    zmm3 = *r10_1
                    zmm2 = zx.o(r10_1[1].q)
                    *r10_1 = *r9
                    r10_1[1].q = *(r9 + 0x10)
                    *(r10_1 + 0x18) = r9[6]
                    *r9 = zmm3
                    *(r9 + 0x10) = zmm2.q
                    r9[6] = rcx_5
            
            if (r11_1 != r9)
                int32_t rcx_6 = *(r11_1 + 0x18)
                zmm3 = *r11_1
                zmm2 = zx.o(r11_1[1].q)
                *r11_1 = *r9
                r11_1[1].q = *(r9 + 0x10)
                *(r11_1 + 0x18) = r9[6]
                *r9 = zmm3
                *(r9 + 0x10) = zmm2.q
                r9[6] = rcx_6
            
            rbp_1 -= 1
            
            if ((r9 - r11_1 - 0x1c) s/ 0x1c s< (i - r10_1) s/ 0x1c)
                if (i u> r10_1)
                    *r14_1 = r10_1
                    r14_1[1] = i
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (r11_1 + 0x1c u>= r9)
                    break
                
                i = &r9[-7]
            else
                if (r11_1 + 0x1c u< r9)
                    *r14_1 = r11_1
                    r14_1[1] = &r9[-7]
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (i u<= r10_1)
                    break
                
                r11_1 = r10_1
            
            rdx_3 = ((i - r11_1) s/ 0x1c).d + 1
            
            if (rbp_1 == 0)
                goto label_14278338b
    
    r14_1 -= 0x18
    
    if (r14_1 u< &var_368)
        break

__security_check_cookie(rax_2 ^ &var_3a8)
