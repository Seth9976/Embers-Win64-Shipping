// 函数: sub_141c2d770
// 地址: 0x141c2d770
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
int64_t* r13_1 = &var_348

while (true)
    uint128_t zmm2 = *r13_1
    int32_t r12_1 = (r13_1[2]).d
    int64_t* r15_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rax_8 = ((i - r15_1) s>> 3).d + 1
    
    if (r12_1 == 0)
    label_141c2d951:
        sub_141c2d5f0(r15_1, rax_8, zx.q(arg3), arg4)
    else
        while (true)
            if (rax_8 s<= 8)
                for (; i u> r15_1; i -= 8)
                    int64_t* rsi_2 = r15_1
                    int64_t* r14_2 = &r15_1[1]
                    
                    if (&r15_1[1] u<= i)
                        do
                            if (sub_141c32870(arg4, *rsi_2, *r14_2) != 0)
                                rsi_2 = r14_2
                            
                            r14_2 = &r14_2[1]
                        while (r14_2 u<= i)
                    
                    int64_t rcx_16 = *rsi_2
                    *rsi_2 = *i
                    *i = rcx_16
                
                break
            
            if (rax_8 s< 0)
                rax_8 += 1
            
            int64_t* r14_1 = i + 8
            int64_t rdx = sx.q(rax_8 s>> 1)
            int64_t* rsi_1 = r15_1
            int64_t rcx_3 = r15_1[rdx]
            r15_1[rdx] = *r15_1
            *r15_1 = rcx_3
            int64_t rax_12
            
            while (true)
                rsi_1 = &rsi_1[1]
                
                if (rsi_1 u<= i && sub_141c32870(arg4, *r15_1, *rsi_1) == 0)
                    continue
                
                char i_1
                
                do
                    r14_1 = &r14_1[-1]
                    
                    if (r14_1 u<= r15_1)
                        break
                    
                    i_1 = sub_141c32870(arg4, *r14_1, *r15_1)
                while (i_1 == 0)
                rax_12 = *r14_1
                
                if (rsi_1 u> r14_1)
                    break
                
                int64_t rcx_6 = *rsi_1
                *rsi_1 = rax_12
                *r14_1 = rcx_6
            
            int64_t rcx_7 = *r15_1
            r12_1 -= 1
            *r15_1 = rax_12
            *r14_1 = rcx_7
            
            if (((r14_1 - r15_1 - 8) & 0xfffffffffffffff8) s< ((i - rsi_1) & 0xfffffffffffffff8))
                if (i u> rsi_1)
                    *r13_1 = rsi_1
                    r13_1[1] = i
                    r13_1[2].d = r12_1
                    r13_1 = &r13_1[3]
                
                if (&r15_1[1] u>= r14_1)
                    break
                
                i = &r14_1[-1]
            else
                if (&r15_1[1] u< r14_1)
                    *r13_1 = r15_1
                    r13_1[1] = &r14_1[-1]
                    r13_1[2].d = r12_1
                    r13_1 = &r13_1[3]
                
                if (i u<= rsi_1)
                    break
                
                r15_1 = rsi_1
            
            rax_8 = ((i - r15_1) s>> 3).d + 1
            
            if (r12_1 == 0)
                goto label_141c2d951
    
    r13_1 -= 0x18
    
    if (r13_1 u< &var_348)
        break

__security_check_cookie(rax_2 ^ &var_388)
