// 函数: sub_141a2bc20
// 地址: 0x141a2bc20
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
int64_t* r15_1 = &var_338

while (true)
    uint128_t zmm2 = *r15_1
    int32_t rbp_1 = (r15_1[2]).d
    int64_t* r11_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rax_8 = ((i - r11_1) s>> 3).d + 1
    
    if (rbp_1 == 0)
    label_141a2bdfe:
        sub_141a2b100(r11_1, rax_8, zx.q(arg3), arg4)
    else
        while (true)
            if (rax_8 s<= 8)
                for (; i u> r11_1; i -= 8)
                    void* r9_2 = r11_1
                    void* r10_2 = &r11_1[1]
                    
                    if (&r11_1[1] u<= i)
                        do
                            void* rcx_14 = r10_2
                            
                            if (sub_141a35c10(arg4, *r9_2, *r10_2) == 0)
                                rcx_14 = r9_2
                            
                            r10_2 += 8
                            r9_2 = rcx_14
                        while (r10_2 u<= i)
                    
                    int64_t rcx_15 = *r9_2
                    *r9_2 = *i
                    *i = rcx_15
                
                break
            
            if (rax_8 s< 0)
                rax_8 += 1
            
            void* r10_1 = i + 8
            int64_t rdx = sx.q(rax_8 s>> 1)
            int64_t* r9 = r11_1
            int64_t rcx_3 = r11_1[rdx]
            r11_1[rdx] = *r11_1
            *r11_1 = rcx_3
            void* rsi_1
            
            while (true)
                r9 = &r9[1]
                
                if (r9 u<= i && sub_141a35c10(arg4, *r11_1, *r9) == 0)
                    continue
                
                char i_1
                
                do
                    rsi_1 = *(r10_1 - 8)
                    r10_1 -= 8
                    
                    if (r10_1 u<= r11_1)
                        break
                    
                    i_1 = sub_141a35c10(arg4, rsi_1, *r11_1)
                while (i_1 == 0)
                
                if (r9 u> r10_1)
                    break
                
                int64_t rax_12 = *r9
                *r9 = rsi_1
                *r10_1 = rax_12
            
            int64_t rax_13 = *r11_1
            *r11_1 = rsi_1
            *r10_1 = rax_13
            rbp_1 -= 1
            
            if (((r10_1 - r11_1 - 8) & 0xfffffffffffffff8) s< ((i - r9) & 0xfffffffffffffff8))
                if (i u> r9)
                    *r15_1 = r9
                    r15_1[1] = i
                    r15_1[2].d = rbp_1
                    r15_1 = &r15_1[3]
                
                if (&r11_1[1] u>= r10_1)
                    break
                
                i = r10_1 - 8
            else
                if (&r11_1[1] u< r10_1)
                    *r15_1 = r11_1
                    r15_1[1] = r10_1 - 8
                    r15_1[2].d = rbp_1
                    r15_1 = &r15_1[3]
                
                if (i u<= r9)
                    break
                
                r11_1 = r9
            
            rax_8 = ((i - r11_1) s>> 3).d + 1
            
            if (rbp_1 == 0)
                goto label_141a2bdfe
    
    r15_1 -= 0x18
    
    if (r15_1 u< &var_338)
        break

__security_check_cookie(rax_2 ^ &var_378)
