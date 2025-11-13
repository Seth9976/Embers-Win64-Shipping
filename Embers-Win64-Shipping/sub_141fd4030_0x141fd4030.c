// 函数: sub_141fd4030
// 地址: 0x141fd4030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_428
int64_t rax_2 = __security_cookie ^ &var_428
int64_t var_348 = arg1
int64_t var_340_1 = arg1 + (sx.q(arg2) << 3) - 8
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_338_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_330
memset(&var_330, 0, 0x2e8)
int64_t* r15_1 = &var_348

while (true)
    uint128_t zmm2 = *r15_1
    int32_t r12_1 = r15_1[2].d
    int64_t* r11_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rax_8 = ((i - r11_1) s>> 3).d + 1
    
    if (r12_1 == 0)
    label_141fd4299:
        sub_141fd3360(r11_1, rax_8)
    else
        while (true)
            int64_t zmm0_2
            
            if (rax_8 s<= 8)
                for (; i u> r11_1; i -= 8)
                    int64_t* r9_2 = r11_1
                    int64_t* r10_2 = &r11_1[1]
                    
                    if (&r11_1[1] u<= i)
                        do
                            void* rcx_21 = **r9_2
                            zmm0_2 = *(rcx_21 + 0x18)
                            void* r8_3 = **r10_2
                            int64_t* rax_35 = r10_2
                            int32_t rdx_6 = (zmm0_2 u>> 0x20).d * *(rcx_21 + 0x20)
                            int32_t var_390_1 = zmm0_2.d
                            zmm0_2 = *(r8_3 + 0x18)
                            
                            if (rdx_6 * var_390_1
                                    s<= (zmm0_2 u>> 0x20).d * *(r8_3 + 0x20) * zmm0_2.d)
                                rax_35 = r9_2
                            
                            r10_2 = &r10_2[1]
                            r9_2 = rax_35
                        while (r10_2 u<= i)
                    
                    int64_t rcx_26 = *r9_2
                    *r9_2 = *i
                    *i = rcx_26
                
                break
            
            if (rax_8 s< 0)
                rax_8 += 1
            
            void* r9_1 = i + 8
            int64_t rdx = sx.q(rax_8 s>> 1)
            int64_t* r10_1 = r11_1
            int64_t rcx_3 = r11_1[rdx]
            r11_1[rdx] = *r11_1
            *r11_1 = rcx_3
            int64_t* rsi_1
            
            while (true)
                r10_1 = &r10_1[1]
                
                if (r10_1 u<= i)
                    void* rcx_4 = **r11_1
                    zmm0_2 = *(rcx_4 + 0x18)
                    void* rdx_1 = **r10_1
                    int32_t var_3f0_1 = zmm0_2.d
                    int64_t var_3fc_1 = zmm0_2
                    zmm0_2 = *(rdx_1 + 0x18)
                    
                    if ((var_3fc_1 u>> 0x20).d * *(rcx_4 + 0x20) * var_3f0_1
                            s<= (zmm0_2 u>> 0x20).d * *(rdx_1 + 0x20) * zmm0_2.d)
                        continue
                
                int64_t var_3cc_1
                int32_t var_3c0_1
                void* rcx_9
                void* rdx_2
                
                do
                    rsi_1 = *(r9_1 - 8)
                    r9_1 -= 8
                    
                    if (r9_1 u<= r11_1)
                        break
                    
                    rcx_9 = *rsi_1
                    zmm0_2 = *(rcx_9 + 0x18)
                    rdx_2 = **r11_1
                    var_3c0_1 = zmm0_2.d
                    var_3cc_1 = zmm0_2
                    zmm0_2 = *(rdx_2 + 0x18)
                while ((var_3cc_1 u>> 0x20).d * *(rcx_9 + 0x20) * var_3c0_1
                    s<= (zmm0_2 u>> 0x20).d * *(rdx_2 + 0x20) * zmm0_2.d)
                
                if (r10_1 u> r9_1)
                    break
                
                int64_t rax_22 = *r10_1
                *r10_1 = rsi_1
                *r9_1 = rax_22
            
            int64_t rax_23 = *r11_1
            *r11_1 = rsi_1
            *r9_1 = rax_23
            r12_1 -= 1
            
            if (((r9_1 - r11_1 - 8) & 0xfffffffffffffff8) s< ((i - r10_1) & 0xfffffffffffffff8))
                if (i u> r10_1)
                    *r15_1 = r10_1
                    r15_1[1] = i
                    r15_1[2].d = r12_1
                    r15_1 = &r15_1[3]
                
                if (&r11_1[1] u>= r9_1)
                    break
                
                i = r9_1 - 8
            else
                if (&r11_1[1] u< r9_1)
                    *r15_1 = r11_1
                    r15_1[1] = r9_1 - 8
                    r15_1[2].d = r12_1
                    r15_1 = &r15_1[3]
                
                if (i u<= r10_1)
                    break
                
                r11_1 = r10_1
            
            rax_8 = ((i - r11_1) s>> 3).d + 1
            
            if (r12_1 == 0)
                goto label_141fd4299
    
    r15_1 -= 0x18
    
    if (r15_1 u< &var_348)
        break

__security_check_cookie(rax_2 ^ &var_428)
