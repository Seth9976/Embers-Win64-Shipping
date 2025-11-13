// 函数: sub_140bd4c20
// 地址: 0x140bd4c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_408
int64_t rax_2 = __security_cookie ^ &var_408
int64_t var_348 = arg1
int64_t r9
int64_t var_3c8_1 = r9
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
    int32_t rax_8 = ((r13_1 - r12_1) s>> 3).d + 1
    
    if (zmm0_2 == 0)
    label_140bd4f1c:
        sub_140bd36c0(r12_1, rax_8)
    label_140bd4f21:
        rcx_3 = var_3e8_1
    else
        while (true)
            int64_t var_3dc
            int64_t var_3d4
            
            if (rax_8 s<= 8)
                if (r13_1 u<= r12_1)
                    break
                
                do
                    int64_t* r15_2 = r12_1
                    int64_t* r14_2 = &r12_1[1]
                    
                    if (&r12_1[1] u<= r13_1)
                        do
                            void* rsi_3 = *r15_2
                            var_3d4 = *(*r14_2 + 0x18)
                            int16_t* var_370
                            sub_140b63b70(&var_3d4, &var_370)
                            var_3dc = *(rsi_3 + 0x18)
                            int16_t* var_380
                            sub_140b63b70(&var_3dc, &var_380)
                            int16_t* const rdx_13 = &data_142d40450
                            int16_t* const rcx_29 = &data_142d40450
                            int32_t var_368
                            
                            if (var_368 != 0)
                                rdx_13 = var_370
                            
                            int32_t var_378
                            
                            if (var_378 != 0)
                                rcx_29 = var_380
                            
                            int32_t rax_29 = sub_140a54510(rcx_29, rdx_13)
                            int16_t* rcx_30 = var_380
                            rsi_3.b = rax_29 s< 0
                            
                            if (rcx_30 != 0)
                                sub_140a74f90(rcx_30)
                            
                            int16_t* rcx_31 = var_370
                            
                            if (rcx_31 != 0)
                                sub_140a74f90(rcx_31)
                            
                            int64_t* rax_30 = r14_2
                            
                            if (rsi_3.b == 0)
                                rax_30 = r15_2
                            
                            r14_2 = &r14_2[1]
                            r15_2 = rax_30
                        while (r14_2 u<= r13_1)
                    
                    int64_t rcx_32 = *r15_2
                    *r15_2 = *r13_1
                    *r13_1 = rcx_32
                    r13_1 -= 8
                while (r13_1 u> r12_1)
                
                goto label_140bd4f21
            
            if (rax_8 s< 0)
                rax_8 += 1
            
            int64_t* r14_1 = r13_1 + 8
            int64_t rdx_1 = sx.q(rax_8 s>> 1)
            int64_t* r15_1 = r12_1
            int64_t rcx_4 = r12_1[rdx_1]
            r12_1[rdx_1] = *r12_1
            *r12_1 = rcx_4
            int64_t rax_17
            
            while (true)
                r15_1 = &r15_1[1]
                
                if (r15_1 u<= r13_1)
                    void* rsi_1 = *r12_1
                    var_3dc = *(*r15_1 + 0x18)
                    int16_t* var_3b0
                    sub_140b63b70(&var_3dc, &var_3b0)
                    var_3d4 = *(rsi_1 + 0x18)
                    int16_t* var_3c0
                    sub_140b63b70(&var_3d4, &var_3c0)
                    int16_t* const rdx_4 = &data_142d40450
                    int16_t* const rcx_8 = &data_142d40450
                    int32_t var_3a8
                    
                    if (var_3a8 != 0)
                        rdx_4 = var_3b0
                    
                    int32_t var_3b8
                    
                    if (var_3b8 != 0)
                        rcx_8 = var_3c0
                    
                    int32_t rax_13 = sub_140a54510(rcx_8, rdx_4)
                    int16_t* rcx_9 = var_3c0
                    rsi_1.b = rax_13 s< 0
                    
                    if (rcx_9 != 0)
                        sub_140a74f90(rcx_9)
                    
                    int16_t* rcx_10 = var_3b0
                    
                    if (rcx_10 != 0)
                        sub_140a74f90(rcx_10)
                    
                    if (rsi_1.b == 0)
                        continue
                
                void* rsi_2
                
                do
                    r14_1 -= 8
                    
                    if (r14_1 u<= r12_1)
                        break
                    
                    rsi_2 = *r14_1
                    var_3d4 = *(*r12_1 + 0x18)
                    int16_t* var_390
                    sub_140b63b70(&var_3d4, &var_390)
                    var_3dc = *(rsi_2 + 0x18)
                    int16_t* var_3a0
                    sub_140b63b70(&var_3dc, &var_3a0)
                    int16_t* const rdx_7 = &data_142d40450
                    int16_t* const rcx_14 = &data_142d40450
                    int32_t var_388
                    
                    if (var_388 != 0)
                        rdx_7 = var_390
                    
                    int32_t var_398
                    
                    if (var_398 != 0)
                        rcx_14 = var_3a0
                    
                    int32_t rax_16 = sub_140a54510(rcx_14, rdx_7)
                    int16_t* rcx_15 = var_3a0
                    rsi_2.b = rax_16 s< 0
                    
                    if (rcx_15 != 0)
                        sub_140a74f90(rcx_15)
                    
                    int16_t* rcx_16 = var_390
                    
                    if (rcx_16 != 0)
                        sub_140a74f90(rcx_16)
                while (rsi_2.b == 0)
                rax_17 = *r14_1
                
                if (r15_1 u> r14_1)
                    break
                
                int64_t rcx_17 = *r15_1
                *r15_1 = rax_17
                *r14_1 = rcx_17
            
            int64_t rcx_18 = *r12_1
            *r12_1 = rax_17
            int32_t rdx_9 = var_3e0_1 - 1
            *r14_1 = rcx_18
            var_3e0_1 = rdx_9
            rcx_3 = var_3e8_1
            
            if (((r14_1 - r12_1 - 8) & 0xfffffffffffffff8)
                    s< ((r13_1 - r15_1) & 0xfffffffffffffff8))
                if (r13_1 u> r15_1)
                    *rcx_3 = r15_1
                    rcx_3[1] = r13_1
                    rcx_3[2].d = rdx_9
                    rcx_3 = &rcx_3[3]
                    var_3e8_1 = rcx_3
                
                if (&r12_1[1] u>= r14_1)
                    break
                
                r13_1 = &r14_1[-1]
            else
                if (&r12_1[1] u< r14_1)
                    *rcx_3 = r12_1
                    rcx_3[1] = &r14_1[-1]
                    rcx_3[2].d = rdx_9
                    rcx_3 = &rcx_3[3]
                    var_3e8_1 = rcx_3
                
                if (r13_1 u<= r15_1)
                    break
                
                r12_1 = r15_1
            
            rcx_3 = var_3e8_1
            rax_8 = ((r13_1 - r12_1) s>> 3).d + 1
            
            if (rdx_9 == 0)
                goto label_140bd4f1c
    
    rcx_3 -= 0x18
    var_3e8_1 = rcx_3
    
    if (rcx_3 u< &var_348)
        break

__security_check_cookie(rax_2 ^ &var_408)
