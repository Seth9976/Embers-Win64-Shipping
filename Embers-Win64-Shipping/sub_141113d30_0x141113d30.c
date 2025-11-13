// 函数: sub_141113d30
// 地址: 0x141113d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_388
int64_t rax_2 = __security_cookie ^ &var_388
int64_t var_348 = arg1
int64_t var_340_1 = arg1 + (sx.q(arg2) << 3) - 8
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_338_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_330
memset(&var_330, 0, 0x2e8)
int64_t* r15_1 = &var_348

while (true)
    uint128_t zmm2 = *r15_1
    int32_t r12_1 = (r15_1[2]).d
    int64_t* rsi_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rax_8 = ((i - rsi_1) s>> 3).d + 1
    
    if (r12_1 == 0)
    label_141113f10:
        sub_141113b90(rsi_1, rax_8, zx.q(arg3), arg4)
    else
        while (true)
            if (rax_8 s<= 8)
                for (; i u> rsi_1; i -= 8)
                    int64_t* r10_2 = rsi_1
                    void* r11_2 = &rsi_1[1]
                    
                    if (&rsi_1[1] u<= i)
                        do
                            int64_t* rcx_14 = r11_2
                            
                            if (sub_14111cca0(arg4, *r10_2, *r11_2) == 0)
                                rcx_14 = r10_2
                            
                            r11_2 += 8
                            r10_2 = rcx_14
                        while (r11_2 u<= i)
                    
                    int64_t rcx_15 = *r10_2
                    *r10_2 = *i
                    *i = rcx_15
                
                break
            
            if (rax_8 s< 0)
                rax_8 += 1
            
            void* r11_1 = i + 8
            int64_t rdx = sx.q(rax_8 s>> 1)
            int64_t* r10_1 = rsi_1
            int64_t rcx_3 = rsi_1[rdx]
            rsi_1[rdx] = *rsi_1
            *rsi_1 = rcx_3
            void* rbp_1
            
            while (true)
                r10_1 = &r10_1[1]
                
                if (r10_1 u<= i && sub_14111cca0(arg4, *rsi_1, *r10_1) == 0)
                    continue
                
                char i_1
                
                do
                    rbp_1 = *(r11_1 - 8)
                    r11_1 -= 8
                    
                    if (r11_1 u<= rsi_1)
                        break
                    
                    i_1 = sub_14111cca0(arg4, rbp_1, *rsi_1)
                while (i_1 == 0)
                
                if (r10_1 u> r11_1)
                    break
                
                int64_t rax_12 = *r10_1
                *r10_1 = rbp_1
                *r11_1 = rax_12
            
            int64_t rax_13 = *rsi_1
            *rsi_1 = rbp_1
            *r11_1 = rax_13
            r12_1 -= 1
            
            if (((r11_1 - rsi_1 - 8) & 0xfffffffffffffff8) s< ((i - r10_1) & 0xfffffffffffffff8))
                if (i u> r10_1)
                    *r15_1 = r10_1
                    r15_1[1] = i
                    r15_1[2].d = r12_1
                    r15_1 = &r15_1[3]
                
                if (&rsi_1[1] u>= r11_1)
                    break
                
                i = r11_1 - 8
            else
                if (&rsi_1[1] u< r11_1)
                    *r15_1 = rsi_1
                    r15_1[1] = r11_1 - 8
                    r15_1[2].d = r12_1
                    r15_1 = &r15_1[3]
                
                if (i u<= r10_1)
                    break
                
                rsi_1 = r10_1
            
            rax_8 = ((i - rsi_1) s>> 3).d + 1
            
            if (r12_1 == 0)
                goto label_141113f10
    
    r15_1 -= 0x18
    
    if (r15_1 u< &var_348)
        break

__security_check_cookie(rax_2 ^ &var_388)
