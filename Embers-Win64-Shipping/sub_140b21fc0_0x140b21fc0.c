// 函数: sub_140b21fc0
// 地址: 0x140b21fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int128_t* var_58 = arg3
uint32_t result
int16_t* var_98
int16_t* rcx_5
int32_t rbx_1

if (arg2 != 6)
    rbx_1 = 0
    int16_t* var_a8 = nullptr
    int64_t var_a0_1 = 0
    sub_1405947f0(&var_a8, 0x20)
    int16_t* const var_b8
    
    if (arg2 == 0)
        if (&var_a8 == arg1)
            goto label_140b23ac4
        
        int32_t rdi_2 = arg1[1].d
        int64_t rsi_2 = *arg1
        int32_t r8_3 = var_a0_1:4.d
        var_a0_1.d = rdi_2
        
        if (rdi_2 != 0 || r8_3 != 0)
            sub_1405a4c70(&var_a8, rdi_2, r8_3)
            memcpy(var_a8, rsi_2, rdi_2 * 2)
        label_140b23ac4:
            rdi_2 = var_a0_1.d
        else
            var_a0_1:4.d = 0
        
        int32_t rsi_56 = 0
        int64_t r14_27 = 0
        
        while (true)
            int32_t rax_83 = rdi_2 - 1
            
            if (rdi_2 == 0)
                rax_83 = 0
            
            if (rsi_56 s>= rax_83)
                int32_t rsi_57 = rdi_2 - 1
                
                if (rdi_2 == 0)
                    rsi_57 = 0
                
                int32_t rcx_179 = rsi_57
                
                if (rsi_57 s> 0x18)
                    rcx_179 = 0x18
                
                int64_t rdx_139 = sx.q(rcx_179)
                
                if (rdx_139 s> 0x20)
                    rsi_57 = rcx_179
                else if (rsi_57 s> 0x20)
                    rsi_57 = 0x20
                
                var_b8 = nullptr
                int16_t* rax_86 = &data_142d40450
                int64_t var_b0_27 = 0
                
                if (rdi_2 != 0)
                    rax_86 = var_a8
                
                int16_t* r13_1 = nullptr
                int32_t rsi_58 = rsi_57 - rcx_179
                int32_t r14_28 = 0
                void* r15_2 = &rax_86[rdx_139]
                int32_t rax_87 = 0
                
                if (r15_2 != 0 && *r15_2 != 0 && rsi_58 s> 0)
                    if (rsi_58 + 1 s> 0)
                        sub_1405947f0(&var_b8, rsi_58 + 1)
                        rax_87 = var_b0_27:4.d
                        r14_28 = var_b0_27.d
                        r13_1 = var_b8
                    
                    r14_28 = r14_28 + 1 + rsi_58
                    var_b0_27.d = r14_28
                    
                    if (r14_28 s> rax_87)
                        sub_140594770(&var_b8)
                        r14_28 = var_b0_27.d
                        r13_1 = var_b8
                    
                    UnDecorator::getReferenceType(r13_1, r15_2, rsi_58 * 2)
                    r13_1[sx.q(r14_28) - 1] = 0
                    rdi_2 = var_a0_1.d
                
                int16_t* r8_106 = &data_142d40450
                int16_t* const rax_89 = &data_142d40450
                int32_t rsi_59 = rdi_2 - 1
                
                if (r14_28 != 0)
                    rax_89 = r13_1
                
                var_b8 = rax_89
                
                if (rdi_2 == 0)
                    rsi_59 = 0
                
                int32_t rcx_183 = rsi_59
                
                if (rsi_59 s> 0x10)
                    rcx_183 = 0x10
                
                int64_t rdx_143 = sx.q(rcx_183)
                
                if (rdx_143 s> 0x18)
                    rsi_59 = rcx_183
                else if (rsi_59 s> 0x18)
                    rsi_59 = 0x18
                
                int16_t* const var_78 = nullptr
                int16_t* rax_90 = &data_142d40450
                int64_t var_70_1 = 0
                
                if (rdi_2 != 0)
                    rax_90 = var_a8
                
                int16_t* const r12_26 = nullptr
                int32_t rsi_60 = rsi_59 - rcx_183
                int32_t r14_30 = 0
                void* r15_3 = &rax_90[rdx_143]
                int32_t rax_91 = 0
                
                if (r15_3 != 0 && *r15_3 != 0 && rsi_60 s> 0)
                    if (rsi_60 + 1 s> 0)
                        sub_1405947f0(&var_78, rsi_60 + 1)
                        rax_91 = var_70_1:4.d
                        r14_30 = var_70_1.d
                        r12_26 = var_78
                    
                    r14_30 = r14_30 + 1 + rsi_60
                    var_70_1.d = r14_30
                    
                    if (r14_30 s> rax_91)
                        sub_140594770(&var_78)
                        r14_30 = var_70_1.d
                        r12_26 = var_78
                    
                    UnDecorator::getReferenceType(r12_26, r15_3, rsi_60 * 2)
                    r8_106 = &data_142d40450
                    r12_26[sx.q(r14_30) - 1] = 0
                    rdi_2 = var_a0_1.d
                
                int32_t rsi_61 = rdi_2 - 1
                int16_t* const rax_93 = &data_142d40450
                
                if (r14_30 != 0)
                    rax_93 = r12_26
                
                var_78 = rax_93
                
                if (rdi_2 == 0)
                    rsi_61 = 0
                
                int32_t rcx_187 = rsi_61
                
                if (rsi_61 s> 8)
                    rcx_187 = 8
                
                int64_t rdx_147 = sx.q(rcx_187)
                
                if (rdx_147 s> 0x10)
                    rsi_61 = rcx_187
                else if (rsi_61 s> 0x10)
                    rsi_61 = 0x10
                
                int16_t* const var_88 = nullptr
                int16_t* rax_94 = &data_142d40450
                int64_t var_80_1 = 0
                
                if (rdi_2 != 0)
                    rax_94 = var_a8
                
                int16_t* const r15_4 = nullptr
                int32_t rsi_62 = rsi_61 - rcx_187
                int32_t r14_32 = 0
                void* rdx_148 = &rax_94[rdx_147]
                int32_t rax_95 = 0
                
                if (rdx_148 != 0 && *rdx_148 != 0 && rsi_62 s> 0)
                    if (rsi_62 + 1 s> 0)
                        sub_1405947f0(&var_88, rsi_62 + 1)
                        rax_95 = var_80_1:4.d
                        r14_32 = var_80_1.d
                        r15_4 = var_88
                    
                    r14_32 = r14_32 + 1 + rsi_62
                    var_80_1.d = r14_32
                    
                    if (r14_32 s> rax_95)
                        sub_140594770(&var_88)
                        r14_32 = var_80_1.d
                        r15_4 = var_88
                    
                    UnDecorator::getReferenceType(r15_4, rdx_148, rsi_62 * 2)
                    r8_106 = &data_142d40450
                    r15_4[sx.q(r14_32) - 1] = 0
                    rdi_2 = var_a0_1.d
                
                int32_t rsi_63 = rdi_2 - 1
                int16_t* const rax_97 = &data_142d40450
                
                if (r14_32 != 0)
                    rax_97 = r15_4
                
                var_88 = rax_97
                
                if (rdi_2 == 0)
                    rsi_63 = 0
                
                int32_t rcx_191 = rsi_63
                
                if (rsi_63 s> 0)
                    rcx_191 = 0
                
                int64_t rdx_152 = sx.q(rcx_191)
                
                if (rdx_152 s> 8)
                    rsi_63 = rcx_191
                else if (rsi_63 s> 8)
                    rsi_63 = 8
                
                var_98 = nullptr
                int16_t* rax_98 = &data_142d40450
                int32_t var_90
                var_90.q = 0
                
                if (rdi_2 != 0)
                    rax_98 = var_a8
                
                int16_t* r14_34 = nullptr
                int32_t rsi_64 = rsi_63 - rcx_191
                int32_t rdi_56 = 0
                void* rdx_153 = &rax_98[rdx_152]
                int32_t rax_99 = 0
                
                if (rdx_153 != 0 && *rdx_153 != 0 && rsi_64 s> 0)
                    if (rsi_64 + 1 s> 0)
                        sub_1405947f0(&var_98, rsi_64 + 1)
                        int32_t var_8c
                        rax_99 = var_8c
                        rdi_56 = var_90
                        r14_34 = var_98
                    
                    rdi_56 = rdi_56 + 1 + rsi_64
                    
                    if (rdi_56 s> rax_99)
                        sub_140594770(&var_98)
                        r14_34 = var_98
                    
                    UnDecorator::getReferenceType(r14_34, rdx_153, rsi_64 * 2)
                    r8_106 = &data_142d40450
                    r14_34[sx.q(rdi_56) - 1] = 0
                
                if (rdi_56 != 0)
                    r8_106 = r14_34
                
                var_98.d = sub_140b1ba10(r8_106)
                var_98:4.d = sub_140b1ba10(var_88)
                int32_t var_90_3 = sub_140b1ba10(var_78)
                int32_t var_8c_2 = sub_140b1ba10(var_b8)
                *var_58 = var_98.o
                
                if (r14_34 != 0)
                    sub_140a74f90(r14_34)
                
                if (r15_4 != 0)
                    sub_140a74f90(r15_4)
                
                if (r12_26 != 0)
                    sub_140a74f90(r12_26)
                
                if (r13_1 != 0)
                    sub_140a74f90(r13_1)
                
                rbx_1.b = 1
                break
            
            if (iswxdigit(*(var_a8 + r14_27)) == 0)
                break
            
            rdi_2 = var_a0_1.d
            rsi_56 += 1
            r14_27 += 2
    else
        int64_t var_b0_5
        int32_t rax_16
        int32_t rax_17
        int32_t rcx_33
        int32_t rdx_25
        int32_t rsi_11
        int32_t rdi_11
        int32_t rdi_12
        int64_t r8_22
        int16_t* const r14_5
        int16_t* r15_1
        
        if (arg2 == 1)
            int16_t* rcx_9 = *arg1
            
            if (rcx_9[8] == 0x2d && rcx_9[0xd] == 0x2d && rcx_9[0x12] == 0x2d
                    && rcx_9[0x17] == 0x2d)
                int32_t r8_6 = arg1[1].d
                int32_t rdi_3 = r8_6 - 1
                
                if (r8_6 == 0)
                    rdi_3 = 0
                
                int32_t rdx_5 = rdi_3
                
                if (rdi_3 s> 0)
                    rdx_5 = 0
                
                int64_t r9_1 = sx.q(rdx_5)
                
                if (r9_1 s> 8)
                    rdi_3 = rdx_5
                else if (rdi_3 s> 8)
                    rdi_3 = 8
                
                var_b8 = nullptr
                int16_t* const rax_4 = &data_142d40450
                int64_t var_b0_1 = 0
                
                if (r8_6 != 0)
                    rax_4 = rcx_9
                
                int16_t* const r14_1 = nullptr
                int32_t rdi_4 = rdi_3 - rdx_5
                int32_t rsi_3 = 0
                void* r12_1 = &rax_4[r9_1]
                int32_t rax_5 = 0
                
                if (r12_1 != 0 && *r12_1 != 0 && rdi_4 s> 0)
                    if (rdi_4 + 1 s> 0)
                        sub_1405947f0(&var_b8, rdi_4 + 1)
                        rax_5 = var_b0_1:4.d
                        rsi_3 = var_b0_1.d
                        r14_1 = var_b8
                    
                    rsi_3 = rsi_3 + 1 + rdi_4
                    var_b0_1.d = rsi_3
                    
                    if (rsi_3 s> rax_5)
                        sub_140594770(&var_b8)
                        rsi_3 = var_b0_1.d
                        r14_1 = var_b8
                    
                    UnDecorator::getReferenceType(r14_1, r12_1, rdi_4 * 2)
                    r14_1[sx.q(rsi_3) - 1] = 0
                
                int32_t r8_9 = rsi_3 - 1
                
                if (rsi_3 == 0)
                    r8_9 = 0
                
                sub_140a20ba0(&var_a8, r14_1, r8_9)
                
                if (r14_1 != 0)
                    sub_140a74f90(r14_1)
                
                int32_t rdx_10 = arg1[1].d
                int32_t rdi_5 = rdx_10 - 1
                
                if (rdx_10 == 0)
                    rdi_5 = 0
                
                int32_t rcx_15 = rdi_5
                
                if (rdi_5 s> 9)
                    rcx_15 = 9
                
                int64_t r8_10 = sx.q(rcx_15)
                
                if (r8_10 s> 0xd)
                    rdi_5 = rcx_15
                else if (rdi_5 s> 0xd)
                    rdi_5 = 0xd
                
                int16_t* const rax_7
                
                if (rdx_10 == 0)
                    rax_7 = &data_142d40450
                else
                    rax_7 = *arg1
                
                int16_t* r12_2 = &rax_7[r8_10]
                var_b8 = nullptr
                int32_t rdi_6 = rdi_5 - rcx_15
                int64_t var_b0_2 = 0
                int16_t* const r14_2 = nullptr
                int32_t rsi_5 = 0
                int32_t rax_8 = 0
                
                if (r12_2 != 0 && *r12_2 != 0 && rdi_6 s> 0)
                    if (rdi_6 + 1 s> 0)
                        sub_1405947f0(&var_b8, rdi_6 + 1)
                        rax_8 = var_b0_2:4.d
                        rsi_5 = var_b0_2.d
                        r14_2 = var_b8
                    
                    rsi_5 = rsi_5 + 1 + rdi_6
                    var_b0_2.d = rsi_5
                    
                    if (rsi_5 s> rax_8)
                        sub_140594770(&var_b8)
                        rsi_5 = var_b0_2.d
                        r14_2 = var_b8
                    
                    UnDecorator::getReferenceType(r14_2, r12_2, rdi_6 * 2)
                    r14_2[sx.q(rsi_5) - 1] = 0
                
                int32_t r8_13 = rsi_5 - 1
                
                if (rsi_5 == 0)
                    r8_13 = 0
                
                sub_140a20ba0(&var_a8, r14_2, r8_13)
                
                if (r14_2 != 0)
                    sub_140a74f90(r14_2)
                
                int32_t rdx_15 = arg1[1].d
                int32_t rdi_7 = rdx_15 - 1
                
                if (rdx_15 == 0)
                    rdi_7 = 0
                
                int32_t rcx_21 = rdi_7
                
                if (rdi_7 s> 0xe)
                    rcx_21 = 0xe
                
                int64_t r8_14 = sx.q(rcx_21)
                
                if (r8_14 s> 0x12)
                    rdi_7 = rcx_21
                else if (rdi_7 s> 0x12)
                    rdi_7 = 0x12
                
                int16_t* const rax_10
                
                if (rdx_15 == 0)
                    rax_10 = &data_142d40450
                else
                    rax_10 = *arg1
                
                int16_t* r12_3 = &rax_10[r8_14]
                var_b8 = nullptr
                int32_t rdi_8 = rdi_7 - rcx_21
                int64_t var_b0_3 = 0
                int16_t* const r14_3 = nullptr
                int32_t rsi_7 = 0
                int32_t rax_11 = 0
                
                if (r12_3 != 0 && *r12_3 != 0 && rdi_8 s> 0)
                    if (rdi_8 + 1 s> 0)
                        sub_1405947f0(&var_b8, rdi_8 + 1)
                        rax_11 = var_b0_3:4.d
                        rsi_7 = var_b0_3.d
                        r14_3 = var_b8
                    
                    rsi_7 += rdi_8 + 1
                    var_b0_3.d = rsi_7
                    
                    if (rsi_7 s> rax_11)
                        sub_140594770(&var_b8)
                        rsi_7 = var_b0_3.d
                        r14_3 = var_b8
                    
                    UnDecorator::getReferenceType(r14_3, r12_3, rdi_8 * 2)
                    r14_3[sx.q(rsi_7) - 1] = 0
                
                int32_t r8_17 = rsi_7 - 1
                
                if (rsi_7 == 0)
                    r8_17 = 0
                
                sub_140a20ba0(&var_a8, r14_3, r8_17)
                
                if (r14_3 != 0)
                    sub_140a74f90(r14_3)
                
                int32_t rdx_20 = arg1[1].d
                int32_t rdi_9 = rdx_20 - 1
                
                if (rdx_20 == 0)
                    rdi_9 = 0
                
                int32_t rcx_27 = rdi_9
                
                if (rdi_9 s> 0x13)
                    rcx_27 = 0x13
                
                int64_t r8_18 = sx.q(rcx_27)
                
                if (r8_18 s> 0x17)
                    rdi_9 = rcx_27
                else if (rdi_9 s> 0x17)
                    rdi_9 = 0x17
                
                int16_t* const rax_13
                
                if (rdx_20 == 0)
                    rax_13 = &data_142d40450
                else
                    rax_13 = *arg1
                
                int16_t* r12_4 = &rax_13[r8_18]
                var_b8 = nullptr
                int32_t rdi_10 = rdi_9 - rcx_27
                int64_t var_b0_4 = 0
                int16_t* const r14_4 = nullptr
                int32_t rsi_9 = 0
                int32_t rax_14 = 0
                
                if (r12_4 != 0 && *r12_4 != 0 && rdi_10 s> 0)
                    if (rdi_10 + 1 s> 0)
                        sub_1405947f0(&var_b8, rdi_10 + 1)
                        rax_14 = var_b0_4:4.d
                        rsi_9 = var_b0_4.d
                        r14_4 = var_b8
                    
                    rsi_9 += rdi_10 + 1
                    var_b0_4.d = rsi_9
                    
                    if (rsi_9 s> rax_14)
                        sub_140594770(&var_b8)
                        rsi_9 = var_b0_4.d
                        r14_4 = var_b8
                    
                    UnDecorator::getReferenceType(r14_4, r12_4, rdi_10 * 2)
                    r14_4[sx.q(rsi_9) - 1] = 0
                
                int32_t r8_21 = rsi_9 - 1
                
                if (rsi_9 == 0)
                    r8_21 = 0
                
                sub_140a20ba0(&var_a8, r14_4, r8_21)
                
                if (r14_4 != 0)
                    sub_140a74f90(r14_4)
                
                rdx_25 = arg1[1].d
                rdi_11 = rdx_25 - 1
                
                if (rdx_25 == 0)
                    rdi_11 = 0
                
                rax_16 = rdi_11
                
                if (rdi_11 s> 0x18)
                    rax_16 = 0x18
                
                r8_22 = sx.q(rax_16)
                
                if (r8_22 s<= 0x24)
                    rcx_33 = 0x24
                label_140b224e6:
                    
                    if (rdi_11 s<= rcx_33)
                        goto label_140b224ed
                    
                    rdi_11 = rcx_33
                    goto label_140b224ed
                
                rdi_11 = rax_16
            label_140b224ed:
                int16_t* const rcx_34
                
                if (rdx_25 == 0)
                    rcx_34 = &data_142d40450
                else
                    rcx_34 = *arg1
                
                rdi_12 = rdi_11 - rax_16
                var_b8 = nullptr
                r15_1 = &rcx_34[r8_22]
                var_b0_5 = 0
                r14_5 = nullptr
                rsi_11 = 0
                rax_17 = 0
                
                if (r15_1 == 0 || *r15_1 == 0 || rdi_12 s<= 0)
                    goto label_140b23aa0
                
                if (rdi_12 + 1 s> 0)
                    sub_1405947f0(&var_b8, rdi_12 + 1)
                    rax_17 = var_b0_5:4.d
                    rsi_11 = var_b0_5.d
                    r14_5 = var_b8
                
                rsi_11 += rdi_12 + 1
            label_140b23a6f:
                var_b0_5.d = rsi_11
                
                if (rsi_11 s> rax_17)
                    sub_140594770(&var_b8)
                    rsi_11 = var_b0_5.d
                    r14_5 = var_b8
                
                UnDecorator::getReferenceType(r14_5, r15_1, rdi_12 * 2)
                r14_5[sx.q(rsi_11) - 1] = 0
                goto label_140b23aa0
        else
            int32_t rax_30
            int32_t rdi_21
            
            if (arg2 == 2)
                int16_t* rcx_36 = *arg1
                
                if (*rcx_36 == 0x7b && rcx_36[9] == 0x2d && rcx_36[0xe] == 0x2d
                        && rcx_36[0x13] == 0x2d && rcx_36[0x18] == 0x2d && rcx_36[0x25] == 0x7d)
                    int32_t r8_23 = arg1[1].d
                    int32_t rdi_13 = r8_23 - 1
                    
                    if (r8_23 == 0)
                        rdi_13 = 0
                    
                    int32_t rdx_28 = rdi_13
                    
                    if (rdi_13 s> 1)
                        rdx_28 = 1
                    
                    int64_t r9_2 = sx.q(rdx_28)
                    
                    if (r9_2 s> 9)
                        rdi_13 = rdx_28
                    else if (rdi_13 s> 9)
                        rdi_13 = 9
                    
                    var_b8 = nullptr
                    int16_t* rax_18 = &data_142d40450
                    int64_t var_b0_6 = 0
                    
                    if (r8_23 != 0)
                        rax_18 = rcx_36
                    
                    int16_t* const r14_6 = nullptr
                    int32_t rdi_14 = rdi_13 - rdx_28
                    int32_t rsi_13 = 0
                    void* r12_5 = &rax_18[r9_2]
                    int32_t rax_19 = 0
                    
                    if (r12_5 != 0 && *r12_5 != 0 && rdi_14 s> 0)
                        if (rdi_14 + 1 s> 0)
                            sub_1405947f0(&var_b8, rdi_14 + 1)
                            rax_19 = var_b0_6:4.d
                            rsi_13 = var_b0_6.d
                            r14_6 = var_b8
                        
                        rsi_13 = rsi_13 + 1 + rdi_14
                        var_b0_6.d = rsi_13
                        
                        if (rsi_13 s> rax_19)
                            sub_140594770(&var_b8)
                            rsi_13 = var_b0_6.d
                            r14_6 = var_b8
                        
                        UnDecorator::getReferenceType(r14_6, r12_5, rdi_14 * 2)
                        r14_6[sx.q(rsi_13) - 1] = 0
                    
                    int32_t r8_26 = rsi_13 - 1
                    
                    if (rsi_13 == 0)
                        r8_26 = 0
                    
                    sub_140a20ba0(&var_a8, r14_6, r8_26)
                    
                    if (r14_6 != 0)
                        sub_140a74f90(r14_6)
                    
                    int32_t rdx_33 = arg1[1].d
                    int32_t rdi_15 = rdx_33 - 1
                    
                    if (rdx_33 == 0)
                        rdi_15 = 0
                    
                    int32_t rcx_42 = rdi_15
                    
                    if (rdi_15 s> 0xa)
                        rcx_42 = 0xa
                    
                    int64_t r8_27 = sx.q(rcx_42)
                    
                    if (r8_27 s> 0xe)
                        rdi_15 = rcx_42
                    else if (rdi_15 s> 0xe)
                        rdi_15 = 0xe
                    
                    int16_t* const rax_21
                    
                    if (rdx_33 == 0)
                        rax_21 = &data_142d40450
                    else
                        rax_21 = *arg1
                    
                    int16_t* r12_6 = &rax_21[r8_27]
                    var_b8 = nullptr
                    int32_t rdi_16 = rdi_15 - rcx_42
                    int64_t var_b0_7 = 0
                    int16_t* const r14_7 = nullptr
                    int32_t rsi_15 = 0
                    int32_t rax_22 = 0
                    
                    if (r12_6 != 0 && *r12_6 != 0 && rdi_16 s> 0)
                        if (rdi_16 + 1 s> 0)
                            sub_1405947f0(&var_b8, rdi_16 + 1)
                            rax_22 = var_b0_7:4.d
                            rsi_15 = var_b0_7.d
                            r14_7 = var_b8
                        
                        rsi_15 = rsi_15 + 1 + rdi_16
                        var_b0_7.d = rsi_15
                        
                        if (rsi_15 s> rax_22)
                            sub_140594770(&var_b8)
                            rsi_15 = var_b0_7.d
                            r14_7 = var_b8
                        
                        UnDecorator::getReferenceType(r14_7, r12_6, rdi_16 * 2)
                        r14_7[sx.q(rsi_15) - 1] = 0
                    
                    int32_t r8_30 = rsi_15 - 1
                    
                    if (rsi_15 == 0)
                        r8_30 = 0
                    
                    sub_140a20ba0(&var_a8, r14_7, r8_30)
                    
                    if (r14_7 != 0)
                        sub_140a74f90(r14_7)
                    
                    int32_t rdx_38 = arg1[1].d
                    int32_t rdi_17 = rdx_38 - 1
                    
                    if (rdx_38 == 0)
                        rdi_17 = 0
                    
                    int32_t rcx_48 = rdi_17
                    
                    if (rdi_17 s> 0xf)
                        rcx_48 = 0xf
                    
                    int64_t r8_31 = sx.q(rcx_48)
                    
                    if (r8_31 s> 0x13)
                        rdi_17 = rcx_48
                    else if (rdi_17 s> 0x13)
                        rdi_17 = 0x13
                    
                    int16_t* const rax_24
                    
                    if (rdx_38 == 0)
                        rax_24 = &data_142d40450
                    else
                        rax_24 = *arg1
                    
                    int16_t* r12_7 = &rax_24[r8_31]
                    var_b8 = nullptr
                    int32_t rdi_18 = rdi_17 - rcx_48
                    int64_t var_b0_8 = 0
                    int16_t* const r14_8 = nullptr
                    int32_t rsi_17 = 0
                    int32_t rax_25 = 0
                    
                    if (r12_7 != 0 && *r12_7 != 0 && rdi_18 s> 0)
                        if (rdi_18 + 1 s> 0)
                            sub_1405947f0(&var_b8, rdi_18 + 1)
                            rax_25 = var_b0_8:4.d
                            rsi_17 = var_b0_8.d
                            r14_8 = var_b8
                        
                        rsi_17 = rsi_17 + 1 + rdi_18
                        var_b0_8.d = rsi_17
                        
                        if (rsi_17 s> rax_25)
                            sub_140594770(&var_b8)
                            rsi_17 = var_b0_8.d
                            r14_8 = var_b8
                        
                        UnDecorator::getReferenceType(r14_8, r12_7, rdi_18 * 2)
                        r14_8[sx.q(rsi_17) - 1] = 0
                    
                    int32_t r8_34 = rsi_17 - 1
                    
                    if (rsi_17 == 0)
                        r8_34 = 0
                    
                    sub_140a20ba0(&var_a8, r14_8, r8_34)
                    
                    if (r14_8 != 0)
                        sub_140a74f90(r14_8)
                    
                    int32_t rcx_54 = arg1[1].d
                    int32_t rdi_19 = rcx_54 - 1
                    
                    if (rcx_54 == 0)
                        rdi_19 = 0
                    
                    int32_t rax_27 = rdi_19
                    
                    if (rdi_19 s> 0x14)
                        rax_27 = 0x14
                    
                    int64_t rdx_43 = sx.q(rax_27)
                    
                    if (rdx_43 s> 0x18)
                        rdi_19 = rax_27
                    else if (rdi_19 s> 0x18)
                        rdi_19 = 0x18
                    
                    int16_t* const rcx_55
                    
                    if (rcx_54 == 0)
                        rcx_55 = &data_142d40450
                    else
                        rcx_55 = *arg1
                    
                    int32_t rdi_20 = rdi_19 - rax_27
                    var_b8 = nullptr
                    int16_t* r12_8 = &rcx_55[rdx_43]
                    int64_t var_b0_9 = 0
                    int16_t* const r14_9 = nullptr
                    int32_t rsi_19 = 0
                    int32_t rax_28 = 0
                    
                    if (r12_8 != 0 && *r12_8 != 0 && rdi_20 s> 0)
                        if (rdi_20 + 1 s> 0)
                            sub_1405947f0(&var_b8, rdi_20 + 1)
                            rax_28 = var_b0_9:4.d
                            rsi_19 = var_b0_9.d
                            r14_9 = var_b8
                        
                        rsi_19 = rsi_19 + 1 + rdi_20
                        var_b0_9.d = rsi_19
                        
                        if (rsi_19 s> rax_28)
                            sub_140594770(&var_b8)
                            rsi_19 = var_b0_9.d
                            r14_9 = var_b8
                        
                        UnDecorator::getReferenceType(r14_9, r12_8, rdi_20 * 2)
                        r14_9[sx.q(rsi_19) - 1] = 0
                    
                    int32_t r8_37 = rsi_19 - 1
                    
                    if (rsi_19 == 0)
                        r8_37 = 0
                    
                    sub_140a20ba0(&var_a8, r14_9, r8_37)
                    
                    if (r14_9 != 0)
                        sub_140a74f90(r14_9)
                    
                    int32_t rdx_48 = arg1[1].d
                    rdi_21 = rdx_48 - 1
                    
                    if (rdx_48 == 0)
                        rdi_21 = 0
                    
                    rax_30 = rdi_21
                    
                    if (rdi_21 s> 0x19)
                        rax_30 = 0x19
                    
                    int64_t r8_38 = sx.q(rax_30)
                    
                    if (r8_38 s> 0x25)
                        rdi_21 = rax_30
                    else if (rdi_21 s> 0x25)
                        rdi_21 = 0x25
                    
                    if (rdx_48 == 0)
                        r15_1 = &(&data_142d40450)[r8_38]
                    else
                        r15_1 = *arg1 + (r8_38 << 1)
                    
                    goto label_140b23a2f
            else if (arg2 == 3)
                int16_t* rcx_62 = *arg1
                
                if (*rcx_62 == 0x28 && rcx_62[9] == 0x2d && rcx_62[0xe] == 0x2d
                        && rcx_62[0x13] == 0x2d && rcx_62[0x18] == 0x2d && rcx_62[0x25] == 0x29)
                    int32_t r8_39 = arg1[1].d
                    int32_t rdi_22 = r8_39 - 1
                    
                    if (r8_39 == 0)
                        rdi_22 = 0
                    
                    int32_t rdx_49 = rdi_22
                    
                    if (rdi_22 s> 1)
                        rdx_49 = 1
                    
                    int64_t r9_3 = sx.q(rdx_49)
                    
                    if (r9_3 s> 9)
                        rdi_22 = rdx_49
                    else if (rdi_22 s> 9)
                        rdi_22 = 9
                    
                    var_b8 = nullptr
                    int16_t* rax_31 = &data_142d40450
                    int64_t var_b0_10 = 0
                    
                    if (r8_39 != 0)
                        rax_31 = rcx_62
                    
                    int16_t* const r14_10 = nullptr
                    int32_t rdi_23 = rdi_22 - rdx_49
                    int32_t rsi_21 = 0
                    void* r12_9 = &rax_31[r9_3]
                    int32_t rax_32 = 0
                    
                    if (r12_9 != 0 && *r12_9 != 0 && rdi_23 s> 0)
                        if (rdi_23 + 1 s> 0)
                            sub_1405947f0(&var_b8, rdi_23 + 1)
                            rax_32 = var_b0_10:4.d
                            rsi_21 = var_b0_10.d
                            r14_10 = var_b8
                        
                        rsi_21 = rsi_21 + 1 + rdi_23
                        var_b0_10.d = rsi_21
                        
                        if (rsi_21 s> rax_32)
                            sub_140594770(&var_b8)
                            rsi_21 = var_b0_10.d
                            r14_10 = var_b8
                        
                        UnDecorator::getReferenceType(r14_10, r12_9, rdi_23 * 2)
                        r14_10[sx.q(rsi_21) - 1] = 0
                    
                    int32_t r8_42 = rsi_21 - 1
                    
                    if (rsi_21 == 0)
                        r8_42 = 0
                    
                    sub_140a20ba0(&var_a8, r14_10, r8_42)
                    
                    if (r14_10 != 0)
                        sub_140a74f90(r14_10)
                    
                    int32_t rdx_54 = arg1[1].d
                    int32_t rdi_24 = rdx_54 - 1
                    
                    if (rdx_54 == 0)
                        rdi_24 = 0
                    
                    int32_t rcx_68 = rdi_24
                    
                    if (rdi_24 s> 0xa)
                        rcx_68 = 0xa
                    
                    int64_t r8_43 = sx.q(rcx_68)
                    
                    if (r8_43 s> 0xe)
                        rdi_24 = rcx_68
                    else if (rdi_24 s> 0xe)
                        rdi_24 = 0xe
                    
                    int16_t* const rax_34
                    
                    if (rdx_54 == 0)
                        rax_34 = &data_142d40450
                    else
                        rax_34 = *arg1
                    
                    int16_t* r12_10 = &rax_34[r8_43]
                    var_b8 = nullptr
                    int32_t rdi_25 = rdi_24 - rcx_68
                    int64_t var_b0_11 = 0
                    int16_t* const r14_11 = nullptr
                    int32_t rsi_23 = 0
                    int32_t rax_35 = 0
                    
                    if (r12_10 != 0 && *r12_10 != 0 && rdi_25 s> 0)
                        if (rdi_25 + 1 s> 0)
                            sub_1405947f0(&var_b8, rdi_25 + 1)
                            rax_35 = var_b0_11:4.d
                            rsi_23 = var_b0_11.d
                            r14_11 = var_b8
                        
                        rsi_23 += rdi_25 + 1
                        var_b0_11.d = rsi_23
                        
                        if (rsi_23 s> rax_35)
                            sub_140594770(&var_b8)
                            rsi_23 = var_b0_11.d
                            r14_11 = var_b8
                        
                        UnDecorator::getReferenceType(r14_11, r12_10, rdi_25 * 2)
                        r14_11[sx.q(rsi_23) - 1] = 0
                    
                    int32_t r8_46 = rsi_23 - 1
                    
                    if (rsi_23 == 0)
                        r8_46 = 0
                    
                    sub_140a20ba0(&var_a8, r14_11, r8_46)
                    
                    if (r14_11 != 0)
                        sub_140a74f90(r14_11)
                    
                    int32_t rdx_59 = arg1[1].d
                    int32_t rdi_26 = rdx_59 - 1
                    
                    if (rdx_59 == 0)
                        rdi_26 = 0
                    
                    int32_t rcx_74 = rdi_26
                    
                    if (rdi_26 s> 0xf)
                        rcx_74 = 0xf
                    
                    int64_t r8_47 = sx.q(rcx_74)
                    
                    if (r8_47 s> 0x13)
                        rdi_26 = rcx_74
                    else if (rdi_26 s> 0x13)
                        rdi_26 = 0x13
                    
                    int16_t* const rax_37
                    
                    if (rdx_59 == 0)
                        rax_37 = &data_142d40450
                    else
                        rax_37 = *arg1
                    
                    int16_t* r12_11 = &rax_37[r8_47]
                    var_b8 = nullptr
                    int32_t rdi_27 = rdi_26 - rcx_74
                    int64_t var_b0_12 = 0
                    int16_t* const r14_12 = nullptr
                    int32_t rsi_25 = 0
                    int32_t rax_38 = 0
                    
                    if (r12_11 != 0 && *r12_11 != 0 && rdi_27 s> 0)
                        if (rdi_27 + 1 s> 0)
                            sub_1405947f0(&var_b8, rdi_27 + 1)
                            rax_38 = var_b0_12:4.d
                            rsi_25 = var_b0_12.d
                            r14_12 = var_b8
                        
                        rsi_25 += rdi_27 + 1
                        var_b0_12.d = rsi_25
                        
                        if (rsi_25 s> rax_38)
                            sub_140594770(&var_b8)
                            rsi_25 = var_b0_12.d
                            r14_12 = var_b8
                        
                        UnDecorator::getReferenceType(r14_12, r12_11, rdi_27 * 2)
                        r14_12[sx.q(rsi_25) - 1] = 0
                    
                    int32_t r8_50 = rsi_25 - 1
                    
                    if (rsi_25 == 0)
                        r8_50 = 0
                    
                    sub_140a20ba0(&var_a8, r14_12, r8_50)
                    
                    if (r14_12 != 0)
                        sub_140a74f90(r14_12)
                    
                    int32_t rcx_80 = arg1[1].d
                    int32_t rdi_28 = rcx_80 - 1
                    
                    if (rcx_80 == 0)
                        rdi_28 = 0
                    
                    int32_t rax_40 = rdi_28
                    
                    if (rdi_28 s> 0x14)
                        rax_40 = 0x14
                    
                    int64_t rdx_64 = sx.q(rax_40)
                    
                    if (rdx_64 s> 0x18)
                        rdi_28 = rax_40
                    else if (rdi_28 s> 0x18)
                        rdi_28 = 0x18
                    
                    int16_t* const rcx_81
                    
                    if (rcx_80 == 0)
                        rcx_81 = &data_142d40450
                    else
                        rcx_81 = *arg1
                    
                    int32_t rdi_29 = rdi_28 - rax_40
                    var_b8 = nullptr
                    int16_t* r12_12 = &rcx_81[rdx_64]
                    int64_t var_b0_13 = 0
                    int16_t* const r14_13 = nullptr
                    int32_t rsi_27 = 0
                    int32_t rax_41 = 0
                    
                    if (r12_12 != 0 && *r12_12 != 0 && rdi_29 s> 0)
                        if (rdi_29 + 1 s> 0)
                            sub_1405947f0(&var_b8, rdi_29 + 1)
                            rax_41 = var_b0_13:4.d
                            rsi_27 = var_b0_13.d
                            r14_13 = var_b8
                        
                        rsi_27 += rdi_29 + 1
                        var_b0_13.d = rsi_27
                        
                        if (rsi_27 s> rax_41)
                            sub_140594770(&var_b8)
                            rsi_27 = var_b0_13.d
                            r14_13 = var_b8
                        
                        UnDecorator::getReferenceType(r14_13, r12_12, rdi_29 * 2)
                        r14_13[sx.q(rsi_27) - 1] = 0
                    
                    int32_t r8_53 = rsi_27 - 1
                    
                    if (rsi_27 == 0)
                        r8_53 = 0
                    
                    sub_140a20ba0(&var_a8, r14_13, r8_53)
                    
                    if (r14_13 != 0)
                        sub_140a74f90(r14_13)
                    
                    rdx_25 = arg1[1].d
                    rdi_11 = rdx_25 - 1
                    
                    if (rdx_25 == 0)
                        rdi_11 = 0
                    
                    rax_16 = rdi_11
                    
                    if (rdi_11 s> 0x19)
                        rax_16 = 0x19
                    
                    r8_22 = sx.q(rax_16)
                    
                    if (r8_22 s<= 0x25)
                        rcx_33 = 0x25
                        goto label_140b224e6
                    
                    rdi_11 = rax_16
                    goto label_140b224ed
            else
                int32_t rcx_171
                int64_t rdx_119
                int32_t r8_88
                
                if (arg2 != 4)
                    if (arg2 != 5)
                        goto label_140b23ac4
                    
                    int16_t* rcx_153 = *arg1
                    
                    if (rcx_153[8] == 0x2d && rcx_153[0x11] == 0x2d && rcx_153[0x1a] == 0x2d)
                        int32_t r8_89 = arg1[1].d
                        int32_t rdi_50 = r8_89 - 1
                        
                        if (r8_89 == 0)
                            rdi_50 = 0
                        
                        int32_t rdx_120 = rdi_50
                        
                        if (rdi_50 s> 0)
                            rdx_120 = 0
                        
                        int64_t r9_5 = sx.q(rdx_120)
                        
                        if (r9_5 s> 8)
                            rdi_50 = rdx_120
                        else if (rdi_50 s> 8)
                            rdi_50 = 8
                        
                        var_b8 = nullptr
                        int16_t* const rax_73 = &data_142d40450
                        int64_t var_b0_24 = 0
                        
                        if (r8_89 != 0)
                            rax_73 = rcx_153
                        
                        int16_t* const r14_24 = nullptr
                        int32_t rdi_51 = rdi_50 - rdx_120
                        int32_t rsi_49 = 0
                        void* r12_23 = &rax_73[r9_5]
                        int32_t rax_74 = 0
                        
                        if (r12_23 != 0 && *r12_23 != 0 && rdi_51 s> 0)
                            if (rdi_51 + 1 s> 0)
                                sub_1405947f0(&var_b8, rdi_51 + 1)
                                rax_74 = var_b0_24:4.d
                                rsi_49 = var_b0_24.d
                                r14_24 = var_b8
                            
                            rsi_49 = rsi_49 + 1 + rdi_51
                            var_b0_24.d = rsi_49
                            
                            if (rsi_49 s> rax_74)
                                sub_140594770(&var_b8)
                                rsi_49 = var_b0_24.d
                                r14_24 = var_b8
                            
                            UnDecorator::getReferenceType(r14_24, r12_23, rdi_51 * 2)
                            r14_24[sx.q(rsi_49) - 1] = 0
                        
                        int32_t r8_92 = rsi_49 - 1
                        
                        if (rsi_49 == 0)
                            r8_92 = 0
                        
                        sub_140a20ba0(&var_a8, r14_24, r8_92)
                        
                        if (r14_24 != 0)
                            sub_140a74f90(r14_24)
                        
                        int32_t rdx_125 = arg1[1].d
                        int32_t rdi_52 = rdx_125 - 1
                        
                        if (rdx_125 == 0)
                            rdi_52 = 0
                        
                        int32_t rcx_159 = rdi_52
                        
                        if (rdi_52 s> 9)
                            rcx_159 = 9
                        
                        int64_t r8_93 = sx.q(rcx_159)
                        
                        if (r8_93 s> 0x11)
                            rdi_52 = rcx_159
                        else if (rdi_52 s> 0x11)
                            rdi_52 = 0x11
                        
                        int16_t* const rax_76
                        
                        if (rdx_125 == 0)
                            rax_76 = &data_142d40450
                        else
                            rax_76 = *arg1
                        
                        int16_t* r12_24 = &rax_76[r8_93]
                        var_b8 = nullptr
                        int32_t rdi_53 = rdi_52 - rcx_159
                        int64_t var_b0_25 = 0
                        int16_t* const r14_25 = nullptr
                        int32_t rsi_51 = 0
                        int32_t rax_77 = 0
                        
                        if (r12_24 != 0 && *r12_24 != 0 && rdi_53 s> 0)
                            if (rdi_53 + 1 s> 0)
                                sub_1405947f0(&var_b8, rdi_53 + 1)
                                rax_77 = var_b0_25:4.d
                                rsi_51 = var_b0_25.d
                                r14_25 = var_b8
                            
                            rsi_51 = rsi_51 + 1 + rdi_53
                            var_b0_25.d = rsi_51
                            
                            if (rsi_51 s> rax_77)
                                sub_140594770(&var_b8)
                                rsi_51 = var_b0_25.d
                                r14_25 = var_b8
                            
                            UnDecorator::getReferenceType(r14_25, r12_24, rdi_53 * 2)
                            r14_25[sx.q(rsi_51) - 1] = 0
                        
                        int32_t r8_96 = rsi_51 - 1
                        
                        if (rsi_51 == 0)
                            r8_96 = 0
                        
                        sub_140a20ba0(&var_a8, r14_25, r8_96)
                        
                        if (r14_25 != 0)
                            sub_140a74f90(r14_25)
                        
                        int32_t rdx_130 = arg1[1].d
                        int32_t rdi_54 = rdx_130 - 1
                        
                        if (rdx_130 == 0)
                            rdi_54 = 0
                        
                        int32_t rcx_165 = rdi_54
                        
                        if (rdi_54 s> 0x12)
                            rcx_165 = 0x12
                        
                        int64_t r8_97 = sx.q(rcx_165)
                        
                        if (r8_97 s> 0x1a)
                            rdi_54 = rcx_165
                        else if (rdi_54 s> 0x1a)
                            rdi_54 = 0x1a
                        
                        int16_t* const rax_79
                        
                        if (rdx_130 == 0)
                            rax_79 = &data_142d40450
                        else
                            rax_79 = *arg1
                        
                        int16_t* r12_25 = &rax_79[r8_97]
                        var_b8 = nullptr
                        int32_t rdi_55 = rdi_54 - rcx_165
                        int64_t var_b0_26 = 0
                        int16_t* const r14_26 = nullptr
                        int32_t rsi_53 = 0
                        int32_t rax_80 = 0
                        
                        if (r12_25 != 0 && *r12_25 != 0 && rdi_55 s> 0)
                            if (rdi_55 + 1 s> 0)
                                sub_1405947f0(&var_b8, rdi_55 + 1)
                                rax_80 = var_b0_26:4.d
                                rsi_53 = var_b0_26.d
                                r14_26 = var_b8
                            
                            rsi_53 = rsi_53 + 1 + rdi_55
                            var_b0_26.d = rsi_53
                            
                            if (rsi_53 s> rax_80)
                                sub_140594770(&var_b8)
                                rsi_53 = var_b0_26.d
                                r14_26 = var_b8
                            
                            UnDecorator::getReferenceType(r14_26, r12_25, rdi_55 * 2)
                            r14_26[sx.q(rsi_53) - 1] = 0
                        
                        int32_t r8_100 = rsi_53 - 1
                        
                        if (rsi_53 == 0)
                            r8_100 = 0
                        
                        sub_140a20ba0(&var_a8, r14_26, r8_100)
                        
                        if (r14_26 != 0)
                            sub_140a74f90(r14_26)
                        
                        rcx_171 = arg1[1].d
                        rdi_21 = rcx_171 - 1
                        
                        if (rcx_171 == 0)
                            rdi_21 = 0
                        
                        rax_30 = rdi_21
                        
                        if (rdi_21 s> 0x1b)
                            rax_30 = 0x1b
                        
                        rdx_119 = sx.q(rax_30)
                        
                        if (rdx_119 s<= 0x23)
                            r8_88 = 0x23
                        label_140b23a18:
                            
                            if (rdi_21 s<= r8_88)
                                goto label_140b23a21
                            
                            rdi_21 = r8_88
                            goto label_140b23a21
                        
                        rdi_21 = rax_30
                    label_140b23a21:
                        int16_t* const rcx_172
                        
                        if (rcx_171 == 0)
                            rcx_172 = &data_142d40450
                        else
                            rcx_172 = *arg1
                        
                        r15_1 = &rcx_172[rdx_119]
                    label_140b23a2f:
                        rdi_12 = rdi_21 - rax_30
                        var_b8 = nullptr
                        var_b0_5 = 0
                        r14_5 = nullptr
                        rsi_11 = 0
                        rax_17 = 0
                        
                        if (r15_1 != 0 && *r15_1 != 0 && rdi_12 s> 0)
                            if (rdi_12 + 1 s> 0)
                                sub_1405947f0(&var_b8, rdi_12 + 1)
                                rax_17 = var_b0_5:4.d
                                rsi_11 = var_b0_5.d
                                r14_5 = var_b8
                            
                            rsi_11 = rsi_11 + 1 + rdi_12
                            goto label_140b23a6f
                        
                    label_140b23aa0:
                        int32_t r8_103 = rsi_11 - 1
                        
                        if (rsi_11 == 0)
                            r8_103 = 0
                        
                        sub_140a20ba0(&var_a8, r14_5, r8_103)
                        
                        if (r14_5 != 0)
                            sub_140a74f90(r14_5)
                        
                        goto label_140b23ac4
                else
                    int16_t* rcx_87 = *arg1
                    
                    if (*rcx_87 == 0x7b && rcx_87[1] == 0x30 && rcx_87[2] == 0x78
                            && rcx_87[0xb] == 0x2c && rcx_87[0xc] == 0x30 && rcx_87[0xd] == 0x78
                            && rcx_87[0x12] == 0x2c && rcx_87[0x13] == 0x30 && rcx_87[0x14] == 0x78
                            && rcx_87[0x19] == 0x2c && rcx_87[0x1a] == 0x7b && rcx_87[0x1b] == 0x30
                            && rcx_87[0x1c] == 0x78 && rcx_87[0x1f] == 0x2c && rcx_87[0x20] == 0x30
                            && rcx_87[0x21] == 0x78 && rcx_87[0x24] == 0x2c && rcx_87[0x25] == 0x30
                            && rcx_87[0x26] == 0x78 && rcx_87[0x29] == 0x2c && rcx_87[0x2a] == 0x30
                            && rcx_87[0x2b] == 0x78 && rcx_87[0x2e] == 0x2c && rcx_87[0x2f] == 0x30
                            && rcx_87[0x30] == 0x78 && rcx_87[0x33] == 0x2c && rcx_87[0x34] == 0x30
                            && rcx_87[0x35] == 0x78 && rcx_87[0x38] == 0x2c && rcx_87[0x39] == 0x30
                            && rcx_87[0x3a] == 0x78 && rcx_87[0x3d] == 0x2c && rcx_87[0x3e] == 0x30
                            && rcx_87[0x3f] == 0x78 && rcx_87[0x42] == 0x7d
                            && rcx_87[0x43] == 0x7d)
                        int32_t r8_54 = arg1[1].d
                        int32_t rdi_30 = r8_54 - 1
                        
                        if (r8_54 == 0)
                            rdi_30 = 0
                        
                        int32_t rdx_69 = rdi_30
                        
                        if (rdi_30 s> 3)
                            rdx_69 = 3
                        
                        int64_t r9_4 = sx.q(rdx_69)
                        
                        if (r9_4 s> 0xb)
                            rdi_30 = rdx_69
                        else if (rdi_30 s> 0xb)
                            rdi_30 = 0xb
                        
                        var_b8 = nullptr
                        int16_t* rax_43 = &data_142d40450
                        int64_t var_b0_14 = 0
                        
                        if (r8_54 != 0)
                            rax_43 = rcx_87
                        
                        int16_t* const r14_14 = nullptr
                        int32_t rdi_31 = rdi_30 - rdx_69
                        int32_t rsi_29 = 0
                        void* r12_13 = &rax_43[r9_4]
                        int32_t rax_44 = 0
                        
                        if (r12_13 != 0 && *r12_13 != 0 && rdi_31 s> 0)
                            if (rdi_31 + 1 s> 0)
                                sub_1405947f0(&var_b8, rdi_31 + 1)
                                rax_44 = var_b0_14:4.d
                                rsi_29 = var_b0_14.d
                                r14_14 = var_b8
                            
                            rsi_29 += rdi_31 + 1
                            var_b0_14.d = rsi_29
                            
                            if (rsi_29 s> rax_44)
                                sub_140594770(&var_b8)
                                rsi_29 = var_b0_14.d
                                r14_14 = var_b8
                            
                            UnDecorator::getReferenceType(r14_14, r12_13, rdi_31 * 2)
                            r14_14[sx.q(rsi_29) - 1] = 0
                        
                        int32_t r8_57 = rsi_29 - 1
                        
                        if (rsi_29 == 0)
                            r8_57 = 0
                        
                        sub_140a20ba0(&var_a8, r14_14, r8_57)
                        
                        if (r14_14 != 0)
                            sub_140a74f90(r14_14)
                        
                        int32_t rdx_74 = arg1[1].d
                        int32_t rdi_32 = rdx_74 - 1
                        
                        if (rdx_74 == 0)
                            rdi_32 = 0
                        
                        int32_t rcx_93 = rdi_32
                        
                        if (rdi_32 s> 0xe)
                            rcx_93 = 0xe
                        
                        int64_t r8_58 = sx.q(rcx_93)
                        
                        if (r8_58 s> 0x12)
                            rdi_32 = rcx_93
                        else if (rdi_32 s> 0x12)
                            rdi_32 = 0x12
                        
                        int16_t* const rax_46
                        
                        if (rdx_74 == 0)
                            rax_46 = &data_142d40450
                        else
                            rax_46 = *arg1
                        
                        int16_t* r12_14 = &rax_46[r8_58]
                        var_b8 = nullptr
                        int32_t rdi_33 = rdi_32 - rcx_93
                        int64_t var_b0_15 = 0
                        int16_t* const r14_15 = nullptr
                        int32_t rsi_31 = 0
                        int32_t rax_47 = 0
                        
                        if (r12_14 != 0 && *r12_14 != 0 && rdi_33 s> 0)
                            if (rdi_33 + 1 s> 0)
                                sub_1405947f0(&var_b8, rdi_33 + 1)
                                rax_47 = var_b0_15:4.d
                                rsi_31 = var_b0_15.d
                                r14_15 = var_b8
                            
                            rsi_31 = rsi_31 + 1 + rdi_33
                            var_b0_15.d = rsi_31
                            
                            if (rsi_31 s> rax_47)
                                sub_140594770(&var_b8)
                                rsi_31 = var_b0_15.d
                                r14_15 = var_b8
                            
                            UnDecorator::getReferenceType(r14_15, r12_14, rdi_33 * 2)
                            r14_15[sx.q(rsi_31) - 1] = 0
                        
                        int32_t r8_61 = rsi_31 - 1
                        
                        if (rsi_31 == 0)
                            r8_61 = 0
                        
                        sub_140a20ba0(&var_a8, r14_15, r8_61)
                        
                        if (r14_15 != 0)
                            sub_140a74f90(r14_15)
                        
                        int32_t rdx_79 = arg1[1].d
                        int32_t rdi_34 = rdx_79 - 1
                        
                        if (rdx_79 == 0)
                            rdi_34 = 0
                        
                        int32_t rax_49 = rdi_34
                        
                        if (rdi_34 s> 0x15)
                            rax_49 = 0x15
                        
                        int64_t r8_62 = sx.q(rax_49)
                        
                        if (r8_62 s> 0x19)
                            rdi_34 = rax_49
                        else if (rdi_34 s> 0x19)
                            rdi_34 = 0x19
                        
                        int16_t* const rcx_99
                        
                        if (rdx_79 == 0)
                            rcx_99 = &data_142d40450
                        else
                            rcx_99 = *arg1
                        
                        int32_t rdi_35 = rdi_34 - rax_49
                        var_b8 = nullptr
                        int16_t* r12_15 = &rcx_99[r8_62]
                        int64_t var_b0_16 = 0
                        int16_t* const r14_16 = nullptr
                        int32_t rsi_33 = 0
                        int32_t rax_50 = 0
                        
                        if (r12_15 != 0 && *r12_15 != 0 && rdi_35 s> 0)
                            if (rdi_35 + 1 s> 0)
                                sub_1405947f0(&var_b8, rdi_35 + 1)
                                rax_50 = var_b0_16:4.d
                                rsi_33 = var_b0_16.d
                                r14_16 = var_b8
                            
                            rsi_33 = rsi_33 + 1 + rdi_35
                            var_b0_16.d = rsi_33
                            
                            if (rsi_33 s> rax_50)
                                sub_140594770(&var_b8)
                                rsi_33 = var_b0_16.d
                                r14_16 = var_b8
                            
                            UnDecorator::getReferenceType(r14_16, r12_15, rdi_35 * 2)
                            r14_16[sx.q(rsi_33) - 1] = 0
                        
                        int32_t r8_65 = rsi_33 - 1
                        
                        if (rsi_33 == 0)
                            r8_65 = 0
                        
                        sub_140a20ba0(&var_a8, r14_16, r8_65)
                        
                        if (r14_16 != 0)
                            sub_140a74f90(r14_16)
                        
                        int32_t rcx_105 = arg1[1].d
                        int32_t rdi_36 = rcx_105 - 1
                        
                        if (rcx_105 == 0)
                            rdi_36 = 0
                        
                        int32_t rax_52 = rdi_36
                        
                        if (rdi_36 s> 0x1d)
                            rax_52 = 0x1d
                        
                        int64_t rdx_84 = sx.q(rax_52)
                        
                        if (rdx_84 s> 0x1f)
                            rdi_36 = rax_52
                        else if (rdi_36 s> 0x1f)
                            rdi_36 = 0x1f
                        
                        int16_t* const rcx_106
                        
                        if (rcx_105 == 0)
                            rcx_106 = &data_142d40450
                        else
                            rcx_106 = *arg1
                        
                        int32_t rdi_37 = rdi_36 - rax_52
                        var_b8 = nullptr
                        int16_t* r12_16 = &rcx_106[rdx_84]
                        int64_t var_b0_17 = 0
                        int16_t* const r14_17 = nullptr
                        int32_t rsi_35 = 0
                        int32_t rax_53 = 0
                        
                        if (r12_16 != 0 && *r12_16 != 0 && rdi_37 s> 0)
                            if (rdi_37 + 1 s> 0)
                                sub_1405947f0(&var_b8, rdi_37 + 1)
                                rax_53 = var_b0_17:4.d
                                rsi_35 = var_b0_17.d
                                r14_17 = var_b8
                            
                            rsi_35 += rdi_37 + 1
                            var_b0_17.d = rsi_35
                            
                            if (rsi_35 s> rax_53)
                                sub_140594770(&var_b8)
                                rsi_35 = var_b0_17.d
                                r14_17 = var_b8
                            
                            UnDecorator::getReferenceType(r14_17, r12_16, rdi_37 * 2)
                            r14_17[sx.q(rsi_35) - 1] = 0
                        
                        int32_t r8_68 = rsi_35 - 1
                        
                        if (rsi_35 == 0)
                            r8_68 = 0
                        
                        sub_140a20ba0(&var_a8, r14_17, r8_68)
                        
                        if (r14_17 != 0)
                            sub_140a74f90(r14_17)
                        
                        int32_t rdx_89 = arg1[1].d
                        int32_t rdi_38 = rdx_89 - 1
                        
                        if (rdx_89 == 0)
                            rdi_38 = 0
                        
                        int32_t rax_55 = rdi_38
                        
                        if (rdi_38 s> 0x22)
                            rax_55 = 0x22
                        
                        int64_t r8_69 = sx.q(rax_55)
                        
                        if (r8_69 s> 0x24)
                            rdi_38 = rax_55
                        else if (rdi_38 s> 0x24)
                            rdi_38 = 0x24
                        
                        int16_t* const rcx_112
                        
                        if (rdx_89 == 0)
                            rcx_112 = &data_142d40450
                        else
                            rcx_112 = *arg1
                        
                        int32_t rdi_39 = rdi_38 - rax_55
                        var_b8 = nullptr
                        int16_t* r12_17 = &rcx_112[r8_69]
                        int64_t var_b0_18 = 0
                        int16_t* const r14_18 = nullptr
                        int32_t rsi_37 = 0
                        int32_t rax_56 = 0
                        
                        if (r12_17 != 0 && *r12_17 != 0 && rdi_39 s> 0)
                            if (rdi_39 + 1 s> 0)
                                sub_1405947f0(&var_b8, rdi_39 + 1)
                                rax_56 = var_b0_18:4.d
                                rsi_37 = var_b0_18.d
                                r14_18 = var_b8
                            
                            rsi_37 = rsi_37 + 1 + rdi_39
                            var_b0_18.d = rsi_37
                            
                            if (rsi_37 s> rax_56)
                                sub_140594770(&var_b8)
                                rsi_37 = var_b0_18.d
                                r14_18 = var_b8
                            
                            UnDecorator::getReferenceType(r14_18, r12_17, rdi_39 * 2)
                            r14_18[sx.q(rsi_37) - 1] = 0
                        
                        int32_t r8_72 = rsi_37 - 1
                        
                        if (rsi_37 == 0)
                            r8_72 = 0
                        
                        sub_140a20ba0(&var_a8, r14_18, r8_72)
                        
                        if (r14_18 != 0)
                            sub_140a74f90(r14_18)
                        
                        int32_t rcx_118 = arg1[1].d
                        int32_t rdi_40 = rcx_118 - 1
                        
                        if (rcx_118 == 0)
                            rdi_40 = 0
                        
                        int32_t rax_58 = rdi_40
                        
                        if (rdi_40 s> 0x27)
                            rax_58 = 0x27
                        
                        int64_t rdx_94 = sx.q(rax_58)
                        
                        if (rdx_94 s> 0x29)
                            rdi_40 = rax_58
                        else if (rdi_40 s> 0x29)
                            rdi_40 = 0x29
                        
                        int16_t* const rcx_119
                        
                        if (rcx_118 == 0)
                            rcx_119 = &data_142d40450
                        else
                            rcx_119 = *arg1
                        
                        int32_t rdi_41 = rdi_40 - rax_58
                        var_b8 = nullptr
                        int16_t* r12_18 = &rcx_119[rdx_94]
                        int64_t var_b0_19 = 0
                        int16_t* const r14_19 = nullptr
                        int32_t rsi_39 = 0
                        int32_t rax_59 = 0
                        
                        if (r12_18 != 0 && *r12_18 != 0 && rdi_41 s> 0)
                            if (rdi_41 + 1 s> 0)
                                sub_1405947f0(&var_b8, rdi_41 + 1)
                                rax_59 = var_b0_19:4.d
                                rsi_39 = var_b0_19.d
                                r14_19 = var_b8
                            
                            rsi_39 += rdi_41 + 1
                            var_b0_19.d = rsi_39
                            
                            if (rsi_39 s> rax_59)
                                sub_140594770(&var_b8)
                                rsi_39 = var_b0_19.d
                                r14_19 = var_b8
                            
                            UnDecorator::getReferenceType(r14_19, r12_18, rdi_41 * 2)
                            r14_19[sx.q(rsi_39) - 1] = 0
                        
                        int32_t r8_75 = rsi_39 - 1
                        
                        if (rsi_39 == 0)
                            r8_75 = 0
                        
                        sub_140a20ba0(&var_a8, r14_19, r8_75)
                        
                        if (r14_19 != 0)
                            sub_140a74f90(r14_19)
                        
                        int32_t rcx_125 = arg1[1].d
                        int32_t rdi_42 = rcx_125 - 1
                        
                        if (rcx_125 == 0)
                            rdi_42 = 0
                        
                        int32_t rax_61 = rdi_42
                        
                        if (rdi_42 s> 0x2c)
                            rax_61 = 0x2c
                        
                        int64_t rdx_99 = sx.q(rax_61)
                        
                        if (rdx_99 s> 0x2e)
                            rdi_42 = rax_61
                        else if (rdi_42 s> 0x2e)
                            rdi_42 = 0x2e
                        
                        int16_t* const rcx_126
                        
                        if (rcx_125 == 0)
                            rcx_126 = &data_142d40450
                        else
                            rcx_126 = *arg1
                        
                        int32_t rdi_43 = rdi_42 - rax_61
                        var_b8 = nullptr
                        int16_t* r12_19 = &rcx_126[rdx_99]
                        int64_t var_b0_20 = 0
                        int16_t* const r14_20 = nullptr
                        int32_t rsi_41 = 0
                        int32_t rax_62 = 0
                        
                        if (r12_19 != 0 && *r12_19 != 0 && rdi_43 s> 0)
                            if (rdi_43 + 1 s> 0)
                                sub_1405947f0(&var_b8, rdi_43 + 1)
                                rax_62 = var_b0_20:4.d
                                rsi_41 = var_b0_20.d
                                r14_20 = var_b8
                            
                            rsi_41 = rsi_41 + 1 + rdi_43
                            var_b0_20.d = rsi_41
                            
                            if (rsi_41 s> rax_62)
                                sub_140594770(&var_b8)
                                rsi_41 = var_b0_20.d
                                r14_20 = var_b8
                            
                            UnDecorator::getReferenceType(r14_20, r12_19, rdi_43 * 2)
                            r14_20[sx.q(rsi_41) - 1] = 0
                        
                        int32_t r8_78 = rsi_41 - 1
                        
                        if (rsi_41 == 0)
                            r8_78 = 0
                        
                        sub_140a20ba0(&var_a8, r14_20, r8_78)
                        
                        if (r14_20 != 0)
                            sub_140a74f90(r14_20)
                        
                        int32_t rcx_132 = arg1[1].d
                        int32_t rdi_44 = rcx_132 - 1
                        
                        if (rcx_132 == 0)
                            rdi_44 = 0
                        
                        int32_t rax_64 = rdi_44
                        
                        if (rdi_44 s> 0x31)
                            rax_64 = 0x31
                        
                        int64_t rdx_104 = sx.q(rax_64)
                        
                        if (rdx_104 s> 0x33)
                            rdi_44 = rax_64
                        else if (rdi_44 s> 0x33)
                            rdi_44 = 0x33
                        
                        int16_t* const rcx_133
                        
                        if (rcx_132 == 0)
                            rcx_133 = &data_142d40450
                        else
                            rcx_133 = *arg1
                        
                        int32_t rdi_45 = rdi_44 - rax_64
                        var_b8 = nullptr
                        int16_t* r12_20 = &rcx_133[rdx_104]
                        int64_t var_b0_21 = 0
                        int16_t* const r14_21 = nullptr
                        int32_t rsi_43 = 0
                        int32_t rax_65 = 0
                        
                        if (r12_20 != 0 && *r12_20 != 0 && rdi_45 s> 0)
                            if (rdi_45 + 1 s> 0)
                                sub_1405947f0(&var_b8, rdi_45 + 1)
                                rax_65 = var_b0_21:4.d
                                rsi_43 = var_b0_21.d
                                r14_21 = var_b8
                            
                            rsi_43 = rsi_43 + 1 + rdi_45
                            var_b0_21.d = rsi_43
                            
                            if (rsi_43 s> rax_65)
                                sub_140594770(&var_b8)
                                rsi_43 = var_b0_21.d
                                r14_21 = var_b8
                            
                            UnDecorator::getReferenceType(r14_21, r12_20, rdi_45 * 2)
                            r14_21[sx.q(rsi_43) - 1] = 0
                        
                        int32_t r8_81 = rsi_43 - 1
                        
                        if (rsi_43 == 0)
                            r8_81 = 0
                        
                        sub_140a20ba0(&var_a8, r14_21, r8_81)
                        
                        if (r14_21 != 0)
                            sub_140a74f90(r14_21)
                        
                        int32_t rcx_139 = arg1[1].d
                        int32_t rdi_46 = rcx_139 - 1
                        
                        if (rcx_139 == 0)
                            rdi_46 = 0
                        
                        int32_t rax_67 = rdi_46
                        
                        if (rdi_46 s> 0x36)
                            rax_67 = 0x36
                        
                        int64_t rdx_109 = sx.q(rax_67)
                        
                        if (rdx_109 s> 0x38)
                            rdi_46 = rax_67
                        else if (rdi_46 s> 0x38)
                            rdi_46 = 0x38
                        
                        int16_t* const rcx_140
                        
                        if (rcx_139 == 0)
                            rcx_140 = &data_142d40450
                        else
                            rcx_140 = *arg1
                        
                        int32_t rdi_47 = rdi_46 - rax_67
                        var_b8 = nullptr
                        int16_t* r12_21 = &rcx_140[rdx_109]
                        int64_t var_b0_22 = 0
                        int16_t* const r14_22 = nullptr
                        int32_t rsi_45 = 0
                        int32_t rax_68 = 0
                        
                        if (r12_21 != 0 && *r12_21 != 0 && rdi_47 s> 0)
                            if (rdi_47 + 1 s> 0)
                                sub_1405947f0(&var_b8, rdi_47 + 1)
                                rax_68 = var_b0_22:4.d
                                rsi_45 = var_b0_22.d
                                r14_22 = var_b8
                            
                            rsi_45 = rsi_45 + 1 + rdi_47
                            var_b0_22.d = rsi_45
                            
                            if (rsi_45 s> rax_68)
                                sub_140594770(&var_b8)
                                rsi_45 = var_b0_22.d
                                r14_22 = var_b8
                            
                            UnDecorator::getReferenceType(r14_22, r12_21, rdi_47 * 2)
                            r14_22[sx.q(rsi_45) - 1] = 0
                        
                        int32_t r8_84 = rsi_45 - 1
                        
                        if (rsi_45 == 0)
                            r8_84 = 0
                        
                        sub_140a20ba0(&var_a8, r14_22, r8_84)
                        
                        if (r14_22 != 0)
                            sub_140a74f90(r14_22)
                        
                        int32_t rcx_146 = arg1[1].d
                        int32_t rdi_48 = rcx_146 - 1
                        
                        if (rcx_146 == 0)
                            rdi_48 = 0
                        
                        int32_t rax_70 = rdi_48
                        
                        if (rdi_48 s> 0x3b)
                            rax_70 = 0x3b
                        
                        int64_t rdx_114 = sx.q(rax_70)
                        
                        if (rdx_114 s> 0x3d)
                            rdi_48 = rax_70
                        else if (rdi_48 s> 0x3d)
                            rdi_48 = 0x3d
                        
                        int16_t* const rcx_147
                        
                        if (rcx_146 == 0)
                            rcx_147 = &data_142d40450
                        else
                            rcx_147 = *arg1
                        
                        int32_t rdi_49 = rdi_48 - rax_70
                        var_b8 = nullptr
                        int16_t* r12_22 = &rcx_147[rdx_114]
                        int64_t var_b0_23 = 0
                        int16_t* const r14_23 = nullptr
                        int32_t rsi_47 = 0
                        int32_t rax_71 = 0
                        
                        if (r12_22 != 0 && *r12_22 != 0 && rdi_49 s> 0)
                            if (rdi_49 + 1 s> 0)
                                sub_1405947f0(&var_b8, rdi_49 + 1)
                                rax_71 = var_b0_23:4.d
                                rsi_47 = var_b0_23.d
                                r14_23 = var_b8
                            
                            rsi_47 = rsi_47 + 1 + rdi_49
                            var_b0_23.d = rsi_47
                            
                            if (rsi_47 s> rax_71)
                                sub_140594770(&var_b8)
                                rsi_47 = var_b0_23.d
                                r14_23 = var_b8
                            
                            UnDecorator::getReferenceType(r14_23, r12_22, rdi_49 * 2)
                            r14_23[sx.q(rsi_47) - 1] = 0
                        
                        int32_t r8_87 = rsi_47 - 1
                        
                        if (rsi_47 == 0)
                            r8_87 = 0
                        
                        sub_140a20ba0(&var_a8, r14_23, r8_87)
                        
                        if (r14_23 != 0)
                            sub_140a74f90(r14_23)
                        
                        rcx_171 = arg1[1].d
                        rdi_21 = rcx_171 - 1
                        
                        if (rcx_171 == 0)
                            rdi_21 = 0
                        
                        rax_30 = rdi_21
                        
                        if (rdi_21 s> 0x40)
                            rax_30 = 0x40
                        
                        rdx_119 = sx.q(rax_30)
                        
                        if (rdx_119 s<= 0x42)
                            r8_88 = 0x42
                            goto label_140b23a18
                        
                        rdi_21 = rax_30
                        goto label_140b23a21
    rcx_5 = var_a8
label_140b23eb5:
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    result = zx.d(rbx_1.b)
else
    var_58 = nullptr
    int64_t var_50_1 = 0
    
    if (sub_140af3620(arg1) == 0x10)
        int32_t rdi_1 = arg1[1].d
        rbx_1 = 0
        int64_t rsi_1 = *arg1
        var_98 = nullptr
        
        if (rdi_1 != 0)
            sub_1405a4c70(&var_98, rdi_1, 0)
            memcpy(var_98, rsi_1, rdi_1 * 2)
        else
            int32_t var_8c_1 = 0
        
        sub_140a30380(&var_98, 0x2d, 0x2b)
        sub_140a30380(&var_98, 0x5f, 0x2f)
        int16_t* rcx_4
        
        if (rdi_1 == 0)
            rcx_4 = &data_142d40450
        else
            rcx_4 = var_98
            rbx_1 = rdi_1 - 1
        
        if (sub_140ae4700(rcx_4, rbx_1, &var_58) != 0)
            rbx_1.b = 1
            rcx_5 = var_98
            *arg3 = var_58.o
        else
            rcx_5 = var_98
            rbx_1.b = 0
        
        goto label_140b23eb5
    
    result.b = 0
__security_check_cookie(rax_1 ^ &var_d8)
return result
