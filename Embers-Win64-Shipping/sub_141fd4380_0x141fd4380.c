// 函数: sub_141fd4380
// 地址: 0x141fd4380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_378
int64_t rax_2 = __security_cookie ^ &var_378
int64_t var_338 = arg1
int64_t var_330_1 = arg1 - 0x18 + sx.q(arg2) * 0x18
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_328_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_320
memset(&var_320, 0, 0x2e8)
int64_t* r14_1 = &var_338

while (true)
    uint128_t zmm2 = *r14_1
    uint32_t rbp_1 = (r14_1[2]).d
    uint128_t* r11_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rdx_3 = ((i - r11_1) s/ 0x18).d + 1
    
    if (rbp_1 == 0)
    label_141fd4667:
        sub_141fd3600(r11_1, rdx_3)
    else
        while (true)
            uint128_t zmm3
            
            if (rdx_3 s<= 8)
                for (; i u> r11_1; i -= 0x18)
                    void* r8_5 = r11_1
                    void* r10_2 = r11_1 + 0x18
                    
                    if (r11_1 + 0x18 u<= i)
                        do
                            int32_t* rdx_18 = *(*r8_5 + 0xd0)
                            int32_t rax_35
                            int32_t rcx_18
                            
                            if (rdx_18 == 0)
                                rcx_18 = 0
                                rax_35 = 0
                            else
                                rcx_18 = rdx_18[1]
                                rax_35 = *rdx_18
                            
                            if (rax_35 s>= rcx_18)
                                rcx_18 = rax_35
                            
                            int32_t* r9_2 = *(*r10_2 + 0xd0)
                            int32_t rax_37
                            int32_t rdx_19
                            
                            if (r9_2 == 0)
                                rdx_19 = 0
                                rax_37 = 0
                            else
                                rdx_19 = r9_2[1]
                                rax_37 = *r9_2
                            
                            if (rax_37 s>= rdx_19)
                                rdx_19 = rax_37
                            
                            void* rax_38 = r10_2
                            
                            if (rcx_18 s>= rdx_19)
                                rax_38 = r8_5
                            
                            r10_2 += 0x18
                            r8_5 = rax_38
                        while (r10_2 u<= i)
                    
                    if (r8_5 != i)
                        zmm3 = *r8_5
                        zmm2 = zx.o(*(r8_5 + 0x10))
                        *r8_5 = *i
                        *(r8_5 + 0x10) = *(i + 0x10)
                        *i = zmm3
                        *(i + 0x10) = zmm2.q
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rdx_3)
            void* rcx_5 = r11_1 + sx.q((temp1_1 - temp0_3) s>> 1) * 0x18
            
            if (rcx_5 != r11_1)
                zmm3 = *rcx_5
                zmm2 = zx.o(*(rcx_5 + 0x10))
                *rcx_5 = *r11_1
                *(rcx_5 + 0x10) = r11_1[1].q
                *r11_1 = zmm3
                r11_1[1].q = zmm2.q
            
            uint128_t* r9_1 = i + 0x18
            uint128_t* r10_1 = r11_1
            
            while (true)
                r10_1 += 0x18
                
                if (r10_1 u<= i)
                    int32_t* rdx_5 = *(*r11_1 + 0xd0)
                    int32_t rax_15
                    int32_t rcx_6
                    
                    if (rdx_5 == 0)
                        rcx_6 = 0
                        rax_15 = 0
                    else
                        rcx_6 = rdx_5[1]
                        rax_15 = *rdx_5
                    
                    if (rax_15 s>= rcx_6)
                        rcx_6 = rax_15
                    
                    int32_t* rdx_6 = *(*r10_1 + 0xd0)
                    int32_t rax_17
                    int32_t rdx_7
                    
                    if (rdx_6 == 0)
                        rax_17 = 0
                        rdx_7 = 0
                    else
                        rax_17 = rdx_6[1]
                        rdx_7 = *rdx_6
                    
                    if (rdx_7 s>= rax_17)
                        rax_17 = rdx_7
                    
                    if (rcx_6 s>= rax_17)
                        continue
                
                int32_t rax_21
                int32_t rcx_7
                
                do
                    r9_1 -= 0x18
                    
                    if (r9_1 u<= r11_1)
                        break
                    
                    int32_t* rdx_8 = *(*r9_1 + 0xd0)
                    int32_t rax_19
                    
                    if (rdx_8 == 0)
                        rcx_7 = 0
                        rax_19 = 0
                    else
                        rcx_7 = rdx_8[1]
                        rax_19 = *rdx_8
                    
                    if (rax_19 s>= rcx_7)
                        rcx_7 = rax_19
                    
                    int32_t* rdx_9 = *(*r11_1 + 0xd0)
                    int32_t rdx_10
                    
                    if (rdx_9 == 0)
                        rax_21 = 0
                        rdx_10 = 0
                    else
                        rax_21 = rdx_9[1]
                        rdx_10 = *rdx_9
                    
                    if (rdx_10 s>= rax_21)
                        rax_21 = rdx_10
                while (rcx_7 s>= rax_21)
                
                if (r10_1 u> r9_1)
                    break
                
                if (r10_1 != r9_1)
                    zmm3 = *r10_1
                    zmm2 = zx.o(r10_1[1].q)
                    *r10_1 = *r9_1
                    r10_1[1].q = r9_1[1].q
                    *r9_1 = zmm3
                    r9_1[1].q = zmm2.q
            
            if (r11_1 != r9_1)
                zmm3 = *r11_1
                zmm2 = zx.o(r11_1[1].q)
                *r11_1 = *r9_1
                r11_1[1].q = r9_1[1].q
                *r9_1 = zmm3
                r9_1[1].q = zmm2.q
            
            rbp_1 -= 1
            
            if ((r9_1 - r11_1 - 0x18) s/ 0x18 s< (i - r10_1) s/ 0x18)
                if (i u> r10_1)
                    *r14_1 = r10_1
                    r14_1[1] = i
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (r11_1 + 0x18 u>= r9_1)
                    break
                
                i = r9_1 - 0x18
            else
                if (r11_1 + 0x18 u< r9_1)
                    *r14_1 = r11_1
                    r14_1[1] = r9_1 - 0x18
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (i u<= r10_1)
                    break
                
                r11_1 = r10_1
            
            rdx_3 = ((i - r11_1) s/ 0x18).d + 1
            
            if (rbp_1 == 0)
                goto label_141fd4667
    
    r14_1 -= 0x18
    
    if (r14_1 u< &var_338)
        break

__security_check_cookie(rax_2 ^ &var_378)
