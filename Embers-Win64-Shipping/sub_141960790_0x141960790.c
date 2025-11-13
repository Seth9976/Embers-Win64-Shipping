// 函数: sub_141960790
// 地址: 0x141960790
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
int64_t* rsi_1 = &var_328

while (true)
    uint128_t zmm2 = *rsi_1
    int32_t r11_1 = rsi_1[2].d
    int64_t* r10_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rax_8 = ((i - r10_1) s>> 3).d + 1
    
    if (r11_1 == 0)
    label_1419609a0:
        sub_14195e3b0(r10_1, rax_8)
    else
        while (true)
            uint128_t zmm1
            
            if (rax_8 s<= 8)
                for (; i u> r10_1; i -= 8)
                    uint64_t* r8_2 = r10_1
                    uint64_t* rdx_2 = &r10_1[1]
                    
                    if (&r10_1[1] u<= i)
                        do
                            char rax_26 = *r8_2
                            char rcx_15 = *rdx_2
                            
                            if (rax_26 u< rcx_15)
                                rcx_15 = 1
                            else if (rax_26 u> rcx_15)
                                rcx_15 = 0
                            else
                                char rax_27 = *(r8_2 + 1)
                                rcx_15 = *(rdx_2 + 1)
                                
                                if (rax_27 u< rcx_15)
                                    rcx_15 = 1
                                else if (rax_27 u> rcx_15 || *(r8_2 + 3) u>= *(rdx_2 + 3))
                                    rcx_15 = 0
                                else
                                    rcx_15 = 1
                            
                            uint64_t* rax_29 = rdx_2
                            
                            if (rcx_15 == 0)
                                rax_29 = r8_2
                            
                            rdx_2 = &rdx_2[1]
                            r8_2 = rax_29
                        while (rdx_2 u<= i)
                    
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
            
            uint64_t* rdx = i + 8
            int64_t* r8 = r10_1
            
            while (true)
                r8 = &r8[1]
                
                if (r8 u<= i)
                    char rax_11 = *r10_1
                    char rcx_4 = *r8
                    
                    if (rax_11 u>= rcx_4)
                        if (rax_11 u> rcx_4)
                            continue
                        else
                            char rax_12 = *(r10_1 + 1)
                            char rcx_5 = *(r8 + 1)
                            
                            if (rax_12 u>= rcx_5)
                                if (rax_12 u> rcx_5)
                                    continue
                                else if (*(r10_1 + 3) u>= *(r8 + 3))
                                    continue
                
                while (true)
                    rdx -= 8
                    
                    if (rdx u<= r10_1)
                        break
                    
                    char rax_14 = *rdx
                    char rcx_6 = *r10_1
                    
                    if (rax_14 u< rcx_6)
                        break
                    
                    if (rax_14 u<= rcx_6)
                        char rax_15 = *(rdx + 1)
                        char rcx_7 = *(r10_1 + 1)
                        
                        if (rax_15 u< rcx_7)
                            break
                        
                        if (rax_15 u<= rcx_7)
                            if (*(rdx + 3) u< *(r10_1 + 3))
                                break
                
                if (r8 u> rdx)
                    break
                
                if (r8 != rdx)
                    zmm1 = zx.o(*r8)
                    *r8 = *rdx
                    *rdx = zmm1.q
            
            if (r10_1 != rdx)
                zmm1 = zx.o(*r10_1)
                *r10_1 = *rdx
                *rdx = zmm1.q
            
            r11_1 -= 1
            
            if (((rdx - r10_1 - 8) & 0xfffffffffffffff8) s< ((i - r8) & 0xfffffffffffffff8))
                if (i u> r8)
                    *rsi_1 = r8
                    rsi_1[1] = i
                    rsi_1[2].d = r11_1
                    rsi_1 = &rsi_1[3]
                
                if (&r10_1[1] u>= rdx)
                    break
                
                i = &rdx[-1]
            else
                if (&r10_1[1] u< rdx)
                    *rsi_1 = r10_1
                    rsi_1[1] = &rdx[-1]
                    rsi_1[2].d = r11_1
                    rsi_1 = &rsi_1[3]
                
                if (i u<= r8)
                    break
                
                r10_1 = r8
            
            rax_8 = ((i - r10_1) s>> 3).d + 1
            
            if (r11_1 == 0)
                goto label_1419609a0
    
    rsi_1 -= 0x18
    
    if (rsi_1 u< &var_328)
        break

__security_check_cookie(rax_2 ^ &var_368)
