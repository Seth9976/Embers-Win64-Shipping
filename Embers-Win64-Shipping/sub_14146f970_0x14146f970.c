// 函数: sub_14146f970
// 地址: 0x14146f970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_378
int64_t rax_2 = __security_cookie ^ &var_378
int64_t var_338 = arg1
int64_t var_330_1 = arg1 + (sx.q(arg2) << 3) - 8
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_328_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_320
memset(&var_320, 0, 0x2e8)
int64_t* r14_1 = &var_338

while (true)
    uint128_t zmm2 = *r14_1
    int32_t rbp_1 = (r14_1[2]).d
    int64_t* r10_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rax_8 = ((i - r10_1) s>> 3).d + 1
    
    if (rbp_1 == 0)
    label_14146fb5f:
        sub_14146f190(r10_1, rax_8)
    else
        while (true)
            if (rax_8 s<= 8)
                for (; i u> r10_1; i -= 8)
                    void* r8_2 = r10_1
                    void* r9_2 = &r10_1[1]
                    
                    if (&r10_1[1] u<= i)
                        do
                            void* rax_27 = *r8_2
                            void* rcx_15 = *r9_2
                            void* rcx_16 = r9_2
                            
                            if (*(rcx_15 + 0x54c) * *(rcx_15 + 0x548)
                                    u>= *(rax_27 + 0x54c) * *(rax_27 + 0x548))
                                rcx_16 = r8_2
                            
                            r9_2 += 8
                            r8_2 = rcx_16
                        while (r9_2 u<= i)
                    
                    int64_t rcx_17 = *r8_2
                    *r8_2 = *i
                    *i = rcx_17
                
                break
            
            if (rax_8 s< 0)
                rax_8 += 1
            
            void* r9_1 = i + 8
            int64_t rdx = sx.q(rax_8 s>> 1)
            int64_t* r8 = r10_1
            int64_t rcx_3 = r10_1[rdx]
            r10_1[rdx] = *r10_1
            *r10_1 = rcx_3
            void* r11_1
            
            while (true)
                r8 = &r8[1]
                
                if (r8 u<= i)
                    void* rax_11 = *r10_1
                    void* rdx_1 = *r8
                    
                    if (*(rdx_1 + 0x54c) * *(rdx_1 + 0x548)
                            u>= *(rax_11 + 0x54c) * *(rax_11 + 0x548))
                        continue
                
                void* rdx_2
                
                do
                    r11_1 = *(r9_1 - 8)
                    r9_1 -= 8
                    
                    if (r9_1 u<= r10_1)
                        break
                    
                    rdx_2 = *r10_1
                while (*(rdx_2 + 0x54c) * *(rdx_2 + 0x548) u>= *(r11_1 + 0x54c) * *(r11_1 + 0x548))
                
                if (r8 u> r9_1)
                    break
                
                int64_t rax_16 = *r8
                *r8 = r11_1
                *r9_1 = rax_16
            
            int64_t rax_17 = *r10_1
            *r10_1 = r11_1
            *r9_1 = rax_17
            rbp_1 -= 1
            
            if (((r9_1 - r10_1 - 8) & 0xfffffffffffffff8) s< ((i - r8) & 0xfffffffffffffff8))
                if (i u> r8)
                    *r14_1 = r8
                    r14_1[1] = i
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (&r10_1[1] u>= r9_1)
                    break
                
                i = r9_1 - 8
            else
                if (&r10_1[1] u< r9_1)
                    *r14_1 = r10_1
                    r14_1[1] = r9_1 - 8
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (i u<= r8)
                    break
                
                r10_1 = r8
            
            rax_8 = ((i - r10_1) s>> 3).d + 1
            
            if (rbp_1 == 0)
                goto label_14146fb5f
    
    r14_1 -= 0x18
    
    if (r14_1 u< &var_338)
        break

__security_check_cookie(rax_2 ^ &var_378)
