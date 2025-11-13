// 函数: sub_140a7f790
// 地址: 0x140a7f790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
int32_t arg_10 = 0
int64_t rax = sub_142a519d0(&arg_10)
int32_t rbx = arg_10
int64_t* r12 = arg1 + 0x28

if (rbx s> *(r12 + 0xc))
    sub_140a89b30(r12, rbx)
    rbx = arg_10

int32_t r14 = 1

if (rbx s> *(arg1 + 0x40) - *(arg1 + 0x6c))
    sub_1409d9850(arg1 + 0x38, rbx)
    int32_t rdx_4
    
    if (rbx u< 4)
        rdx_4 = 1
    else
        uint32_t rbx_1 = rbx u>> 1
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rbx_1 + 8)
        int32_t rcx_3
        
        if (rbx_1 == 0xfffffff8)
            rcx_3 = 0x20
        else
            rcx_3 = 0x1f - temp0_1
        
        int32_t rcx_5 = rcx_3 << 0x1a s>> 0x1f
        uint64_t rflags_2
        char temp0_2
        temp0_2, rflags_2 = _bit_scan_reverse(rbx_1 + 7)
        
        if (rcx_5 == 0)
            rdx_4 = 1
        else
            rdx_4 = 1 << ((not.d(rcx_5)).b & (0x20 - (0x1f - temp0_2)))
    
    int32_t rax_6 = *(arg1 + 0x80)
    
    if (rax_6 == 0 || rax_6 s< rdx_4)
        *(arg1 + 0x80) = rdx_4
        sub_140637440(arg1 + 0x38)
    
    rbx = arg_10

void* r13_1 = arg1 + 0x88
int32_t temp0_3
int32_t temp1
temp0_3:temp1 = sx.q(rbx)
void* var_120 = r13_1
int32_t rax_10 = (temp1 - temp0_3) s>> 1

if (rax_10 s> *(r13_1 + 8) - *(r13_1 + 0x34))
    sub_1409d9530(r13_1, rax_10)
    
    if (rax_10 u>= 4)
        uint32_t rsi_2 = rax_10 u>> 1
        uint64_t rflags_3
        int32_t temp0_4
        temp0_4, rflags_3 = _bit_scan_reverse(rsi_2 + 8)
        int32_t rcx_12
        
        if (rsi_2 == 0xfffffff8)
            rcx_12 = 0x20
        else
            rcx_12 = 0x1f - temp0_4
        
        int32_t rcx_14 = rcx_12 << 0x1a s>> 0x1f
        uint64_t rflags_4
        char temp0_5
        temp0_5, rflags_4 = _bit_scan_reverse(rsi_2 + 7)
        char r15_1
        
        if (rcx_14 == 0)
            r15_1 = 0x20
        else
            r15_1 = 0x1f - temp0_5
        
        r14 = 1 << ((not.d(rcx_14)).b & (0x20 - r15_1))
    
    int32_t rax_13 = *(r13_1 + 0x48)
    
    if (rax_13 == 0 || rax_13 s< r14)
        *(r13_1 + 0x48) = r14
        sub_140a865b0(r13_1)
    
    rbx = arg_10

void* r15_2 = arg_8
void* var_d8 = r15_2
int32_t arg_20 = 0
int32_t var_168
int16_t* var_158
int64_t var_150
int16_t* var_148
int64_t var_138
int32_t var_130
int32_t var_12c
int64_t var_118
int32_t arg_18

