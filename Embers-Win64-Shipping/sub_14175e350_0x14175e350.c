// 函数: sub_14175e350
// 地址: 0x14175e350
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
    label_14175e575:
        sub_14175e140(r14_1, rax_8)
    else
        while (true)
            if (rax_8 s<= 8)
                for (; i u> r14_1; i -= 8)
                    void* r11_2 = r14_1
                    void* rsi_2 = &r14_1[1]
                    
                    if (&r14_1[1] u<= i)
                        do
                            int32_t* rcx_15 = *rsi_2
                            int32_t* rdx_4 = *r11_2
                            void* rcx_17 = rsi_2
                            
                            if (*(*(*(rdx_4 + 8) + 0x90) + sx.q(*rdx_4) * 0xc)
                                    s>= *(*(*(rcx_15 + 8) + 0x90) + sx.q(*rcx_15) * 0xc))
                                rcx_17 = r11_2
                            
                            rsi_2 += 8
                            r11_2 = rcx_17
                        while (rsi_2 u<= i)
                    
                    int64_t rcx_18 = *r11_2
                    *r11_2 = *i
                    *i = rcx_18
                
                break
            
            if (rax_8 s< 0)
                rax_8 += 1
            
            void* rsi_1 = i + 8
            int64_t rdx = sx.q(rax_8 s>> 1)
            int64_t* r11_1 = r14_1
            int64_t rcx_3 = r14_1[rdx]
            r14_1[rdx] = *r14_1
            *r14_1 = rcx_3
            int32_t* r10_2
            
            while (true)
                r11_1 = &r11_1[1]
                
                if (r11_1 u<= i)
                    int32_t* rcx_4 = *r11_1
                    int32_t* r9_1 = *r14_1
                    
                    if (*(*(*(r9_1 + 8) + 0x90) + sx.q(*r9_1) * 0xc)
                            s>= *(*(*(rcx_4 + 8) + 0x90) + sx.q(*rcx_4) * 0xc))
                        continue
                
                int32_t* rcx_6
                
                do
                    r10_2 = *(rsi_1 - 8)
                    rsi_1 -= 8
                    
                    if (rsi_1 u<= r14_1)
                        break
                    
                    rcx_6 = *r14_1
                while (*(*(*(r10_2 + 8) + 0x90) + sx.q(*r10_2) * 0xc)
                    s>= *(*(*(rcx_6 + 8) + 0x90) + sx.q(*rcx_6) * 0xc))
                
                if (r11_1 u> rsi_1)
                    break
                
                int64_t rax_21 = *r11_1
                *r11_1 = r10_2
                *rsi_1 = rax_21
            
            int64_t rax_22 = *r14_1
            *r14_1 = r10_2
            *rsi_1 = rax_22
            rbp_1 -= 1
            
            if (((rsi_1 - r14_1 - 8) & 0xfffffffffffffff8) s< ((i - r11_1) & 0xfffffffffffffff8))
                if (i u> r11_1)
                    *r12_1 = r11_1
                    r12_1[1] = i
                    r12_1[2].d = rbp_1
                    r12_1 = &r12_1[3]
                
                if (&r14_1[1] u>= rsi_1)
                    break
                
                i = rsi_1 - 8
            else
                if (&r14_1[1] u< rsi_1)
                    *r12_1 = r14_1
                    r12_1[1] = rsi_1 - 8
                    r12_1[2].d = rbp_1
                    r12_1 = &r12_1[3]
                
                if (i u<= r11_1)
                    break
                
                r14_1 = r11_1
            
            rax_8 = ((i - r14_1) s>> 3).d + 1
            
            if (rbp_1 == 0)
                goto label_14175e575
    
    r12_1 -= 0x18
    
    if (r12_1 u< &var_348)
        break

__security_check_cookie(rax_2 ^ &var_388)
