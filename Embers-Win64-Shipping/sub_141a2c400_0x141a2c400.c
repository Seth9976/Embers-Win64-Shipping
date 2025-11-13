// 函数: sub_141a2c400
// 地址: 0x141a2c400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_368
int64_t rax_2 = __security_cookie ^ &var_368
int64_t var_328 = arg1
int64_t var_320_1 = (sx.q(arg2) << 4) + arg1 - 0x10
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_318_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_310
memset(&var_310, 0, 0x2e8)
int64_t* r14_1 = &var_328

while (true)
    uint128_t zmm2 = *r14_1
    uint32_t rsi_1 = (r14_1[2]).d
    uint128_t* r10_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rax_10 = ((i - r10_1) s>> 4).d + 1
    
    if (rsi_1 == 0)
    label_141a2c5e2:
        sub_141a2b670(r10_1, rax_10)
    else
        while (true)
            uint128_t zmm1
            
            if (rax_10 s<= 8)
                for (; i u> r10_1; i -= 0x10)
                    uint128_t* r9_2 = r10_1
                    uint128_t* r8_2 = &r10_1[1]
                    
                    if (&r10_1[1] u<= i)
                        do
                            uint128_t* rdx_4 = r8_2
                            
                            if (*(*r9_2 + 0xa8) s>= *(*r8_2 + 0xa8))
                                rdx_4 = r9_2
                            
                            r8_2 = &r8_2[1]
                            r9_2 = rdx_4
                        while (r8_2 u<= i)
                    
                    if (r9_2 != i)
                        zmm1 = *r9_2
                        *r9_2 = *i
                        *i = zmm1
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rax_10)
            void* rcx_4 = &r10_1[sx.q((temp1_1 - temp0_3) s>> 1)]
            
            if (rcx_4 != r10_1)
                zmm1 = *rcx_4
                *rcx_4 = *r10_1
                *r10_1 = zmm1
            
            uint128_t* r9 = i + 0x10
            uint128_t* r8 = r10_1
            
            while (true)
                r8 = &r8[1]
                
                if (r8 u<= i && *(*r10_1 + 0xa8) s>= *(*r8 + 0xa8))
                    continue
                
                do
                    r9 = &r9[-1]
                    
                    if (r9 u<= r10_1)
                        break
                while (*(*r9 + 0xa8) s>= *(*r10_1 + 0xa8))
                
                if (r8 u> r9)
                    break
                
                if (r8 != r9)
                    zmm1 = *r8
                    *r8 = *r9
                    *r9 = zmm1
            
            if (r10_1 != r9)
                zmm1 = *r10_1
                *r10_1 = *r9
                *r9 = zmm1
            
            rsi_1 -= 1
            
            if (((r9 - r10_1 - 0x10) & 0xfffffffffffffff0) s< ((i - r8) & 0xfffffffffffffff0))
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
            
            rax_10 = ((i - r10_1) s>> 4).d + 1
            
            if (rsi_1 == 0)
                goto label_141a2c5e2
    
    r14_1 -= 0x18
    
    if (r14_1 u< &var_328)
        break

__security_check_cookie(rax_2 ^ &var_368)