if (rbx s> 0)
    int64_t rcx_18 = 0
    int64_t var_100_1 = 0
    int32_t rax_60
    
    do
        int32_t rdx_8 = 0
        var_148 = nullptr
        void* rsi_5 = rcx_18 * 0xe0 + rax
        int32_t rcx_19 = 0
        int64_t var_140
        var_140.d = 0
        var_140:4.d = 0
        
        if (rsi_5 != -8 && *(rsi_5 + 8) != 0)
            int64_t rbx_3 = -1
            
            do
                rbx_3 += 1
            while ((rsi_5 + 8)[rbx_3] != 0)
            
            if (rbx_3.d + 1 s> 0)
                sub_1405947f0(&var_148, rbx_3.d + 1)
                rcx_19 = var_140:4.d
                rdx_8 = var_140.d
            
            int32_t rax_14 = rbx_3.d + 1 + rdx_8
            var_140.d = rax_14
            
            if (rax_14 s> rcx_19)
                sub_140594770(&var_148)
            
            var_168.w = 0x3f
            sub_1405a7220(var_148, rbx_3.d + 1, rsi_5 + 8, rbx_3.d + 1, 0x3f)
        
        var_138 = 0
        var_130 = 0
        int32_t rax_15 = 0
        var_12c = 0
        int32_t r14_1 = 0
        
        if (rsi_5 != -0x14 && *(rsi_5 + 0x14) != 0)
            int64_t rbx_5 = -1
            
            do
                rbx_5 += 1
            while (*(rsi_5 + 0x14 + rbx_5) != 0)
            
            if (rbx_5.d + 1 s> 0)
                sub_1405947f0(&var_138, rbx_5.d + 1)
                rax_15 = var_12c
                r14_1 = var_130
            
            int32_t r14_2 = r14_1 + rbx_5.d + 1
            var_130 = r14_2
            
            if (r14_2 s> rax_15)
                sub_140594770(&var_138)
            
            var_168.w = 0x3f
            sub_1405a7220(var_138, rbx_5.d + 1, rsi_5 + 0x14, rbx_5.d + 1, 0x3f)
        
        var_158 = nullptr
        int32_t rax_16 = 0
        var_150:4.d = 0
        int32_t rsi_6 = 0
        var_150.d = 0
        
        if (rsi_5 != -0x1a && *(rsi_5 + 0x1a) != 0)
            int64_t rbx_7 = -1
            
            do
                rbx_7 += 1
            while (*(rsi_5 + 0x1a + rbx_7) != 0)
            
            if (rbx_7.d + 1 s> 0)
                sub_1405947f0(&var_158, rbx_7.d + 1)
                rax_16 = var_150:4.d
                rsi_6 = var_150.d
            
            int32_t rsi_7 = rsi_6 + rbx_7.d + 1
            var_150.d = rsi_7
            
            if (rsi_7 s> rax_16)
                sub_140594770(&var_158)
            
            var_168.w = 0x3f
            sub_1405a7220(var_158, rbx_7.d + 1, rsi_5 + 0x1a, rbx_7.d + 1, 0x3f)
        
        void* rdi_5 = arg1 + 0x38
        void var_f8
        void var_90
        
        if (*sub_14062d5f0(rdi_5, &var_f8, &var_148) == 0xffffffff)
            int32_t r14_3 = *(r15_2 + 0x30)
            int32_t var_b0
            sub_140a696e0(rdi_5, &var_b0)
            int64_t* var_a8
            sub_140596d10(var_a8, &var_148)
            var_a8[2].d = r14_3
            var_a8[3].d = 0xffffffff
            int32_t rax_18 = var_a8[1].d
            int16_t* rdx_20
            
            if (rax_18 == 0)
                rdx_20 = &data_142d40450
            else
                rdx_20 = *var_a8
            
            int32_t rcx_32 = rax_18 - 1
            
            if (rax_18 == 0)
                rcx_32 = 0
            
            void var_f4
            sub_14062c400(rdi_5, &var_f4, sub_1405969c0(rcx_32, rdx_20), var_a8, var_b0, nullptr)
            int32_t r15_3 = var_140.d
            int16_t* r12_1 = var_148
            int32_t rcx_35
            int16_t* rdx_22
            
            if (r15_3 == 0)
                rdx_22 = &data_142d40450
                rcx_35 = 0
            else
                rdx_22 = r12_1
                rcx_35 = r15_3 - 1
            
            int64_t rsi_8 = sx.q(sub_1405969c0(rcx_35, rdx_22))
            int64_t* rbx_11
            
            if (*(r13_1 + 8) == *(r13_1 + 0x34))
            label_140a7fc0d:
                r15_3 = var_140.d
                rbx_11 = sub_140a5d0b0(r13_1, rsi_8.d, &var_148)
                r12_1 = var_148
            else
                void* rdx_23 = *(r13_1 + 0x40)
                void* r9_5 = r13_1 + 0x38
                
                if (rdx_23 != 0)
                    r9_5 = rdx_23
                
                int32_t rbx_10 = *(r9_5 + (((sx.q(*(r13_1 + 0x48)) - 1) & rsi_8) << 2))
                
                if (rbx_10 == 0xffffffff)
                    goto label_140a7fc0d
                
                int64_t rdx_24 = *r13_1
                int64_t rdi_6
                
                while (true)
                    int16_t* const rax_22 = &data_142d40450
                    rdi_6 = sx.q(rbx_10) * 0x28
                    
                    if (r15_3 != 0)
                        rax_22 = r12_1
                    
                    int16_t* const rcx_38
                    
                    if (*(rdi_6 + rdx_24 + 8) == 0)
                        rcx_38 = &data_142d40450
                    else
                        rcx_38 = *(rdi_6 + rdx_24)
                    
                    if (sub_140a54510(rcx_38, rax_22) == 0)
                        break
                    
                    rdx_24 = *r13_1
                    rbx_10 = *(rdi_6 + rdx_24 + 0x20)
                    
                    if (rbx_10 == 0xffffffff)
                        goto label_140a7fc0d
                
                if (rbx_10 == 0xffffffff)
                    goto label_140a7fc0d
                
                void* rbx_15 = *r13_1
                
                if (rbx_15 == neg.q(rdi_6))
                    goto label_140a7fc0d
                
                rbx_11 = rbx_15 + rdi_6 + 0x10
            
            int64_t rdi_7 = sx.q(rbx_11[1].d)
            int32_t rcx_40 = (rdi_7 + 1).d
            rbx_11[1].d = rcx_40
            
            if (rcx_40 s> *(rbx_11 + 0xc))
                sub_1405a4cf0(rbx_11)
            
            *(*rbx_11 + (rdi_7 << 2)) = r14_3
            int64_t rbx_12 = sx.q(r12[1].d)
            int32_t rax_25 = (rbx_12 + 1).d
            r12[1].d = rax_25
            
            if (rax_25 s> *(r12 + 0xc))
                sub_140a88e70(r12)
            
            int64_t* rbx_14 = (rbx_12 << 6) + *r12
            __builtin_memset(rbx_14, 0, 0x40)
            
            if (rbx_14 != &var_148)
                int32_t r8_11 = *(rbx_14 + 0xc)
                rbx_14[1].d = r15_3
                
                if (r15_3 != 0 || r8_11 != 0)
                    sub_1405a4c70(rbx_14, r15_3, r8_11)
                    memcpy(*rbx_14, r12_1, r15_3 * 2)
                else
                    *(rbx_14 + 0xc) = 0
            
            if (&rbx_14[2] != &var_148)
                int32_t r8_14 = *(rbx_14 + 0x1c)
                rbx_14[3].d = r15_3
                
                if (r15_3 != 0 || r8_14 != 0)
                    sub_1405a4c70(&rbx_14[2], r15_3, r8_14)
                    memcpy(rbx_14[2], r12_1, r15_3 * 2)
                else
                    *(rbx_14 + 0x1c) = 0
            
            if (&rbx_14[4] != &var_90)
                int32_t r8_17 = *(rbx_14 + 0x2c)
                rbx_14[5].d = 0
                
                if (r8_17 != 0)
                    sub_1405a4c70(&rbx_14[4], 0, r8_17)
                else
                    *(rbx_14 + 0x2c) = 0
            
            if (&rbx_14[6] != &var_90)
                int32_t r8_18 = *(rbx_14 + 0x3c)
                rbx_14[7].d = 0
                
                if (r8_18 != 0)
                    sub_1405a4c70(&rbx_14[6], 0, r8_18)
                else
                    *(rbx_14 + 0x3c) = 0
            
            rdi_5 = arg1 + 0x38
            r15_2 = arg_8
        
        int32_t r12_3 = var_150.d
        
        if (r12_3 s> 1)
            int64_t var_d0 = 0
            int64_t var_c8_1 = 0
            int64_t var_80
            int64_t* rax_26 = sub_140a6e720(&var_80, &var_148, &var_d0, &var_158)
            void var_f0
            
            if (*sub_14062d5f0(rdi_5, &var_f0, rax_26) != 0xffffffff)
                r12_3 = var_150.d
            else
                int32_t r13_2 = *(r15_2 + 0x30)
                int32_t var_a0
                sub_140a696e0(rdi_5, &var_a0)
                int64_t* var_98
                sub_140596d10(var_98, rax_26)
                var_98[2].d = r13_2
                var_98[3].d = 0xffffffff
                int32_t rax_28 = var_98[1].d
                int16_t* rdx_37
                
                if (rax_28 == 0)
                    rdx_37 = &data_142d40450
                else
                    rdx_37 = *var_98
                
                int32_t rcx_54 = rax_28 - 1
                
                if (rax_28 == 0)
                    rcx_54 = 0
                
                void var_ec
                sub_14062c400(rdi_5, &var_ec, sub_1405969c0(rcx_54, rdx_37), var_98, var_a0, 
                    nullptr)
                int32_t r14_5 = var_140.d
                int16_t* r15_4 = var_148
                int32_t rcx_57
                int16_t* rdx_39
                
                if (r14_5 == 0)
                    rdx_39 = &data_142d40450
                    rcx_57 = 0
                else
                    rdx_39 = r15_4
                    rcx_57 = r14_5 - 1
                
                int64_t rsi_10 = sx.q(sub_1405969c0(rcx_57, rdx_39))
                int64_t* rbx_19
                
                if (*(var_120 + 8) == *(var_120 + 0x34))
                label_140a7ff02:
                    r14_5 = var_140.d
                    rbx_19 = sub_140a5d0b0(var_120, rsi_10.d, &var_148)
                    r15_4 = var_148
                else
                    void* rdx_40 = *(var_120 + 0x40)
                    void* r9_8 = var_120 + 0x38
                    
                    if (rdx_40 != 0)
                        r9_8 = rdx_40
                    
                    int32_t rbx_18 = *(r9_8 + (((sx.q(*(var_120 + 0x48)) - 1) & rsi_10) << 2))
                    
                    if (rbx_18 == 0xffffffff)
                        goto label_140a7ff02
                    
                    int64_t rdx_41 = *var_120
                    int64_t rdi_10
                    
                    while (true)
                        rdi_10 = sx.q(rbx_18) * 0x28
                        int64_t* rcx_60 = rdi_10 + rdx_41
                        int16_t* rdx_42 = &data_142d40450
                        
                        if (r14_5 != 0)
                            rdx_42 = r15_4
                        
                        int16_t* const rcx_61
                        
                        if (rcx_60[1].d == 0)
                            rcx_61 = &data_142d40450
                        else
                            rcx_61 = *rcx_60
                        
                        if (sub_140a54510(rcx_61, rdx_42) == 0)
                            break
                        
                        rdx_41 = *var_120
                        rbx_18 = *(rdi_10 + rdx_41 + 0x20)
                        
                        if (rbx_18 == 0xffffffff)
                            goto label_140a7ff02
                    
                    if (rbx_18 == 0xffffffff)
                        goto label_140a7ff02
                    
                    void* rbx_22 = *var_120
                    
                    if (rbx_22 == neg.q(rdi_10))
                        goto label_140a7ff02
                    
                    rbx_19 = rbx_22 + rdi_10 + 0x10
                
                int64_t rdi_11 = sx.q(rbx_19[1].d)
                int32_t rcx_63 = (rdi_11 + 1).d
                rbx_19[1].d = rcx_63
                
                if (rcx_63 s> *(rbx_19 + 0xc))
                    sub_1405a4cf0(rbx_19)
                
                *(*rbx_19 + (rdi_11 << 2)) = r13_2
                int64_t rbx_20 = sx.q(r12[1].d)
                int32_t rax_36 = (rbx_20 + 1).d
                r12[1].d = rax_36
                
                if (rax_36 s> *(r12 + 0xc))
                    sub_140a88e70(r12)
                
                uint64_t* rcx_68 = (rbx_20 << 6) + *r12
                __builtin_memset(rcx_68, 0, 0x40)
                sub_140597df0(rcx_68, rax_26)
                
                if (&rcx_68[2] != &var_148)
                    int32_t r8_27 = *(rcx_68 + 0x1c)
                    rcx_68[3].d = r14_5
                    
                    if (r14_5 != 0 || r8_27 != 0)
                        sub_1405a4c70(&rcx_68[2], r14_5, r8_27)
                        memcpy(rcx_68[2], r15_4, r14_5 * 2)
                    else
                        *(rcx_68 + 0x1c) = 0
                
                if (&rcx_68[4] != &var_90)
                    int32_t r8_30 = *(rcx_68 + 0x2c)
                    rcx_68[5].d = 0
                    
                    if (r8_30 != 0)
                        sub_1405a4c70(&rcx_68[4], 0, r8_30)
                    else
                        *(rcx_68 + 0x2c) = 0
                
                if (&rcx_68[6] == &var_158)
                    r13_1 = var_120
                    rdi_5 = arg1 + 0x38
                    r12_3 = var_150.d
                else
                    r12_3 = var_150.d
                    int32_t r8_31 = *(rcx_68 + 0x3c)
                    rcx_68[7].d = r12_3
                    
                    if (r12_3 != 0 || r8_31 != 0)
                        sub_1405a4c70(&rcx_68[6], r12_3, r8_31)
                        memcpy(rcx_68[6], var_158, r12_3 * 2)
                        r13_1 = var_120
                        rdi_5 = arg1 + 0x38
                    else
                        r13_1 = var_120
                        rdi_5 = arg1 + 0x38
                        *(rcx_68 + 0x3c) = 0
            
            int64_t rbx_24 = var_80
            
            if (rbx_24 != 0)
                int64_t* rcx_74 = data_143ddb3f0
                
                if (rcx_74 == 0)
                    sub_140a750a0()
                    rcx_74 = data_143ddb3f0
                
                (*(*rcx_74 + 0x30))(rcx_74, rbx_24)
        
        int32_t rsi_13 = var_130
        
        if (rsi_13 s> 1)
            int64_t rbx_25 = 0
            int64_t var_110_1 = 0
            var_118 = 0
            int64_t var_c0 = 0
            int64_t var_b8_1 = 0
            int64_t var_70
            int64_t* rax_39 = sub_140a6e720(&var_70, &var_148, &var_138, &var_c0)
            void var_e8
            int64_t* r15_5
            
            if (*sub_14062d5f0(rdi_5, &var_e8, rax_39) != 0xffffffff)
                r15_5 = r12
            else
                arg_18 = *(arg_8 + 0x30)
                sub_140917930(rdi_5, rax_39, &arg_18)
                int32_t rax_42 = var_140.d
                int32_t rcx_79
                int16_t* rdx_56
                
                if (rax_42 == 0)
                    rdx_56 = &data_142d40450
                    rcx_79 = 0
                else
                    rdx_56 = var_148
                    rcx_79 = rax_42 - 1
                
                int64_t* rax_44 = sub_140a5d870(r13_1, sub_1405969c0(rcx_79, rdx_56), &var_148)
                int64_t rdi_14 = sx.q(rax_44[1].d)
                int32_t rcx_81 = (rdi_14 + 1).d
                rax_44[1].d = rcx_81
                
                if (rcx_81 s> *(rax_44 + 0xc))
                    sub_1405a4cf0(rax_44)
                
                r15_5 = r12
                *(*rax_44 + (rdi_14 << 2)) = arg_18
                int64_t rbx_27 = sx.q(r15_5[1].d)
                int32_t rax_46 = (rbx_27 + 1).d
                r15_5[1].d = rax_46
                
                if (rax_46 s> *(r15_5 + 0xc))
                    sub_140a88e70(r15_5)
                
                uint64_t* rcx_87 = (rbx_27 << 6) + *r15_5
                __builtin_memset(rcx_87, 0, 0x40)
                sub_140597df0(rcx_87, rax_39)
                sub_140597df0(&rcx_87[2], &var_148)
                sub_140597df0(&rcx_87[4], &var_138)
                sub_140597df0(&rcx_87[6], &var_118)
                rbx_25 = var_118
                rsi_13 = var_130
            
            int64_t rdi_16 = var_70
            
            if (rdi_16 != 0)
                int64_t* rcx_91 = data_143ddb3f0
                
                if (rcx_91 == 0)
                    sub_140a750a0()
                    rcx_91 = data_143ddb3f0
                
                (*(*rcx_91 + 0x30))(rcx_91, rdi_16)
            
            if (rbx_25 != 0)
                int64_t* rcx_92 = data_143ddb3f0
                
                if (rcx_92 == 0)
                    sub_140a750a0()
                    rcx_92 = data_143ddb3f0
                
                (*(*rcx_92 + 0x30))(rcx_92, rbx_25)
            
            if (rsi_13 s> 1 && r12_3 s> 1)
                int64_t var_60
                int64_t* rax_49 = sub_140a6e720(&var_60, &var_148, &var_138, &var_158)
                void var_e4
                
                if (*sub_14062d5f0(arg1 + 0x38, &var_e4, rax_49) == 0xffffffff)
                    arg_18 = *(arg_8 + 0x30)
                    sub_140917930(arg1 + 0x38, rax_49, &arg_18)
                    int32_t rax_52 = var_140.d
                    int32_t rcx_97
                    int16_t* rdx_69
                    
                    if (rax_52 == 0)
                        rdx_69 = &data_142d40450
                        rcx_97 = 0
                    else
                        rdx_69 = var_148
                        rcx_97 = rax_52 - 1
                    
                    int64_t* rax_54 = sub_140a5d870(r13_1, sub_1405969c0(rcx_97, rdx_69), &var_148)
                    int64_t rdi_17 = sx.q(rax_54[1].d)
                    int32_t rcx_99 = (rdi_17 + 1).d
                    rax_54[1].d = rcx_99
                    
                    if (rcx_99 s> *(rax_54 + 0xc))
                        sub_1405a4cf0(rax_54)
                    
                    *(*rax_54 + (rdi_17 << 2)) = arg_18
                    int64_t rbx_31 = sx.q(r15_5[1].d)
                    int32_t rax_56 = (rbx_31 + 1).d
                    r15_5[1].d = rax_56
                    
                    if (rax_56 s> *(r15_5 + 0xc))
                        sub_140a88e70(r15_5)
                    
                    uint64_t* rcx_105 = (rbx_31 << 6) + *r15_5
                    __builtin_memset(rcx_105, 0, 0x40)
                    sub_140597df0(rcx_105, rax_49)
                    sub_140597df0(&rcx_105[2], &var_148)
                    sub_140597df0(&rcx_105[4], &var_138)
                    sub_140597df0(&rcx_105[6], &var_158)
                
                int64_t rbx_33 = var_60
                
                if (rbx_33 != 0)
                    int64_t* rcx_109 = data_143ddb3f0
                    
                    if (rcx_109 == 0)
                        sub_140a750a0()
                        rcx_109 = data_143ddb3f0
                    
                    (*(*rcx_109 + 0x30))(rcx_109, rbx_33)
        
        int16_t* rbx_34 = var_158
        
        if (rbx_34 != 0)
            int64_t* rcx_110 = data_143ddb3f0
            
            if (rcx_110 == 0)
                sub_140a750a0()
                rcx_110 = data_143ddb3f0
            
            (*(*rcx_110 + 0x30))(rcx_110, rbx_34)
        
        sub_1405e8840(&var_138)
        sub_1405e8840(&var_148)
        rax_60 = arg_20 + 1
        r15_2 = arg_8
        rcx_18 = var_100_1 + 1
        arg_20 = rax_60
        var_100_1 = rcx_18
    while (rax_60 s< arg_10)

