// 函数: sub_140bd47e0
// 地址: 0x140bd47e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_408
int64_t rax_2 = __security_cookie ^ &var_408
int64_t var_348 = arg1
int64_t r9
int64_t var_3d0_1 = r9
int64_t var_340_1 = arg1 + (sx.q(arg2) << 3) - 8
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_338_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_330
memset(&var_330, 0, 0x2e8)
int64_t* rcx_3 = &var_348
int64_t* var_3e8_1 = &var_348

while (true)
    uint128_t zmm2 = *rcx_3
    int32_t zmm0_2 = (rcx_3[2]).d
    int64_t* r12_1 = zmm2.q
    void* r13_1 = _mm_bsrli_si128(zmm2, 8).q
    int32_t var_3e0_1 = zmm0_2
    void* var_3d8_1 = r13_1
    int32_t rax_8 = ((r13_1 - r12_1) s>> 3).d + 1
    
    if (zmm0_2 == 0)
    label_140bd4adb:
        sub_140bd3350(r12_1, rax_8)
    label_140bd4ae0:
        rcx_3 = var_3e8_1
    else
        while (true)
            if (rax_8 s<= 8)
                if (r13_1 u<= r12_1)
                    break
                
                do
                    int64_t* r14_2 = r12_1
                    int64_t* rsi_2 = &r12_1[1]
                    
                    if (&r12_1[1] u<= r13_1)
                        do
                            void* r15_3 = *r14_2
                            void* rdx_13 = *rsi_2
                            int32_t rax_26 = *(r15_3 + 0x4c)
                            int32_t temp1_1 = *(rdx_13 + 0x4c)
                            
                            if (rax_26 != temp1_1)
                                r15_3.b = rax_26 s< temp1_1
                            else
                                int16_t* var_378
                                sub_140b63b70(rdx_13 + 0x28, &var_378)
                                int16_t* var_388
                                sub_140b63b70(r15_3 + 0x28, &var_388)
                                int16_t* const rdx_16 = &data_142d40450
                                int16_t* const rcx_25 = &data_142d40450
                                int32_t var_370
                                
                                if (var_370 != 0)
                                    rdx_16 = var_378
                                
                                int32_t var_380
                                
                                if (var_380 != 0)
                                    rcx_25 = var_388
                                
                                int32_t rax_27 = sub_140a54510(rcx_25, rdx_16)
                                int16_t* rcx_26 = var_388
                                r15_3.b = rax_27 s< 0
                                
                                if (rcx_26 != 0)
                                    sub_140a74f90(rcx_26)
                                
                                int16_t* rcx_27 = var_378
                                
                                if (rcx_27 != 0)
                                    sub_140a74f90(rcx_27)
                            
                            int64_t* rax_28 = rsi_2
                            
                            if (r15_3.b == 0)
                                rax_28 = r14_2
                            
                            rsi_2 = &rsi_2[1]
                            r14_2 = rax_28
                        while (rsi_2 u<= r13_1)
                    
                    int64_t rcx_28 = *r14_2
                    *r14_2 = *r13_1
                    *r13_1 = rcx_28
                    r13_1 -= 8
                while (r13_1 u> r12_1)
                
                goto label_140bd4ae0
            
            if (rax_8 s< 0)
                rax_8 += 1
            
            int64_t* rsi_1 = r13_1 + 8
            int64_t rdx_1 = sx.q(rax_8 s>> 1)
            int64_t* r14_1 = r12_1
            int64_t rcx_4 = r12_1[rdx_1]
            r12_1[rdx_1] = *r12_1
            *r12_1 = rcx_4
            void* r15_2
            
            while (true)
                r14_1 = &r14_1[1]
                
                if (r14_1 u<= r13_1)
                    void* r15_1 = *r12_1
                    void* rdx_2 = *r14_1
                    int32_t rax_11 = *(r15_1 + 0x4c)
                    int32_t temp0_3 = *(rdx_2 + 0x4c)
                    
                    if (rax_11 != temp0_3)
                        r15_1.b = rax_11 s< temp0_3
                    else
                        int16_t* var_3b8
                        sub_140b63b70(rdx_2 + 0x28, &var_3b8)
                        int16_t* var_3c8
                        sub_140b63b70(r15_1 + 0x28, &var_3c8)
                        int16_t* const rdx_5 = &data_142d40450
                        int16_t* const rcx_7 = &data_142d40450
                        int32_t var_3b0
                        
                        if (var_3b0 != 0)
                            rdx_5 = var_3b8
                        
                        int32_t var_3c0
                        
                        if (var_3c0 != 0)
                            rcx_7 = var_3c8
                        
                        int32_t rax_12 = sub_140a54510(rcx_7, rdx_5)
                        int16_t* rcx_8 = var_3c8
                        r15_1.b = rax_12 s< 0
                        
                        if (rcx_8 != 0)
                            sub_140a74f90(rcx_8)
                        
                        int16_t* rcx_9 = var_3b8
                        
                        if (rcx_9 != 0)
                            sub_140a74f90(rcx_9)
                    
                    if (r15_1.b == 0)
                        continue
                
                do
                    r15_2 = rsi_1[-1]
                    rsi_1 -= 8
                    
                    if (rsi_1 u<= r12_1)
                        break
                    
                    void* rdx_6 = *r12_1
                    int32_t rax_13 = *(r15_2 + 0x4c)
                    int32_t temp2_1 = *(rdx_6 + 0x4c)
                    
                    if (rax_13 != temp2_1)
                        r13_1.b = rax_13 s< temp2_1
                    else
                        int16_t* var_398
                        sub_140b63b70(rdx_6 + 0x28, &var_398)
                        int16_t* var_3a8
                        sub_140b63b70(r15_2 + 0x28, &var_3a8)
                        int16_t* const rdx_9 = &data_142d40450
                        int16_t* const rcx_12 = &data_142d40450
                        int32_t var_390
                        
                        if (var_390 != 0)
                            rdx_9 = var_398
                        
                        int32_t var_3a0
                        
                        if (var_3a0 != 0)
                            rcx_12 = var_3a8
                        
                        int32_t rax_14 = sub_140a54510(rcx_12, rdx_9)
                        int16_t* rcx_13 = var_3a8
                        r13_1.b = rax_14 s< 0
                        
                        if (rcx_13 != 0)
                            sub_140a74f90(rcx_13)
                        
                        int16_t* rcx_14 = var_398
                        
                        if (rcx_14 != 0)
                            sub_140a74f90(rcx_14)
                        
                        r15_2 = *rsi_1
                while (r13_1.b == 0)
                
                r13_1 = var_3d8_1
                
                if (r14_1 u> rsi_1)
                    break
                
                int64_t rcx_15 = *r14_1
                *r14_1 = *rsi_1
                *rsi_1 = rcx_15
            
            int64_t rax_16 = *r12_1
            *r12_1 = r15_2
            *rsi_1 = rax_16
            int32_t rdx_11 = var_3e0_1 - 1
            var_3e0_1 = rdx_11
            rcx_3 = var_3e8_1
            
            if (((rsi_1 - r12_1 - 8) & 0xfffffffffffffff8)
                    s< ((r13_1 - r14_1) & 0xfffffffffffffff8))
                if (r13_1 u> r14_1)
                    *rcx_3 = r14_1
                    rcx_3[1] = r13_1
                    rcx_3[2].d = rdx_11
                    rcx_3 = &rcx_3[3]
                    var_3e8_1 = rcx_3
                
                if (&r12_1[1] u>= rsi_1)
                    break
                
                r13_1 = &rsi_1[-1]
                var_3d8_1 = r13_1
            else
                if (&r12_1[1] u< rsi_1)
                    *rcx_3 = r12_1
                    rcx_3[1] = &rsi_1[-1]
                    rcx_3[2].d = rdx_11
                    rcx_3 = &rcx_3[3]
                    var_3e8_1 = rcx_3
                
                if (r13_1 u<= r14_1)
                    break
                
                r12_1 = r14_1
            
            rcx_3 = var_3e8_1
            rax_8 = ((r13_1 - r12_1) s>> 3).d + 1
            
            if (rdx_11 == 0)
                goto label_140bd4adb
    
    rcx_3 -= 0x18
    var_3e8_1 = rcx_3
    
    if (rcx_3 u< &var_348)
        break

__security_check_cookie(rax_2 ^ &var_408)
