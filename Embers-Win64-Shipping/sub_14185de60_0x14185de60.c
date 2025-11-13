// 函数: sub_14185de60
// 地址: 0x14185de60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_378
int64_t rax_2 = __security_cookie ^ &var_378
int64_t var_338 = arg1
int64_t var_330_1 = arg1 - 0x30 + sx.q(arg2) * 0x30
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
    int32_t rdx_3 = ((i - r11_1) s/ 0x30).d + 1
    
    if (rbp_1 == 0)
    label_14185e108:
        sub_14185d080(r11_1, rdx_3)
    else
        while (true)
            int128_t zmm3
            int128_t zmm4_1
            
            if (rdx_3 s<= 8)
                for (; i u> r11_1; i -= 0x30)
                    void* r8_6 = r11_1
                    void* rdx_12 = &r11_1[3]
                    
                    if (&r11_1[3] u<= i)
                        do
                            void* rcx_14 = rdx_12
                            
                            if (*r8_6 u>= *rdx_12)
                                rcx_14 = r8_6
                            
                            rdx_12 += 0x30
                            r8_6 = rcx_14
                        while (rdx_12 u<= i)
                    
                    if (r8_6 != i)
                        zmm2 = *r8_6
                        zmm3 = *(r8_6 + 0x10)
                        zmm4_1 = *(r8_6 + 0x20)
                        *r8_6 = *i
                        *(r8_6 + 0x10) = *(i + 0x10)
                        *(r8_6 + 0x20) = *(i + 0x20)
                        *i = zmm2
                        *(i + 0x10) = zmm3
                        *(i + 0x20) = zmm4_1
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rdx_3)
            void* rax_16 = &r11_1[sx.q((temp1_1 - temp0_3) s>> 1) * 3]
            
            if (rax_16 != r11_1)
                zmm2 = *rax_16
                zmm3 = *(rax_16 + 0x10)
                zmm4_1 = *(rax_16 + 0x20)
                *rax_16 = *r11_1
                *(rax_16 + 0x10) = r11_1[1]
                *(rax_16 + 0x20) = r11_1[2]
                *r11_1 = zmm2
                r11_1[1] = zmm3
                r11_1[2] = zmm4_1
            
            uint128_t* r10_1 = i + 0x30
            uint128_t* r9 = r11_1
            
            while (true)
                r9 = &r9[3]
                
                if (r9 u<= i && *r11_1 u>= *r9)
                    continue
                
                do
                    r10_1 = &r10_1[-3]
                    
                    if (r10_1 u<= r11_1)
                        break
                while (*r10_1 u>= *r11_1)
                
                if (r9 u> r10_1)
                    break
                
                if (r9 != r10_1)
                    zmm2 = *r9
                    zmm3 = r9[1]
                    zmm4_1 = r9[2]
                    *r9 = *r10_1
                    r9[1] = r10_1[1]
                    r9[2] = r10_1[2]
                    *r10_1 = zmm2
                    r10_1[1] = zmm3
                    r10_1[2] = zmm4_1
            
            if (r11_1 != r10_1)
                zmm2 = *r11_1
                zmm3 = r11_1[1]
                zmm4_1 = r11_1[2]
                *r11_1 = *r10_1
                r11_1[1] = r10_1[1]
                r11_1[2] = r10_1[2]
                *r10_1 = zmm2
                r10_1[1] = zmm3
                r10_1[2] = zmm4_1
            
            rbp_1 -= 1
            
            if ((r10_1 - r11_1 - 0x30) s/ 0x30 s< (i - r9) s/ 0x30)
                if (i u> r9)
                    *r14_1 = r9
                    r14_1[1] = i
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (&r11_1[3] u>= r10_1)
                    break
                
                i = &r10_1[-3]
            else
                if (&r11_1[3] u< r10_1)
                    *r14_1 = r11_1
                    r14_1[1] = &r10_1[-3]
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (i u<= r9)
                    break
                
                r11_1 = r9
            
            rdx_3 = ((i - r11_1) s/ 0x30).d + 1
            
            if (rbp_1 == 0)
                goto label_14185e108
    
    r14_1 -= 0x18
    
    if (r14_1 u< &var_338)
        break

__security_check_cookie(rax_2 ^ &var_378)
