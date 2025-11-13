// 函数: sub_140d14c10
// 地址: 0x140d14c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_3b8
int64_t rax_2 = __security_cookie ^ &var_3b8
int64_t var_348 = arg1
int64_t r9
int64_t var_368_1 = r9
char var_398_1 = arg3
int64_t var_340_1 = arg1 + (sx.q(arg2) << 3) - 8
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_338_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_330
memset(&var_330, 0, 0x2e8)
int64_t* rdx = &var_348
int64_t* var_390_1 = &var_348

while (true)
    uint128_t zmm2 = *rdx
    int32_t zmm0_2 = (rdx[2]).d
    int64_t* r13_1 = zmm2.q
    void* rcx_3 = _mm_bsrli_si128(zmm2, 8).q
    int32_t var_388_1 = zmm0_2
    void* var_380_1 = rcx_3
    int32_t rax_8 = ((rcx_3 - r13_1) s>> 3).d + 1
    
    if (zmm0_2 == 0)
    label_140d14f48:
        sub_140d14870(r13_1, rax_8)
    label_140d14f4d:
        rdx = var_390_1
    else
        while (true)
            if (rax_8 s<= 8)
                if (rcx_3 u<= r13_1)
                    break
                
                void* rbx_3 = var_380_1
                
                do
                    int64_t* r12_2 = r13_1
                    int64_t* r15_2 = &r13_1[1]
                    
                    if (&r13_1[1] u<= rbx_3)
                        do
                            void* rax_33 = *r12_2
                            void* rsi_5 = *r15_2
                            int64_t rax_34 = sub_140d3cb50(rax_33)
                            int64_t rax_35
                            int64_t rcx_29
                            rax_35, rcx_29 = sub_140d3cb50(rsi_5)
                            
                            if (rax_34 == 0 || rax_35 == 0)
                                if (rax_34 != rax_35)
                                    rcx_29.b = rax_34 != 0
                                else
                                    rcx_29.b = 0
                            else if (rax_34 != rax_35)
                                rcx_29.b = rax_34 u< rax_35
                            else
                                int32_t rax_36 = sub_140d3cbe0(rax_33)
                                int64_t rbp_6 = *(rax_34 + 0x18)
                                int64_t rdx_7 = sx.q(sub_140d3cbe0(rsi_5))
                                rcx_29.b = *((sx.q(rax_36) << 7) + rbp_6 + 0x28)
                                    s< *((rdx_7 << 7) + *(rax_35 + 0x18) + 0x28)
                            
                            int64_t* rax_40 = r15_2
                            
                            if (rcx_29.b == 0)
                                rax_40 = r12_2
                            
                            r15_2 = &r15_2[1]
                            r12_2 = rax_40
                        while (r15_2 u<= rbx_3)
                    
                    int64_t rcx_33 = *r12_2
                    *r12_2 = *rbx_3
                    *rbx_3 = rcx_33
                    rbx_3 -= 8
                while (rbx_3 u> r13_1)
                
                goto label_140d14f4d
            
            if (rax_8 s< 0)
                rax_8 += 1
            
            int64_t* r12_1 = r13_1
            int64_t rdx_1 = sx.q(rax_8 s>> 1)
            int64_t* r15_1 = var_380_1 + 8
            int64_t rcx_4 = r13_1[rdx_1]
            r13_1[rdx_1] = *r13_1
            *r13_1 = rcx_4
            int64_t rax_23
            
            while (true)
                r12_1 = &r12_1[1]
                
                if (r12_1 u<= var_380_1)
                    void* rax_11 = *r13_1
                    void* rsi_1 = *r12_1
                    int64_t rax_12 = sub_140d3cb50(rax_11)
                    int64_t rax_13 = sub_140d3cb50(rsi_1)
                    
                    if (rax_12 == 0 || rax_13 == 0)
                        if (rax_12 == rax_13)
                            continue
                        else
                            rax_13.b = rax_12 != 0
                    else if (rax_12 != rax_13)
                        rax_13.b = rax_12 u< rax_13
                    else
                        int32_t rax_14 = sub_140d3cbe0(rax_11)
                        int64_t rbp_2 = *(rax_12 + 0x18)
                        int64_t rdx_2 = sx.q(sub_140d3cbe0(rsi_1))
                        rax_13.b = *((sx.q(rax_14) << 7) + rbp_2 + 0x28)
                            s< *((rdx_2 << 7) + *(rax_13 + 0x18) + 0x28)
                    
                    if (rax_13.b == 0)
                        continue
                
                while (true)
                    r15_1 -= 8
                    
                    if (r15_1 u<= r13_1)
                        break
                    
                    void* rax_17 = *r15_1
                    void* rsi_3 = *r13_1
                    int64_t rax_18 = sub_140d3cb50(rax_17)
                    int64_t rax_19 = sub_140d3cb50(rsi_3)
                    
                    if (rax_18 == 0 || rax_19 == 0)
                        if (rax_18 == rax_19)
                            continue
                        else
                            rax_19.b = rax_18 != 0
                    else if (rax_18 != rax_19)
                        rax_19.b = rax_18 u< rax_19
                    else
                        int32_t rax_20 = sub_140d3cbe0(rax_17)
                        int64_t rbp_4 = *(rax_18 + 0x18)
                        int64_t rdx_4 = sx.q(sub_140d3cbe0(rsi_3))
                        rax_19.b = *((sx.q(rax_20) << 7) + rbp_4 + 0x28)
                            s< *((rdx_4 << 7) + *(rax_19 + 0x18) + 0x28)
                    
                    if (rax_19.b != 0)
                        break
                
                rax_23 = *r15_1
                
                if (r12_1 u> r15_1)
                    break
                
                int64_t rcx_17 = *r12_1
                *r12_1 = rax_23
                *r15_1 = rcx_17
            
            int64_t rcx_18 = *r13_1
            rdx = var_390_1
            int32_t r8_2 = var_388_1 - 1
            *r13_1 = rax_23
            *r15_1 = rcx_18
            var_388_1 = r8_2
            
            if (((r15_1 - r13_1 - 8) & 0xfffffffffffffff8)
                    s< ((var_380_1 - r12_1) & 0xfffffffffffffff8))
                if (var_380_1 u> r12_1)
                    *rdx = r12_1
                    rdx[1] = var_380_1
                    rdx[2].d = r8_2
                    rdx = &rdx[3]
                    var_390_1 = rdx
                
                if (&r13_1[1] u>= r15_1)
                    break
                
                rcx_3 = &r15_1[-1]
                var_380_1 = rcx_3
            else
                if (&r13_1[1] u< r15_1)
                    *rdx = r13_1
                    rdx[1] = &r15_1[-1]
                    rdx[2].d = r8_2
                    rdx = &rdx[3]
                    var_390_1 = rdx
                
                rcx_3 = var_380_1
                
                if (rcx_3 u<= r12_1)
                    break
                
                r13_1 = r12_1
            
            rdx = var_390_1
            rax_8 = ((rcx_3 - r13_1) s>> 3).d + 1
            
            if (r8_2 == 0)
                goto label_140d14f48
    
    rdx -= 0x18
    var_390_1 = rdx
    
    if (rdx u< &var_348)
        break

__security_check_cookie(rax_2 ^ &var_3b8)
