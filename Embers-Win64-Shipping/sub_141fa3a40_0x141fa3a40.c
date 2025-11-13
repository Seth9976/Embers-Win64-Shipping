// 函数: sub_141fa3a40
// 地址: 0x141fa3a40
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
int64_t* rsi_1 = &var_328

while (true)
    uint128_t zmm2 = *rsi_1
    uint32_t r11_1 = (rsi_1[2]).d
    uint128_t* r10_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rax_10 = ((i - r10_1) s>> 4).d + 1
    
    if (r11_1 == 0)
    label_141fa3c1d:
        sub_141fa2ff0(r10_1, rax_10)
    else
        while (true)
            uint128_t zmm1
            
            if (rax_10 s<= 8)
                for (; i u> r10_1; i -= 0x10)
                    uint128_t* rdx_3 = r10_1
                    uint128_t* rcx_12 = &r10_1[1]
                    
                    if (&r10_1[1] u<= i)
                        do
                            int32_t r8_2 = *rdx_3
                            int32_t temp3_1 = *rcx_12
                            
                            if (temp3_1 s< r8_2
                                    || (temp3_1 == r8_2 && *(rdx_3 + 0xc) s< *(rcx_12 + 0xc)))
                                r8_2.b = 1
                            else
                                r8_2.b = 0
                            
                            uint128_t* rax_28 = rcx_12
                            
                            if (r8_2.b == 0)
                                rax_28 = rdx_3
                            
                            rcx_12 = &rcx_12[1]
                            rdx_3 = rax_28
                        while (rcx_12 u<= i)
                    
                    if (rdx_3 != i)
                        zmm1 = *rdx_3
                        *rdx_3 = *i
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
            
            uint128_t* rdx_1 = i + 0x10
            uint128_t* r8 = r10_1
            
            while (true)
                r8 = &r8[1]
                
                if (r8 u<= i)
                    int32_t rax_14 = *r8
                    int32_t temp2_1 = *r10_1
                    
                    if (rax_14 s>= temp2_1)
                        if (rax_14 != temp2_1)
                            continue
                        else if (*(r10_1 + 0xc) s>= *(r8 + 0xc))
                            continue
                
                while (true)
                    rdx_1 -= 0x10
                    
                    if (rdx_1 u<= r10_1)
                        break
                    
                    int32_t rax_16 = *r10_1
                    int32_t temp4_1 = *rdx_1
                    
                    if (rax_16 s< temp4_1)
                        break
                    
                    if (rax_16 == temp4_1)
                        if (*(rdx_1 + 0xc) s< *(r10_1 + 0xc))
                            break
                
                if (r8 u> rdx_1)
                    break
                
                if (r8 != rdx_1)
                    zmm1 = *r8
                    *r8 = *rdx_1
                    *rdx_1 = zmm1
            
            if (r10_1 != rdx_1)
                zmm1 = *r10_1
                *r10_1 = *rdx_1
                *rdx_1 = zmm1
            
            r11_1 -= 1
            
            if (((rdx_1 - r10_1 - 0x10) & 0xfffffffffffffff0) s< ((i - r8) & 0xfffffffffffffff0))
                if (i u> r8)
                    *rsi_1 = r8
                    rsi_1[1] = i
                    rsi_1[2].d = r11_1
                    rsi_1 = &rsi_1[3]
                
                if (&r10_1[1] u>= rdx_1)
                    break
                
                i = &rdx_1[-1]
            else
                if (&r10_1[1] u< rdx_1)
                    *rsi_1 = r10_1
                    rsi_1[1] = &rdx_1[-1]
                    rsi_1[2].d = r11_1
                    rsi_1 = &rsi_1[3]
                
                if (i u<= r8)
                    break
                
                r10_1 = r8
            
            rax_10 = ((i - r10_1) s>> 4).d + 1
            
            if (r11_1 == 0)
                goto label_141fa3c1d
    
    rsi_1 -= 0x18
    
    if (rsi_1 u< &var_328)
        break

__security_check_cookie(rax_2 ^ &var_368)
