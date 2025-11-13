// 函数: sub_142105410
// 地址: 0x142105410
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
int64_t* r9_1
int64_t* r11_1
r9_1, r11_1 = memset(&var_330, 0, 0x2e8)
int64_t* r15_1 = &var_348

while (true)
    uint128_t zmm2 = *r15_1
    int32_t rbp_1 = (r15_1[2]).d
    int64_t* rsi_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rax_8 = ((i - rsi_1) s>> 3).d + 1
    
    if (rbp_1 == 0)
    label_142105662:
        r9_1, r11_1 = sub_142105190(rsi_1, rax_8)
    else
        while (true)
            bool i_3
            
            if (rax_8 s<= 8)
                for (; i u> rsi_1; i -= 8)
                    int64_t* r10_2 = rsi_1
                    r9_1 = &rsi_1[1]
                    
                    if (&rsi_1[1] u<= i)
                        do
                            r11_1.b = 0
                            void* j = &data_143f48af0
                            
                            while (j s< &data_143f48b28)
                                int64_t rcx_17 = *j
                                r11_1.b = *r10_2 == rcx_17
                                j += 8
                                
                                if (*r10_2 == rcx_17)
                                    break
                            
                            i_3 = false
                            void* j_1 = &data_143f48af0
                            
                            while (j_1 s< &data_143f48b28)
                                int64_t rcx_18 = *j_1
                                i_3 = *r9_1 == rcx_18
                                j_1 += 8
                                
                                if (*r9_1 == rcx_18)
                                    break
                            
                            int64_t* rax_21 = r9_1
                            
                            if (r11_1.b u<= i_3)
                                rax_21 = r10_2
                            
                            r9_1 = &r9_1[1]
                            r10_2 = rax_21
                        while (r9_1 u<= i)
                    
                    int64_t rcx_19 = *r10_2
                    *r10_2 = *i
                    *i = rcx_19
                
                break
            
            if (rax_8 s< 0)
                rax_8 += 1
            
            int64_t* r10_1 = i + 8
            int64_t rdx = sx.q(rax_8 s>> 1)
            r11_1 = rsi_1
            int64_t rcx_3 = rsi_1[rdx]
            rsi_1[rdx] = *rsi_1
            *rsi_1 = rcx_3
            int64_t rax_11
            
            while (true)
                r11_1 = &r11_1[1]
                
                if (r11_1 u<= i)
                    r9_1.b = 0
                    void* i_1 = &data_143f48af0
                    
                    while (i_1 s< &data_143f48b28)
                        int64_t rcx_4 = *i_1
                        r9_1.b = *rsi_1 == rcx_4
                        i_1 += 8
                        
                        if (*rsi_1 == rcx_4)
                            break
                    
                    i_3 = false
                    void* i_2 = &data_143f48af0
                    
                    while (i_2 s< &data_143f48b28)
                        int64_t rcx_5 = *i_2
                        i_3 = *r11_1 == rcx_5
                        i_2 += 8
                        
                        if (*r11_1 == rcx_5)
                            break
                    
                    if (r9_1.b u<= i_3)
                        continue
                
                do
                    r10_1 -= 8
                    
                    if (r10_1 u<= rsi_1)
                        break
                    
                    r9_1.b = 0
                    void* j_2 = &data_143f48af0
                    
                    while (j_2 s< &data_143f48b28)
                        int64_t rcx_6 = *j_2
                        r9_1.b = *r10_1 == rcx_6
                        j_2 += 8
                        
                        if (*r10_1 == rcx_6)
                            break
                    
                    i_3 = false
                    void* j_3 = &data_143f48af0
                    
                    while (j_3 s< &data_143f48b28)
                        int64_t rcx_7 = *j_3
                        i_3 = *rsi_1 == rcx_7
                        j_3 += 8
                        
                        if (*rsi_1 == rcx_7)
                            break
                while (r9_1.b u<= i_3)
                
                rax_11 = *r10_1
                
                if (r11_1 u> r10_1)
                    break
                
                int64_t rcx_8 = *r11_1
                *r11_1 = rax_11
                *r10_1 = rcx_8
            
            int64_t rcx_9 = *rsi_1
            rbp_1 -= 1
            *rsi_1 = rax_11
            *r10_1 = rcx_9
            
            if (((r10_1 - rsi_1 - 8) & 0xfffffffffffffff8) s< ((i - r11_1) & 0xfffffffffffffff8))
                if (i u> r11_1)
                    *r15_1 = r11_1
                    r15_1[1] = i
                    r15_1[2].d = rbp_1
                    r15_1 = &r15_1[3]
                
                if (&rsi_1[1] u>= r10_1)
                    break
                
                i = &r10_1[-1]
            else
                if (&rsi_1[1] u< r10_1)
                    *r15_1 = rsi_1
                    r15_1[1] = &r10_1[-1]
                    r15_1[2].d = rbp_1
                    r15_1 = &r15_1[3]
                
                if (i u<= r11_1)
                    break
                
                rsi_1 = r11_1
            
            rax_8 = ((i - rsi_1) s>> 3).d + 1
            
            if (rbp_1 == 0)
                goto label_142105662
    
    r15_1 -= 0x18
    
    if (r15_1 u< &var_348)
        break

__security_check_cookie(rax_2 ^ &var_388)
