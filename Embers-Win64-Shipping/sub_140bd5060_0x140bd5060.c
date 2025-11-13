// 函数: sub_140bd5060
// 地址: 0x140bd5060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_398
int64_t rax_2 = __security_cookie ^ &var_398
char rdi_1 = arg3
int64_t var_348 = arg1
int64_t var_340_1 = arg1 + (sx.q(arg2) << 3) - 8
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_338_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_330
memset(&var_330, 0, 0x2e8)
int64_t* rcx_3 = &var_348
int64_t* var_370_1 = &var_348

while (true)
    uint128_t zmm2 = *rcx_3
    int32_t zmm0_2 = (rcx_3[2]).d
    int64_t* r12_1 = zmm2.q
    void* r13_1 = _mm_bsrli_si128(zmm2, 8).q
    int32_t var_368_1 = zmm0_2
    int32_t rax_8 = ((r13_1 - r12_1) s>> 3).d + 1
    
    if (zmm0_2 == 0)
    label_140bd528e:
        sub_140bd3a30(r12_1, rax_8, rdi_1, arg4)
    label_140bd5293:
        rcx_3 = var_370_1
    else
        while (true)
            if (rax_8 s<= 8)
                if (r13_1 u<= r12_1)
                    break
                
                do
                    int64_t* r14_2 = r12_1
                    int64_t* r15_2 = &r12_1[1]
                    
                    if (&r12_1[1] u<= r13_1)
                        do
                            if (sub_140be2ed0(*r14_2 + 4, *arg4)
                                    s> sub_140be2ed0(*r15_2 + 4, *arg4))
                                r14_2 = r15_2
                            
                            r15_2 = &r15_2[1]
                        while (r15_2 u<= r13_1)
                    
                    int64_t rcx_23 = *r14_2
                    *r14_2 = *r13_1
                    *r13_1 = rcx_23
                    r13_1 -= 8
                while (r13_1 u> r12_1)
                
                rdi_1 = arg3
                goto label_140bd5293
            
            if (rax_8 s< 0)
                rax_8 += 1
            
            int64_t* r15_1 = r13_1 + 8
            int64_t rdx_1 = sx.q(rax_8 s>> 1)
            int64_t* r14_1 = r12_1
            int64_t rcx_4 = r12_1[rdx_1]
            r12_1[rdx_1] = *r12_1
            *r12_1 = rcx_4
            int64_t rax_15
            
            while (true)
                r14_1 = &r14_1[1]
                
                if (r14_1 u<= r13_1
                        && sub_140be2ed0(*r12_1 + 4, *arg4) s<= sub_140be2ed0(*r14_1 + 4, *arg4))
                    continue
                
                int32_t rax_13
                int32_t rax_14
                
                do
                    r15_1 = &r15_1[-1]
                    
                    if (r15_1 u<= r12_1)
                        break
                    
                    void* rbp_2 = *r12_1
                    rax_13 = sub_140be2ed0(*r15_1 + 4, *arg4)
                    rax_14 = sub_140be2ed0(rbp_2 + 4, *arg4)
                while (rax_13 s<= rax_14)
                rax_15 = *r15_1
                
                if (r14_1 u> r15_1)
                    break
                
                int64_t rcx_11 = *r14_1
                *r14_1 = rax_15
                *r15_1 = rcx_11
            
            int64_t rcx_12 = *r12_1
            *r12_1 = rax_15
            int32_t rdx_7 = var_368_1 - 1
            *r15_1 = rcx_12
            var_368_1 = rdx_7
            rcx_3 = var_370_1
            
            if (((r15_1 - r12_1 - 8) & 0xfffffffffffffff8)
                    s< ((r13_1 - r14_1) & 0xfffffffffffffff8))
                if (r13_1 u> r14_1)
                    *rcx_3 = r14_1
                    rcx_3[1] = r13_1
                    rcx_3[2].d = rdx_7
                    rcx_3 = &rcx_3[3]
                    var_370_1 = rcx_3
                
                if (&r12_1[1] u>= r15_1)
                    break
                
                r13_1 = &r15_1[-1]
            else
                if (&r12_1[1] u< r15_1)
                    *rcx_3 = r12_1
                    rcx_3[1] = &r15_1[-1]
                    rcx_3[2].d = rdx_7
                    rcx_3 = &rcx_3[3]
                    var_370_1 = rcx_3
                
                if (r13_1 u<= r14_1)
                    break
                
                r12_1 = r14_1
            
            rcx_3 = var_370_1
            rax_8 = ((r13_1 - r12_1) s>> 3).d + 1
            
            if (rdx_7 == 0)
                goto label_140bd528e
    
    rcx_3 -= 0x18
    var_370_1 = rcx_3
    
    if (rcx_3 u< &var_348)
        break

__security_check_cookie(rax_2 ^ &var_398)
