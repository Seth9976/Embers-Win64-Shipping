// 函数: sub_141e36a30
// 地址: 0x141e36a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_698
int64_t rax_2 = __security_cookie ^ &var_698
uint128_t zmm6
uint128_t var_48_1 = zmm6
int64_t var_378 = arg1
int64_t var_370_1 = arg1 - 0xb8 + sx.q(arg2) * 0xb8
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_368_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_360
memset(&var_360, 0, 0x2e8)
uint32_t zmm7[0x4] = 0x7fffffff
int64_t* r13_1 = &var_378
int128_t zmm8 = 0x322bcc77

while (true)
    uint128_t zmm2 = *r13_1
    uint32_t r12_1 = (r13_1[2]).d
    uint128_t* rsi_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rdx_4 = ((i - rsi_1) s/ 0xb8).d + 1
    
    if (r12_1 == 0)
    label_141e371b4:
        zmm7, zmm8 = sub_141e35b20(rsi_1, rdx_4)
    else
        while (true)
            uint128_t zmm0_2
            uint128_t zmm1
            
            if (rdx_4 s<= 8)
                for (; i u> rsi_1; i -= 0xb8)
                    void* r14_2 = rsi_1
                    void* rbp_2 = rsi_1 + 0xb8
                    
                    if (rsi_1 + 0xb8 u<= i)
                        do
                            zmm6.d = sub_141e24dc0(r14_2, 0).d f+ *(r14_2 + 0x34)
                            zmm0_2.d = sub_141e24dc0(rbp_2, 0).d f+ *(rbp_2 + 0x34)
                            zmm1.d = zmm6.d f- zmm0_2.d
                            void* rcx_19
                            
                            if (_mm_and_ps(zmm1, zmm7).d f> zmm8.d)
                                rcx_19.b = zmm0_2.d f> zmm6.d
                            else
                                rcx_19.b = *(r14_2 + 0xa4) s< *(rbp_2 + 0xa4)
                            
                            void* rax_34 = rbp_2
                            
                            if (rcx_19.b == 0)
                                rax_34 = r14_2
                            
                            rbp_2 += 0xb8
                            r14_2 = rax_34
                        while (rbp_2 u<= i)
                    
                    if (r14_2 != i)
                        int64_t rax_35 = *(r14_2 + 0xb0)
                        uint128_t var_438_1 = *r14_2
                        uint128_t var_428_1 = *(r14_2 + 0x10)
                        uint128_t var_418_1 = *(r14_2 + 0x20)
                        uint128_t var_408_1 = *(r14_2 + 0x30)
                        uint128_t var_3f8_1 = *(r14_2 + 0x40)
                        uint128_t var_3e8_1 = *(r14_2 + 0x50)
                        uint128_t var_3d8_1 = *(r14_2 + 0x60)
                        uint128_t var_3c8_1 = *(r14_2 + 0x70)
                        uint128_t var_3b8_1 = *(r14_2 + 0x80)
                        uint128_t var_3a8_1 = *(r14_2 + 0x90)
                        uint128_t var_398_1 = *(r14_2 + 0xa0)
                        *r14_2 = *i
                        *(r14_2 + 0x10) = *(i + 0x10)
                        *(r14_2 + 0x20) = *(i + 0x20)
                        *(r14_2 + 0x30) = *(i + 0x30)
                        *(r14_2 + 0x40) = *(i + 0x40)
                        *(r14_2 + 0x50) = *(i + 0x50)
                        *(r14_2 + 0x60) = *(i + 0x60)
                        *(r14_2 + 0x70) = *(i + 0x70)
                        *(r14_2 + 0x80) = *(i + 0x80)
                        *(r14_2 + 0x90) = *(i + 0x90)
                        *(r14_2 + 0xa0) = *(i + 0xa0)
                        *(r14_2 + 0xb0) = *(i + 0xb0)
                        *i = var_438_1
                        *(i + 0x10) = var_428_1
                        *(i + 0x20) = var_418_1
                        *(i + 0x30) = var_408_1
                        *(i + 0x40) = var_3f8_1
                        *(i + 0x50) = var_3e8_1
                        *(i + 0x60) = var_3d8_1
                        *(i + 0x70) = var_3c8_1
                        *(i + 0x80) = var_3b8_1
                        *(i + 0x90) = var_3a8_1
                        *(i + 0xa0) = var_398_1
                        *(i + 0xb0) = rax_35
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rdx_4)
            void* rdx_7 = sx.q((temp1_1 - temp0_3) s>> 1) * 0xb8 + rsi_1
            
            if (rdx_7 != rsi_1)
                uint64_t rax_14 = *(rdx_7 + 0xb0)
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
                *rdx_7 = *rsi_1
                *(rdx_7 + 0x10) = rsi_1[1]
                *(rdx_7 + 0x20) = rsi_1[2]
                *(rdx_7 + 0x30) = rsi_1[3]
                *(rdx_7 + 0x40) = rsi_1[4]
                *(rdx_7 + 0x50) = rsi_1[5]
                *(rdx_7 + 0x60) = rsi_1[6]
                *(rdx_7 + 0x70) = rsi_1[7]
                *(rdx_7 + 0x80) = rsi_1[8]
                *(rdx_7 + 0x90) = rsi_1[9]
                *(rdx_7 + 0xa0) = rsi_1[0xa]
                *(rdx_7 + 0xb0) = rsi_1[0xb].q
                *rsi_1 = var_660_1
                rsi_1[1] = var_650_1
                rsi_1[2] = var_640_1
                rsi_1[3] = var_630_1
                rsi_1[4] = var_620_1
                rsi_1[5] = var_610_1
                rsi_1[6] = var_600_1
                rsi_1[7] = var_5f0_1
                rsi_1[8] = var_5e0_1
                rsi_1[9] = var_5d0_1
                rsi_1[0xa] = var_5c0_1
                rsi_1[0xb].q = rax_14
            
            uint128_t* rbp_1 = rsi_1
            void* r14_1 = i + 0xb8
            
            while (true)
                rbp_1 += 0xb8
                uint64_t rax_13
                
                if (rbp_1 u<= i)
                    zmm6.d = sub_141e24dc0(rsi_1, 0).d f+ *(rsi_1 + 0x34)
                    zmm0_2.d = sub_141e24dc0(rbp_1, 0).d f+ *(rbp_1 + 0x34)
                    zmm1.d = zmm6.d f- zmm0_2.d
                    
                    if (_mm_and_ps(zmm1, zmm7).d f> zmm8.d)
                        rax_13.b = zmm0_2.d f> zmm6.d
                    else
                        rax_13.b = *(rsi_1 + 0xa4) s< *(rbp_1 + 0xa4)
                    
                    if (rax_13.b == 0)
                        continue
                
                do
                    r14_1 -= 0xb8
                    
                    if (r14_1 u<= rsi_1)
                        break
                    
                    zmm6.d = sub_141e24dc0(r14_1, 0).d f+ *(r14_1 + 0x34)
                    zmm0_2.d = sub_141e24dc0(rsi_1, 0).d f+ *(rsi_1 + 0x34)
                    zmm1.d = zmm6.d f- zmm0_2.d
                    
                    if (_mm_and_ps(zmm1, zmm7).d f> zmm8.d)
                        rax_13.b = zmm0_2.d f> zmm6.d
                    else
                        rax_13.b = *(r14_1 + 0xa4) s< *(rsi_1 + 0xa4)
                while (rax_13.b == 0)
                
                if (rbp_1 u> r14_1)
                    break
                
                if (rbp_1 != r14_1)
                    uint64_t rax_16 = rbp_1[0xb].q
                    uint128_t var_5a8_1 = *rbp_1
                    uint128_t var_598_1 = rbp_1[1]
                    uint128_t var_588_1 = rbp_1[2]
                    uint128_t var_578_1 = rbp_1[3]
                    uint128_t var_568_1 = rbp_1[4]
                    uint128_t var_558_1 = rbp_1[5]
                    uint128_t var_548_1 = rbp_1[6]
                    uint128_t var_538_1 = rbp_1[7]
                    uint128_t var_528_1 = rbp_1[8]
                    uint128_t var_518_1 = rbp_1[9]
                    uint128_t var_508_1 = rbp_1[0xa]
                    *rbp_1 = *r14_1
                    rbp_1[1] = *(r14_1 + 0x10)
                    rbp_1[2] = *(r14_1 + 0x20)
                    rbp_1[3] = *(r14_1 + 0x30)
                    rbp_1[4] = *(r14_1 + 0x40)
                    rbp_1[5] = *(r14_1 + 0x50)
                    rbp_1[6] = *(r14_1 + 0x60)
                    rbp_1[7] = *(r14_1 + 0x70)
                    rbp_1[8] = *(r14_1 + 0x80)
                    rbp_1[9] = *(r14_1 + 0x90)
                    rbp_1[0xa] = *(r14_1 + 0xa0)
                    rbp_1[0xb].q = *(r14_1 + 0xb0)
                    *r14_1 = var_5a8_1
                    *(r14_1 + 0x10) = var_598_1
                    *(r14_1 + 0x20) = var_588_1
                    *(r14_1 + 0x30) = var_578_1
                    *(r14_1 + 0x40) = var_568_1
                    *(r14_1 + 0x50) = var_558_1
                    *(r14_1 + 0x60) = var_548_1
                    *(r14_1 + 0x70) = var_538_1
                    *(r14_1 + 0x80) = var_528_1
                    *(r14_1 + 0x90) = var_518_1
                    *(r14_1 + 0xa0) = var_508_1
                    *(r14_1 + 0xb0) = rax_16
            
            if (rsi_1 != r14_1)
                int64_t rax_18 = rsi_1[0xb].q
                uint128_t var_4f0_1 = *rsi_1
                uint128_t var_4e0_1 = rsi_1[1]
                uint128_t var_4d0_1 = rsi_1[2]
                uint128_t var_4c0_1 = rsi_1[3]
                uint128_t var_4b0_1 = rsi_1[4]
                uint128_t var_4a0_1 = rsi_1[5]
                uint128_t var_490_1 = rsi_1[6]
                uint128_t var_480_1 = rsi_1[7]
                uint128_t var_470_1 = rsi_1[8]
                uint128_t var_460_1 = rsi_1[9]
                uint128_t var_450_1 = rsi_1[0xa]
                *rsi_1 = *r14_1
                rsi_1[1] = *(r14_1 + 0x10)
                rsi_1[2] = *(r14_1 + 0x20)
                rsi_1[3] = *(r14_1 + 0x30)
                rsi_1[4] = *(r14_1 + 0x40)
                rsi_1[5] = *(r14_1 + 0x50)
                rsi_1[6] = *(r14_1 + 0x60)
                rsi_1[7] = *(r14_1 + 0x70)
                rsi_1[8] = *(r14_1 + 0x80)
                rsi_1[9] = *(r14_1 + 0x90)
                rsi_1[0xa] = *(r14_1 + 0xa0)
                rsi_1[0xb].q = *(r14_1 + 0xb0)
                *r14_1 = var_4f0_1
                *(r14_1 + 0x10) = var_4e0_1
                *(r14_1 + 0x20) = var_4d0_1
                *(r14_1 + 0x30) = var_4c0_1
                *(r14_1 + 0x40) = var_4b0_1
                *(r14_1 + 0x50) = var_4a0_1
                *(r14_1 + 0x60) = var_490_1
                *(r14_1 + 0x70) = var_480_1
                *(r14_1 + 0x80) = var_470_1
                *(r14_1 + 0x90) = var_460_1
                *(r14_1 + 0xa0) = var_450_1
                *(r14_1 + 0xb0) = rax_18
            
            r12_1 -= 1
            
            if ((r14_1 - rsi_1 - 0xb8) s/ 0xb8 s< (i - rbp_1) s/ 0xb8)
                if (i u> rbp_1)
                    *r13_1 = rbp_1
                    r13_1[1] = i
                    r13_1[2].d = r12_1
                    r13_1 = &r13_1[3]
                
                if (rsi_1 + 0xb8 u>= r14_1)
                    break
                
                i = r14_1 - 0xb8
            else
                if (rsi_1 + 0xb8 u< r14_1)
                    *r13_1 = rsi_1
                    r13_1[1] = r14_1 - 0xb8
                    r13_1[2].d = r12_1
                    r13_1 = &r13_1[3]
                
                if (i u<= rbp_1)
                    break
                
                rsi_1 = rbp_1
            
            rdx_4 = ((i - rsi_1) s/ 0xb8).d + 1
            
            if (r12_1 == 0)
                goto label_141e371b4
    
    r13_1 -= 0x18
    
    if (r13_1 u< &var_378)
        break

__security_check_cookie(rax_2 ^ &var_698)