j_sub_142a4d030()
void* r14_8 = &data_14360fb40

for (char* i = &data_143612ebc; i != 0; )
    if (i[2] == 0)
        bool cond:3_1 = *i == 0
        int32_t rdx_79 = 0
        int32_t rcx_114 = 0
        var_150.d = 0
        var_150:4.d = 0
        var_158 = nullptr
        
        if (not(cond:3_1))
            int64_t rbx_35 = -1
            
            do
                rbx_35 += 1
            while (i[rbx_35] != 0)
            
            if (rbx_35.d + 1 s> 0)
                sub_1405947f0(&var_158, rbx_35.d + 1)
                rcx_114 = var_150:4.d
                rdx_79 = var_150.d
            
            int32_t rax_61 = rbx_35.d + 1 + rdx_79
            var_150.d = rax_61
            
            if (rax_61 s> rcx_114)
                sub_140594770(&var_158)
            
            var_168.w = 0x3f
            sub_1405a7220(var_158, rbx_35.d + 1, i, rbx_35.d + 1, 0x3f)
        
        sub_140a35810(&var_158)
        var_138 = 0
        var_130.q = 0
        var_118 = 0
        int64_t var_110_2 = 0
        
        if (*sub_14062d5f0(arg1 + 0x38, &arg_18, &var_158) == 0xffffffff)
            arg_8.d = *(r15_2 + 0x30)
            sub_140917930(arg1 + 0x38, &var_158, &arg_8)
            int32_t rax_64 = var_150.d
            int32_t rcx_121
            int16_t* rdx_84
            
            if (rax_64 == 0)
                rdx_84 = &data_142d40450
                rcx_121 = 0
            else
                rdx_84 = var_158
                rcx_121 = rax_64 - 1
            
            int64_t* rax_66 = sub_140a5d870(r13_1, sub_1405969c0(rcx_121, rdx_84), &var_158)
            int64_t rdi_19 = sx.q(rax_66[1].d)
            int32_t rcx_123 = (rdi_19 + 1).d
            rax_66[1].d = rcx_123
            
            if (rcx_123 s> *(rax_66 + 0xc))
                sub_1405a4cf0(rax_66)
            
            *(*rax_66 + (rdi_19 << 2)) = arg_8.d
            int64_t rbx_39 = sx.q(r12[1].d)
            int32_t rax_68 = (rbx_39 + 1).d
            r12[1].d = rax_68
            
            if (rax_68 s> *(r12 + 0xc))
                sub_140a88e70(r12)
            
            uint64_t* rcx_129 = (rbx_39 << 6) + *r12
            __builtin_memset(rcx_129, 0, 0x40)
            sub_140597df0(rcx_129, &var_158)
            sub_140597df0(&rcx_129[2], &var_158)
            sub_140597df0(&rcx_129[4], &var_118)
            sub_140597df0(&rcx_129[6], &var_138)
        
        sub_1405e8840(&var_118)
        sub_1405e8840(&var_138)
        sub_1405e8840(&var_158)
    
    i = *(r14_8 + 8)
    r14_8 += 8

