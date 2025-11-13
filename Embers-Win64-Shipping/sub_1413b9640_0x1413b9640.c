// 函数: sub_1413b9640
// 地址: 0x1413b9640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_398
int64_t rax_2 = __security_cookie ^ &var_398
int64_t var_348 = arg1
int64_t r9
int64_t var_368_1 = r9
int64_t var_340_1 = arg1 + (sx.q(arg2) << 3) - 8
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_338_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_330
memset(&var_330, 0, 0x2e8)
int64_t* rcx_3 = &var_348
int64_t* var_378_1 = &var_348

while (true)
    uint128_t zmm2 = *rcx_3
    int32_t zmm0_2 = (rcx_3[2]).d
    int64_t* r12_1 = zmm2.q
    void* r13_1 = _mm_bsrli_si128(zmm2, 8).q
    int32_t var_370_1 = zmm0_2
    int32_t rax_8 = ((r13_1 - r12_1) s>> 3).d + 1
    
    if (zmm0_2 == 0)
    label_1413b9873:
        sub_1413b9230(r12_1, rax_8)
    label_1413b9878:
        rcx_3 = var_378_1
    else
        while (true)
            if (rax_8 s<= 8)
                if (r13_1 u<= r12_1)
                    break
                
                do
                    int64_t* r14_3 = r12_1
                    int64_t* r15_2 = &r12_1[1]
                    
                    if (&r12_1[1] u<= r13_1)
                        do
                            int64_t* rsi_3 = *(*r14_3 + 8)
                            int64_t* rcx_21 = *(*r15_2 + 8)
                            int64_t rax_31 = (*(*rcx_21 + 8))(rcx_21)
                            int64_t rdx_7 = *rsi_3
                            
                            if ((*(rdx_7 + 8))(rsi_3, rdx_7) u< rax_31)
                                r14_3 = r15_2
                            
                            r15_2 = &r15_2[1]
                        while (r15_2 u<= r13_1)
                    
                    int64_t rcx_23 = *r14_3
                    *r14_3 = *r13_1
                    *r13_1 = rcx_23
                    r13_1 -= 8
                while (r13_1 u> r12_1)
                
                goto label_1413b9878
            
            if (rax_8 s< 0)
                rax_8 += 1
            
            int64_t* rbp_1 = r13_1 + 8
            int64_t rdx_1 = sx.q(rax_8 s>> 1)
            int64_t* r15_1 = r12_1
            int64_t rcx_4 = r12_1[rdx_1]
            r12_1[rdx_1] = *r12_1
            *r12_1 = rcx_4
            int64_t rax_19
            
            while (true)
                r15_1 = &r15_1[1]
                
                if (r15_1 u<= r13_1)
                    int64_t* r14_1 = *(*r12_1 + 8)
                    int64_t* rcx_6 = *(*r15_1 + 8)
                    int64_t rax_13 = (*(*rcx_6 + 8))(rcx_6)
                    int64_t rdx_2 = *r14_1
                    
                    if ((*(rdx_2 + 8))(r14_1, rdx_2) u>= rax_13)
                        continue
                
                int64_t rax_17
                int64_t rax_18
                
                do
                    rbp_1 = &rbp_1[-1]
                    
                    if (rbp_1 u<= r12_1)
                        break
                    
                    int64_t* r14_2 = *(*rbp_1 + 8)
                    int64_t* rcx_9 = *(*r12_1 + 8)
                    rax_17 = (*(*rcx_9 + 8))(rcx_9)
                    int64_t rdx_3 = *r14_2
                    rax_18 = (*(rdx_3 + 8))(r14_2, rdx_3)
                while (rax_18 u>= rax_17)
                rax_19 = *rbp_1
                
                if (r15_1 u> rbp_1)
                    break
                
                int64_t rcx_11 = *r15_1
                *r15_1 = rax_19
                *rbp_1 = rcx_11
            
            int64_t rcx_12 = *r12_1
            *r12_1 = rax_19
            int32_t rdx_5 = var_370_1 - 1
            *rbp_1 = rcx_12
            var_370_1 = rdx_5
            rcx_3 = var_378_1
            
            if (((rbp_1 - r12_1 - 8) & 0xfffffffffffffff8)
                    s< ((r13_1 - r15_1) & 0xfffffffffffffff8))
                if (r13_1 u> r15_1)
                    *rcx_3 = r15_1
                    rcx_3[1] = r13_1
                    rcx_3[2].d = rdx_5
                    rcx_3 = &rcx_3[3]
                    var_378_1 = rcx_3
                
                if (&r12_1[1] u>= rbp_1)
                    break
                
                r13_1 = &rbp_1[-1]
            else
                if (&r12_1[1] u< rbp_1)
                    *rcx_3 = r12_1
                    rcx_3[1] = &rbp_1[-1]
                    rcx_3[2].d = rdx_5
                    rcx_3 = &rcx_3[3]
                    var_378_1 = rcx_3
                
                if (r13_1 u<= r15_1)
                    break
                
                r12_1 = r15_1
            
            rcx_3 = var_378_1
            rax_8 = ((r13_1 - r12_1) s>> 3).d + 1
            
            if (rdx_5 == 0)
                goto label_1413b9873
    
    rcx_3 -= 0x18
    var_378_1 = rcx_3
    
    if (rcx_3 u< &var_348)
        break

__security_check_cookie(rax_2 ^ &var_398)
