// 函数: sub_141438fb0
// 地址: 0x141438fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_5f8
int64_t rax_2 = __security_cookie ^ &var_5f8
int64_t var_338 = arg1
int64_t var_330_1 = arg1 - 0xa0 + sx.q(arg2) * 0xa0
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
    int32_t rdx_3 = ((i - r11_1) s/ 0xa0).d + 1
    
    if (rbp_1 == 0)
    label_1414395dc:
        sub_141438300(r11_1, rdx_3)
    else
        while (true)
            uint128_t zmm0_2
            uint128_t zmm1
            
            if (rdx_3 s<= 8)
                for (; i u> r11_1; i -= 0xa0)
                    void* rdx_15 = r11_1
                    void* rcx_14 = &r11_1[0xa]
                    
                    if (&r11_1[0xa] u<= i)
                        do
                            zmm0_2 = *(rdx_15 + 0x1c)
                            zmm1 = *(rcx_14 + 0x1c)
                            int64_t r8_2
                            
                            if (zmm0_2.d f== zmm1.d)
                                r8_2.b = *rdx_15 u< *rcx_14
                            else
                                r8_2.b = zmm1.d f> zmm0_2.d
                            
                            void* rax_27 = rcx_14
                            
                            if (r8_2.b == 0)
                                rax_27 = rdx_15
                            
                            rcx_14 += 0xa0
                            rdx_15 = rax_27
                        while (rcx_14 u<= i)
                    
                    if (rdx_15 != i)
                        uint128_t var_3d8_1 = *rdx_15
                        uint128_t var_3c8_1 = *(rdx_15 + 0x10)
                        uint128_t var_3b8_1 = *(rdx_15 + 0x20)
                        uint128_t var_3a8_1 = *(rdx_15 + 0x30)
                        uint128_t var_398_1 = *(rdx_15 + 0x40)
                        uint128_t var_388_1 = *(rdx_15 + 0x50)
                        uint128_t var_378_1 = *(rdx_15 + 0x60)
                        uint128_t var_368_1 = *(rdx_15 + 0x70)
                        uint128_t var_358_1 = *(rdx_15 + 0x80)
                        uint128_t var_348_1 = *(rdx_15 + 0x90)
                        *rdx_15 = *i
                        *(rdx_15 + 0x10) = *(i + 0x10)
                        *(rdx_15 + 0x20) = *(i + 0x20)
                        *(rdx_15 + 0x30) = *(i + 0x30)
                        *(rdx_15 + 0x40) = *(i + 0x40)
                        *(rdx_15 + 0x50) = *(i + 0x50)
                        *(rdx_15 + 0x60) = *(i + 0x60)
                        *(rdx_15 + 0x70) = *(i + 0x70)
                        *(rdx_15 + 0x80) = *(i + 0x80)
                        *(rdx_15 + 0x90) = *(i + 0x90)
                        *i = var_3d8_1
                        *(i + 0x10) = var_3c8_1
                        *(i + 0x20) = var_3b8_1
                        *(i + 0x30) = var_3a8_1
                        *(i + 0x40) = var_398_1
                        *(i + 0x50) = var_388_1
                        *(i + 0x60) = var_378_1
                        *(i + 0x70) = var_368_1
                        *(i + 0x80) = var_358_1
                        *(i + 0x90) = var_348_1
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rdx_3)
            void* rdx_7 = &r11_1[sx.q((temp1_1 - temp0_3) s>> 1) * 0xa]
            
            if (rdx_7 != r11_1)
                uint128_t var_5b8_1 = *rdx_7
                uint128_t var_5a8_1 = *(rdx_7 + 0x10)
                uint128_t var_598_1 = *(rdx_7 + 0x20)
                uint128_t var_588_1 = *(rdx_7 + 0x30)
                uint128_t var_578_1 = *(rdx_7 + 0x40)
                uint128_t var_568_1 = *(rdx_7 + 0x50)
                uint128_t var_558_1 = *(rdx_7 + 0x60)
                uint128_t var_548_1 = *(rdx_7 + 0x70)
                zmm1 = *(rdx_7 + 0x90)
                uint128_t var_538 = *(rdx_7 + 0x80)
                *rdx_7 = *r11_1
                *(rdx_7 + 0x10) = r11_1[1]
                *(rdx_7 + 0x20) = r11_1[2]
                *(rdx_7 + 0x30) = r11_1[3]
                *(rdx_7 + 0x40) = r11_1[4]
                *(rdx_7 + 0x50) = r11_1[5]
                *(rdx_7 + 0x60) = r11_1[6]
                *(rdx_7 + 0x70) = r11_1[7]
                *(rdx_7 + 0x80) = r11_1[8]
                *(rdx_7 + 0x90) = r11_1[9]
                *r11_1 = var_5b8_1
                r11_1[1] = var_5a8_1
                r11_1[2] = var_598_1
                r11_1[3] = var_588_1
                r11_1[4] = var_578_1
                r11_1[5] = var_568_1
                r11_1[6] = var_558_1
                r11_1[7] = var_548_1
                r11_1[8] = var_538
                r11_1[9] = zmm1
            
            void* r10_1 = i + 0xa0
            uint128_t* r9_1 = r11_1
            
            while (true)
                r9_1 = &r9_1[0xa]
                int32_t rax_13
                
                if (r9_1 u<= i)
                    zmm0_2 = *(r11_1 + 0x1c)
                    zmm1 = *(r9_1 + 0x1c)
                    
                    if (zmm0_2.d f== zmm1.d)
                        rax_13.b = *r11_1 u< *r9_1
                    else
                        rax_13.b = zmm1.d f> zmm0_2.d
                    
                    if (rax_13.b == 0)
                        continue
                
                do
                    r10_1 -= 0xa0
                    
                    if (r10_1 u<= r11_1)
                        break
                    
                    zmm0_2 = *(r10_1 + 0x1c)
                    zmm1 = *(r11_1 + 0x1c)
                    
                    if (zmm0_2.d f== zmm1.d)
                        rax_13.b = *r10_1 u< *r11_1
                    else
                        rax_13.b = zmm1.d f> zmm0_2.d
                while (rax_13.b == 0)
                
                if (r9_1 u> r10_1)
                    break
                
                if (r9_1 != r10_1)
                    uint128_t var_518_1 = *r9_1
                    uint128_t var_508_1 = r9_1[1]
                    uint128_t var_4f8_1 = r9_1[2]
                    uint128_t var_4e8_1 = r9_1[3]
                    uint128_t var_4d8_1 = r9_1[4]
                    uint128_t var_4c8_1 = r9_1[5]
                    uint128_t var_4b8_1 = r9_1[6]
                    uint128_t var_4a8_1 = r9_1[7]
                    zmm1 = r9_1[9]
                    uint128_t var_498 = r9_1[8]
                    *r9_1 = *r10_1
                    r9_1[1] = *(r10_1 + 0x10)
                    r9_1[2] = *(r10_1 + 0x20)
                    r9_1[3] = *(r10_1 + 0x30)
                    r9_1[4] = *(r10_1 + 0x40)
                    r9_1[5] = *(r10_1 + 0x50)
                    r9_1[6] = *(r10_1 + 0x60)
                    r9_1[7] = *(r10_1 + 0x70)
                    r9_1[8] = *(r10_1 + 0x80)
                    r9_1[9] = *(r10_1 + 0x90)
                    *r10_1 = var_518_1
                    *(r10_1 + 0x10) = var_508_1
                    *(r10_1 + 0x20) = var_4f8_1
                    *(r10_1 + 0x30) = var_4e8_1
                    *(r10_1 + 0x40) = var_4d8_1
                    *(r10_1 + 0x50) = var_4c8_1
                    *(r10_1 + 0x60) = var_4b8_1
                    *(r10_1 + 0x70) = var_4a8_1
                    *(r10_1 + 0x80) = var_498
                    *(r10_1 + 0x90) = zmm1
            
            if (r11_1 != r10_1)
                uint128_t var_478_1 = *r11_1
                uint128_t var_468_1 = r11_1[1]
                uint128_t var_458_1 = r11_1[2]
                uint128_t var_448_1 = r11_1[3]
                uint128_t var_438_1 = r11_1[4]
                uint128_t var_428_1 = r11_1[5]
                uint128_t var_418_1 = r11_1[6]
                uint128_t var_408_1 = r11_1[7]
                uint128_t var_3f8_1 = r11_1[8]
                uint128_t var_3e8_1 = r11_1[9]
                *r11_1 = *r10_1
                r11_1[1] = *(r10_1 + 0x10)
                r11_1[2] = *(r10_1 + 0x20)
                r11_1[3] = *(r10_1 + 0x30)
                r11_1[4] = *(r10_1 + 0x40)
                r11_1[5] = *(r10_1 + 0x50)
                r11_1[6] = *(r10_1 + 0x60)
                r11_1[7] = *(r10_1 + 0x70)
                r11_1[8] = *(r10_1 + 0x80)
                r11_1[9] = *(r10_1 + 0x90)
                *r10_1 = var_478_1
                *(r10_1 + 0x10) = var_468_1
                *(r10_1 + 0x20) = var_458_1
                *(r10_1 + 0x30) = var_448_1
                *(r10_1 + 0x40) = var_438_1
                *(r10_1 + 0x50) = var_428_1
                *(r10_1 + 0x60) = var_418_1
                *(r10_1 + 0x70) = var_408_1
                *(r10_1 + 0x80) = var_3f8_1
                *(r10_1 + 0x90) = var_3e8_1
            
            rbp_1 -= 1
            
            if ((r10_1 - r11_1 - 0xa0) s/ 0xa0 s< (i - r9_1) s/ 0xa0)
                if (i u> r9_1)
                    *r14_1 = r9_1
                    r14_1[1] = i
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (&r11_1[0xa] u>= r10_1)
                    break
                
                i = r10_1 - 0xa0
            else
                if (&r11_1[0xa] u< r10_1)
                    *r14_1 = r11_1
                    r14_1[1] = r10_1 - 0xa0
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (i u<= r9_1)
                    break
                
                r11_1 = r9_1
            
            rdx_3 = ((i - r11_1) s/ 0xa0).d + 1
            
            if (rbp_1 == 0)
                goto label_1414395dc
    
    r14_1 -= 0x18
    
    if (r14_1 u< &var_338)
        break

__security_check_cookie(rax_2 ^ &var_5f8)