var_148 = nullptr
int32_t var_140_1 = 0
sub_1405947f0(&var_148, 9)
int32_t rax_69 = var_140_1 + 9
var_140_1 = rax_69

if (rax_69 s> 0)
    sub_140594770(&var_148)

UnDecorator::getReferenceType(var_148, u"US-POSIX", 0x12)
var_158 = nullptr
int32_t var_150_1 = 0
sub_1405947f0(&var_158, 3)
int32_t rax_70 = var_150_1 + 3
var_150_1 = rax_70

if (rax_70 s> 0)
    sub_140594770(&var_158)

UnDecorator::getReferenceType(var_158, &data_142e5c258, 6)
var_138 = 0
var_130.q = 0
sub_1405947f0(&var_138, 0xc)
int32_t var_130_1 = var_130 + 0xc

if (var_130 + 0xc s> var_12c)
    sub_140594770(&var_138)

UnDecorator::getReferenceType(var_138, u"en-US-POSIX", 0x18)
var_118 = 0
int64_t var_110_3 = 0
sub_140a65980(&var_d8, &var_138, &var_158, &var_118, &var_148)
sub_1405e8840(&var_118)
sub_1405e8840(&var_138)
sub_1405e8840(&var_158)
sub_1405e8840(&var_148)
int32_t rdx_96 = r12[1].d

if (*(r12 + 0xc) != rdx_96)
    sub_140a89b30(r12, rdx_96)

sub_140a8d410(arg1 + 0x38)
sub_140a6d4a0(arg1 + 0x38, *(arg1 + 0x40) - *(arg1 + 0x6c), 1)
sub_140a8d4f0(r13_1)
return sub_140a6d550(r13_1, *(r13_1 + 8) - *(r13_1 + 0x34), 1)
