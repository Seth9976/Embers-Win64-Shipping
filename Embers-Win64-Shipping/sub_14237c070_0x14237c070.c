// 函数: sub_14237c070
// 地址: 0x14237c070
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
int64_t* r14_1 = &var_328

while (true)
    uint128_t zmm2 = *r14_1
    int32_t rsi_1 = (r14_1[2]).d
    int32_t* r10_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rax_8 = ((i - r10_1) s>> 2).d + 1
    
    if (rsi_1 == 0)
    label_14237c25d:
        sub_14237b7d0(r10_1, rax_8, zx.q(arg3), arg4)
    else
        while (true)
            if (rax_8 s<= 8)
                for (; i u> r10_1; i -= 4)
                    void* rdx_4 = r10_1
                    void* r8_2 = &r10_1[1]
                    
                    if (&r10_1[1] u<= i)
                        int64_t r9_2 = *(*arg4 + 0x60)
                        
                        do
                            if (*((sx.q(*r8_2) << 5) + r9_2 + 0x18) f<
                                    *((sx.q(*rdx_4) << 5) + r9_2 + 0x18))
                                rdx_4 = r8_2
                            
                            r8_2 += 4
                        while (r8_2 u<= i)
                    
                    int32_t rcx_19 = *rdx_4
                    *rdx_4 = *i
                    *i = rcx_19
                
                break
            
            if (rax_8 s< 0)
                rax_8 += 1
            
            int32_t* r9 = i + 4
            int64_t rdx = sx.q(rax_8 s>> 1)
            int32_t* r8 = r10_1
            int32_t rcx_3 = r10_1[rdx]
            r10_1[rdx] = *r10_1
            *r10_1 = rcx_3
            int32_t rax_17
            
            while (true)
                r8 = &r8[1]
                
                if (r8 u<= i)
                    int64_t rdx_1 = *(*arg4 + 0x60)
                    
                    if (*((sx.q(*r8) << 5) + rdx_1 + 0x18) f>=
                            *((sx.q(*r10_1) << 5) + rdx_1 + 0x18))
                        continue
                
                int64_t rdx_2
                
                do
                    r9 = &r9[-1]
                    
                    if (r9 u<= r10_1)
                        break
                    
                    rdx_2 = *(*arg4 + 0x60)
                while (*((sx.q(*r10_1) << 5) + rdx_2 + 0x18) f>= *((sx.q(*r9) << 5) + rdx_2 + 0x18))
                rax_17 = *r9
                
                if (r8 u> r9)
                    break
                
                int32_t rcx_8 = *r8
                *r8 = rax_17
                *r9 = rcx_8
            
            int32_t rcx_9 = *r10_1
            rsi_1 -= 1
            *r10_1 = rax_17
            *r9 = rcx_9
            
            if (((r9 - r10_1 - 4) & 0xfffffffffffffffc) s< ((i - r8) & 0xfffffffffffffffc))
                if (i u> r8)
                    *r14_1 = r8
                    r14_1[1] = i
                    r14_1[2].d = rsi_1
                    r14_1 = &r14_1[3]
                
                if (&r10_1[1] u>= r9)
                    break
                
                i = &r9[-1]
            else
                if (&r10_1[1] u< r9)
                    *r14_1 = r10_1
                    r14_1[1] = &r9[-1]
                    r14_1[2].d = rsi_1
                    r14_1 = &r14_1[3]
                
                if (i u<= r8)
                    break
                
                r10_1 = r8
            
            rax_8 = ((i - r10_1) s>> 2).d + 1
            
            if (rsi_1 == 0)
                goto label_14237c25d
    
    r14_1 -= 0x18
    
    if (r14_1 u< &var_328)
        break

__security_check_cookie(rax_2 ^ &var_368)
