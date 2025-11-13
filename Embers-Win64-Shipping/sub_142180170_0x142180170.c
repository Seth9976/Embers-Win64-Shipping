// 函数: sub_142180170
// 地址: 0x142180170
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
    label_1421803b6:
        sub_14217faf0(r10_1, rax_10)
    else
        while (true)
            uint128_t zmm1
            
            if (rax_10 s<= 8)
                for (; i u> r10_1; i -= 0x10)
                    uint128_t* r8_2 = r10_1
                    uint128_t* r9_2 = &r10_1[1]
                    
                    if (&r10_1[1] u<= i)
                        do
                            int32_t rdx_8
                            rdx_8.b = *(r9_2 + 0xa) == 0
                            int32_t rax_31
                            rax_31.b = *(r9_2 + 9) == 0
                            int32_t rax_32
                            rax_32.b = *(r9_2 + 8) == 0
                            int32_t rcx_18
                            rcx_18.b = *(r8_2 + 0xa) == 0
                            int32_t rax_33
                            rax_33.b = *(r8_2 + 9) == 0
                            int32_t rax_34
                            rax_34.b = *(r8_2 + 8) == 0
                            uint128_t* rax_35 = r9_2
                            
                            if (rcx_18 + rax_33 + rax_34 u>= rdx_8 + rax_31 + rax_32)
                                rax_35 = r8_2
                            
                            r9_2 = &r9_2[1]
                            r8_2 = rax_35
                        while (r9_2 u<= i)
                    
                    if (r8_2 != i)
                        zmm1 = *r8_2
                        *r8_2 = *i
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
            
            uint128_t* r9_1 = i + 0x10
            uint128_t* r8 = r10_1
            
            while (true)
                r8 = &r8[1]
                
                if (r8 u<= i)
                    int32_t rdx_1
                    rdx_1.b = *(r8 + 0xa) == 0
                    int32_t rax_14
                    rax_14.b = *(r8 + 9) == 0
                    int32_t rax_15
                    rax_15.b = *(r8 + 8) == 0
                    int32_t rcx_5
                    rcx_5.b = *(r10_1 + 0xa) == 0
                    int32_t rax_16
                    rax_16.b = *(r10_1 + 9) == 0
                    int32_t rax_17
                    rax_17.b = *(r10_1 + 8) == 0
                    
                    if (rcx_5 + rax_16 + rax_17 u>= rdx_1 + rax_14 + rax_15)
                        continue
                
                int32_t rax_18
                int32_t rax_19
                int32_t rax_20
                int32_t rax_21
                int32_t rcx_8
                int32_t rdx_4
                
                do
                    r9_1 = &r9_1[-1]
                    
                    if (r9_1 u<= r10_1)
                        break
                    
                    rdx_4.b = *(r9_1 + 0xa) == 0
                    rax_18.b = *(r9_1 + 9) == 0
                    rax_19.b = *(r9_1 + 8) == 0
                    rcx_8.b = *(r10_1 + 0xa) == 0
                    rax_20.b = *(r10_1 + 9) == 0
                    rax_21.b = *(r10_1 + 8) == 0
                while (rdx_4 + rax_18 + rax_19 u>= rcx_8 + rax_20 + rax_21)
                
                if (r8 u> r9_1)
                    break
                
                if (r8 != r9_1)
                    zmm1 = *r8
                    *r8 = *r9_1
                    *r9_1 = zmm1
            
            if (r10_1 != r9_1)
                zmm1 = *r10_1
                *r10_1 = *r9_1
                *r9_1 = zmm1
            
            rsi_1 -= 1
            
            if (((r9_1 - r10_1 - 0x10) & 0xfffffffffffffff0) s< ((i - r8) & 0xfffffffffffffff0))
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
            
            rax_10 = ((i - r10_1) s>> 4).d + 1
            
            if (rsi_1 == 0)
                goto label_1421803b6
    
    r14_1 -= 0x18
    
    if (r14_1 u< &var_328)
        break

__security_check_cookie(rax_2 ^ &var_368)
