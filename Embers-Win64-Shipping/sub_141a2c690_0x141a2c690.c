// 函数: sub_141a2c690
// 地址: 0x141a2c690
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
    label_141a2c84d:
        sub_141a2b810(r10_1, rax_8)
    else
        while (true)
            if (rax_8 s<= 8)
                for (; i u> r10_1; i -= 4)
                    int32_t* r8_2 = r10_1
                    int32_t* rdx_3 = &r10_1[1]
                    
                    if (&r10_1[1] u<= i)
                        do
                            int32_t* rcx_13 = rdx_3
                            
                            if (*r8_2 u>= *rdx_3)
                                rcx_13 = r8_2
                            
                            rdx_3 = &rdx_3[1]
                            r8_2 = rcx_13
                        while (rdx_3 u<= i)
                    
                    if (r8_2 != i)
                        int32_t rax_26 = *r8_2
                        *r8_2 = *i
                        *i = rax_26
                
                break
            
            if (rax_8 s< 0)
                rax_8 += 1
            
            int32_t* rdx = &r10_1[sx.q(rax_8 s>> 1)]
            
            if (rdx != r10_1)
                int32_t rax_11 = *rdx
                *rdx = *r10_1
                *r10_1 = rax_11
            
            int32_t* r8 = i + 4
            int32_t* rdx_1 = r10_1
            
            while (true)
                rdx_1 = &rdx_1[1]
                
                if (rdx_1 u<= i && *r10_1 u>= *rdx_1)
                    continue
                
                do
                    r8 = &r8[-1]
                    
                    if (r8 u<= r10_1)
                        break
                while (*r8 u>= *r10_1)
                
                if (rdx_1 u> r8)
                    break
                
                if (rdx_1 != r8)
                    int32_t rax_14 = *rdx_1
                    *rdx_1 = *r8
                    *r8 = rax_14
            
            if (r10_1 != r8)
                int32_t rax_15 = *r10_1
                *r10_1 = *r8
                *r8 = rax_15
            
            r11_1 -= 1
            
            if (((r8 - r10_1 - 4) & 0xfffffffffffffffc) s< ((i - rdx_1) & 0xfffffffffffffffc))
                if (i u> rdx_1)
                    *rsi_1 = rdx_1
                    rsi_1[1] = i
                    rsi_1[2].d = r11_1
                    rsi_1 = &rsi_1[3]
                
                if (&r10_1[1] u>= r8)
                    break
                
                i = &r8[-1]
            else
                if (&r10_1[1] u< r8)
                    *rsi_1 = r10_1
                    rsi_1[1] = &r8[-1]
                    rsi_1[2].d = r11_1
                    rsi_1 = &rsi_1[3]
                
                if (i u<= rdx_1)
                    break
                
                r10_1 = rdx_1
            
            rax_8 = ((i - r10_1) s>> 2).d + 1
            
            if (r11_1 == 0)
                goto label_141a2c84d
    
    rsi_1 -= 0x18
    
    if (rsi_1 u< &var_328)
        break

__security_check_cookie(rax_2 ^ &var_368)
