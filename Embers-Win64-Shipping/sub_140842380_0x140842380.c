// 函数: sub_140842380
// 地址: 0x140842380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_378
int64_t rax_2 = __security_cookie ^ &var_378
int64_t var_338 = arg1
int64_t var_330_1 = arg1 + (sx.q(arg2) << 2) - 4
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_328_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_320
memset(&var_320, 0, 0x2e8)
int64_t* r14_1 = &var_338

while (true)
    uint128_t zmm2 = *r14_1
    int32_t rbp_1 = (r14_1[2]).d
    int32_t* r11_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rax_8 = ((i - r11_1) s>> 2).d + 1
    
    if (rbp_1 == 0)
    label_14084256c:
        sub_140841e60(r11_1, rax_8, zx.q(arg3), arg4)
    else
        while (true)
            if (rax_8 s<= 8)
                for (; i u> r11_1; i -= 4)
                    void* r8_2 = r11_1
                    void* r9_2 = &r11_1[1]
                    
                    if (&r11_1[1] u<= i)
                        void* rax_26 = *(arg4 + 0x80)
                        void* r10_2 = arg4
                        
                        if (rax_26 != 0)
                            r10_2 = rax_26
                        
                        do
                            void* rdx_4 = r9_2
                            
                            if (*(r10_2 + (sx.q(*r8_2) << 2)) s>= *(r10_2 + (sx.q(*r9_2) << 2)))
                                rdx_4 = r8_2
                            
                            r9_2 += 4
                            r8_2 = rdx_4
                        while (r9_2 u<= i)
                    
                    int32_t rcx_16 = *r8_2
                    *r8_2 = *i
                    *i = rcx_16
                
                break
            
            if (rax_8 s< 0)
                rax_8 += 1
            
            int32_t* r10_1 = i + 4
            int64_t rdx = sx.q(rax_8 s>> 1)
            int32_t* r9 = r11_1
            int32_t rcx_3 = r11_1[rdx]
            r11_1[rdx] = *r11_1
            *r11_1 = rcx_3
            int32_t rax_16
            
            while (true)
                r9 = &r9[1]
                
                if (r9 u<= i)
                    void* rax_11 = *(arg4 + 0x80)
                    void* rdx_1 = arg4
                    
                    if (rax_11 != 0)
                        rdx_1 = rax_11
                    
                    if (*(rdx_1 + (sx.q(*r11_1) << 2)) s>= *(rdx_1 + (sx.q(*r9) << 2)))
                        continue
                
                void* r8
                
                do
                    r10_1 = &r10_1[-1]
                    
                    if (r10_1 u<= r11_1)
                        break
                    
                    void* rax_14 = *(arg4 + 0x80)
                    r8 = arg4
                    
                    if (rax_14 != 0)
                        r8 = rax_14
                while (*(r8 + (sx.q(*r10_1) << 2)) s>= *(r8 + (sx.q(*r11_1) << 2)))
                rax_16 = *r10_1
                
                if (r9 u> r10_1)
                    break
                
                int32_t rcx_6 = *r9
                *r9 = rax_16
                *r10_1 = rcx_6
            
            int32_t rcx_7 = *r11_1
            rbp_1 -= 1
            *r11_1 = rax_16
            *r10_1 = rcx_7
            
            if (((r10_1 - r11_1 - 4) & 0xfffffffffffffffc) s< ((i - r9) & 0xfffffffffffffffc))
                if (i u> r9)
                    *r14_1 = r9
                    r14_1[1] = i
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (&r11_1[1] u>= r10_1)
                    break
                
                i = &r10_1[-1]
            else
                if (&r11_1[1] u< r10_1)
                    *r14_1 = r11_1
                    r14_1[1] = &r10_1[-1]
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (i u<= r9)
                    break
                
                r11_1 = r9
            
            rax_8 = ((i - r11_1) s>> 2).d + 1
            
            if (rbp_1 == 0)
                goto label_14084256c
    
    r14_1 -= 0x18
    
    if (r14_1 u< &var_338)
        break

__security_check_cookie(rax_2 ^ &var_378)
