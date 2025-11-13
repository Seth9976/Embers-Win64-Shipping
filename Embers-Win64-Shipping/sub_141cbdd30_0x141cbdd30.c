// 函数: sub_141cbdd30
// 地址: 0x141cbdd30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_3b8
int64_t rax_2 = __security_cookie ^ &var_3b8
int64_t var_348 = arg1
int64_t var_340_1 = (sx.q(arg2) << 4) + arg1 - 0x10
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_338_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_330
memset(&var_330, 0, 0x2e8)
int64_t* r12_1 = &var_348

while (true)
    uint128_t zmm2 = *r12_1
    uint32_t rbp_1 = (r12_1[2]).d
    uint128_t* r15_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rax_10 = ((i - r15_1) s>> 4).d + 1
    
    if (rbp_1 == 0)
    label_141cbdfcb:
        sub_141cbda90(r15_1, rax_10)
    else
        while (true)
            uint128_t zmm1
            
            if (rax_10 s<= 8)
                for (; i u> r15_1; i -= 0x10)
                    uint128_t* rsi_2 = r15_1
                    uint128_t* r14_2 = &r15_1[1]
                    
                    if (&r15_1[1] u<= i)
                        do
                            void* rax_36 = *r14_2
                            int64_t* rax_37
                            
                            if (*(rax_36 + 0x10) s<= 0)
                                rax_37 = &data_143f35860
                            else
                                rax_37 = *(rax_36 + 8)
                            
                            int64_t var_378 = *rax_37
                            void* rax_39 = *rsi_2
                            int64_t* rax_40
                            
                            if (*(rax_39 + 0x10) s<= 0)
                                rax_40 = &data_143f35860
                            else
                                rax_40 = *(rax_39 + 8)
                            
                            int64_t var_370 = *rax_40
                            
                            if (sub_140b5d160(&var_370, &var_378) s< 0)
                                rsi_2 = r14_2
                            
                            r14_2 = &r14_2[1]
                        while (r14_2 u<= i)
                    
                    if (rsi_2 != i)
                        zmm1 = *rsi_2
                        *rsi_2 = *i
                        *i = zmm1
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rax_10)
            void* rcx_4 = &r15_1[sx.q((temp1_1 - temp0_3) s>> 1)]
            
            if (rcx_4 != r15_1)
                zmm1 = *rcx_4
                *rcx_4 = *r15_1
                *r15_1 = zmm1
            
            uint128_t* rsi_1 = r15_1
            uint128_t* r14_1 = i + 0x10
            
            while (true)
                rsi_1 = &rsi_1[1]
                
                if (rsi_1 u<= i)
                    void* rax_14 = *rsi_1
                    int64_t* rax_15
                    
                    if (*(rax_14 + 0x10) s<= 0)
                        rax_15 = &data_143f35860
                    else
                        rax_15 = *(rax_14 + 8)
                    
                    int64_t var_398 = *rax_15
                    void* rax_17 = *r15_1
                    int64_t* rax_18
                    
                    if (*(rax_17 + 0x10) s<= 0)
                        rax_18 = &data_143f35860
                    else
                        rax_18 = *(rax_17 + 8)
                    
                    int64_t var_390 = *rax_18
                    
                    if (sub_140b5d160(&var_390, &var_398) s>= 0)
                        continue
                
                int32_t i_1
                
                do
                    r14_1 -= 0x10
                    
                    if (r14_1 u<= r15_1)
                        break
                    
                    void* rax_21 = *r15_1
                    int64_t* rax_22
                    
                    if (*(rax_21 + 0x10) s<= 0)
                        rax_22 = &data_143f35860
                    else
                        rax_22 = *(rax_21 + 8)
                    
                    int64_t var_388 = *rax_22
                    void* rax_24 = *r14_1
                    int64_t* rax_25
                    
                    if (*(rax_24 + 0x10) s<= 0)
                        rax_25 = &data_143f35860
                    else
                        rax_25 = *(rax_24 + 8)
                    
                    int64_t var_380 = *rax_25
                    i_1 = sub_140b5d160(&var_380, &var_388)
                while (i_1 s>= 0)
                
                if (rsi_1 u> r14_1)
                    break
                
                if (rsi_1 != r14_1)
                    zmm1 = *rsi_1
                    *rsi_1 = *r14_1
                    *r14_1 = zmm1
            
            if (r15_1 != r14_1)
                zmm1 = *r15_1
                *r15_1 = *r14_1
                *r14_1 = zmm1
            
            rbp_1 -= 1
            
            if (((r14_1 - r15_1 - 0x10) & 0xfffffffffffffff0) s< ((i - rsi_1) & 0xfffffffffffffff0))
                if (i u> rsi_1)
                    *r12_1 = rsi_1
                    r12_1[1] = i
                    r12_1[2].d = rbp_1
                    r12_1 = &r12_1[3]
                
                if (&r15_1[1] u>= r14_1)
                    break
                
                i = &r14_1[-1]
            else
                if (&r15_1[1] u< r14_1)
                    *r12_1 = r15_1
                    r12_1[1] = &r14_1[-1]
                    r12_1[2].d = rbp_1
                    r12_1 = &r12_1[3]
                
                if (i u<= rsi_1)
                    break
                
                r15_1 = rsi_1
            
            rax_10 = ((i - r15_1) s>> 4).d + 1
            
            if (rbp_1 == 0)
                goto label_141cbdfcb
    
    r12_1 -= 0x18
    
    if (r12_1 u< &var_348)
        break

__security_check_cookie(rax_2 ^ &var_3b8)
