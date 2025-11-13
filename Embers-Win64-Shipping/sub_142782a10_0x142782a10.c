// 函数: sub_142782a10
// 地址: 0x142782a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_388
int64_t rax_2 = __security_cookie ^ &var_388
int64_t var_348 = arg1
int64_t var_340_1 = arg1 + (sx.q(arg2) << 2) - 4
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_338_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_330
memset(&var_330, 0, 0x2e8)
int64_t* r13_1 = &var_348

while (true)
    uint128_t zmm2 = *r13_1
    int32_t zmm0_2 = (r13_1[2]).d
    int32_t* r15_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t var_368_1 = zmm0_2
    int32_t rax_8 = ((i - r15_1) s>> 2).d + 1
    
    if (zmm0_2 == 0)
    label_142782bf5:
        sub_1427805e0(r15_1, rax_8, arg3, arg4)
    else
        while (true)
            if (rax_8 s<= 8)
                for (; i u> r15_1; i -= 4)
                    int32_t* rsi_2 = r15_1
                    int32_t* r14_2 = &r15_1[1]
                    
                    if (&r15_1[1] u<= i)
                        do
                            int32_t* rcx_15 = r14_2
                            
                            if (sub_142788fc0(arg4, *rsi_2, *r14_2) == 0)
                                rcx_15 = rsi_2
                            
                            r14_2 = &r14_2[1]
                            rsi_2 = rcx_15
                        while (r14_2 u<= i)
                    
                    int32_t rcx_16 = *rsi_2
                    *rsi_2 = *i
                    *i = rcx_16
                
                break
            
            if (rax_8 s< 0)
                rax_8 += 1
            
            void* r14_1 = i + 4
            int64_t rdx = sx.q(rax_8 s>> 1)
            int32_t* rsi_1 = r15_1
            int32_t rcx_4 = r15_1[rdx]
            r15_1[rdx] = *r15_1
            *r15_1 = rcx_4
            int32_t rbp_1
            
            while (true)
                rsi_1 = &rsi_1[1]
                
                if (rsi_1 u<= i && sub_142788fc0(arg4, *r15_1, *rsi_1) == 0)
                    continue
                
                char i_1
                
                do
                    rbp_1 = *(r14_1 - 4)
                    r14_1 -= 4
                    
                    if (r14_1 u<= r15_1)
                        break
                    
                    i_1 = sub_142788fc0(arg4, rbp_1, *r15_1)
                while (i_1 == 0)
                
                if (rsi_1 u> r14_1)
                    break
                
                int32_t rax_12 = *rsi_1
                *rsi_1 = rbp_1
                *r14_1 = rax_12
            
            int32_t rax_13 = *r15_1
            *r15_1 = rbp_1
            *r14_1 = rax_13
            int32_t rdx_4 = var_368_1 - 1
            var_368_1 = rdx_4
            
            if (((r14_1 - r15_1 - 4) & 0xfffffffffffffffc) s< ((i - rsi_1) & 0xfffffffffffffffc))
                if (i u> rsi_1)
                    *r13_1 = rsi_1
                    r13_1[1] = i
                    r13_1[2].d = rdx_4
                    r13_1 = &r13_1[3]
                
                if (&r15_1[1] u>= r14_1)
                    break
                
                i = r14_1 - 4
            else
                if (&r15_1[1] u< r14_1)
                    *r13_1 = r15_1
                    r13_1[1] = r14_1 - 4
                    r13_1[2].d = rdx_4
                    r13_1 = &r13_1[3]
                
                if (i u<= rsi_1)
                    break
                
                r15_1 = rsi_1
            
            rax_8 = ((i - r15_1) s>> 2).d + 1
            
            if (rdx_4 == 0)
                goto label_142782bf5
    
    r13_1 -= 0x18
    
    if (r13_1 u< &var_348)
        break

__security_check_cookie(rax_2 ^ &var_388)
