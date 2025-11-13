// 函数: sub_1423f9aa0
// 地址: 0x1423f9aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_388
int64_t rax_2 = __security_cookie ^ &var_388
int64_t var_348 = arg1
int64_t var_340_1 = (sx.q(arg2) << 4) + arg1 - 0x10
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_338_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_330
memset(&var_330, 0, 0x2e8)
int64_t* r15_1 = &var_348
int64_t* var_368_1 = &var_348

while (true)
    uint128_t zmm2 = *r15_1
    uint32_t r12_1 = (r15_1[2]).d
    uint128_t* rsi_1 = zmm2.q
    void* r13_1 = _mm_bsrli_si128(zmm2, 8).q
    int32_t rax_10 = ((r13_1 - rsi_1) s>> 4).d + 1
    
    if (r12_1 == 0)
    label_1423f9cd1:
        sub_1423f8270(rsi_1, rax_10)
    else
        while (true)
            uint128_t zmm1
            
            if (rax_10 s<= 8)
                if (r13_1 u> rsi_1)
                    do
                        void* rbp_2 = rsi_1
                        void* r14_2 = &rsi_1[1]
                        
                        if (&rsi_1[1] u<= r13_1)
                            do
                                r15_1.b = 0
                                
                                if (sub_140b5d160(rbp_2, r14_2) s< 0)
                                    r15_1.b = 1
                                else if (*rbp_2 == *r14_2)
                                    r15_1.b = sub_140b5d160(rbp_2 + 8, r14_2 + 8) s< 0
                                
                                void* rax_32 = r14_2
                                
                                if (r15_1.b == 0)
                                    rax_32 = rbp_2
                                
                                r14_2 += 0x10
                                rbp_2 = rax_32
                            while (r14_2 u<= r13_1)
                        
                        if (rbp_2 != r13_1)
                            zmm1 = *rbp_2
                            *rbp_2 = *r13_1
                            *r13_1 = zmm1
                        
                        r13_1 -= 0x10
                    while (r13_1 u> rsi_1)
                    
                    r15_1 = var_368_1
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rax_10)
            void* rcx_4 = &rsi_1[sx.q((temp1_1 - temp0_3) s>> 1)]
            
            if (rcx_4 != rsi_1)
                zmm1 = *rcx_4
                *rcx_4 = *rsi_1
                *rsi_1 = zmm1
            
            uint128_t* r14_1 = rsi_1
            uint128_t* rbp_1 = r13_1 + 0x10
            
            while (true)
                r14_1 = &r14_1[1]
                
                if (r14_1 u<= r13_1 && sub_140b5d160(rsi_1, r14_1) s>= 0)
                    if (*rsi_1 != *r14_1)
                        continue
                    else if (sub_140b5d160(rsi_1 + 8, r14_1 + 8) s>= 0)
                        continue
                
                while (true)
                    rbp_1 = &rbp_1[-1]
                    
                    if (rbp_1 u<= rsi_1)
                        break
                    
                    if (sub_140b5d160(rbp_1, rsi_1) s< 0)
                        break
                    
                    if (*rbp_1 == *rsi_1 && sub_140b5d160(rbp_1 + 8, rsi_1 + 8) s< 0)
                        break
                
                if (r14_1 u> rbp_1)
                    break
                
                if (r14_1 != rbp_1)
                    zmm1 = *r14_1
                    *r14_1 = *rbp_1
                    *rbp_1 = zmm1
            
            if (rsi_1 != rbp_1)
                zmm1 = *rsi_1
                *rsi_1 = *rbp_1
                *rbp_1 = zmm1
            
            r12_1 -= 1
            
            if (((rbp_1 - rsi_1 - 0x10) & 0xfffffffffffffff0)
                    s< ((r13_1 - r14_1) & 0xfffffffffffffff0))
                if (r13_1 u> r14_1)
                    *r15_1 = r14_1
                    r15_1[1] = r13_1
                    r15_1[2].d = r12_1
                    r15_1 = &r15_1[3]
                    var_368_1 = r15_1
                
                if (&rsi_1[1] u>= rbp_1)
                    break
                
                r13_1 = &rbp_1[-1]
            else
                if (&rsi_1[1] u< rbp_1)
                    *r15_1 = rsi_1
                    r15_1[1] = &rbp_1[-1]
                    r15_1[2].d = r12_1
                    r15_1 = &r15_1[3]
                    var_368_1 = r15_1
                
                if (r13_1 u<= r14_1)
                    break
                
                rsi_1 = r14_1
            
            rax_10 = ((r13_1 - rsi_1) s>> 4).d + 1
            
            if (r12_1 == 0)
                goto label_1423f9cd1
    
    r15_1 -= 0x18
    var_368_1 = r15_1
    
    if (r15_1 u< &var_348)
        break

__security_check_cookie(rax_2 ^ &var_388)
