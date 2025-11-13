// 函数: sub_140a1c0d0
// 地址: 0x140a1c0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_368
int64_t rax_2 = __security_cookie ^ &var_368
int64_t var_328 = arg1
int64_t var_320_1 = arg1 + (sx.q(arg2) << 2) - 4
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_318_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_310
memset(&var_310, 0, 0x2e8)
int64_t* rsi_1 = &var_328

while (true)
    uint128_t zmm2 = *rsi_1
    int32_t r11_1 = (rsi_1[2]).d
    int32_t* r10_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rax_8 = ((i - r10_1) s>> 2).d + 1
    
    if (r11_1 == 0)
    label_140a1c282:
        sub_140a1bfb0(r10_1, rax_8)
    else
        while (true)
            if (rax_8 s<= 8)
                for (; i u> r10_1; i -= 4)
                    void* r8_2 = r10_1
                    void* rdx_3 = &r10_1[1]
                    
                    if (&r10_1[1] u<= i)
                        do
                            void* rcx_11 = rdx_3
                            
                            if (*r8_2 s>= *rdx_3)
                                rcx_11 = r8_2
                            
                            rdx_3 += 4
                            r8_2 = rcx_11
                        while (rdx_3 u<= i)
                    
                    int32_t rcx_12 = *r8_2
                    *r8_2 = *i
                    *i = rcx_12
                
                break
            
            if (rax_8 s< 0)
                rax_8 += 1
            
            void* r8 = i + 4
            int64_t rdx = sx.q(rax_8 s>> 1)
            int32_t rcx_3 = r10_1[rdx]
            r10_1[rdx] = *r10_1
            int32_t* rdx_1 = r10_1
            *r10_1 = rcx_3
            int32_t i_1
            
            while (true)
                rdx_1 = &rdx_1[1]
                
                if (rdx_1 u<= i && *r10_1 s>= *rdx_1)
                    continue
                
                do
                    i_1 = *(r8 - 4)
                    r8 -= 4
                    
                    if (r8 u<= r10_1)
                        break
                while (i_1 s>= *r10_1)
                
                if (rdx_1 u> r8)
                    break
                
                int32_t rax_12 = *rdx_1
                *rdx_1 = i_1
                *r8 = rax_12
            
            int32_t rax_13 = *r10_1
            r11_1 -= 1
            *r10_1 = i_1
            *r8 = rax_13
            
            if (((r8 - r10_1 - 4) & 0xfffffffffffffffc) s< ((i - rdx_1) & 0xfffffffffffffffc))
                if (i u> rdx_1)
                    *rsi_1 = rdx_1
                    rsi_1[1] = i
                    rsi_1[2].d = r11_1
                    rsi_1 = &rsi_1[3]
                
                if (&r10_1[1] u>= r8)
                    break
                
                i = r8 - 4
            else
                if (&r10_1[1] u< r8)
                    *rsi_1 = r10_1
                    rsi_1[1] = r8 - 4
                    rsi_1[2].d = r11_1
                    rsi_1 = &rsi_1[3]
                
                if (i u<= rdx_1)
                    break
                
                r10_1 = rdx_1
            
            rax_8 = ((i - r10_1) s>> 2).d + 1
            
            if (r11_1 == 0)
                goto label_140a1c282
    
    rsi_1 -= 0x18
    
    if (rsi_1 u< &var_328)
        break

__security_check_cookie(rax_2 ^ &var_368)
