// 函数: sub_140caad10
// 地址: 0x140caad10
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
    int32_t* r8_1 = zmm2.q
    void* i_2 = _mm_bsrli_si128(zmm2, 8).q
    int32_t i = ((i_2 - r8_1) s>> 2).d + 1
    
    if (r11_1 == 0)
    label_140caaec2:
        int32_t temp0_3
        int32_t temp1_1
        temp0_3:temp1_1 = sx.q(i - 2)
        uint64_t rax_18 = zx.q((temp1_1 - temp0_3) s>> 1)
        int32_t rbx_1 = rax_18.d
        
        if (rax_18.d s>= 0)
            int32_t rdi_1 = ((rax_18 << 1) + 1).d
            int32_t temp2_1
            
            do
                int32_t r11_2 = rbx_1
                
                if (rdi_1 s< i)
                    uint64_t rdx_3
                    
                    do
                        int32_t r10_1 = r11_2 * 2
                        rdx_3 = zx.q(r10_1 + 1)
                        
                        if ((rdx_3 + 1).d s< i)
                            if (r8_1[sx.q(r10_1) + 2] s> r8_1[sx.q(rdx_3.d)])
                                rdx_3 = zx.q(r10_1)
                            
                            rdx_3 = zx.q(rdx_3.d + 1)
                        
                        int64_t rax_22 = sx.q(rdx_3.d)
                        int64_t rcx_9 = sx.q(r11_2)
                        int32_t r10_2 = r8_1[rax_22]
                        int32_t r11_3 = r8_1[rcx_9]
                        
                        if (r11_3 s<= r10_2)
                            break
                        
                        r8_1[rcx_9] = r10_2
                        r8_1[rax_22] = r11_3
                        r11_2 = rdx_3.d
                    while (((rdx_3 << 1) + 1).d s< i)
                
                rdi_1 -= 2
                temp2_1 = rbx_1
                rbx_1 -= 1
            while (temp2_1 - 1 s>= 0)
        
        int32_t j = i - 1
        int64_t i_1 = sx.q(j)
        
        if (j s> 0)
            do
                int32_t rcx_10 = *r8_1
                int32_t r10_3 = 0
                *r8_1 = r8_1[i_1]
                r8_1[i_1] = rcx_10
                
                if (j s> 1)
                    uint64_t rdx_4
                    
                    do
                        int32_t r9_9 = r10_3 * 2
                        rdx_4 = zx.q(r9_9 + 1)
                        
                        if ((rdx_4 + 1).d s< j)
                            if (r8_1[sx.q(r9_9) + 2] s> r8_1[sx.q(rdx_4.d)])
                                rdx_4 = zx.q(r9_9)
                            
                            rdx_4 = zx.q(rdx_4.d + 1)
                        
                        int64_t rax_28 = sx.q(rdx_4.d)
                        int64_t rcx_12 = sx.q(r10_3)
                        int32_t r9_10 = r8_1[rax_28]
                        int32_t r10_4 = r8_1[rcx_12]
                        
                        if (r10_4 s<= r9_10)
                            break
                        
                        r8_1[rcx_12] = r9_10
                        r8_1[rax_28] = r10_4
                        r10_3 = rdx_4.d
                    while (((rdx_4 << 1) + 1).d s< j)
                
                j -= 1
                i_1 -= 1
            while (i_1 s> 0)
    else
        while (true)
            if (i s<= 8)
                for (; i_2 u> r8_1; i_2 -= 4)
                    int32_t* r9_11 = r8_1
                    void* rdx_5 = &r8_1[1]
                    
                    if (&r8_1[1] u<= i_2)
                        do
                            void* rcx_15 = rdx_5
                            
                            if (*r9_11 s<= *rdx_5)
                                rcx_15 = r9_11
                            
                            rdx_5 += 4
                            r9_11 = rcx_15
                        while (rdx_5 u<= i_2)
                    
                    int32_t rcx_16 = *r9_11
                    *r9_11 = *i_2
                    *i_2 = rcx_16
                
                break
            
            if (i s< 0)
                i += 1
            
            int64_t rdx = sx.q(i s>> 1)
            void* r9_5 = i_2 + 4
            int32_t rcx_3 = r8_1[rdx]
            r8_1[rdx] = *r8_1
            int32_t* rdx_1 = r8_1
            *r8_1 = rcx_3
            int32_t i_3
            
            while (true)
                rdx_1 = &rdx_1[1]
                
                if (rdx_1 u<= i_2 && *r8_1 s<= *rdx_1)
                    continue
                
                do
                    i_3 = *(r9_5 - 4)
                    r9_5 -= 4
                    
                    if (r9_5 u<= r8_1)
                        break
                while (i_3 s<= *r8_1)
                
                if (rdx_1 u> r9_5)
                    break
                
                int32_t rax_7 = *rdx_1
                *rdx_1 = i_3
                *r9_5 = rax_7
            
            int32_t rax_8 = *r8_1
            r11_1 -= 1
            *r8_1 = i_3
            *r9_5 = rax_8
            
            if (((r9_5 - r8_1 - 4) & 0xfffffffffffffffc) s< ((i_2 - rdx_1) & 0xfffffffffffffffc))
                if (i_2 u> rdx_1)
                    *rsi_1 = rdx_1
                    rsi_1[1] = i_2
                    rsi_1[2].d = r11_1
                    rsi_1 = &rsi_1[3]
                
                if (&r8_1[1] u>= r9_5)
                    break
                
                i_2 = r9_5 - 4
            else
                if (&r8_1[1] u< r9_5)
                    *rsi_1 = r8_1
                    rsi_1[1] = r9_5 - 4
                    rsi_1[2].d = r11_1
                    rsi_1 = &rsi_1[3]
                
                if (i_2 u<= rdx_1)
                    break
                
                r8_1 = rdx_1
            
            i = ((i_2 - r8_1) s>> 2).d + 1
            
            if (r11_1 == 0)
                goto label_140caaec2
    
    rsi_1 -= 0x18
    
    if (rsi_1 u< &var_328)
        break

__security_check_cookie(rax_2 ^ &var_368)
