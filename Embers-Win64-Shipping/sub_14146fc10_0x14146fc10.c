// 函数: sub_14146fc10
// 地址: 0x14146fc10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_388
int64_t rax_2 = __security_cookie ^ &var_388
int64_t var_348 = arg1
int64_t var_340_1 = arg1 + (sx.q(arg2) << 3) - 8
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_338_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_330
memset(&var_330, 0, 0x2e8)
int64_t* r12_1 = &var_348

while (true)
    uint128_t zmm2 = *r12_1
    int32_t rbp_1 = (r12_1[2]).d
    int64_t* r14_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rax_8 = ((i - r14_1) s>> 3).d + 1
    
    if (rbp_1 == 0)
    label_14146ff73:
        sub_14146f360(r14_1, rax_8)
    else
        while (true)
            char r10_1
            
            if (rax_8 s<= 8)
                for (; i u> r14_1; i -= 8)
                    int64_t* rsi_2 = r14_1
                    int64_t* r11_2 = &r14_1[1]
                    
                    if (&r14_1[1] u<= i)
                        do
                            void* r9_3 = *rsi_2
                            void* rdx_4 = *r11_2
                            int32_t rcx_23 = *(r9_3 + 0x570)
                            
                            if ((rcx_23.b & 0x40) == 0 || *(r9_3 + 0x534) s< 0
                                    || (rcx_23.b & 0x10) == 0)
                                r10_1 = 0
                            else
                                r10_1 = 1
                            
                            int32_t rax_29 = *(rdx_4 + 0x570)
                            int32_t r8_8 = rax_29 & 0x40
                            
                            if (r10_1 == 0)
                                if (r8_8 == 0 || *(rdx_4 + 0x534) s< 0 || (rax_29.b & 0x10) == 0)
                                    rcx_23.b = *(rdx_4 + 0x54c) * *(rdx_4 + 0x548)
                                        u< *(r9_3 + 0x54c) * *(r9_3 + 0x548)
                                else
                                    rcx_23.b = 0
                            else if (r8_8 == 0)
                                rcx_23.b = 1
                            else
                                int32_t r8_9 = *(rdx_4 + 0x534)
                                
                                if (r8_9 s< 0 || (rax_29.b & 0x10) == 0)
                                    rcx_23.b = 1
                                else
                                    rcx_23 = rcx_23 u>> 9 & 1
                                    int32_t rax_31 = rax_29 u>> 9 & 1
                                    
                                    if (rcx_23 == rax_31)
                                        rcx_23.b = r8_9 s< *(r9_3 + 0x534)
                                    else if (rcx_23 != 0)
                                        if (rax_31 != 0)
                                            rcx_23.b = r8_9 s< *(r9_3 + 0x534)
                                        else
                                            rcx_23.b = 0
                                    else if (rax_31 == 0)
                                        rcx_23.b = r8_9 s< *(r9_3 + 0x534)
                                    else
                                        rcx_23.b = 1
                            
                            int64_t* rax_34 = r11_2
                            
                            if (rcx_23.b == 0)
                                rax_34 = rsi_2
                            
                            r11_2 = &r11_2[1]
                            rsi_2 = rax_34
                        while (r11_2 u<= i)
                    
                    int64_t rcx_26 = *rsi_2
                    *rsi_2 = *i
                    *i = rcx_26
                
                break
            
            if (rax_8 s< 0)
                rax_8 += 1
            
            int64_t* r11_1 = i + 8
            int64_t rdx = sx.q(rax_8 s>> 1)
            int64_t* rsi_1 = r14_1
            int64_t rcx_3 = r14_1[rdx]
            r14_1[rdx] = *r14_1
            *r14_1 = rcx_3
            int64_t rax_19
            
            while (true)
                rsi_1 = &rsi_1[1]
                
                if (rsi_1 u<= i)
                    void* r9_1 = *r14_1
                    void* rdx_1 = *rsi_1
                    int32_t rcx_4 = *(r9_1 + 0x570)
                    
                    if ((rcx_4.b & 0x40) == 0 || *(r9_1 + 0x534) s< 0 || (rcx_4.b & 0x10) == 0)
                        r10_1 = 0
                    else
                        r10_1 = 1
                    
                    int32_t rax_11 = *(rdx_1 + 0x570)
                    int32_t r8_1 = rax_11 & 0x40
                    int32_t rax_13
                    
                    if (r10_1 == 0)
                        if (r8_1 != 0 && *(rdx_1 + 0x534) s>= 0 && (rax_11.b & 0x10) != 0)
                            continue
                        
                        rax_13.b =
                            *(rdx_1 + 0x54c) * *(rdx_1 + 0x548) u< *(r9_1 + 0x54c) * *(r9_1 + 0x548)
                        goto label_14146fde4
                    
                    if (r8_1 != 0)
                        int32_t r8_2 = *(rdx_1 + 0x534)
                        
                        if (r8_2 s>= 0 && (rax_11.b & 0x10) != 0)
                            int32_t rcx_6 = rcx_4 u>> 9 & 1
                            rax_13 = rax_11 u>> 9 & 1
                            
                            if (rcx_6 == rax_13)
                            label_14146fda8:
                                rax_13.b = r8_2 s< *(r9_1 + 0x534)
                            label_14146fde4:
                                
                                if (rax_13.b == 0)
                                    continue
                            else if (rcx_6 != 0)
                                if (rax_13 != 0)
                                    goto label_14146fda8
                                
                                continue
                            else if (rax_13 == 0)
                                rax_13.b = r8_2 s< *(r9_1 + 0x534)
                                goto label_14146fde4
                
                while (true)
                    r11_1 -= 8
                    
                    if (r11_1 u<= r14_1)
                        break
                    
                    void* r9_2 = *r11_1
                    void* rdx_2 = *r14_1
                    int32_t rcx_9 = *(r9_2 + 0x570)
                    
                    if ((rcx_9.b & 0x40) == 0 || *(r9_2 + 0x534) s< 0 || (rcx_9.b & 0x10) == 0)
                        r10_1 = 0
                    else
                        r10_1 = 1
                    
                    int32_t rax_15 = *(rdx_2 + 0x570)
                    int32_t r8_4 = rax_15 & 0x40
                    int32_t rax_17
                    
                    if (r10_1 == 0)
                        if (r8_4 != 0 && *(rdx_2 + 0x534) s>= 0 && (rax_15.b & 0x10) != 0)
                            continue
                        
                        rax_17.b =
                            *(rdx_2 + 0x54c) * *(rdx_2 + 0x548) u< *(r9_2 + 0x54c) * *(r9_2 + 0x548)
                    else
                        if (r8_4 == 0)
                            break
                        
                        int32_t r8_5 = *(rdx_2 + 0x534)
                        
                        if (r8_5 s< 0)
                            break
                        
                        if ((rax_15.b & 0x10) == 0)
                            break
                        
                        rax_17 = rax_15 u>> 9 & 1
                        int32_t rcx_11 = rcx_9 u>> 9 & 1
                        
                        if (rcx_11 == rax_17)
                            rax_17.b = r8_5 s< *(r9_2 + 0x534)
                        else if (rcx_11 == 0)
                            if (rax_17 != 0)
                                break
                            
                            rax_17.b = r8_5 s< *(r9_2 + 0x534)
                        else if (rax_17 == 0)
                            continue
                        else
                            rax_17.b = r8_5 s< *(r9_2 + 0x534)
                    
                    if (rax_17.b != 0)
                        break
                
                rax_19 = *r11_1
                
                if (rsi_1 u> r11_1)
                    break
                
                int64_t rcx_14 = *rsi_1
                *rsi_1 = rax_19
                *r11_1 = rcx_14
            
            int64_t rcx_15 = *r14_1
            rbp_1 -= 1
            *r14_1 = rax_19
            *r11_1 = rcx_15
            
            if (((r11_1 - r14_1 - 8) & 0xfffffffffffffff8) s< ((i - rsi_1) & 0xfffffffffffffff8))
                if (i u> rsi_1)
                    *r12_1 = rsi_1
                    r12_1[1] = i
                    r12_1[2].d = rbp_1
                    r12_1 = &r12_1[3]
                
                if (&r14_1[1] u>= r11_1)
                    break
                
                i = &r11_1[-1]
            else
                if (&r14_1[1] u< r11_1)
                    *r12_1 = r14_1
                    r12_1[1] = &r11_1[-1]
                    r12_1[2].d = rbp_1
                    r12_1 = &r12_1[3]
                
                if (i u<= rsi_1)
                    break
                
                r14_1 = rsi_1
            
            rax_8 = ((i - r14_1) s>> 3).d + 1
            
            if (rbp_1 == 0)
                goto label_14146ff73
    
    r12_1 -= 0x18
    
    if (r12_1 u< &var_348)
        break

__security_check_cookie(rax_2 ^ &var_388)
