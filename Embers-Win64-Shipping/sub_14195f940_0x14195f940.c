// 函数: sub_14195f940
// 地址: 0x14195f940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_658
int64_t rax_2 = __security_cookie ^ &var_658
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(arg2))
int64_t var_330_1 = arg1 - 0xb8 + sx.q(arg2) * 0xb8
int64_t var_338 = arg1
float zmm0_1 = logf(zmm0.d)
int32_t var_328_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_320
memset(&var_320, 0, 0x2e8)
int64_t* r14_1 = &var_338

while (true)
    uint128_t zmm2 = *r14_1
    uint32_t rbp_1 = (r14_1[2]).d
    uint128_t* r11_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rdx_4 = ((i - r11_1) s/ 0xb8).d + 1
    
    if (rbp_1 == 0)
    label_141960038:
        sub_14195d980(r11_1, rdx_4)
    else
        while (true)
            if (rdx_4 s<= 8)
                for (; i u> r11_1; i -= 0xb8)
                    void* r8_5 = r11_1
                    void* rdx_17 = r11_1 + 0xb8
                    
                    if (r11_1 + 0xb8 u<= i)
                        do
                            void* rcx_14 = rdx_17
                            
                            if (*(r8_5 + 0x28) s<= *(rdx_17 + 0x28))
                                rcx_14 = r8_5
                            
                            rdx_17 += 0xb8
                            r8_5 = rcx_14
                        while (rdx_17 u<= i)
                    
                    if (r8_5 != i)
                        int64_t rax_38 = *(r8_5 + 0xb0)
                        uint128_t var_3f8_1 = *r8_5
                        uint128_t var_3e8_1 = *(r8_5 + 0x10)
                        uint128_t var_3d8_1 = *(r8_5 + 0x20)
                        uint128_t var_3c8_1 = *(r8_5 + 0x30)
                        uint128_t var_3b8_1 = *(r8_5 + 0x40)
                        uint128_t var_3a8_1 = *(r8_5 + 0x50)
                        uint128_t var_398_1 = *(r8_5 + 0x60)
                        uint128_t var_388_1 = *(r8_5 + 0x70)
                        uint128_t var_378_1 = *(r8_5 + 0x80)
                        uint128_t var_368_1 = *(r8_5 + 0x90)
                        uint128_t var_358_1 = *(r8_5 + 0xa0)
                        *r8_5 = *i
                        *(r8_5 + 0x10) = *(i + 0x10)
                        *(r8_5 + 0x20) = *(i + 0x20)
                        *(r8_5 + 0x30) = *(i + 0x30)
                        *(r8_5 + 0x40) = *(i + 0x40)
                        *(r8_5 + 0x50) = *(i + 0x50)
                        *(r8_5 + 0x60) = *(i + 0x60)
                        *(r8_5 + 0x70) = *(i + 0x70)
                        *(r8_5 + 0x80) = *(i + 0x80)
                        *(r8_5 + 0x90) = *(i + 0x90)
                        *(r8_5 + 0xa0) = *(i + 0xa0)
                        *(r8_5 + 0xb0) = *(i + 0xb0)
                        *i = var_3f8_1
                        *(i + 0x10) = var_3e8_1
                        *(i + 0x20) = var_3d8_1
                        *(i + 0x30) = var_3c8_1
                        *(i + 0x40) = var_3b8_1
                        *(i + 0x50) = var_3a8_1
                        *(i + 0x60) = var_398_1
                        *(i + 0x70) = var_388_1
                        *(i + 0x80) = var_378_1
                        *(i + 0x90) = var_368_1
                        *(i + 0xa0) = var_358_1
                        *(i + 0xb0) = rax_38
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rdx_4)
            void* rdx_7 = sx.q((temp1_1 - temp0_3) s>> 1) * 0xb8 + r11_1
            
            if (rdx_7 != r11_1)
                int64_t rax_14 = *(rdx_7 + 0xb0)
                uint128_t var_620_1 = *rdx_7
                uint128_t var_610_1 = *(rdx_7 + 0x10)
                uint128_t var_600_1 = *(rdx_7 + 0x20)
                uint128_t var_5f0_1 = *(rdx_7 + 0x30)
                uint128_t var_5e0_1 = *(rdx_7 + 0x40)
                uint128_t var_5d0_1 = *(rdx_7 + 0x50)
                uint128_t var_5c0_1 = *(rdx_7 + 0x60)
                uint128_t var_5b0_1 = *(rdx_7 + 0x70)
                uint128_t var_5a0_1 = *(rdx_7 + 0x80)
                uint128_t var_590_1 = *(rdx_7 + 0x90)
                uint128_t var_580_1 = *(rdx_7 + 0xa0)
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
                *(rdx_7 + 0xa0) = r11_1[0xa]
                *(rdx_7 + 0xb0) = r11_1[0xb].q
                *r11_1 = var_620_1
                r11_1[1] = var_610_1
                r11_1[2] = var_600_1
                r11_1[3] = var_5f0_1
                r11_1[4] = var_5e0_1
                r11_1[5] = var_5d0_1
                r11_1[6] = var_5c0_1
                r11_1[7] = var_5b0_1
                r11_1[8] = var_5a0_1
                r11_1[9] = var_590_1
                r11_1[0xa] = var_580_1
                r11_1[0xb].q = rax_14
            
            void* r10_1 = i + 0xb8
            uint128_t* r9_1 = r11_1
            
            while (true)
                r9_1 += 0xb8
                
                if (r9_1 u<= i && *(r11_1 + 0x28) s<= *(r9_1 + 0x28))
                    continue
                
                do
                    r10_1 -= 0xb8
                    
                    if (r10_1 u<= r11_1)
                        break
                while (*(r10_1 + 0x28) s<= *(r11_1 + 0x28))
                
                if (r9_1 u> r10_1)
                    break
                
                if (r9_1 != r10_1)
                    int64_t rax_19 = r9_1[0xb].q
                    uint128_t var_568_1 = *r9_1
                    uint128_t var_558_1 = r9_1[1]
                    uint128_t var_548_1 = r9_1[2]
                    uint128_t var_538_1 = r9_1[3]
                    uint128_t var_528_1 = r9_1[4]
                    uint128_t var_518_1 = r9_1[5]
                    uint128_t var_508_1 = r9_1[6]
                    uint128_t var_4f8_1 = r9_1[7]
                    uint128_t var_4e8_1 = r9_1[8]
                    uint128_t var_4d8_1 = r9_1[9]
                    uint128_t var_4c8_1 = r9_1[0xa]
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
                    r9_1[0xa] = *(r10_1 + 0xa0)
                    r9_1[0xb].q = *(r10_1 + 0xb0)
                    *r10_1 = var_568_1
                    *(r10_1 + 0x10) = var_558_1
                    *(r10_1 + 0x20) = var_548_1
                    *(r10_1 + 0x30) = var_538_1
                    *(r10_1 + 0x40) = var_528_1
                    *(r10_1 + 0x50) = var_518_1
                    *(r10_1 + 0x60) = var_508_1
                    *(r10_1 + 0x70) = var_4f8_1
                    *(r10_1 + 0x80) = var_4e8_1
                    *(r10_1 + 0x90) = var_4d8_1
                    *(r10_1 + 0xa0) = var_4c8_1
                    *(r10_1 + 0xb0) = rax_19
            
            if (r11_1 != r10_1)
                int64_t rax_22 = r11_1[0xb].q
                uint128_t var_4b0_1 = *r11_1
                uint128_t var_4a0_1 = r11_1[1]
                uint128_t var_490_1 = r11_1[2]
                uint128_t var_480_1 = r11_1[3]
                uint128_t var_470_1 = r11_1[4]
                uint128_t var_460_1 = r11_1[5]
                uint128_t var_450_1 = r11_1[6]
                uint128_t var_440_1 = r11_1[7]
                uint128_t var_430_1 = r11_1[8]
                uint128_t var_420_1 = r11_1[9]
                uint128_t var_410_1 = r11_1[0xa]
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
                r11_1[0xa] = *(r10_1 + 0xa0)
                r11_1[0xb].q = *(r10_1 + 0xb0)
                *r10_1 = var_4b0_1
                *(r10_1 + 0x10) = var_4a0_1
                *(r10_1 + 0x20) = var_490_1
                *(r10_1 + 0x30) = var_480_1
                *(r10_1 + 0x40) = var_470_1
                *(r10_1 + 0x50) = var_460_1
                *(r10_1 + 0x60) = var_450_1
                *(r10_1 + 0x70) = var_440_1
                *(r10_1 + 0x80) = var_430_1
                *(r10_1 + 0x90) = var_420_1
                *(r10_1 + 0xa0) = var_410_1
                *(r10_1 + 0xb0) = rax_22
            
            rbp_1 -= 1
            
            if ((r10_1 - r11_1 - 0xb8) s/ 0xb8 s< (i - r9_1) s/ 0xb8)
                if (i u> r9_1)
                    *r14_1 = r9_1
                    r14_1[1] = i
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (r11_1 + 0xb8 u>= r10_1)
                    break
                
                i = r10_1 - 0xb8
            else
                if (r11_1 + 0xb8 u< r10_1)
                    *r14_1 = r11_1
                    r14_1[1] = r10_1 - 0xb8
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (i u<= r9_1)
                    break
                
                r11_1 = r9_1
            
            rdx_4 = ((i - r11_1) s/ 0xb8).d + 1
            
            if (rbp_1 == 0)
                goto label_141960038
    
    r14_1 -= 0x18
    
    if (r14_1 u< &var_338)
        break

__security_check_cookie(rax_2 ^ &var_658)
