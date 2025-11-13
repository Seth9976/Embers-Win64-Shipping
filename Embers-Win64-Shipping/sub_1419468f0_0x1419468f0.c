// 函数: sub_1419468f0
// 地址: 0x1419468f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
uint64_t var_40 = __security_cookie ^ &var_218
uint64_t result

if (arg2 == 0)
    *arg3 = 0
    result.b = 0
else
    char rax_1
    
    if (data_143f01c92 == 0)
        rax_1 = sub_140a80f40()
    
    char rax_2
    
    if (data_143f01c92 != 0 || rax_1 == 0)
        rax_2 = sub_140a80f10()
    
    char rdx
    
    if ((data_143f01c92 == 0 && rax_1 != 0) || rax_2 != 0)
        rdx = 1
    else
        rdx = 0
    
    int32_t rax_3 = 0
    
    if (0 == *(arg2 + 0x38))
        *(arg2 + 0x38) = 0
    else
        rax_3 = *(arg2 + 0x38)
    
    int32_t rax_4 = 0
    
    if (0 == *(arg2 + 0x34))
        *(arg2 + 0x34) = 0
    else
        rax_4 = *(arg2 + 0x34)
    
    if (rax_3 != rax_4)
        if (rdx == 0)
            void*** rcx_4 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
            void* rax_5 = &rcx_4[0xa]
            
            if (arg4 == 0)
                if (rax_5 u> data_143f02bd0)
                    sub_140b0e3d0(&data_143f02bc8, 0x60)
                    rcx_4 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
                    rax_5 = &rcx_4[0xa]
                
                data_143f02bac += 1
                data_143f02bc8 = rax_5
                void* var_1e8_5 = arg2
                *data_143f02ba0 = rcx_4
                void** const var_a8 = &data_142d42ed8
                int64_t (* var_c8_1)(int64_t* arg1) = sub_141932470
                data_143f02ba0 = &rcx_4[1]
                void*** var_b8_1 = nullptr
                int128_t var_a0_1 = arg1.o
                rcx_4[1] = 0
                *rcx_4 = &data_142ff4958
                rcx_4[2] = var_c8_1
                rcx_4[4] = 0
                
                if (rcx_4[2] != 0)
                    void** const* rcx_42 = &var_a8
                    
                    if (var_b8_1 != 0)
                        rcx_42 = var_b8_1
                    
                    (**rcx_42)(rcx_42)
                
                if (var_c8_1 != 0)
                    void** const* rcx_43 = &var_a8
                    
                    if (var_b8_1 != 0)
                        rcx_43 = var_b8_1
                    
                    (*rcx_43)[2](rcx_43)
            else
                int64_t* rcx_27
                
                if (data_143f01c93 == 0)
                    if (rax_5 u> data_143f02bd0)
                        sub_140b0e3d0(&data_143f02bc8, 0x60)
                        rcx_4 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
                        rax_5 = &rcx_4[0xa]
                    
                    data_143f02bac += 1
                    data_143f02bc8 = rax_5
                    void* var_1e8_3 = arg2
                    *data_143f02ba0 = rcx_4
                    void** const var_128 = &data_142d42ed8
                    int64_t (* var_148_1)(int64_t* arg1) = sub_1419320a0
                    data_143f02ba0 = &rcx_4[1]
                    void*** var_138_1 = nullptr
                    int128_t var_120_1 = arg1.o
                    rcx_4[1] = 0
                    *rcx_4 = &data_142ff4958
                    rcx_4[2] = var_148_1
                    rcx_4[4] = 0
                    
                    if (rcx_4[2] != 0)
                        void** const* rcx_30 = &var_128
                        
                        if (var_138_1 != 0)
                            rcx_30 = var_138_1
                        
                        (**rcx_30)(rcx_30)
                    
                    if (var_148_1 != 0)
                        void** const* rcx_31 = &var_128
                        
                        if (var_138_1 != 0)
                            rcx_31 = var_138_1
                        
                        (*rcx_31)[2](rcx_31)
                    
                    int64_t* var_1d0
                    sub_141980430(&data_143f02b98, &var_1d0, 0)
                    void*** rcx_34 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
                    void* rax_39 = &rcx_34[0xa]
                    
                    if (rax_39 u> data_143f02bd0)
                        sub_140b0e3d0(&data_143f02bc8, 0x60)
                        rcx_34 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
                        rax_39 = &rcx_34[0xa]
                    
                    data_143f02bac += 1
                    data_143f02bc8 = rax_39
                    void* var_1e8_4 = arg2
                    *data_143f02ba0 = rcx_34
                    void** const var_e8 = &data_142d42ed8
                    int64_t (* var_108_1)(int64_t* arg1) = sub_1419320c0
                    data_143f02ba0 = &rcx_34[1]
                    void*** var_f8_1 = nullptr
                    int128_t var_e0_1 = arg1.o
                    rcx_34[1] = 0
                    *rcx_34 = &data_142ff4958
                    rcx_34[2] = var_108_1
                    rcx_34[4] = 0
                    
                    if (rcx_34[2] != 0)
                        void** const* rcx_37 = &var_e8
                        
                        if (var_f8_1 != 0)
                            rcx_37 = var_f8_1
                        
                        (**rcx_37)(rcx_37)
                    
                    if (var_108_1 != 0)
                        void** const* rcx_38 = &var_e8
                        
                        if (var_f8_1 != 0)
                            rcx_38 = var_f8_1
                        
                        (*rcx_38)[2](rcx_38)
                    
                    if (data_143f02bac u> 0)
                        j_sub_14196ef60(&data_143f02b88, &data_143f02b98, arg5, arg6)
                    
                    sub_14198b920(&var_1d0)
                    rcx_27 = var_1d0
                    
                    if (rcx_27 != 0)
                    label_141946d2d:
                        rcx_27[9].d -= 1
                        
                        if (rcx_27[9].d == 1)
                            sub_140a2f6e0(rcx_27)
                else
                    if (rax_5 u> data_143f02bd0)
                        sub_140b0e3d0(&data_143f02bc8, 0x60)
                        rcx_4 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
                        rax_5 = &rcx_4[0xa]
                    
                    data_143f02bac += 1
                    data_143f02bc8 = rax_5
                    void* var_1e8_1 = arg2
                    *data_143f02ba0 = rcx_4
                    void** const var_1a8 = &data_142d42ed8
                    int64_t (* var_1c8_1)(int64_t* arg1) = sub_1419320a0
                    data_143f02ba0 = &rcx_4[1]
                    void*** var_1b8_1 = nullptr
                    int128_t var_1a0_1 = arg1.o
                    rcx_4[1] = 0
                    *rcx_4 = &data_142ff4958
                    rcx_4[2] = var_1c8_1
                    rcx_4[4] = 0
                    
                    if (rcx_4[2] != 0)
                        void** const* rcx_7 = &var_1a8
                        
                        if (var_1b8_1 != 0)
                            rcx_7 = var_1b8_1
                        
                        (**rcx_7)(rcx_7)
                    
                    if (var_1c8_1 != 0)
                        void** const* rcx_8 = &var_1a8
                        
                        if (var_1b8_1 != 0)
                            rcx_8 = var_1b8_1
                        
                        (*rcx_8)[2](rcx_8)
                    
                    int64_t* var_1d8
                    sub_141980430(&data_143f02b98, &var_1d8, 0)
                    void*** rcx_11 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
                    void* rax_13 = &rcx_11[0xa]
                    
                    if (rax_13 u> data_143f02bd0)
                        sub_140b0e3d0(&data_143f02bc8, 0x60)
                        rcx_11 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
                        rax_13 = &rcx_11[0xa]
                    
                    data_143f02bac += 1
                    data_143f02bc8 = rax_13
                    void* var_1e8_2 = arg2
                    *data_143f02ba0 = rcx_11
                    void** const var_168 = &data_142d42ed8
                    int64_t (* var_188_1)(int64_t* arg1) = sub_1419320c0
                    data_143f02ba0 = &rcx_11[1]
                    void*** var_178_1 = nullptr
                    int128_t var_160_1 = arg1.o
                    rcx_11[1] = 0
                    *rcx_11 = &data_142ff4958
                    rcx_11[2] = var_188_1
                    rcx_11[4] = 0
                    
                    if (rcx_11[2] != 0)
                        void** const* rcx_14 = &var_168
                        
                        if (var_178_1 != 0)
                            rcx_14 = var_178_1
                        
                        (**rcx_14)(rcx_14)
                    
                    if (var_188_1 != 0)
                        void** const* rcx_15 = &var_168
                        
                        if (var_178_1 != 0)
                            rcx_15 = var_178_1
                        
                        (*rcx_15)[2](rcx_15)
                    
                    if (data_143f02bac u> 0)
                        j_sub_14196ef60(&data_143f02b88, &data_143f02b98, arg5, arg6)
                    
                    int64_t* rcx_16 = var_1d8
                    int64_t rax_21 = 0
                    
                    if (0 == rcx_16[1])
                        rcx_16[1] = 0
                    else
                        rax_21 = rcx_16[1]
                    
                    if (((rax_21 u>> 0x1a).b & 1) == 0)
                        int64_t rax_29
                        
                        do
                            void var_88
                            void** rax_23 = sub_1419360a0(&var_88, nullptr, 0xff)
                            void* rcx_18 = *rax_23
                            *(rcx_18 + 0x10) = arg2
                            *(rcx_18 + 0x18) = arg1
                            *(rcx_18 + 0x20) = 0
                            void* rcx_19 = *rax_23
                            int32_t r8_1 = rax_23[2].d
                            int64_t* rdx_5 = rax_23[1]
                            int64_t* rbx_1 = *(rcx_19 + 0x30)
                            int64_t* var_1e0_1 = rbx_1
                            int32_t* rsi_1 = &rbx_1[9]
                            
                            if (rbx_1 != 0)
                                *rsi_1 += 1
                                rbx_1 = var_1e0_1
                            
                            sub_14194dc70(rcx_19, rdx_5, r8_1, 1)
                            int64_t* rax_24 = sub_140a242a0()
                            void** var_50_1 = nullptr
                            int32_t var_44_1 = 4
                            int32_t i_2 = 1
                            int64_t* var_70 = rbx_1
                            
                            if (rbx_1 != 0)
                                *rsi_1 += 1
                            
                            int64_t r9_1 = *rax_24
                            (*(r9_1 + 0x48))(rax_24, &var_70, 0xff, r9_1)
                            void** rcx_21 = var_50_1
                            void** rbx_2 = &var_70
                            int32_t i_1 = i_2
                            
                            if (rcx_21 != 0)
                                rbx_2 = rcx_21
                            
                            if (i_1 != 0)
                                int32_t i
                                
                                do
                                    int64_t* rcx_22 = *rbx_2
                                    
                                    if (rcx_22 != 0)
                                        rcx_22[9].d -= 1
                                        
                                        if (rcx_22[9].d == 1)
                                            sub_140a2f6e0(rcx_22)
                                    
                                    rbx_2 = &rbx_2[1]
                                    i = i_1
                                    i_1 -= 1
                                while (i != 1)
                                rcx_21 = var_50_1
                            
                            if (rcx_21 != 0)
                                sub_140a74f90(rcx_21)
                            
                            int32_t rax_26 = 0
                            
                            if (0 == *(arg2 + 0x38))
                                *(arg2 + 0x38) = 0
                            else
                                rax_26 = *(arg2 + 0x38)
                            
                            int32_t rax_27 = 0
                            
                            if (0 == *(arg2 + 0x34))
                                *(arg2 + 0x34) = 0
                            else
                                rax_27 = *(arg2 + 0x34)
                            
                            if (rax_26 == rax_27)
                                if (var_1e0_1 != 0)
                                    int32_t rax_31 = *rsi_1
                                    *rsi_1 -= 1
                                    
                                    if (rax_31 == 1)
                                        sub_140a2f6e0(var_1e0_1)
                                
                                break
                            
                            if (var_1e0_1 != 0)
                                int32_t rax_28 = *rsi_1
                                *rsi_1 -= 1
                                
                                if (rax_28 == 1)
                                    sub_140a2f6e0(var_1e0_1)
                            
                            int64_t* rcx_25 = var_1d8
                            rax_29 = 0
                            
                            if (0 == rcx_25[1])
                                rcx_25[1] = 0
                            else
                                rax_29 = rcx_25[1]
                        while (((rax_29 u>> 0x1a).b & 1) == 0)
                    
                    rcx_27 = var_1d8
                    
                    if (rcx_27 != 0)
                        goto label_141946d2d
        else
            sub_14193d6f0(arg1, arg2, arg4)
    
    int32_t rax_54 = 0
    
    if (0 == *(arg2 + 0x38))
        *(arg2 + 0x38) = 0
    else
        rax_54 = *(arg2 + 0x38)
    
    result = 0
    
    if (0 == *(arg2 + 0x34))
        *(arg2 + 0x34) = 0
    else
        result = zx.q(*(arg2 + 0x34))
    
    if (rax_54 != result.d || *(arg2 + 0x3c) == 0)
        *arg3 = 0
        result.b = 0
    else if (*(arg2 + 0x40) != 2)
        *arg3 = *(arg2 + 0x28)
        result.b = 1
    else
        int64_t rax_55
        int64_t rdx_11
        rdx_11:rax_55 = mulu.dp.q(0x431bde82d7b634db, data_143f0f168)
        uint64_t rcx_46 = rdx_11 u>> 0x12
        
        if (rcx_46 u<= 1)
            rcx_46 = 1
        
        *arg3 = divu.dp.q(0:(*(arg2 + 0x28)), rcx_46)
        result.b = 1

__security_check_cookie(var_40 ^ &var_218)
return result
