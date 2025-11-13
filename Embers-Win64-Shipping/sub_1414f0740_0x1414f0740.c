// 函数: sub_1414f0740
// 地址: 0x1414f0740
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
    int64_t* r11_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rax_8 = ((i - r11_1) s>> 3).d + 1
    
    if (rbp_1 == 0)
    label_1414f097d:
        sub_1414eff50(r11_1, rax_8, zx.q(arg3), arg4)
    else
        while (true)
            if (rax_8 s<= 8)
                for (; i u> r11_1; i -= 8)
                    void* r9_2 = r11_1
                    void* r10_2 = &r11_1[1]
                    
                    if (&r11_1[1] u<= i)
                        int64_t rbp_2 = *(*arg4 + 8)
                        
                        do
                            int64_t rax_37 = sx.q(*r10_2) * 2
                            int64_t r8_8 = sx.q(*r9_2) * 2
                            void* rax_42 = r10_2
                            
                            if ((zx.d(*(rbp_2 + (r8_8 << 3) + 3)) << 0x18
                                    | (*(rbp_2 + (r8_8 << 3)) & 0xffffff)) u>= (
                                    zx.d(*(rbp_2 + (rax_37 << 3) + 3)) << 0x18
                                    | (*(rbp_2 + (rax_37 << 3)) & 0xffffff)))
                                rax_42 = r9_2
                            
                            r10_2 += 8
                            r9_2 = rax_42
                        while (r10_2 u<= i)
                    
                    int64_t rcx_24 = *r9_2
                    *r9_2 = *i
                    *i = rcx_24
                
                break
            
            if (rax_8 s< 0)
                rax_8 += 1
            
            int32_t* r10_1 = i + 8
            int64_t rdx = sx.q(rax_8 s>> 1)
            int32_t* r9 = r11_1
            int64_t rcx_3 = r11_1[rdx]
            r11_1[rdx] = *r11_1
            *r11_1 = rcx_3
            int64_t rax_25
            
            while (true)
                r9 = &r9[2]
                
                if (r9 u<= i)
                    int64_t rcx_4 = *(*arg4 + 8)
                    int32_t* r8_2 = (sx.q(*r11_1) << 4) + rcx_4
                    int64_t rax_13 = sx.q(*r9) * 2
                    
                    if ((zx.d(*(r8_2 + 3)) << 0x18 | (*r8_2 & 0xffffff)) u>= (
                            zx.d(*(rcx_4 + (rax_13 << 3) + 3)) << 0x18
                            | (*(rcx_4 + (rax_13 << 3)) & 0xffffff)))
                        continue
                
                int64_t rax_20
                int64_t rcx_8
                int32_t* r8_5
                
                do
                    r10_1 = &r10_1[-2]
                    
                    if (r10_1 u<= r11_1)
                        break
                    
                    rcx_8 = *(*arg4 + 8)
                    r8_5 = (sx.q(*r10_1) << 4) + rcx_8
                    rax_20 = sx.q(*r11_1) * 2
                while ((zx.d(*(r8_5 + 3)) << 0x18 | (*r8_5 & 0xffffff)) u>= (
                    zx.d(*(rcx_8 + (rax_20 << 3) + 3)) << 0x18
                    | (*(rcx_8 + (rax_20 << 3)) & 0xffffff)))
                rax_25 = *r10_1
                
                if (r9 u> r10_1)
                    break
                
                int64_t rcx_12 = *r9
                *r9 = rax_25
                *r10_1 = rcx_12
            
            int64_t rcx_13 = *r11_1
            rbp_1 -= 1
            *r11_1 = rax_25
            *r10_1 = rcx_13
            
            if (((r10_1 - r11_1 - 8) & 0xfffffffffffffff8) s< ((i - r9) & 0xfffffffffffffff8))
                if (i u> r9)
                    *r14_1 = r9
                    r14_1[1] = i
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (&r11_1[1] u>= r10_1)
                    break
                
                i = &r10_1[-2]
            else
                if (&r11_1[1] u< r10_1)
                    *r14_1 = r11_1
                    r14_1[1] = &r10_1[-2]
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (i u<= r9)
                    break
                
                r11_1 = r9
            
            rax_8 = ((i - r11_1) s>> 3).d + 1
            
            if (rbp_1 == 0)
                goto label_1414f097d
    
    r14_1 -= 0x18
    
    if (r14_1 u< &var_338)
        break

__security_check_cookie(rax_2 ^ &var_378)
