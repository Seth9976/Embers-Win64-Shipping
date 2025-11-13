// 函数: sub_141b48d30
// 地址: 0x141b48d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_378
int64_t rax_2 = __security_cookie ^ &var_378
int64_t var_338 = arg1
int64_t var_330_1 = arg1 - 0x28 + sx.q(arg2) * 0x28
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_328_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_320
memset(&var_320, 0, 0x2e8)
int64_t* r14_1 = &var_338

while (true)
    uint128_t zmm2 = *r14_1
    uint32_t rbp_1 = (r14_1[2]).d
    uint128_t* r11_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rdx_3 = ((i - r11_1) s/ 0x28).d + 1
    
    if (rbp_1 == 0)
    label_141b48ff2:
        sub_141b48af0(r11_1, rdx_3)
    else
        while (true)
            uint128_t zmm3
            int128_t zmm4_1
            
            if (rdx_3 s<= 8)
                for (; i u> r11_1; i -= 0x28)
                    void* r9_2 = r11_1
                    void* r8_5 = r11_1 + 0x28
                    
                    if (r11_1 + 0x28 u<= i)
                        do
                            void* rax_32 = *(r8_5 + 8)
                            void* rcx_20 = *(r9_2 + 8)
                            void* rcx_21 = r8_5
                            
                            if (*(rax_32 + 0x14) + *(rax_32 + 0x10)
                                    u>= *(rcx_20 + 0x14) + *(rcx_20 + 0x10))
                                rcx_21 = r9_2
                            
                            r8_5 += 0x28
                            r9_2 = rcx_21
                        while (r8_5 u<= i)
                    
                    if (r9_2 != i)
                        zmm3 = *r9_2
                        zmm4_1 = *(r9_2 + 0x10)
                        zmm2 = zx.o(*(r9_2 + 0x20))
                        *r9_2 = *i
                        *(r9_2 + 0x10) = *(i + 0x10)
                        *(r9_2 + 0x20) = *(i + 0x20)
                        *i = zmm3
                        *(i + 0x10) = zmm4_1
                        *(i + 0x20) = zmm2.q
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rdx_3)
            void* rcx_5 = r11_1 + sx.q((temp1_1 - temp0_3) s>> 1) * 0x28
            
            if (rcx_5 != r11_1)
                zmm3 = *rcx_5
                zmm4_1 = *(rcx_5 + 0x10)
                zmm2 = zx.o(*(rcx_5 + 0x20))
                *rcx_5 = *r11_1
                *(rcx_5 + 0x10) = r11_1[1]
                *(rcx_5 + 0x20) = r11_1[2].q
                *r11_1 = zmm3
                r11_1[1] = zmm4_1
                r11_1[2].q = zmm2.q
            
            uint128_t* r10_1 = i + 0x28
            uint128_t* r9_1 = r11_1
            
            while (true)
                r9_1 += 0x28
                
                if (r9_1 u<= i)
                    void* rax_14 = *(r9_1 + 8)
                    void* rdx_5 = *(r11_1 + 8)
                    
                    if (*(rax_14 + 0x14) + *(rax_14 + 0x10) u>= *(rdx_5 + 0x14) + *(rdx_5 + 0x10))
                        continue
                
                void* rax_17
                void* rdx_6
                
                do
                    r10_1 -= 0x28
                    
                    if (r10_1 u<= r11_1)
                        break
                    
                    rax_17 = *(r11_1 + 8)
                    rdx_6 = *(r10_1 + 8)
                while (*(rax_17 + 0x14) + *(rax_17 + 0x10) u>= *(rdx_6 + 0x14) + *(rdx_6 + 0x10))
                
                if (r9_1 u> r10_1)
                    break
                
                if (r9_1 != r10_1)
                    zmm3 = *r9_1
                    zmm4_1 = r9_1[1]
                    zmm2 = zx.o(r9_1[2].q)
                    *r9_1 = *r10_1
                    r9_1[1] = r10_1[1]
                    r9_1[2].q = r10_1[2].q
                    *r10_1 = zmm3
                    r10_1[1] = zmm4_1
                    r10_1[2].q = zmm2.q
            
            if (r11_1 != r10_1)
                zmm3 = *r11_1
                zmm4_1 = r11_1[1]
                zmm2 = zx.o(r11_1[2].q)
                *r11_1 = *r10_1
                r11_1[1] = r10_1[1]
                r11_1[2].q = r10_1[2].q
                *r10_1 = zmm3
                r10_1[1] = zmm4_1
                r10_1[2].q = zmm2.q
            
            rbp_1 -= 1
            
            if ((r10_1 - r11_1 - 0x28) s/ 0x28 s< (i - r9_1) s/ 0x28)
                if (i u> r9_1)
                    *r14_1 = r9_1
                    r14_1[1] = i
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (r11_1 + 0x28 u>= r10_1)
                    break
                
                i = r10_1 - 0x28
            else
                if (r11_1 + 0x28 u< r10_1)
                    *r14_1 = r11_1
                    r14_1[1] = r10_1 - 0x28
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (i u<= r9_1)
                    break
                
                r11_1 = r9_1
            
            rdx_3 = ((i - r11_1) s/ 0x28).d + 1
            
            if (rbp_1 == 0)
                goto label_141b48ff2
    
    r14_1 -= 0x18
    
    if (r14_1 u< &var_338)
        break

__security_check_cookie(rax_2 ^ &var_378)
