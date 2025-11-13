// 函数: sub_140d18150
// 地址: 0x140d18150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int32_t* result = sub_140d21cd0(&data_143e1d678, arg2)
int32_t* result_1 = result

if (result != 0)
    if (arg3 != 0)
        int32_t r12_5 = *(arg1 + 0xc)
        int32_t i = 0
        int32_t i_6 = -1
        
        if (result[0xc] s<= 0)
        label_140d1868f:
            int64_t rbx_3 = sx.q(result_1[0xc])
            int32_t rax_51 = (rbx_3 + 1).d
            result_1[0xc] = rax_51
            
            if (rax_51 s> result_1[0xd])
                sub_1405a4cf0(&result_1[0xa])
            
            result = *(result_1 + 0x28)
            result[rbx_3] = r12_5
        else
            int32_t* r14_6 = nullptr
            
            do
                if (i_6 != 0xffffffff)
                    goto label_140d186d2
                
                result = *(result_1 + 0x28)
                int32_t temp1_1 = *(r14_6 + result)
                
                if (temp1_1 s> r12_5)
                    int32_t rsi_3 = result_1[0xc]
                    result_1[0xc] = rsi_3 + 1
                    
                    if (rsi_3 + 1 s> result_1[0xd])
                        sub_1405a4cf0(&result_1[0xa])
                    
                    int64_t rdx_20 = *(result_1 + 0x28) + (sx.q(i) << 2)
                    memmove(rdx_20 + 4, rdx_20, (rsi_3 - i) << 2)
                    result = *(result_1 + 0x28)
                    i_6 = i
                    *(r14_6 + result) = r12_5
                else if (temp1_1 == r12_5)
                    i_6 = i
                
                i += 1
                r14_6 = &r14_6[1]
            while (i s< result_1[0xc])
            
            if (i_6 == 0xffffffff)
                goto label_140d1868f
    else
        int64_t rax_2 = data_143e1b318
        int32_t var_160 = *result
        
        if (rax_2 == 0)
            rax_2 = sub_140cbc430()
            data_143e1b318 = rax_2
        
        int64_t var_120_1 = rax_2
        int32_t* var_128 = &var_160
        int64_t var_110_1 = rax_2
        int32_t** var_118_1 = &var_128
        int64_t var_c8_1 = 0
        CRITICAL_SECTION criticalSection
        InitializeCriticalSection(&criticalSection)
        SetCriticalSectionSpinCount(&criticalSection, 0xfa0)
        int64_t var_58
        __builtin_memset(&var_58, 0, 0x11)
        int32_t var_44_1 = 0
        int64_t var_150 = 0
        int32_t var_148_1 = 0
        int64_t var_140_1 = 0
        int64_t var_138_1 = 0
        
        if (arg1 != 0)
            int32_t i_1 = *(arg1 + 0xc)
            int32_t r8 = data_143e1d9b4
            int64_t r9_1 = data_143e1d9a0
            void* r14_1
            
            if (i_1 s>= r8)
                r14_1 = nullptr
            else
                int16_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(i_1)
                uint32_t rdx_1 = zx.d(temp2_1)
                int32_t rax_5 = temp3_1 + rdx_1
                r14_1 = *(r9_1 + (sx.q(rax_5 s>> 0x10) << 3)) + sx.q(zx.d(rax_5.w) - rdx_1) * 0x18
            
            int32_t i_5 = *(r14_1 + 0xc)
            
            if (i_5 != var_160)
                char rcx_6 = *(r14_1 + 0xb) & 1
                
                if (rcx_6 != 0 || i_5 != 0)
                    if (rcx_6 == 0)
                        i_1 = i_5
                    
                    void* const rdx_12
                    
                    if (i_1 s>= r8)
                        rdx_12 = nullptr
                    else
                        int16_t temp4_1
                        int32_t temp5_1
                        temp4_1:temp5_1 = sx.q(i_1)
                        uint32_t rdx_10 = zx.d(temp4_1)
                        int32_t rax_27 = temp5_1 + rdx_10
                        rdx_12 = *(r9_1 + (sx.q(rax_27 s>> 0x10) << 3))
                            + sx.q(zx.d(rax_27.w) - rdx_10) * 0x18
                    
                    int32_t* r8_3 = *(result + 0x18)
                    int64_t rdx_13 = sx.q(result[8])
                    int32_t* rcx_20 = r8_3
                    void* r13_3 = sx.q(not.d(*(rdx_12 + 0xc))) * 0x50 + data_143e1d678
                    void* rax_35 = &r8_3[rdx_13]
                    
                    if (r8_3 != rax_35)
                        while (*rcx_20 != i_1)
                            rcx_20 = &rcx_20[1]
                            
                            if (rcx_20 == rax_35)
                                goto label_140d1842b
                    
                    if (r8_3 == rax_35 || ((rcx_20 - r8_3) s>> 2).d == 0xffffffff)
                    label_140d1842b:
                        int32_t rax_36 = (rdx_13 + 1).d
                        result[8] = rax_36
                        
                        if (rax_36 s> result[9])
                            sub_1405a4cf0(&result[6])
                        
                        *((rdx_13 << 2) + *(result + 0x18)) = i_1
                    
                    sub_1408d92c0(r13_3 + 0x38, &var_160)
                    int64_t r15 = 0
                    int32_t* r14_4 = *(r13_3 + 0x18)
                    uint64_t r12_2 = sx.q(*(r13_3 + 0x20)) << 2 u>> 2
                    
                    if (r14_4 u> &r14_4[sx.q(*(r13_3 + 0x20))])
                        r12_2 = 0
                    
                    if (r12_2 != 0)
                        do
                            int32_t i_2 = *r14_4
                            
                            if (i_2 != var_160)
                                int32_t* r8_4 = *(result + 0x18)
                                int64_t rdx_15 = sx.q(result[8])
                                int32_t* rcx_25 = r8_4
                                void* rax_40 = &r8_4[rdx_15]
                                
                                if (r8_4 != rax_40)
                                    while (*rcx_25 != i_2)
                                        rcx_25 = &rcx_25[1]
                                        
                                        if (rcx_25 == rax_40)
                                            goto label_140d184cb
                                
                                if (r8_4 == rax_40 || ((rcx_25 - r8_4) s>> 2).d == 0xffffffff)
                                label_140d184cb:
                                    int32_t rax_41 = (rdx_15 + 1).d
                                    result[8] = rax_41
                                    
                                    if (rax_41 s> result[9])
                                        sub_1405a4cf0(&result[6])
                                    
                                    (*(result + 0x18))[rdx_15] = i_2
                            
                            r14_4 = &r14_4[1]
                            r15 += 1
                        while (r15 != r12_2)
                    
                    int64_t r14_5 = 0
                    int32_t* r15_1 = *(r13_3 + 0x28)
                    uint64_t r12_4 = sx.q(*(r13_3 + 0x30)) << 2 u>> 2
                    
                    if (r15_1 u> &r15_1[sx.q(*(r13_3 + 0x30))])
                        r12_4 = 0
                    
                    if (r12_4 != 0)
                        do
                            int32_t i_3 = *r15_1
                            int32_t* rdx_16 = *(result + 0x28)
                            int64_t r8_5 = sx.q(result[0xc])
                            int32_t* rcx_29 = rdx_16
                            void* rax_45 = &rdx_16[r8_5]
                            
                            if (rdx_16 != rax_45)
                                while (*rcx_29 != i_3)
                                    rcx_29 = &rcx_29[1]
                                    
                                    if (rcx_29 == rax_45)
                                        goto label_140d1855f
                            
                            if (rdx_16 == rax_45 || ((rcx_29 - rdx_16) s>> 2).d == 0xffffffff)
                            label_140d1855f:
                                int32_t rax_46 = (r8_5 + 1).d
                                result[0xc] = rax_46
                                
                                if (rax_46 s> result[0xd])
                                    sub_1405a4cf0(&result[0xa])
                                
                                (*(result + 0x28))[r8_5] = i_3
                            
                            r15_1 = &r15_1[1]
                            r14_5 += 1
                        while (r14_5 != r12_4)
                    
                label_140d18597:
                    
                    if (var_148_1 != 0)
                        int64_t* var_168_2 = nullptr
                        sub_140d27af0(&var_128, &var_150)
                        
                        if (var_168_2 != 0)
                            var_168_2[9].d -= 1
                            
                            if (var_168_2[9].d == 1)
                                sub_140a2f6e0(var_168_2)
                    
                    if (var_140_1 != 0)
                        sub_140a74f90(var_140_1)
                    
                    int64_t rcx_37 = var_150
                    
                    if (rcx_37 != 0)
                        sub_140a74f90(rcx_37)
                    
                    int64_t rcx_38 = var_58
                    
                    if (rcx_38 != 0)
                        sub_140a74f90(rcx_38)
                else if (i_1 s> data_143e1d994)
                    char rax_11 = (*(*arg1 + 0x20))(arg1)
                    void* const rax_19
                    int32_t r10_1
                    
                    if (rax_11 != 0 && (arg1[1].d & 0x1400) == 0)
                        r10_1 = *(arg1 + 0xc)
                        
                        if (r10_1 s>= data_143e1d9b4)
                            rax_19 = nullptr
                        else
                            int16_t temp6_1
                            int32_t temp7_1
                            temp6_1:temp7_1 = sx.q(r10_1)
                            uint32_t rdx_4 = zx.d(temp6_1)
                            int32_t rax_14 = temp7_1 + rdx_4
                            rax_19 = *(data_143e1d9a0 + (sx.q(rax_14 s>> 0x10) << 3))
                                + sx.q(zx.d(rax_14.w) - rdx_4) * 0x18
                    
                    if (rax_11 == 0 || (arg1[1].d & 0x1400) != 0
                            || ((*(rax_19 + 8) u>> 0x1e).b & 1) != 0)
                        int32_t i_4 = *(arg1 + 0xc)
                        int32_t* rdx_7 = *(result + 0x28)
                        int64_t r8_2 = sx.q(result[0xc])
                        int32_t* rcx_13 = rdx_7
                        void* rax_22 = &rdx_7[r8_2]
                        
                        if (rdx_7 != rax_22)
                            while (*rcx_13 != i_4)
                                rcx_13 = &rcx_13[1]
                                
                                if (rcx_13 == rax_22)
                                    goto label_140d1836f
                        
                        if (rdx_7 == rax_22 || ((rcx_13 - rdx_7) s>> 2).d == 0xffffffff)
                        label_140d1836f:
                            int32_t rax_23 = (r8_2 + 1).d
                            result[0xc] = rax_23
                            
                            if (rax_23 s> result[0xd])
                                sub_1405a4cf0(&result[0xa])
                            
                            *((r8_2 << 2) + *(result + 0x28)) = i_4
                    else
                        sub_140d17860(&var_160, r10_1, r14_1, arg1, &var_150, 1)
                    
                    goto label_140d18597
        
        result = DeleteCriticalSection(&criticalSection)

label_140d186d2:
__security_check_cookie(rax_1 ^ &var_198)
return result
