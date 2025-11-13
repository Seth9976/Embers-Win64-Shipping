// 函数: sub_140a5f3a0
// 地址: 0x140a5f3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_378
int64_t rax_2 = __security_cookie ^ &var_378
int64_t var_338 = arg1
int64_t var_330_1 = arg1 - 1 + sx.q(arg2)
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_328_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_320
memset(&var_320, 0, 0x2e8)
int64_t* rsi_1 = &var_338

while (true)
    uint128_t zmm2 = *rsi_1
    int32_t zmm0_2 = (rsi_1[2]).d
    int32_t rbp_1 = zmm2.d
    int32_t r14_1 = _mm_bsrli_si128(zmm2, 8).d
    int32_t r11_1 = zmm0_2
    int32_t rdx_2 = r14_1 - rbp_1 + 1
    char* r10_1 = zmm2.q
    
    if (r11_1 == 0)
    label_140a5f54f:
        sub_140a5e7f0(r10_1, rdx_2)
    else
        void* i = zmm2:8.q
        
        while (true)
            if (rdx_2 s<= 8)
                for (; i u> r10_1; i -= 1)
                    char* r8_2 = r10_1
                    void* rdx_8 = &r10_1[1]
                    
                    if (&r10_1[1] u<= i)
                        do
                            char* rcx_9 = rdx_8
                            
                            if (*r8_2 u>= *rdx_8)
                                rcx_9 = r8_2
                            
                            rdx_8 += 1
                            r8_2 = rcx_9
                        while (rdx_8 u<= i)
                    
                    char rcx_10 = *r8_2
                    *r8_2 = *i
                    *i = rcx_10
                
                break
            
            void* r8 = i + 1
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rdx_2)
            int64_t rdx_4 = sx.q((temp1_1 - temp0_3) s>> 1)
            char rcx_3 = r10_1[rdx_4]
            r10_1[rdx_4] = *r10_1
            char* rdx_5 = r10_1
            *r10_1 = rcx_3
            char i_1
            
            while (true)
                rdx_5 = &rdx_5[1]
                
                if (rdx_5 u<= i && *r10_1 u>= *rdx_5)
                    continue
                
                do
                    i_1 = *(r8 - 1)
                    r8 -= 1
                    
                    if (r8 u<= r10_1)
                        break
                while (i_1 u>= *r10_1)
                
                if (rdx_5 u> r8)
                    break
                
                char rax_11 = *rdx_5
                *rdx_5 = i_1
                *r8 = rax_11
            
            char rax_12 = *r10_1
            r11_1 -= 1
            *r10_1 = i_1
            *r8 = rax_12
            uint128_t var_358_1
            
            if (r8 - r10_1 s<= i - rdx_5)
                if (i u> rdx_5)
                    *rsi_1 = rdx_5
                    rsi_1[1] = i
                    rsi_1[2].d = r11_1
                    rsi_1 = &rsi_1[3]
                
                if (&r10_1[1] u>= r8)
                    break
                
                i = r8 - 1
                var_358_1:8.q = i
                r14_1 = i.d
            else
                if (&r10_1[1] u< r8)
                    *rsi_1 = r10_1
                    rsi_1[1] = r8 - 1
                    rsi_1[2].d = r11_1
                    rsi_1 = &rsi_1[3]
                
                if (i u<= rdx_5)
                    break
                
                r10_1 = rdx_5
                var_358_1.q = rdx_5
                rbp_1 = rdx_5.d
            rdx_2 = r14_1 - rbp_1 + 1
            
            if (r11_1 == 0)
                goto label_140a5f54f
    
    rsi_1 -= 0x18
    
    if (rsi_1 u< &var_338)
        break

__security_check_cookie(rax_2 ^ &var_378)
