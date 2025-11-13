// 函数: sub_1423f9670
// 地址: 0x1423f9670
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
int64_t* r12_1 = &var_348
int64_t* var_368_1 = &var_348

while (true)
    uint128_t zmm2 = *r12_1
    uint32_t r13_1 = (r12_1[2]).d
    uint128_t* rsi_1 = zmm2.q
    void* r15_1 = _mm_bsrli_si128(zmm2, 8).q
    int32_t rdx_3 = ((r15_1 - rsi_1) s/ 0x28).d + 1
    
    if (r13_1 == 0)
    label_1423f9970:
        sub_1423f7f90(rsi_1, rdx_3)
    else
        while (true)
            uint128_t zmm3
            int128_t zmm4_1
            
            if (rdx_3 s<= 8)
                if (r15_1 u> rsi_1)
                    do
                        void* rbp_2 = rsi_1
                        void* r14_2 = rsi_1 + 0x28
                        
                        if (rsi_1 + 0x28 u<= r15_1)
                            do
                                r12_1.b = 0
                                
                                if (sub_140b5d160(rbp_2, r14_2) s< 0)
                                    r12_1.b = 1
                                else if (*rbp_2 == *r14_2)
                                    r12_1.b = sub_140b5d160(rbp_2 + 0x10, r14_2 + 0x10) s< 0
                                
                                void* rax_35 = r14_2
                                
                                if (r12_1.b == 0)
                                    rax_35 = rbp_2
                                
                                r14_2 += 0x28
                                rbp_2 = rax_35
                            while (r14_2 u<= r15_1)
                        
                        if (rbp_2 != r15_1)
                            zmm3 = *rbp_2
                            zmm4_1 = *(rbp_2 + 0x10)
                            zmm2 = zx.o(*(rbp_2 + 0x20))
                            *rbp_2 = *r15_1
                            *(rbp_2 + 0x10) = *(r15_1 + 0x10)
                            *(rbp_2 + 0x20) = *(r15_1 + 0x20)
                            *r15_1 = zmm3
                            *(r15_1 + 0x10) = zmm4_1
                            *(r15_1 + 0x20) = zmm2.q
                        
                        r15_1 -= 0x28
                    while (r15_1 u> rsi_1)
                    
                    r12_1 = var_368_1
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rdx_3)
            void* rcx_5 = rsi_1 + sx.q((temp1_1 - temp0_3) s>> 1) * 0x28
            
            if (rcx_5 != rsi_1)
                zmm3 = *rcx_5
                zmm4_1 = *(rcx_5 + 0x10)
                zmm2 = zx.o(*(rcx_5 + 0x20))
                *rcx_5 = *rsi_1
                *(rcx_5 + 0x10) = rsi_1[1]
                *(rcx_5 + 0x20) = rsi_1[2].q
                *rsi_1 = zmm3
                rsi_1[1] = zmm4_1
                rsi_1[2].q = zmm2.q
            
            uint128_t* r14_1 = rsi_1
            uint128_t* rbp_1 = r15_1 + 0x28
            
            while (true)
                r14_1 += 0x28
                
                if (r14_1 u<= r15_1 && sub_140b5d160(rsi_1, r14_1) s>= 0)
                    if (*rsi_1 != *r14_1)
                        continue
                    else if (sub_140b5d160(&rsi_1[1], &r14_1[1]) s>= 0)
                        continue
                
                while (true)
                    rbp_1 -= 0x28
                    
                    if (rbp_1 u<= rsi_1)
                        break
                    
                    if (sub_140b5d160(rbp_1, rsi_1) s< 0)
                        break
                    
                    if (*rbp_1 == *rsi_1 && sub_140b5d160(&rbp_1[1], &rsi_1[1]) s< 0)
                        break
                
                if (r14_1 u> rbp_1)
                    break
                
                if (r14_1 != rbp_1)
                    zmm3 = *r14_1
                    zmm4_1 = r14_1[1]
                    zmm2 = zx.o(r14_1[2].q)
                    *r14_1 = *rbp_1
                    r14_1[1] = rbp_1[1]
                    r14_1[2].q = rbp_1[2].q
                    *rbp_1 = zmm3
                    rbp_1[1] = zmm4_1
                    rbp_1[2].q = zmm2.q
            
            if (rsi_1 != rbp_1)
                zmm3 = *rsi_1
                zmm4_1 = rsi_1[1]
                zmm2 = zx.o(rsi_1[2].q)
                *rsi_1 = *rbp_1
                rsi_1[1] = rbp_1[1]
                rsi_1[2].q = rbp_1[2].q
                *rbp_1 = zmm3
                rbp_1[1] = zmm4_1
                rbp_1[2].q = zmm2.q
            
            r13_1 -= 1
            
            if ((rbp_1 - rsi_1 - 0x28) s/ 0x28 s< (r15_1 - r14_1) s/ 0x28)
                if (r15_1 u> r14_1)
                    *r12_1 = r14_1
                    r12_1[1] = r15_1
                    r12_1[2].d = r13_1
                    r12_1 = &r12_1[3]
                    var_368_1 = r12_1
                
                if (rsi_1 + 0x28 u>= rbp_1)
                    break
                
                r15_1 = rbp_1 - 0x28
            else
                if (rsi_1 + 0x28 u< rbp_1)
                    *r12_1 = rsi_1
                    r12_1[1] = rbp_1 - 0x28
                    r12_1[2].d = r13_1
                    r12_1 = &r12_1[3]
                    var_368_1 = r12_1
                
                if (r15_1 u<= r14_1)
                    break
                
                rsi_1 = r14_1
            
            rdx_3 = ((r15_1 - rsi_1) s/ 0x28).d + 1
            
            if (r13_1 == 0)
                goto label_1423f9970
    
    r12_1 -= 0x18
    var_368_1 = r12_1
    
    if (r12_1 u< &var_348)
        break

__security_check_cookie(rax_2 ^ &var_388)
