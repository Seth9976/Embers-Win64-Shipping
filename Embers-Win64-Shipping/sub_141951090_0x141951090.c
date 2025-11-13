// 函数: sub_141951090
// 地址: 0x141951090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_378
int64_t rax_2 = __security_cookie ^ &var_378
int64_t var_338 = arg1
int64_t var_330_1 = arg1 - 0xc + sx.q(arg2) * 0xc
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_328_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_320
memset(&var_320, 0, 0x2e8)
int64_t* r14_1 = &var_338

while (true)
    uint128_t zmm2 = *r14_1
    int32_t rbp_1 = r14_1[2].d
    int64_t* r10_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rdx_3 = ((i - r10_1) s/ 0xc).d + 1
    
    if (rbp_1 == 0)
    label_141951318:
        sub_141950e80(r10_1, rdx_3)
    else
        while (true)
            uint128_t zmm1
            
            if (rdx_3 s<= 8)
                for (; i u> r10_1; i -= 0xc)
                    int64_t* rdx_13 = r10_1
                    int64_t* rcx_18 = r10_1 + 0xc
                    
                    if (r10_1 + 0xc u<= i)
                        do
                            int32_t r8_5 = *rcx_18
                            int32_t temp3_1 = *rdx_13
                            bool c_3 = temp3_1 u< r8_5
                            
                            if (temp3_1 == r8_5)
                                r8_5 = *(rcx_18 + 4)
                                int32_t temp6_1 = *(rdx_13 + 4)
                                c_3 = temp6_1 u< r8_5
                                
                                if (temp6_1 == r8_5)
                                    c_3 = rdx_13[1].d u< rcx_18[1].d
                            
                            r8_5.b = c_3
                            int64_t* rax_32 = rcx_18
                            
                            if (r8_5.b == 0)
                                rax_32 = rdx_13
                            
                            rcx_18 += 0xc
                            rdx_13 = rax_32
                        while (rcx_18 u<= i)
                    
                    if (rdx_13 != i)
                        zmm1 = zx.o(*rdx_13)
                        int32_t rcx_19 = rdx_13[1].d
                        *rdx_13 = *i
                        rdx_13[1].d = *(i + 8)
                        *i = zmm1.q
                        *(i + 8) = rcx_19
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rdx_3)
            int64_t* rdx_5 = r10_1 + sx.q((temp1_1 - temp0_3) s>> 1) * 0xc
            
            if (rdx_5 != r10_1)
                zmm1 = zx.o(*rdx_5)
                int32_t rcx_5 = rdx_5[1].d
                *rdx_5 = *r10_1
                rdx_5[1].d = r10_1[1].d
                *r10_1 = zmm1.q
                r10_1[1].d = rcx_5
            
            uint64_t* r11_1 = i + 0xc
            int64_t* r9_1 = r10_1
            
            while (true)
                r9_1 += 0xc
                
                if (r9_1 u<= i)
                    int32_t rax_15 = *r10_1
                    int32_t temp2_1 = *r9_1
                    bool c_1 = rax_15 u< temp2_1
                    
                    if (rax_15 == temp2_1)
                        rax_15 = *(r10_1 + 4)
                        int32_t temp5_1 = *(r9_1 + 4)
                        c_1 = rax_15 u< temp5_1
                        
                        if (rax_15 == temp5_1)
                            c_1 = r10_1[1].d u< r9_1[1].d
                    
                    rax_15.b = c_1
                    
                    if (rax_15.b == 0)
                        continue
                
                int32_t rax_16
                
                do
                    r11_1 -= 0xc
                    
                    if (r11_1 u<= r10_1)
                        break
                    
                    rax_16 = *r11_1
                    int32_t temp4_1 = *r10_1
                    bool c_2 = rax_16 u< temp4_1
                    
                    if (rax_16 == temp4_1)
                        rax_16 = *(r11_1 + 4)
                        int32_t temp7_1 = *(r10_1 + 4)
                        c_2 = rax_16 u< temp7_1
                        
                        if (rax_16 == temp7_1)
                            c_2 = r11_1[1].d u< r10_1[1].d
                    
                    rax_16.b = c_2
                while (rax_16.b == 0)
                
                if (r9_1 u> r11_1)
                    break
                
                if (r9_1 != r11_1)
                    zmm1 = zx.o(*r9_1)
                    int32_t rcx_6 = r9_1[1].d
                    *r9_1 = *r11_1
                    r9_1[1].d = r11_1[1].d
                    *r11_1 = zmm1.q
                    r11_1[1].d = rcx_6
            
            if (r10_1 != r11_1)
                zmm1 = zx.o(*r10_1)
                int32_t rcx_7 = r10_1[1].d
                *r10_1 = *r11_1
                r10_1[1].d = r11_1[1].d
                *r11_1 = zmm1.q
                r11_1[1].d = rcx_7
            
            rbp_1 -= 1
            
            if ((r11_1 - r10_1 - 0xc) s/ 0xc s< (i - r9_1) s/ 0xc)
                if (i u> r9_1)
                    *r14_1 = r9_1
                    r14_1[1] = i
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (r10_1 + 0xc u>= r11_1)
                    break
                
                i = r11_1 - 0xc
            else
                if (r10_1 + 0xc u< r11_1)
                    *r14_1 = r10_1
                    r14_1[1] = r11_1 - 0xc
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (i u<= r9_1)
                    break
                
                r10_1 = r9_1
            
            rdx_3 = ((i - r10_1) s/ 0xc).d + 1
            
            if (rbp_1 == 0)
                goto label_141951318
    
    r14_1 -= 0x18
    
    if (r14_1 u< &var_338)
        break

__security_check_cookie(rax_2 ^ &var_378)
