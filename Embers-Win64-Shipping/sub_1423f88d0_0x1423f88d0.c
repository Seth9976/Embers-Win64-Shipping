// 函数: sub_1423f88d0
// 地址: 0x1423f88d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_388
int64_t rax_2 = __security_cookie ^ &var_388
int64_t var_348 = arg1
int64_t var_340_1 = arg1 - 0x28 + sx.q(arg2) * 0x28
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_338_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_330
memset(&var_330, 0, 0x2e8)
int64_t* r13_1 = &var_348

while (true)
    uint128_t zmm2 = *r13_1
    uint32_t r12_1 = (r13_1[2]).d
    uint128_t* r15_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rdx_3 = ((i - r15_1) s/ 0x28).d + 1
    
    if (r12_1 == 0)
    label_1423f8bd9:
        sub_1423f75f0(r15_1, rdx_3)
    else
        while (true)
            uint128_t zmm3
            int128_t zmm4_1
            
            if (rdx_3 s<= 8)
                for (; i u> r15_1; i -= 0x28)
                    int64_t* rsi_2 = r15_1
                    void* r14_2 = r15_1 + 0x28
                    
                    if (r15_1 + 0x28 u<= i)
                        do
                            int16_t* rdx_14
                            
                            if (*(r14_2 + 8) == 0)
                                rdx_14 = &data_142d40450
                            else
                                rdx_14 = *r14_2
                            
                            int16_t* const rcx_18
                            
                            if (rsi_2[1].d == 0)
                                rcx_18 = &data_142d40450
                            else
                                rcx_18 = *rsi_2
                            
                            if (sub_140a54510(rcx_18, rdx_14) s< 0)
                                rsi_2 = r14_2
                            
                            r14_2 += 0x28
                        while (r14_2 u<= i)
                    
                    if (rsi_2 != i)
                        zmm3 = *rsi_2
                        zmm4_1 = *(rsi_2 + 0x10)
                        zmm2 = zx.o(rsi_2[4])
                        *rsi_2 = *i
                        *(rsi_2 + 0x10) = *(i + 0x10)
                        rsi_2[4] = *(i + 0x20)
                        *i = zmm3
                        *(i + 0x10) = zmm4_1
                        *(i + 0x20) = zmm2.q
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rdx_3)
            void* rcx_5 = r15_1 + sx.q((temp1_1 - temp0_3) s>> 1) * 0x28
            
            if (rcx_5 != r15_1)
                zmm3 = *rcx_5
                zmm4_1 = *(rcx_5 + 0x10)
                zmm2 = zx.o(*(rcx_5 + 0x20))
                *rcx_5 = *r15_1
                *(rcx_5 + 0x10) = r15_1[1]
                *(rcx_5 + 0x20) = r15_1[2].q
                *r15_1 = zmm3
                r15_1[1] = zmm4_1
                r15_1[2].q = zmm2.q
            
            uint128_t* r14_1 = r15_1
            uint128_t* rsi_1 = i + 0x28
            
            while (true)
                r14_1 += 0x28
                
                if (r14_1 u<= i)
                    int16_t* rdx_5
                    
                    if (*(r14_1 + 8) == 0)
                        rdx_5 = &data_142d40450
                    else
                        rdx_5 = *r14_1
                    
                    int16_t* const rcx_6
                    
                    if (*(r15_1 + 8) == 0)
                        rcx_6 = &data_142d40450
                    else
                        rcx_6 = *r15_1
                    
                    if (sub_140a54510(rcx_6, rdx_5) s>= 0)
                        continue
                
                int32_t i_1
                
                do
                    rsi_1 -= 0x28
                    
                    if (rsi_1 u<= r15_1)
                        break
                    
                    int16_t* rdx_6
                    
                    if (*(r15_1 + 8) == 0)
                        rdx_6 = &data_142d40450
                    else
                        rdx_6 = *r15_1
                    
                    int16_t* const rcx_7
                    
                    if (*(rsi_1 + 8) == 0)
                        rcx_7 = &data_142d40450
                    else
                        rcx_7 = *rsi_1
                    
                    i_1 = sub_140a54510(rcx_7, rdx_6)
                while (i_1 s>= 0)
                
                if (r14_1 u> rsi_1)
                    break
                
                if (r14_1 != rsi_1)
                    zmm3 = *r14_1
                    zmm4_1 = r14_1[1]
                    zmm2 = zx.o(r14_1[2].q)
                    *r14_1 = *rsi_1
                    r14_1[1] = rsi_1[1]
                    r14_1[2].q = rsi_1[2].q
                    *rsi_1 = zmm3
                    rsi_1[1] = zmm4_1
                    rsi_1[2].q = zmm2.q
            
            if (r15_1 != rsi_1)
                zmm3 = *r15_1
                zmm4_1 = r15_1[1]
                zmm2 = zx.o(r15_1[2].q)
                *r15_1 = *rsi_1
                r15_1[1] = rsi_1[1]
                r15_1[2].q = rsi_1[2].q
                *rsi_1 = zmm3
                rsi_1[1] = zmm4_1
                rsi_1[2].q = zmm2.q
            
            r12_1 -= 1
            
            if ((rsi_1 - r15_1 - 0x28) s/ 0x28 s< (i - r14_1) s/ 0x28)
                if (i u> r14_1)
                    *r13_1 = r14_1
                    r13_1[1] = i
                    r13_1[2].d = r12_1
                    r13_1 = &r13_1[3]
                
                if (r15_1 + 0x28 u>= rsi_1)
                    break
                
                i = rsi_1 - 0x28
            else
                if (r15_1 + 0x28 u< rsi_1)
                    *r13_1 = r15_1
                    r13_1[1] = rsi_1 - 0x28
                    r13_1[2].d = r12_1
                    r13_1 = &r13_1[3]
                
                if (i u<= r14_1)
                    break
                
                r15_1 = r14_1
            
            rdx_3 = ((i - r15_1) s/ 0x28).d + 1
            
            if (r12_1 == 0)
                goto label_1423f8bd9
    
    r13_1 -= 0x18
    
    if (r13_1 u< &var_348)
        break

__security_check_cookie(rax_2 ^ &var_388)
