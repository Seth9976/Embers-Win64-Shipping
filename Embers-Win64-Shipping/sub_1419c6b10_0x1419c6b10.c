// 函数: sub_1419c6b10
// 地址: 0x1419c6b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
int64_t* rsi = *(arg2 + 0x68)
int16_t rdi = arg4
int64_t rbx = arg3
int64_t* var_d8 = rsi
int64_t* result = &rsi[sx.q(*(arg2 + 0x70)) * 6]
int64_t* result_1 = result

if (rsi != result)
    do
        *rsi
        uint32_t r13_1 = zx.d(*(rsi + 0x14))
        int16_t* var_e8
        sub_140a2e390(&var_e8, u"%s::%s", *(arg2 + 8))
        int16_t* const var_138
        int32_t var_e0
        
        if (r13_1.b != 0x14)
            *rsi
            int16_t* var_f8
            sub_140a2e390(&var_f8, u"%s%s", rbx)
            rdi += rsi[2].w
            int32_t r15_1 = *(rsi + 0x24)
            bool rcx_5 = r13_1.b - 5 u<= 3
            bool var_108_1 = rcx_5
            char var_107_1
            
            if (r13_1.b - 9 u> 7 || (((r13_1.b - 0xc) & 0xfa) == 0 && r13_1.b != 0x11))
                var_107_1 = 0
            else
                var_107_1 = 1
            
            result.b = (r13_1 - 2).b u<= 2
            char var_100_1 = result.b
            int16_t* var_130
            int16_t* var_128
            uint32_t var_120
            int16_t* var_118
            int32_t var_110
            
            if (r13_1.b == 0x12)
                result = sub_1419c6b10(arg1, rsi[5], rbx, zx.q(rdi), var_138, var_130, var_128, 
                    var_120, var_118, var_110, var_108_1, var_100_1)
            label_1419c6cd0:
                int16_t* rcx_7 = var_f8
                
                if (rcx_7 != 0)
                    result = sub_140a74f90(rcx_7)
                
                int16_t* rcx_8 = var_e8
                
                if (rcx_8 != 0)
                    result = sub_140a74f90(rcx_8)
            else if (r13_1.b != 0x11)
                int32_t var_f0
                uint32_t rdx_2
                int32_t rbx_3
                int16_t* rsi_3
                
                if (r13_1.b == 0x13)
                    rsi_3 = var_f8
                    int16_t* r14_2 = *(rsi[5] + 0x10)
                    
                    if (rsi_3 == r14_2)
                        rbx_3 = var_f0
                    else
                        int32_t rdi_4
                        
                        if (r14_2 == 0 || *r14_2 == 0)
                            rdi_4 = 0
                        else
                            int64_t rdi_3 = -1
                            
                            do
                                rdi_3 += 1
                            while (r14_2[rdi_3] != 0)
                            
                            rdi_4 = rdi_3.d + 1
                        
                        int32_t var_ec
                        int32_t rax_8 = var_ec
                        rdx_2 = 0
                        uint32_t var_f0_1 = 0
                        
                        if (rax_8 != rdi_4)
                            sub_1405947f0(&var_f8, rdi_4)
                            rax_8 = var_ec
                            rdx_2 = var_f0_1
                            rsi_3 = var_f8
                        
                        rbx_3 = rdx_2 + rdi_4
                        var_f0 = rbx_3
                        
                        if (rbx_3 s> rax_8)
                            sub_140594770(&var_f8)
                            rbx_3 = var_f0
                            rsi_3 = var_f8
                        
                        if (rdi_4 != 0)
                            memcpy(rsi_3, r14_2, rdi_4 * 2)
                            rbx_3 = var_f0
                            rsi_3 = var_f8
                        
                        rcx_5 = var_108_1
                    
                    goto label_1419c6eb1
                
                if (r13_1.b == 0xd)
                    int16_t* rdx_8 = &data_142d40450
                    
                    if (var_f0 != 0)
                        rdx_8 = var_f8
                    
                    result = sub_1419cae50(arg1[2], rdx_8)
                    
                    if (result.b != 0)
                        int16_t* rax_9 = &data_142d40450
                        int16_t* r9_8 = &data_142d40450
                        
                        if (var_f0 != 0)
                            rax_9 = var_f8
                        
                        var_138 = rax_9
                        
                        if (var_e0 != 0)
                            r9_8 = var_e8
                        
                        sub_140af98a0("Unknown", 0x83, 
                            %s can't bind shader parameter %s as buffer. Use buffer SRV for reading in "
                        "shad", r9_8)
                        result = sub_140afbb40()
                    
                    goto label_1419c6cd0
                
                if (*(arg1 + 0x7c) != 0 && result.b != 0)
                    goto label_1419c6cd0
                
                rbx_3 = var_f0
                rsi_3 = var_f8
            label_1419c6eb1:
                
                if (r15_1 == 0 || (rcx_5 == 0 && var_107_1 == rcx_5))
                    rdx_2.b = 0
                else
                    rdx_2.b = 1
                
                char var_106_1 = rdx_2.b
                int32_t rcx_21 = 1
                result = nullptr
                
                if (rdx_2.b != 0)
                    rcx_21 = r15_1
                
                int32_t var_d0_1 = 0
                
                if (rcx_21 != 0)
                    while (true)
                        int16_t* var_c8 = nullptr
                        int16_t* r14_3 = nullptr
                        int32_t var_bc_1 = 0
                        int32_t var_c0_1
                        
                        if (rdx_2.b == 0)
                            var_c0_1 = rbx_3
                            
                            if (rbx_3 != 0)
                                sub_1405a4c70(&var_c8, rbx_3, 0)
                                r14_3 = var_c8
                                memcpy(r14_3, rsi_3, rbx_3 * 2)
                                rbx_3 = var_c0_1
                        else
                            int16_t* r8_12 = &data_142d40450
                            
                            if (rbx_3 != 0)
                                r8_12 = rsi_3
                            
                            int16_t* var_88
                            sub_140a2e390(&var_88, u"%s_%d", r8_12)
                            r14_3 = var_88
                            int32_t var_80
                            rbx_3 = var_80
                            var_c8 = r14_3
                            int32_t var_7c
                            int32_t var_bc_2 = var_7c
                            var_80.q = 0
                            var_88 = nullptr
                            var_c0_1 = rbx_3
                        
                        void var_78
                        
                        if (*sub_14062d6e0(&arg1[3], &var_78, &var_c8) != 0xffffffff)
                            int32_t var_98
                            sub_14062d6e0(&arg1[3], &var_98, &var_f8)
                            int64_t rax_12 = sx.q(var_98)
                            void* rax_14
                            
                            if (rax_12.d != 0xffffffff)
                                rax_14 = arg1[3] + rax_12 * 0x28
                            
                            int16_t** rax_15
                            
                            if (rax_12.d == 0xffffffff || rax_14 == 0)
                                rax_15 = nullptr
                            else
                                rax_15 = rax_14 + 0x10
                            
                            int16_t* rcx_27
                            
                            if (rax_15[1].d == 0)
                                rcx_27 = &data_142d40450
                            else
                                rcx_27 = *rax_15
                            
                            var_130 = rcx_27
                            int16_t* rax_16 = &data_142d40450
                            int16_t* r9_10 = &data_142d40450
                            
                            if (rbx_3 != 0)
                                rax_16 = r14_3
                            
                            var_138 = rax_16
                            
                            if (var_e0 != 0)
                                r9_10 = var_e8
                            
                            sub_140af98a0("Unknown", 0xa0, 
                                %s can't bind shader parameter %s, because it has already be bound by "
                            "r9_10)
                            sub_140afbb40()
                        
                        int64_t* r15_2 = arg1[2]
                        int16_t* rdi_6 = &data_142d40450
                        
                        if (rbx_3 != 0)
                            rdi_6 = r14_3
                        
                        int16_t* rbx_4 = nullptr
                        int64_t var_b0 = 0
                        int64_t rsi_4 = 0
                        int64_t var_a8_1 = 0
                        int32_t rdx_14 = 0
                        int32_t rcx_28 = 0
                        
                        if (rdi_6 != 0 && *rdi_6 != 0)
                            int64_t rbx_5 = -1
                            
                            do
                                rbx_5 += 1
                            while (rdi_6[rbx_5] != 0)
                            
                            if (rbx_5.d + 1 s> 0)
                                sub_1405947f0(&var_b0, rbx_5.d + 1)
                                rcx_28 = var_a8_1:4.d
                                rdx_14 = var_a8_1.d
                                rsi_4 = var_b0
                            
                            int32_t rax_17 = rdx_14 + rbx_5.d + 1
                            var_a8_1.d = rax_17
                            
                            if (rax_17 s> rcx_28)
                                sub_140594770(&var_b0)
                                rsi_4 = var_b0
                            
                            UnDecorator::getReferenceType(rsi_4, rdi_6, (rbx_5.d + 1) * 2)
                            rbx_4 = nullptr
                        
                        int32_t var_94
                        sub_1408f1b50(r15_2, &var_94, &var_b0)
                        int64_t rax_18 = sx.q(var_94)
                        
                        if (rax_18.d != 0xffffffff)
                            int64_t rcx_34 = rax_18 << 5
                            
                            if (rcx_34 != neg.q(*r15_2))
                                rbx_4 = rcx_34 + *r15_2 + 0x10
                        
                        if (rsi_4 != 0)
                            sub_140a74f90(rsi_4)
                        
                        if (rbx_4 != 0)
                            int16_t rsi_5 = *rbx_4
                            int16_t r14_4 = rbx_4[1]
                            int16_t rdi_7 = rbx_4[2]
                            *(rbx_4 + 7) = 1
                            int32_t var_48
                            sub_1405d1820(&arg1[3], &var_48)
                            int64_t* var_40
                            sub_140596d10(var_40, &var_c8)
                            sub_140596d10(&var_40[2], &var_e8)
                            var_40[4].d = 0xffffffff
                            int32_t rax_19 = var_40[1].d
                            int16_t* rdx_21
                            
                            if (rax_19 == 0)
                                rdx_21 = &data_142d40450
                            else
                                rdx_21 = *var_40
                            
                            int32_t rcx_40 = rax_19 - 1
                            
                            if (rax_19 == 0)
                                rcx_40 = 0
                            
                            int32_t rax_20 = sub_1405969c0(rcx_40, rdx_21)
                            var_130 = nullptr
                            var_138.d = var_48
                            void var_74
                            sub_1405d2a60(&arg1[3], &var_74, rax_20, var_40, var_138.d, nullptr)
                            int16_t* r15_3 = var_c8
                            
                            if (var_100_1 != 0)
                                int32_t rax_21 = sub_1419ce770(var_d8)
                                uint32_t r10_1 = zx.d(rdi_7)
                                int16_t var_9c_1 = rdi
                                int16_t var_9e_1 = r14_4
                                int16_t var_9a_1 = rdi_7
                                
                                if (r10_1 u> rax_21)
                                    int16_t* rdx_23 = &data_142d40450
                                    int16_t* rcx_44 = &data_142d40450
                                    var_110 = rax_21
                                    
                                    if (var_e0 != 0)
                                        rdx_23 = var_e8
                                    
                                    var_118 = rdx_23
                                    
                                    if (var_c0_1 != 0)
                                        rcx_44 = r15_3
                                    
                                    var_120 = r10_1
                                    var_128 = rcx_44
                                    var_130 = *(arg_10 + 8)
                                    var_138.d = arg1[0xf].d
                                    sub_140af98a0("Unknown", 0xb9, 
                                        The size required to bind shader %s's (Permutation Id %d) struct "
                                    " parameter %s is %i bytes, smaller than %s's %i bytes.", 
                                        *(*(*arg1 + 0xf8) + 0x18))
                                    sub_140afbb40()
                                
                                int64_t* rbx_8 = arg1[1]
                                int64_t rdi_8 = sx.q(rbx_8[1].d)
                                int32_t rax_27 = (rdi_8 + 1).d
                                rbx_8[1].d = rax_27
                                
                                if (rax_27 s> *(rbx_8 + 0xc))
                                    sub_1407c3d10(rbx_8, rdi_8.d)
                                
                                void* rdx_26 = *rbx_8
                                
                                if ((rdx_26.b & 1) != 0)
                                    rdx_26 = (rdx_26 s>> 1) + rbx_8
                                
                                *(rdx_26 + (rdi_8 << 3)) = rsi_5.q
                            else if (r13_1.b == 0x13)
                                int64_t* rbx_10 = arg1[1] + 0x80
                                int16_t var_b6_1 = rdi
                                int64_t rdi_9 = sx.q(rbx_10[1].d)
                                int32_t rax_30 = (rdi_9 + 1).d
                                rbx_10[1].d = rax_30
                                
                                if (rax_30 s> *(rbx_10 + 0xc))
                                    sub_1407c3800(rbx_10, rdi_9.d)
                                
                                void* rdx_29 = *rbx_10
                                
                                if ((rdx_29.b & 1) != 0)
                                    rdx_29 = (rdx_29 s>> 1) + rbx_10
                                
                                *(rdx_29 + (rdi_9 << 2)) = rsi_5.d
                            else if (var_108_1 != 0 || var_107_1 != var_108_1)
                                int16_t var_102_1 = (var_d0_1.w << 3) + rdi
                                
                                if (rdi_7 != 1)
                                    void* r9_14 = *arg1
                                    int32_t rax_35 = *(r9_14 + 0x108) u>> 4 & 0x7f
                                    
                                    if ((rax_35 == 0x19 || rax_35 == 0x1a) && var_108_1 == 0)
                                        int16_t* rdx_30 = &data_142d40450
                                        int16_t* rcx_48 = &data_142d40450
                                        
                                        if (var_e0 != 0)
                                            rdx_30 = var_e8
                                        
                                        var_120.q = rdx_30
                                        
                                        if (var_c0_1 != 0)
                                            rcx_48 = r15_3
                                        
                                        var_128.d = zx.d(rdi_7)
                                        var_130 = rcx_48
                                        var_138.d = arg1[0xf].d
                                        sub_140af98a0("Unknown", 0xd9, 
                                            Error with shader %s's (Permutation Id %d) parameter %s is "
                                        " bytes, cpp name = %s.The shader compiler should give "
                                        "precisely which elements of an array did not", 
                                            *(*(r9_14 + 0xf8) + 0x18))
                                        sub_140afbb40()
                                
                                void* rbx_11 = arg1[1]
                                int64_t* rbx_12
                                
                                if (r13_1.b != 5)
                                    if (r13_1.b == 6)
                                        rbx_12 = rbx_11 + 0x20
                                        goto label_1419c7417
                                    
                                    if (r13_1.b == 7)
                                        rbx_12 = rbx_11 + 0x30
                                        goto label_1419c7417
                                    
                                    if (r13_1.b == 8)
                                        rbx_12 = rbx_11 + 0x40
                                        goto label_1419c7417
                                    
                                    if (r13_1.b == 9)
                                        rbx_12 = rbx_11 + 0x50
                                        goto label_1419c7417
                                    
                                    if (((r13_1.b - 0xa) & 0xfb) != 0)
                                        rbx_12 = rbx_11 + 0x70
                                        goto label_1419c7417
                                    
                                    int64_t rdi_11 = sx.q(*(rbx_11 + 0x68))
                                    int32_t rax_41 = (rdi_11 + 1).d
                                    *(rbx_11 + 0x68) = rax_41
                                    
                                    if (rax_41 s> *(rbx_11 + 0x6c))
                                        sub_1407c3800(rbx_11 + 0x60, rdi_11.d)
                                    
                                    void* rcx_52 = *(rbx_11 + 0x60)
                                    
                                    if ((rcx_52.b & 1) != 0)
                                        rcx_52 = (rcx_52 s>> 1) + rbx_11 + 0x60
                                    
                                    *(rcx_52 + (rdi_11 << 2)) = r14_4.d
                                else
                                    rbx_12 = rbx_11 + 0x10
                                label_1419c7417:
                                    int64_t rdi_10 = sx.q(rbx_12[1].d)
                                    int32_t rax_38 = (rdi_10 + 1).d
                                    rbx_12[1].d = rax_38
                                    
                                    if (rax_38 s> *(rbx_12 + 0xc))
                                        sub_1407c3800(rbx_12, rdi_10.d)
                                    
                                    void* rdx_33 = *rbx_12
                                    
                                    if ((rdx_33.b & 1) != 0)
                                        rdx_33 = (rdx_33 s>> 1) + rbx_12
                                    
                                    *(rdx_33 + (rdi_10 << 2)) = r14_4.d
                            
                            if (r15_3 != 0)
                                sub_140a74f90(r15_3)
                        else if (r14_3 != 0)
                            sub_140a74f90(r14_3)
                        
                        rsi_3 = var_f8
                        result = zx.q(var_d0_1 + 1)
                        var_d0_1 = result.d
                        
                        if (result.d u>= rcx_21)
                            break
                        
                        rbx_3 = var_f0
                        rdx_2 = zx.d(var_106_1)
                
                if (rsi_3 != 0)
                    result = sub_140a74f90(rsi_3)
                
                int16_t* rcx_55 = var_e8
                
                if (rcx_55 != 0)
                    result = sub_140a74f90(rcx_55)
                
                rsi = var_d8
                rbx = arg3
            else
                if (r15_1 == 0)
                    *rsi
                    int16_t* var_58
                    sub_140a2e390(&var_58, u"%s%s_", rbx)
                    int16_t* const r8_9 = &data_142d40450
                    int32_t var_50
                    
                    if (var_50 != 0)
                        r8_9 = var_58
                    
                    result = sub_1419c6b10(arg1, rsi[5], r8_9, zx.q(rdi), var_138, var_130, 
                        var_128, var_120, var_118, var_110, var_108_1, var_100_1)
                    int16_t* rcx_16 = var_58
                    
                    if (rcx_16 != 0)
                        result = sub_140a74f90(rcx_16)
                    
                    goto label_1419c6cd0
                
                void* r14_1 = rsi[5]
                int32_t rbx_2 = 0
                uint32_t rdi_2 = zx.d(rdi)
                int32_t rsi_2 = *(r14_1 + 0x28)
                
                do
                    *var_d8
                    var_138.d = rbx_2
                    int16_t* var_68
                    sub_140a2e390(&var_68, u"%s%s_%d_", arg3)
                    int16_t* const r8_7 = &data_142d40450
                    int32_t var_60
                    
                    if (var_60 != 0)
                        r8_7 = var_68
                    
                    result = sub_1419c6b10(arg1, r14_1, r8_7, zx.q(rdi_2), var_138, var_130, 
                        var_128, var_120, var_118, var_110, var_108_1, var_100_1)
                    int16_t* rcx_11 = var_68
                    
                    if (rcx_11 != 0)
                        result = sub_140a74f90(rcx_11)
                    
                    rbx_2 += 1
                    rdi_2 += rsi_2
                while (rbx_2 u< r15_1)
                
                int16_t* rcx_12 = var_f8
                
                if (rcx_12 != 0)
                    result = sub_140a74f90(rcx_12)
                
                int16_t* rcx_13 = var_e8
                
                if (rcx_13 != 0)
                    result = sub_140a74f90(rcx_13)
                
                rsi = var_d8
                rbx = arg3
        else
            if (arg1[0xe].d s> 1)
                int16_t* const rax_3 = &data_142d40450
                
                if (var_e0 != 0)
                    rax_3 = var_e8
                
                int16_t* const r9_1
                
                if (arg1[0xe].d == 0)
                    r9_1 = &data_142d40450
                else
                    r9_1 = arg1[0xd]
                
                var_138 = rax_3
                sub_140af98a0("Unknown", 0x36, Render target binding slots collision: %s & %s", 
                    r9_1)
                sub_140afbb40()
            
            int16_t* rdi_1 = var_e8
            result = &var_e8
            
            if (&arg1[0xd] != &var_e8)
                int32_t r8_1 = *(arg1 + 0x74)
                arg1[0xe].d = var_e0
                
                if (var_e0 != 0 || r8_1 != 0)
                    sub_1405a4c70(&arg1[0xd], var_e0, r8_1)
                    result = memcpy(arg1[0xd], rdi_1, var_e0 * 2)
                    rdi_1 = var_e8
                else
                    *(arg1 + 0x74) = 0
                
                rsi = var_d8
            
            if (rdi_1 != 0)
                result = sub_140a74f90(rdi_1)
            
            rbx = arg3
        arg2 = arg_10
        rsi = &rsi[6]
        rdi = arg4
        var_d8 = rsi
    while (rsi != result_1)

return result
