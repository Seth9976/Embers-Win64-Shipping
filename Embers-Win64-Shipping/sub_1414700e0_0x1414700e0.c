// 函数: sub_1414700e0
// 地址: 0x1414700e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_368
int64_t rax_2 = __security_cookie ^ &var_368
int64_t var_328 = arg1
int64_t var_320_1 = arg1 + (sx.q(arg2) << 3) - 8
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_318_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_310
memset(&var_310, 0, 0x2e8)
int64_t* r14_1 = &var_328

while (true)
    uint128_t zmm2 = *r14_1
    int32_t rsi_1 = r14_1[2].d
    int64_t* r10_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rax_8 = ((i - r10_1) s>> 3).d + 1
    
    if (rsi_1 == 0)
    label_1414702eb:
        sub_14146f780(r10_1, rax_8)
    else
        while (true)
            uint128_t zmm1
            
            if (rax_8 s<= 8)
                for (; i u> r10_1; i -= 8)
                    uint64_t* r8_2 = r10_1
                    uint64_t* r9_2 = &r10_1[1]
                    
                    if (&r10_1[1] u<= i)
                        do
                            uint64_t rax_26 = *r8_2
                            uint64_t rcx_15 = *r9_2
                            uint64_t* rcx_16 = r9_2
                            
                            if (*(rcx_15 + 0x54c) * *(rcx_15 + 0x548)
                                    u>= *(rax_26 + 0x54c) * *(rax_26 + 0x548))
                                rcx_16 = r8_2
                            
                            r9_2 = &r9_2[1]
                            r8_2 = rcx_16
                        while (r9_2 u<= i)
                    
                    if (r8_2 != i)
                        zmm1 = zx.o(*r8_2)
                        *r8_2 = *i
                        *i = zmm1.q
                
                break
            
            if (rax_8 s< 0)
                rax_8 += 1
            
            int64_t* rcx_3 = &r10_1[sx.q(rax_8 s>> 1)]
            
            if (rcx_3 != r10_1)
                zmm1 = zx.o(*rcx_3)
                *rcx_3 = *r10_1
                *r10_1 = zmm1.q
            
            uint64_t* r9_1 = i + 8
            int64_t* r8 = r10_1
            
            while (true)
                r8 = &r8[1]
                
                if (r8 u<= i)
                    void* rax_11 = *r8
                    void* rdx = *r10_1
                    
                    if (*(rax_11 + 0x54c) * *(rax_11 + 0x548) u>= *(rdx + 0x54c) * *(rdx + 0x548))
                        continue
                
                uint64_t rax_14
                void* rdx_1
                
                do
                    r9_1 = &r9_1[-1]
                    
                    if (r9_1 u<= r10_1)
                        break
                    
                    rax_14 = *r9_1
                    rdx_1 = *r10_1
                while (*(rdx_1 + 0x54c) * *(rdx_1 + 0x548)
                    u>= *(rax_14 + 0x54c) * *(rax_14 + 0x548))
                
                if (r8 u> r9_1)
                    break
                
                if (r8 != r9_1)
                    zmm1 = zx.o(*r8)
                    *r8 = *r9_1
                    *r9_1 = zmm1.q
            
            if (r10_1 != r9_1)
                zmm1 = zx.o(*r10_1)
                *r10_1 = *r9_1
                *r9_1 = zmm1.q
            
            rsi_1 -= 1
            
            if (((r9_1 - r10_1 - 8) & 0xfffffffffffffff8) s< ((i - r8) & 0xfffffffffffffff8))
                if (i u> r8)
                    *r14_1 = r8
                    r14_1[1] = i
                    r14_1[2].d = rsi_1
                    r14_1 = &r14_1[3]
                
                if (&r10_1[1] u>= r9_1)
                    break
                
                i = &r9_1[-1]
            else
                if (&r10_1[1] u< r9_1)
                    *r14_1 = r10_1
                    r14_1[1] = &r9_1[-1]
                    r14_1[2].d = rsi_1
                    r14_1 = &r14_1[3]
                
                if (i u<= r8)
                    break
                
                r10_1 = r8
            
            rax_8 = ((i - r10_1) s>> 3).d + 1
            
            if (rsi_1 == 0)
                goto label_1414702eb
    
    r14_1 -= 0x18
    
    if (r14_1 u< &var_328)
        break

__security_check_cookie(rax_2 ^ &var_368)
