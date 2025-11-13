// 函数: sub_14185db50
// 地址: 0x14185db50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_398
int64_t rax_2 = __security_cookie ^ &var_398
int64_t var_348 = arg1
int64_t var_340_1 = (sx.q(arg2) << 4) + arg1 - 0x10
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_338_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_330
memset(&var_330, 0, 0x2e8)
int64_t* r12_1 = &var_348
int64_t* var_370_1 = &var_348

while (true)
    uint128_t zmm2 = *r12_1
    uint32_t var_358_1 = (r12_1[2]).d
    uint128_t* r15_1 = zmm2.q
    void* r13_1 = _mm_bsrli_si128(zmm2, 8).q
    uint32_t var_378_1 = var_358_1
    int32_t rax_10 = ((r13_1 - r15_1) s>> 4).d + 1
    
    if (var_358_1 == 0)
    label_14185dd81:
        sub_14185ce80(r15_1, rax_10, arg3)
    else
        while (true)
            uint128_t zmm1
            
            if (rax_10 s<= 8)
                if (r13_1 u> r15_1)
                    do
                        int32_t* rbp_2 = r15_1
                        int32_t* r14_2 = &r15_1[1]
                        
                        if (&r15_1[1] u<= r13_1)
                            do
                                int32_t rax_27 = sub_1418874f0(arg3, r14_2)
                                
                                if (sub_1418874f0(arg3, rbp_2) s< rax_27)
                                    rbp_2 = r14_2
                                
                                r14_2 = &r14_2[4]
                            while (r14_2 u<= r13_1)
                        
                        if (rbp_2 != r13_1)
                            zmm1 = *rbp_2
                            *rbp_2 = *r13_1
                            *r13_1 = zmm1
                        
                        r13_1 -= 0x10
                    while (r13_1 u> r15_1)
                    
                    r12_1 = var_370_1
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rax_10)
            void* rcx_5 = &r15_1[sx.q((temp1_1 - temp0_3) s>> 1)]
            
            if (rcx_5 != r15_1)
                zmm1 = *rcx_5
                *rcx_5 = *r15_1
                *r15_1 = zmm1
            
            uint128_t* rbp_1 = r15_1
            uint128_t* r14_1 = r13_1 + 0x10
            
            while (true)
                rbp_1 = &rbp_1[1]
                
                if (rbp_1 u<= r13_1)
                    int32_t rax_14 = sub_1418874f0(arg3, rbp_1)
                    
                    if (sub_1418874f0(arg3, r15_1) s>= rax_14)
                        continue
                
                int32_t rax_16
                int32_t rax_17
                
                do
                    r14_1 = &r14_1[-1]
                    
                    if (r14_1 u<= r15_1)
                        break
                    
                    rax_16 = sub_1418874f0(arg3, r15_1)
                    rax_17 = sub_1418874f0(arg3, r14_1)
                while (rax_17 s>= rax_16)
                
                if (rbp_1 u> r14_1)
                    break
                
                if (rbp_1 != r14_1)
                    zmm1 = *rbp_1
                    *rbp_1 = *r14_1
                    *r14_1 = zmm1
            
            if (r15_1 != r14_1)
                zmm1 = *r15_1
                *r15_1 = *r14_1
                *r14_1 = zmm1
            
            uint32_t rdx_6 = var_378_1 - 1
            var_378_1 = rdx_6
            
            if (((r14_1 - r15_1 - 0x10) & 0xfffffffffffffff0)
                    s< ((r13_1 - rbp_1) & 0xfffffffffffffff0))
                if (r13_1 u> rbp_1)
                    *r12_1 = rbp_1
                    r12_1[1] = r13_1
                    r12_1[2].d = rdx_6
                    r12_1 = &r12_1[3]
                    var_370_1 = r12_1
                
                if (&r15_1[1] u>= r14_1)
                    break
                
                r13_1 = &r14_1[-1]
            else
                if (&r15_1[1] u< r14_1)
                    *r12_1 = r15_1
                    r12_1[1] = &r14_1[-1]
                    r12_1[2].d = rdx_6
                    r12_1 = &r12_1[3]
                    var_370_1 = r12_1
                
                if (r13_1 u<= rbp_1)
                    break
                
                r15_1 = rbp_1
            
            rax_10 = ((r13_1 - r15_1) s>> 4).d + 1
            
            if (rdx_6 == 0)
                goto label_14185dd81
    
    r12_1 -= 0x18
    var_370_1 = r12_1
    
    if (r12_1 u< &var_348)
        break

__security_check_cookie(rax_2 ^ &var_398)
