// 函数: sub_14185e1d0
// 地址: 0x14185e1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_398
int64_t rax_2 = __security_cookie ^ &var_398
int64_t var_358 = arg1
int64_t var_350_1 = (sx.q(arg2) << 4) + arg1 - 0x10
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_348_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_340
memset(&var_340, 0, 0x2e8)
int64_t* r12_1 = &var_358

while (true)
    uint128_t zmm2 = *r12_1
    uint32_t rbp_1 = (r12_1[2]).d
    uint128_t* r15_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rax_10 = ((i - r15_1) s>> 4).d + 1
    
    if (rbp_1 == 0)
    label_14185e404:
        sub_14185d290(r15_1, rax_10)
    else
        while (true)
            uint128_t zmm1
            
            if (rax_10 s<= 8)
                for (; i u> r15_1; i -= 0x10)
                    uint128_t* rsi_2 = r15_1
                    uint128_t* r14_2 = &r15_1[1]
                    
                    if (&r15_1[1] u<= i)
                        do
                            int16_t* rdx_4
                            
                            if (*(r14_2 + 8) == 0)
                                rdx_4 = &data_142d40450
                            else
                                rdx_4 = *r14_2
                            
                            int16_t* const rcx_14
                            
                            if (*(rsi_2 + 8) == 0)
                                rcx_14 = &data_142d40450
                            else
                                rcx_14 = *rsi_2
                            
                            if (sub_140a54510(rcx_14, rdx_4) s< 0)
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
                    int16_t* rdx_1
                    
                    if (*(rsi_1 + 8) == 0)
                        rdx_1 = &data_142d40450
                    else
                        rdx_1 = *rsi_1
                    
                    int16_t* const rcx_5
                    
                    if (*(r15_1 + 8) == 0)
                        rcx_5 = &data_142d40450
                    else
                        rcx_5 = *r15_1
                    
                    if (sub_140a54510(rcx_5, rdx_1) s>= 0)
                        continue
                
                int32_t i_1
                
                do
                    r14_1 -= 0x10
                    
                    if (r14_1 u<= r15_1)
                        break
                    
                    int16_t* rdx_2
                    
                    if (*(r15_1 + 8) == 0)
                        rdx_2 = &data_142d40450
                    else
                        rdx_2 = *r15_1
                    
                    int16_t* const rcx_6
                    
                    if (*(r14_1 + 8) == 0)
                        rcx_6 = &data_142d40450
                    else
                        rcx_6 = *r14_1
                    
                    i_1 = sub_140a54510(rcx_6, rdx_2)
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
                goto label_14185e404
    
    r12_1 -= 0x18
    
    if (r12_1 u< &var_358)
        break

__security_check_cookie(rax_2 ^ &var_398)
