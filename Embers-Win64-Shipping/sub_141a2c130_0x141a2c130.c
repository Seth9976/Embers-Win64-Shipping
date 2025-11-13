// 函数: sub_141a2c130
// 地址: 0x141a2c130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_378
int64_t rax_2 = __security_cookie ^ &var_378
int64_t var_338 = arg1
int64_t rbp_1 = sx.q(arg3)
int64_t var_330_1 = (sx.q(arg2) << 4) + arg1 - 0x10
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_328_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_320
memset(&var_320, 0, 0x2e8)
int64_t* rsi_1 = &var_338

while (true)
    uint128_t zmm2 = *rsi_1
    uint32_t r11_1 = (rsi_1[2]).d
    uint128_t* r10_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rax_10 = ((i - r10_1) s>> 4).d + 1
    
    if (r11_1 == 0)
    label_141a2c333:
        sub_141a2b430(r10_1, rax_10, rbp_1.d)
    else
        while (true)
            uint128_t zmm1
            
            if (rax_10 s<= 8)
                for (; i u> r10_1; i -= 0x10)
                    uint128_t* r8_2 = r10_1
                    uint128_t* rdx_3 = &r10_1[1]
                    
                    if (&r10_1[1] u<= i)
                        do
                            int32_t rcx_12 = *(rbp_1 + rdx_3)
                            int32_t temp3_1 = *(rbp_1 + r8_2)
                            
                            if (temp3_1 u< rcx_12)
                                rcx_12.b = 1
                            else if (temp3_1 u> rcx_12)
                                rcx_12.b = 0
                            else
                                rcx_12 = *(rbp_1 + rdx_3 + 4)
                                int32_t temp6_1 = *(rbp_1 + r8_2 + 4)
                                
                                if (temp6_1 u< rcx_12)
                                    rcx_12.b = 1
                                else if (temp6_1 != rcx_12
                                        || *(rbp_1 + r8_2 + 8) u>= *(rbp_1 + rdx_3 + 8))
                                    rcx_12.b = 0
                                else
                                    rcx_12.b = 1
                            
                            uint128_t* rax_30 = rdx_3
                            
                            if (rcx_12.b == 0)
                                rax_30 = r8_2
                            
                            rdx_3 = &rdx_3[1]
                            r8_2 = rax_30
                        while (rdx_3 u<= i)
                    
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
            
            uint128_t* rdx_1 = i + 0x10
            uint128_t* r8 = r10_1
            
            while (true)
                r8 = &r8[1]
                
                if (r8 u<= i)
                    int32_t rax_14 = *(rbp_1 + r10_1)
                    int32_t temp2_1 = *(rbp_1 + r8)
                    
                    if (rax_14 u>= temp2_1)
                        if (rax_14 u> temp2_1)
                            continue
                        else
                            int32_t rax_15 = *(rbp_1 + r10_1 + 4)
                            int32_t temp5_1 = *(rbp_1 + r8 + 4)
                            
                            if (rax_15 u>= temp5_1)
                                if (rax_15 != temp5_1)
                                    continue
                                else if (*(rbp_1 + r10_1 + 8) u>= *(rbp_1 + r8 + 8))
                                    continue
                
                while (true)
                    rdx_1 -= 0x10
                    
                    if (rdx_1 u<= r10_1)
                        break
                    
                    int32_t rax_17 = *(rbp_1 + rdx_1)
                    int32_t temp4_1 = *(rbp_1 + r10_1)
                    
                    if (rax_17 u< temp4_1)
                        break
                    
                    if (rax_17 u<= temp4_1)
                        int32_t rax_18 = *(rbp_1 + rdx_1 + 4)
                        int32_t temp7_1 = *(rbp_1 + r10_1 + 4)
                        
                        if (rax_18 u< temp7_1)
                            break
                        
                        if (rax_18 == temp7_1)
                            if (*(rbp_1 + rdx_1 + 8) u< *(rbp_1 + r10_1 + 8))
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
                goto label_141a2c333
    
    rsi_1 -= 0x18
    
    if (rsi_1 u< &var_338)
        break

__security_check_cookie(rax_2 ^ &var_378)
