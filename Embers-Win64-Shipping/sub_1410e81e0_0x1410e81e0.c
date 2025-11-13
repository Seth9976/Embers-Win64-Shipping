// 函数: sub_1410e81e0
// 地址: 0x1410e81e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_378
int64_t rax_2 = __security_cookie ^ &var_378
int64_t var_338 = arg1
int64_t var_330_1 = arg1 - 0x28 + sx.q(arg2) * 0x28
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_328_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_320
memset(&var_320, 0, 0x2e8)
int64_t* r14_1 = &var_338

while (true)
    uint128_t zmm2 = *r14_1
    uint32_t rbp_1 = (r14_1[2]).d
    int64_t* r10_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rdx_3 = ((i - r10_1) s/ 0x28).d + 1
    
    if (rbp_1 == 0)
    label_1410e851c:
        sub_1410e7ea0(r10_1, rdx_3)
    else
        while (true)
            int128_t zmm3
            int128_t zmm4_1
            
            if (rdx_3 s<= 8)
                for (; i u> r10_1; i -= 0x28)
                    void* rdx_14 = r10_1
                    void* rcx_20 = &r10_1[5]
                    
                    if (&r10_1[5] u<= i)
                        do
                            void* r9_2 = *(rcx_20 + 0x10)
                            int64_t* r11_2 = *(rdx_14 + 0x10)
                            int32_t rax_28 = *(r9_2 + 0x44)
                            uint64_t r8_7 = zx.q(*(r11_2 + 0x44))
                            
                            if (rax_28 == r8_7.d)
                                char rax_29 = *(rcx_20 + 0x24)
                                r8_7 = zx.q(*(rdx_14 + 0x24))
                                
                                if (rax_29 == r8_7.b)
                                    r8_7 = zx.q(*(rdx_14 + 0x20))
                                    int32_t temp3_1 = *(rcx_20 + 0x20)
                                    
                                    if (temp3_1 != r8_7.d)
                                        r8_7.b = temp3_1 s< r8_7.d
                                    else
                                        r8_7 = *rdx_14
                                        int64_t temp6_1 = *rcx_20
                                        
                                        if (temp6_1 == r8_7)
                                            r8_7.b = *r9_2 s< *r11_2
                                        else
                                            r8_7.b = temp6_1 u< r8_7
                                else
                                    r8_7.b = rax_29 u< r8_7.b
                            else
                                r8_7.b = rax_28 s> r8_7.d
                            
                            void* rax_31 = rcx_20
                            
                            if (r8_7.b == 0)
                                rax_31 = rdx_14
                            
                            rcx_20 += 0x28
                            rdx_14 = rax_31
                        while (rcx_20 u<= i)
                    
                    if (rdx_14 != i)
                        zmm3 = *rdx_14
                        zmm4_1 = *(rdx_14 + 0x10)
                        zmm2 = zx.o(*(rdx_14 + 0x20))
                        *rdx_14 = *i
                        *(rdx_14 + 0x10) = *(i + 0x10)
                        *(rdx_14 + 0x20) = *(i + 0x20)
                        *i = zmm3
                        *(i + 0x10) = zmm4_1
                        *(i + 0x20) = zmm2.q
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rdx_3)
            void* rcx_5 = &r10_1[sx.q((temp1_1 - temp0_3) s>> 1) * 5]
            
            if (rcx_5 != r10_1)
                zmm3 = *rcx_5
                zmm4_1 = *(rcx_5 + 0x10)
                zmm2 = zx.o(*(rcx_5 + 0x20))
                *rcx_5 = *r10_1
                *(rcx_5 + 0x10) = *(r10_1 + 0x10)
                *(rcx_5 + 0x20) = r10_1[4]
                *r10_1 = zmm3
                *(r10_1 + 0x10) = zmm4_1
                r10_1[4] = zmm2.q
            
            void* r9_1 = i + 0x28
            int64_t* r11_1 = r10_1
            
            while (true)
                r11_1 = &r11_1[5]
                
                if (r11_1 u<= i)
                    void* rdx_5 = r11_1[2]
                    uint64_t* r8_1 = r10_1[2]
                    uint64_t rax_14 = zx.q(*(rdx_5 + 0x44))
                    int32_t rcx_6 = *(r8_1 + 0x44)
                    
                    if (rax_14.d == rcx_6)
                        rax_14 = zx.q(*(r11_1 + 0x24))
                        char rcx_7 = *(r10_1 + 0x24)
                        
                        if (rax_14.b == rcx_7)
                            rax_14 = zx.q(r11_1[4].d)
                            int32_t temp2_1 = r10_1[4].d
                            
                            if (rax_14.d != temp2_1)
                                rax_14.b = rax_14.d s< temp2_1
                            else
                                rax_14 = *r11_1
                                int64_t temp5_1 = *r10_1
                                
                                if (rax_14 == temp5_1)
                                    rax_14.b = *rdx_5 s< *r8_1
                                else
                                    rax_14.b = rax_14 u< temp5_1
                        else
                            rax_14.b = rax_14.b u< rcx_7
                    else
                        rax_14.b = rax_14.d s> rcx_6
                    
                    if (rax_14.b == 0)
                        continue
                
                uint64_t rax_15
                
                do
                    r9_1 -= 0x28
                    
                    if (r9_1 u<= r10_1)
                        break
                    
                    int64_t* rdx_6 = *(r9_1 + 0x10)
                    void* r8_2 = r10_1[2]
                    int32_t rcx_8 = *(rdx_6 + 0x44)
                    rax_15 = zx.q(*(r8_2 + 0x44))
                    
                    if (rax_15.d == rcx_8)
                        rax_15 = zx.q(*(r10_1 + 0x24))
                        char rcx_9 = *(r9_1 + 0x24)
                        
                        if (rax_15.b == rcx_9)
                            rax_15 = zx.q(r10_1[4].d)
                            int32_t temp4_1 = *(r9_1 + 0x20)
                            
                            if (rax_15.d != temp4_1)
                                rax_15.b = rax_15.d s< temp4_1
                            else
                                rax_15 = *r10_1
                                int64_t temp7_1 = *r9_1
                                
                                if (rax_15 == temp7_1)
                                    rax_15.b = *r8_2 s< *rdx_6
                                else
                                    rax_15.b = rax_15 u< temp7_1
                        else
                            rax_15.b = rax_15.b u< rcx_9
                    else
                        rax_15.b = rax_15.d s> rcx_8
                while (rax_15.b == 0)
                
                if (r11_1 u> r9_1)
                    break
                
                if (r11_1 != r9_1)
                    zmm3 = *r11_1
                    zmm4_1 = *(r11_1 + 0x10)
                    zmm2 = zx.o(r11_1[4])
                    *r11_1 = *r9_1
                    *(r11_1 + 0x10) = *(r9_1 + 0x10)
                    r11_1[4] = *(r9_1 + 0x20)
                    *r9_1 = zmm3
                    *(r9_1 + 0x10) = zmm4_1
                    *(r9_1 + 0x20) = zmm2.q
            
            if (r10_1 != r9_1)
                zmm3 = *r10_1
                zmm4_1 = *(r10_1 + 0x10)
                zmm2 = zx.o(r10_1[4])
                *r10_1 = *r9_1
                *(r10_1 + 0x10) = *(r9_1 + 0x10)
                r10_1[4] = *(r9_1 + 0x20)
                *r9_1 = zmm3
                *(r9_1 + 0x10) = zmm4_1
                *(r9_1 + 0x20) = zmm2.q
            
            rbp_1 -= 1
            
            if ((r9_1 - r10_1 - 0x28) s/ 0x28 s< (i - r11_1) s/ 0x28)
                if (i u> r11_1)
                    *r14_1 = r11_1
                    r14_1[1] = i
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (&r10_1[5] u>= r9_1)
                    break
                
                i = r9_1 - 0x28
            else
                if (&r10_1[5] u< r9_1)
                    *r14_1 = r10_1
                    r14_1[1] = r9_1 - 0x28
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (i u<= r11_1)
                    break
                
                r10_1 = r11_1
            
            rdx_3 = ((i - r10_1) s/ 0x28).d + 1
            
            if (rbp_1 == 0)
                goto label_1410e851c
    
    r14_1 -= 0x18
    
    if (r14_1 u< &var_338)
        break

__security_check_cookie(rax_2 ^ &var_378)
