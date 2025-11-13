// 函数: sub_1423f8cf0
// 地址: 0x1423f8cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_698
int64_t rax_2 = __security_cookie ^ &var_698
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(arg2))
int64_t var_330_1 = arg1 - 0xc8 + sx.q(arg2) * 0xc8
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
    int32_t rdx_4 = ((i - r11_1) s/ 0xc8).d + 1
    
    if (rbp_1 == 0)
    label_1423f942b:
        sub_1423f78a0(r11_1, rdx_4)
    else
        while (true)
            if (rdx_4 s<= 8)
                for (; i u> r11_1; i -= 0xc8)
                    void* rdx_20 = r11_1
                    void* rcx_21 = r11_1 + 0xc8
                    
                    if (r11_1 + 0xc8 u<= i)
                        do
                            int32_t rax_39 = *rdx_20
                            int32_t r9_2 = *rcx_21
                            bool c_2 = rax_39 u< r9_2
                            
                            if (rax_39 == r9_2)
                                c_2 = *(rdx_20 + 4) u< *(rcx_21 + 4)
                            
                            void* rax_41 = rcx_21
                            
                            if (c_2 == 0)
                                rax_41 = rdx_20
                            
                            rcx_21 += 0xc8
                            rdx_20 = rax_41
                        while (rcx_21 u<= i)
                    
                    if (rdx_20 != i)
                        int64_t rax_42 = *(rdx_20 + 0xc0)
                        uint128_t var_408_1 = *rdx_20
                        uint128_t var_3f8_1 = *(rdx_20 + 0x10)
                        uint128_t var_3e8_1 = *(rdx_20 + 0x20)
                        uint128_t var_3d8_1 = *(rdx_20 + 0x30)
                        uint128_t var_3c8_1 = *(rdx_20 + 0x40)
                        uint128_t var_3b8_1 = *(rdx_20 + 0x50)
                        uint128_t var_3a8_1 = *(rdx_20 + 0x60)
                        uint128_t var_398_1 = *(rdx_20 + 0x70)
                        uint128_t var_388_1 = *(rdx_20 + 0x80)
                        uint128_t var_378_1 = *(rdx_20 + 0x90)
                        uint128_t var_368_1 = *(rdx_20 + 0xa0)
                        uint128_t var_358_1 = *(rdx_20 + 0xb0)
                        *rdx_20 = *i
                        *(rdx_20 + 0x10) = *(i + 0x10)
                        *(rdx_20 + 0x20) = *(i + 0x20)
                        *(rdx_20 + 0x30) = *(i + 0x30)
                        *(rdx_20 + 0x40) = *(i + 0x40)
                        *(rdx_20 + 0x50) = *(i + 0x50)
                        *(rdx_20 + 0x60) = *(i + 0x60)
                        *(rdx_20 + 0x70) = *(i + 0x70)
                        *(rdx_20 + 0x80) = *(i + 0x80)
                        *(rdx_20 + 0x90) = *(i + 0x90)
                        *(rdx_20 + 0xa0) = *(i + 0xa0)
                        *(rdx_20 + 0xb0) = *(i + 0xb0)
                        *(rdx_20 + 0xc0) = *(i + 0xc0)
                        *i = var_408_1
                        *(i + 0x10) = var_3f8_1
                        *(i + 0x20) = var_3e8_1
                        *(i + 0x30) = var_3d8_1
                        *(i + 0x40) = var_3c8_1
                        *(i + 0x50) = var_3b8_1
                        *(i + 0x60) = var_3a8_1
                        *(i + 0x70) = var_398_1
                        *(i + 0x80) = var_388_1
                        *(i + 0x90) = var_378_1
                        *(i + 0xa0) = var_368_1
                        *(i + 0xb0) = var_358_1
                        *(i + 0xc0) = rax_42
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rdx_4)
            void* rdx_7 = sx.q((temp1_1 - temp0_3) s>> 1) * 0xc8 + r11_1
            
            if (rdx_7 != r11_1)
                int64_t rax_14 = *(rdx_7 + 0xc0)
                uint128_t var_660_1 = *rdx_7
                uint128_t var_650_1 = *(rdx_7 + 0x10)
                uint128_t var_640_1 = *(rdx_7 + 0x20)
                uint128_t var_630_1 = *(rdx_7 + 0x30)
                uint128_t var_620_1 = *(rdx_7 + 0x40)
                uint128_t var_610_1 = *(rdx_7 + 0x50)
                uint128_t var_600_1 = *(rdx_7 + 0x60)
                uint128_t var_5f0_1 = *(rdx_7 + 0x70)
                uint128_t var_5e0_1 = *(rdx_7 + 0x80)
                uint128_t var_5d0_1 = *(rdx_7 + 0x90)
                uint128_t var_5c0_1 = *(rdx_7 + 0xa0)
                uint128_t var_5b0_1 = *(rdx_7 + 0xb0)
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
                *(rdx_7 + 0xb0) = r11_1[0xb]
                *(rdx_7 + 0xc0) = r11_1[0xc].q
                *r11_1 = var_660_1
                r11_1[1] = var_650_1
                r11_1[2] = var_640_1
                r11_1[3] = var_630_1
                r11_1[4] = var_620_1
                r11_1[5] = var_610_1
                r11_1[6] = var_600_1
                r11_1[7] = var_5f0_1
                r11_1[8] = var_5e0_1
                r11_1[9] = var_5d0_1
                r11_1[0xa] = var_5c0_1
                r11_1[0xb] = var_5b0_1
                r11_1[0xc].q = rax_14
            
            void* r10_1 = i + 0xc8
            uint128_t* r9_1 = r11_1
            
            while (true)
                r9_1 += 0xc8
                
                if (r9_1 u<= i)
                    int32_t rax_17 = *r11_1
                    int32_t rdx_9 = *r9_1
                    bool c_1 = rax_17 u< rdx_9
                    
                    if (rax_17 == rdx_9)
                        c_1 = *(r11_1 + 4) u< *(r9_1 + 4)
                    
                    if (c_1 == 0)
                        continue
                
                bool i_1
                
                do
                    r10_1 -= 0xc8
                    
                    if (r10_1 u<= r11_1)
                        break
                    
                    int32_t rax_19 = *r10_1
                    int32_t rdx_10 = *r11_1
                    i_1 = rax_19 u< rdx_10
                    
                    if (rax_19 == rdx_10)
                        i_1 = *(r10_1 + 4) u< *(r11_1 + 4)
                while (i_1 == 0)
                
                if (r9_1 u> r10_1)
                    break
                
                if (r9_1 != r10_1)
                    int64_t rax_21 = r9_1[0xc].q
                    uint128_t var_598_1 = *r9_1
                    uint128_t var_588_1 = r9_1[1]
                    uint128_t var_578_1 = r9_1[2]
                    uint128_t var_568_1 = r9_1[3]
                    uint128_t var_558_1 = r9_1[4]
                    uint128_t var_548_1 = r9_1[5]
                    uint128_t var_538_1 = r9_1[6]
                    uint128_t var_528_1 = r9_1[7]
                    uint128_t var_518_1 = r9_1[8]
                    uint128_t var_508_1 = r9_1[9]
                    uint128_t var_4f8_1 = r9_1[0xa]
                    uint128_t var_4e8_1 = r9_1[0xb]
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
                    r9_1[0xb] = *(r10_1 + 0xb0)
                    r9_1[0xc].q = *(r10_1 + 0xc0)
                    *r10_1 = var_598_1
                    *(r10_1 + 0x10) = var_588_1
                    *(r10_1 + 0x20) = var_578_1
                    *(r10_1 + 0x30) = var_568_1
                    *(r10_1 + 0x40) = var_558_1
                    *(r10_1 + 0x50) = var_548_1
                    *(r10_1 + 0x60) = var_538_1
                    *(r10_1 + 0x70) = var_528_1
                    *(r10_1 + 0x80) = var_518_1
                    *(r10_1 + 0x90) = var_508_1
                    *(r10_1 + 0xa0) = var_4f8_1
                    *(r10_1 + 0xb0) = var_4e8_1
                    *(r10_1 + 0xc0) = rax_21
            
            if (r11_1 != r10_1)
                int64_t rax_24 = r11_1[0xc].q
                uint128_t var_4d0_1 = *r11_1
                uint128_t var_4c0_1 = r11_1[1]
                uint128_t var_4b0_1 = r11_1[2]
                uint128_t var_4a0_1 = r11_1[3]
                uint128_t var_490_1 = r11_1[4]
                uint128_t var_480_1 = r11_1[5]
                uint128_t var_470_1 = r11_1[6]
                uint128_t var_460_1 = r11_1[7]
                uint128_t var_450_1 = r11_1[8]
                uint128_t var_440_1 = r11_1[9]
                uint128_t var_430_1 = r11_1[0xa]
                uint128_t var_420_1 = r11_1[0xb]
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
                r11_1[0xb] = *(r10_1 + 0xb0)
                r11_1[0xc].q = *(r10_1 + 0xc0)
                *r10_1 = var_4d0_1
                *(r10_1 + 0x10) = var_4c0_1
                *(r10_1 + 0x20) = var_4b0_1
                *(r10_1 + 0x30) = var_4a0_1
                *(r10_1 + 0x40) = var_490_1
                *(r10_1 + 0x50) = var_480_1
                *(r10_1 + 0x60) = var_470_1
                *(r10_1 + 0x70) = var_460_1
                *(r10_1 + 0x80) = var_450_1
                *(r10_1 + 0x90) = var_440_1
                *(r10_1 + 0xa0) = var_430_1
                *(r10_1 + 0xb0) = var_420_1
                *(r10_1 + 0xc0) = rax_24
            
            rbp_1 -= 1
            
            if ((r10_1 - r11_1 - 0xc8) s/ 0xc8 s< (i - r9_1) s/ 0xc8)
                if (i u> r9_1)
                    *r14_1 = r9_1
                    r14_1[1] = i
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (r11_1 + 0xc8 u>= r10_1)
                    break
                
                i = r10_1 - 0xc8
            else
                if (r11_1 + 0xc8 u< r10_1)
                    *r14_1 = r11_1
                    r14_1[1] = r10_1 - 0xc8
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (i u<= r9_1)
                    break
                
                r11_1 = r9_1
            
            rdx_4 = ((i - r11_1) s/ 0xc8).d + 1
            
            if (rbp_1 == 0)
                goto label_1423f942b
    
    r14_1 -= 0x18
    
    if (r14_1 u< &var_338)
        break

__security_check_cookie(rax_2 ^ &var_698)
