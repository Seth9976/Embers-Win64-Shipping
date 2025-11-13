// 函数: sub_141d64ea0
// 地址: 0x141d64ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_3f8
int64_t rax_2 = __security_cookie ^ &var_3f8
int64_t var_348 = arg1
int64_t var_340_1 = (sx.q(arg2) << 4) + arg1 - 0x10
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_338_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_330
memset(&var_330, 0, 0x2e8)
int64_t* r12_1 = &var_348
int64_t* var_3d0_1 = &var_348

while (true)
    uint128_t zmm2 = *r12_1
    uint32_t var_358_1 = (r12_1[2]).d
    uint128_t* r15_1 = zmm2.q
    void* r13_1 = _mm_bsrli_si128(zmm2, 8).q
    uint32_t var_3d8_1 = var_358_1
    int32_t rax_10 = ((r13_1 - r15_1) s>> 4).d + 1
    
    if (var_358_1 == 0)
    label_141d65123:
        sub_141d64c00(r15_1, rax_10)
    else
        while (true)
            uint128_t zmm1
            
            if (rax_10 s<= 8)
                if (r13_1 u> r15_1)
                    do
                        uint128_t* rsi_2 = r15_1
                        uint128_t* r14_2 = &r15_1[1]
                        
                        if (&r15_1[1] u<= r13_1)
                            do
                                int64_t var_388_1 = *r14_2
                                void* rax_33 = *(r14_2 + 8)
                                void* var_380_1 = rax_33
                                
                                if (rax_33 != 0)
                                    *(rax_33 + 8) += 1
                                
                                int64_t var_378_1 = *rsi_2
                                void* rax_35 = *(rsi_2 + 8)
                                void* var_370_1 = rax_35
                                
                                if (rax_35 != 0)
                                    *(rax_35 + 8) += 1
                                
                                if (sub_141d66450() != 0)
                                    rsi_2 = r14_2
                                
                                r14_2 = &r14_2[1]
                            while (r14_2 u<= r13_1)
                        
                        if (rsi_2 != r13_1)
                            zmm1 = *rsi_2
                            *rsi_2 = *r13_1
                            *r13_1 = zmm1
                        
                        r13_1 -= 0x10
                    while (r13_1 u> r15_1)
                    
                    r12_1 = var_3d0_1
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rax_10)
            void* rcx_5 = &r15_1[sx.q((temp1_1 - temp0_3) s>> 1)]
            
            if (rcx_5 != r15_1)
                zmm1 = *rcx_5
                *rcx_5 = *r15_1
                *r15_1 = zmm1
            
            uint128_t* r14_1 = r15_1
            uint128_t* rsi_1 = r13_1 + 0x10
            
            while (true)
                r14_1 = &r14_1[1]
                
                if (r14_1 u<= r13_1)
                    int64_t var_3c8_1 = *r14_1
                    void* rax_15 = *(r14_1 + 8)
                    void* var_3c0_1 = rax_15
                    
                    if (rax_15 != 0)
                        *(rax_15 + 8) += 1
                    
                    int64_t var_3b8_1 = *r15_1
                    void* rax_17 = *(r15_1 + 8)
                    void* var_3b0_1 = rax_17
                    
                    if (rax_17 != 0)
                        *(rax_17 + 8) += 1
                    
                    if (sub_141d66450() == 0)
                        continue
                
                char i
                
                do
                    rsi_1 -= 0x10
                    
                    if (rsi_1 u<= r15_1)
                        break
                    
                    int64_t var_3a8_1 = *r15_1
                    void* rax_20 = *(r15_1 + 8)
                    void* var_3a0_1 = rax_20
                    
                    if (rax_20 != 0)
                        *(rax_20 + 8) += 1
                    
                    int64_t var_398_1 = *rsi_1
                    void* rax_22 = *(rsi_1 + 8)
                    void* var_390_1 = rax_22
                    
                    if (rax_22 != 0)
                        *(rax_22 + 8) += 1
                    
                    i = sub_141d66450()
                while (i == 0)
                
                if (r14_1 u> rsi_1)
                    break
                
                if (r14_1 != rsi_1)
                    zmm1 = *r14_1
                    *r14_1 = *rsi_1
                    *rsi_1 = zmm1
            
            if (r15_1 != rsi_1)
                zmm1 = *r15_1
                *r15_1 = *rsi_1
                *rsi_1 = zmm1
            
            uint32_t rdx_2 = var_3d8_1 - 1
            var_3d8_1 = rdx_2
            
            if (((rsi_1 - r15_1 - 0x10) & 0xfffffffffffffff0)
                    s< ((r13_1 - r14_1) & 0xfffffffffffffff0))
                if (r13_1 u> r14_1)
                    *r12_1 = r14_1
                    r12_1[1] = r13_1
                    r12_1[2].d = rdx_2
                    r12_1 = &r12_1[3]
                    var_3d0_1 = r12_1
                
                if (&r15_1[1] u>= rsi_1)
                    break
                
                r13_1 = &rsi_1[-1]
            else
                if (&r15_1[1] u< rsi_1)
                    *r12_1 = r15_1
                    r12_1[1] = &rsi_1[-1]
                    r12_1[2].d = rdx_2
                    r12_1 = &r12_1[3]
                    var_3d0_1 = r12_1
                
                if (r13_1 u<= r14_1)
                    break
                
                r15_1 = r14_1
            
            rax_10 = ((r13_1 - r15_1) s>> 4).d + 1
            
            if (rdx_2 == 0)
                goto label_141d65123
    
    r12_1 -= 0x18
    var_3d0_1 = r12_1
    
    if (r12_1 u< &var_348)
        break

__security_check_cookie(rax_2 ^ &var_3f8)
