// 函数: sub_141cf2ef0
// 地址: 0x141cf2ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = 0
int16_t* var_248 = nullptr
int32_t rdx = 0
int32_t var_240 = 0
int32_t r8 = 0
int32_t var_23c = 0

if (arg3 != 0 && *arg3 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg3[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_248, rbx_1.d + 1)
        r8 = var_23c
        rdx = var_240
    
    int32_t rax_1 = rdx + rbx_1.d + 1
    var_240 = rax_1
    
    if (rax_1 s> r8)
        sub_140594770(&var_248)
    
    UnDecorator::getReferenceType(var_248, arg3, (rbx_1.d + 1) * 2)
    
    if (var_240 != 0 && var_240 - 1 s> 0 && var_248[sx.q(var_240 - 1) - 1] != 0x2f)
        sub_140a20ba0(&var_248, &data_142d5a024, 1)

char rax_5 = sub_140a32a50(&var_248, &arg1[0x1e], 1)
char result

if (rax_5 == 0)
    result = sub_140a32a50(&arg1[0x1e], &var_248, 1)

if (rax_5 != 0 || result != 0)
    int32_t rcx_7 = 0
    void** rdi_2 = *arg1 + 0x20
    int64_t* var_228 = nullptr
    int32_t rbx_4 = rdi_2[3].d
    int64_t var_220_1 = 0
    int32_t r10_1 = 0
    int32_t var_158 = 0
    int32_t r8_3 = 0
    int32_t var_154_1 = 1
    int32_t var_148_1 = 0xffffffff
    int64_t var_144_1 = 0
    
    if (rbx_4 != 0)
        void* r9 = rdi_2[2]
        
        if ((r9.b & 1) != 0)
            r9 = (r9 s>> 1) + &rdi_2[2]
        
        r10_1 = rbx_4
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rbx_4 - 1)
        int32_t rdx_7 = *r9
        
        if (rdx_7 != 0)
        label_141cf30a9:
            int32_t rax_13 = ((rdx_7 - 1) & rdx_7) ^ rdx_7
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_13)
            int32_t var_154_2 = rax_13
            int32_t rax_14
            
            if (rax_13 == 0)
                rax_14 = 0x20
            else
                rax_14 = 0x1f - temp0_2
            
            int32_t rax_15 = r8_3 - rax_14 + 0x1f
            
            if (rax_15 s> rbx_4)
                rax_15 = rbx_4
            
            r10_1 = rax_15
            var_144_1.d = rax_15
        else
            while (true)
                int64_t rdx_8 = sx.q(rcx_7)
                r8_3 += 0x20
                rcx_7 += 1
                var_144_1:4.d = r8_3
                var_158 = rcx_7
                
                if (rdx_8.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    var_144_1.d = rbx_4
                    break
                
                rdx_7 = *(r9 + (rdx_8 << 2) + 4)
                var_148_1 = 0xffffffff
                
                if (rdx_7 != 0)
                    goto label_141cf30a9
    
    double zmm2[0x2] = var_148_1.o
    double var_f8[0x2] = var_158.o
    double var_e8_1 = zmm2[0]
    int64_t var_b0_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    double zmm1[0x2] = var_f8
    double var_d0[0x2] = rdi_2.o
    
    if (r10_1 s< rbx_4)
        int32_t i = zmm1[1]:4.d
        
        do
            int64_t* r12_1 = var_d0[0]
            void* rcx_9 = *r12_1
            
            if ((rcx_9.b & 1) != 0)
                rcx_9 = (rcx_9 s>> 1) + r12_1
            
            int64_t r13_2 = sx.q(i) * 0x50
            void* rdi_3 = *(rcx_9 + r13_2)
            void* rax_17 = rcx_9 + r13_2
            
            if ((rdi_3.b & 1) != 0)
                rdi_3 = (rdi_3 s>> 1) + rax_17
            
            int32_t r14_1 = *(rax_17 + 8)
            int32_t r14_2
            
            if (r14_1 == 0)
                r14_2 = 0
            else
                r14_2 = r14_1 - 1
            
            int16_t* var_208 = nullptr
            int32_t rbx_5 = 0
            int32_t var_200_1 = 0
            int16_t* rsi_1 = nullptr
            int32_t var_1fc_1 = 0
            
            if (rdi_3 != 0 && *rdi_3 != 0 && r14_2 s> 0)
                if (r14_2 + 1 s> 0)
                    sub_1405947f0(&var_208, r14_2 + 1)
                    r15 = var_1fc_1
                    rbx_5 = var_200_1
                    rsi_1 = var_208
                
                rbx_5 += r14_2 + 1
                
                if (rbx_5 s> r15)
                    sub_140594770(&var_208)
                    r15 = var_1fc_1
                    rsi_1 = var_208
                
                UnDecorator::getReferenceType(rsi_1, rdi_3, r14_2 * 2)
                rsi_1[sx.q(rbx_5) - 1] = 0
            
            int32_t rdi_5 = arg1[0x1f].d
            int16_t* var_238
            int32_t var_230_1
            
            if (rdi_5 s> 1)
                int32_t rbx_7
                
                if (rbx_5 == 0)
                    r15 = 0
                    rbx_7 = 0
                else
                    rbx_7 = rbx_5 - 1
                    r15 = 0
                
                int32_t rax_19
                
                if (rdi_5 == 0)
                    rax_19 = rdi_5 + 1
                
                if (rdi_5 != 0 || rbx_7 == 0)
                    rax_19 = 0
                
                int64_t r14_4 = arg1[0x1e]
                int32_t rcx_14 = rax_19 + rbx_7
                int16_t* var_198 = nullptr
                int32_t var_18c
                
                if (rdi_5 != 0 || rcx_14 != 0)
                    sub_1405a4c70(&var_198, rdi_5 + rcx_14, 0)
                    memcpy(var_198, r14_4, rdi_5 * 2)
                else
                    var_18c = 0
                
                sub_140a20ba0(&var_198, rsi_1, rbx_7)
                var_238 = var_198
                var_230_1 = rdi_5
                int32_t var_22c_2 = var_18c
                int32_t var_190_1
                var_190_1.q = 0
                var_198 = nullptr
                
                if (rsi_1 != 0)
                    sub_140a74f90(rsi_1)
            else
                int32_t var_22c_1 = r15
                r15 = 0
                var_200_1.q = 0
                var_238 = rsi_1
                var_208 = nullptr
                var_230_1 = rbx_5
            
            if (sub_140a32a50(&var_238, &var_248, 1) != 0)
                if (arg6 != 1)
                    int32_t rbx_19 = var_230_1
                    int32_t rdx_41 = rbx_19 - 1
                    
                    if (rbx_19 == 0)
                        rdx_41 = 0
                    
                    int32_t rcx_49 = var_240 - 1
                    
                    if (var_240 == 0)
                        rcx_49 = 0
                    
                    int32_t rax_59
                    
                    if (rdx_41 s<= rcx_49)
                        rax_59 = -1
                    else
                        int32_t rax_57
                        
                        if (var_240 == 0)
                            rax_57 = 0
                        else
                            rax_57 = var_240 - 1
                        
                        rax_59 = sub_140a23cf0(&var_238, &data_142d5a024, 0, 0, rax_57 + 1)
                        rbx_19 = var_230_1
                    
                    if (arg4 != 0 && rax_59 == 0xffffffff)
                        void* rax_60 = *r12_1
                        
                        if ((rax_60.b & 1) != 0)
                            rax_60 = (rax_60 s>> 1) + r12_1
                        
                        int32_t var_1b4_3 = 1
                        void* rdi_15 = rax_60 + 0x10 + r13_2
                        int32_t var_1a8_3 = 0xffffffff
                        int32_t r11_2 = *(rdi_15 + 0x18)
                        void* var_1b0_2 = rdi_15 + 0x10
                        int32_t rcx_51 = 0
                        int32_t var_1b8_2 = 0
                        int32_t r8_23 = 0
                        int64_t var_1a4_2 = 0
                        
                        if (r11_2 != 0)
                            void* r9_5 = *(rdi_15 + 0x10)
                            
                            if ((r9_5.b & 1) != 0)
                                r9_5 = (r9_5 s>> 1) + rdi_15 + 0x10
                            
                            int32_t temp5_1
                            int32_t temp6_1
                            temp5_1:temp6_1 = sx.q(r11_2 - 1)
                            int32_t rdx_44 = *r9_5
                            
                            if (rdx_44 != 0)
                            label_141cf3958:
                                int32_t rax_69 = neg.d(rdx_44) & rdx_44
                                uint64_t rflags_3
                                int32_t temp0_6
                                temp0_6, rflags_3 = _bit_scan_reverse(rax_69)
                                int32_t var_1b4_4 = rax_69
                                int32_t rax_70
                                
                                if (rax_69 == 0)
                                    rax_70 = 0x20
                                else
                                    rax_70 = 0x1f - temp0_6
                                
                                var_1a4_2.d = r8_23 - rax_70 + 0x1f
                                
                                if (r8_23 - rax_70 + 0x1f s> r11_2)
                                    var_1a4_2.d = r11_2
                            else
                                while (true)
                                    int64_t rdx_45 = sx.q(rcx_51)
                                    r8_23 += 0x20
                                    rcx_51 += 1
                                    var_1a4_2:4.d = r8_23
                                    var_1b8_2 = rcx_51
                                    
                                    if (rdx_45.d s>= (temp6_1 + (temp5_1 & 0x1f)) s>> 5)
                                        break
                                    
                                    rdx_44 = *(r9_5 + (rdx_45 << 2) + 4)
                                    int32_t var_1a8_4 = 0xffffffff
                                    
                                    if (rdx_44 != 0)
                                        goto label_141cf3958
                                
                                var_1a4_2.d = r11_2
                        
                        int128_t var_60_2 = 0xffffffff
                        double var_70_2[0x2] = var_1b8_2.o
                        void** var_100_1
                        var_100_1.o = rdi_15.o
                        var_e8_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
                        var_f8 = var_70_2
                        
                        if (0 s< r11_2)
                            int32_t j = var_e8_1:4.d
                            
                            do
                                void* rcx_53 = *var_100_1
                                
                                if ((rcx_53.b & 1) != 0)
                                    rcx_53 = (rcx_53 s>> 1) + var_100_1
                                
                                void* rax_75 = (sx.q(j) << 5) + rcx_53
                                void* rbx_20 = *rax_75
                                
                                if ((rbx_20.b & 1) != 0)
                                    rbx_20 = (rbx_20 s>> 1) + rax_75
                                
                                int32_t rax_76 = *(rax_75 + 8)
                                int64_t r13_4 = 0
                                int64_t var_1c8 = 0
                                int32_t rsi_8 = 0
                                int32_t var_1c0_1 = 0
                                int32_t rdi_16 = rax_76 - 1
                                int32_t rax_77 = 0
                                
                                if (rax_76 == 0)
                                    rdi_16 = 0
                                
                                int32_t var_1bc_1 = 0
                                
                                if (rbx_20 != 0 && *rbx_20 != 0 && rdi_16 s> 0)
                                    if (rdi_16 + 1 s> 0)
                                        sub_1405947f0(&var_1c8, rdi_16 + 1)
                                        rax_77 = var_1bc_1
                                        rsi_8 = var_1c0_1
                                        r13_4 = var_1c8
                                    
                                    rsi_8 = rsi_8 + 1 + rdi_16
                                    
                                    if (rsi_8 s> rax_77)
                                        sub_140594770(&var_1c8)
                                        r13_4 = var_1c8
                                    
                                    UnDecorator::getReferenceType(r13_4, rbx_20, rdi_16 * 2)
                                    *(r13_4 + (sx.q(rsi_8) << 1) - 2) = 0
                                
                                void* rax_80 = *r12_1
                                
                                if ((rax_80.b & 1) != 0)
                                    rax_80 = (rax_80 s>> 1) + r12_1
                                
                                void* rcx_59 = r13_2 + rax_80
                                void* rdi_17 = *rcx_59
                                
                                if ((rdi_17.b & 1) != 0)
                                    rdi_17 = (rdi_17 s>> 1) + rcx_59
                                
                                int32_t rax_81 = *(rcx_59 + 8)
                                int32_t rbx_22 = 0
                                int64_t var_1d8 = 0
                                int64_t r12_3 = 0
                                int32_t var_1d0_1 = 0
                                int32_t var_1cc_1 = 0
                                int32_t r14_7 = rax_81 - 1
                                
                                if (rax_81 == 0)
                                    r14_7 = 0
                                
                                if (rdi_17 != 0 && *rdi_17 != 0 && r14_7 s> 0)
                                    if (r14_7 + 1 s> 0)
                                        sub_1405947f0(&var_1d8, r14_7 + 1)
                                        r15 = var_1cc_1
                                        rbx_22 = var_1d0_1
                                        r12_3 = var_1d8
                                    
                                    rbx_22 += r14_7 + 1
                                    
                                    if (rbx_22 s> r15)
                                        sub_140594770(&var_1d8)
                                        r15 = var_1cc_1
                                        r12_3 = var_1d8
                                    
                                    UnDecorator::getReferenceType(r12_3, rdi_17, r14_7 * 2)
                                    *(r12_3 + (sx.q(rbx_22) << 1) - 2) = 0
                                
                                int32_t r8_29 = arg1[0x1f].d
                                int64_t var_120
                                int64_t rdi_19
                                
                                if (r8_29 s> 1)
                                    int32_t rbx_24
                                    
                                    if (rbx_22 == 0)
                                        r15 = 0
                                        rbx_24 = 0
                                    else
                                        rbx_24 = rbx_22 - 1
                                        r15 = 0
                                    
                                    int32_t rax_83
                                    
                                    if (r8_29 == 0)
                                        rax_83 = r8_29 + 1
                                    
                                    if (r8_29 != 0 || rbx_24 == 0)
                                        rax_83 = 0
                                    
                                    int64_t rdx_52 = arg1[0x1e]
                                    int64_t var_168 = 0
                                    sub_140596860(&var_168, rdx_52, r8_29, 0, rax_83 + rbx_24)
                                    sub_140a20ba0(&var_168, r12_3, rbx_24)
                                    rdi_19 = var_168
                                    int32_t var_160
                                    rbx_22 = var_160
                                    var_120 = rdi_19
                                    int32_t var_15c
                                    int32_t var_114_2 = var_15c
                                    var_160.q = 0
                                    var_168 = 0
                                else
                                    int32_t var_114_1 = r15
                                    rdi_19 = r12_3
                                    r15 = 0
                                    var_120 = r12_3
                                    var_1d0_1.q = 0
                                    r12_3 = 0
                                
                                int32_t var_118_1 = rbx_22
                                int64_t var_110
                                int32_t rax_86
                                
                                if (rbx_22 s> 1)
                                    int32_t rdi_20 = rsi_8 - 1
                                    
                                    if (rsi_8 == 0)
                                        rdi_20 = 0
                                    
                                    int32_t rax_87
                                    
                                    if (rbx_22 == 0)
                                        rax_87 = rbx_22 + 1
                                    
                                    if (rbx_22 != 0 || rdi_20 == 0)
                                        rax_87 = 0
                                    
                                    int64_t var_130
                                    sub_140596690(&var_130, &var_120, rdi_20 + rax_87)
                                    sub_140a20ba0(&var_130, r13_4, rdi_20)
                                    rdi_19 = var_120
                                    var_110 = var_130
                                    int32_t var_128
                                    int32_t var_108_2 = var_128
                                    int32_t var_124
                                    rax_86 = var_124
                                    var_128.q = 0
                                    var_130 = 0
                                else
                                    rax_86 = var_1bc_1
                                    var_110 = r13_4
                                    r13_4 = 0
                                    var_1c0_1.q = 0
                                    int32_t var_108_1 = rsi_8
                                
                                int32_t var_104_1 = rax_86
                                void var_80
                                sub_140a5cad0(arg2, &var_80, &var_110, nullptr)
                                int64_t rcx_68 = var_110
                                
                                if (rcx_68 != 0)
                                    sub_140a74f90(rcx_68)
                                
                                if (rdi_19 != 0)
                                    sub_140a74f90(rdi_19)
                                
                                if (r12_3 != 0)
                                    sub_140a74f90(r12_3)
                                
                                if (r13_4 != 0)
                                    sub_140a74f90(r13_4)
                                
                                var_e8_1.d &= not.d(var_f8[0]:4.d)
                                sub_141d02a20(&var_f8)
                                j = var_e8_1:4.d
                                r12_1 = var_d0[0]
                            while (j s< *(var_f8[1] i+ 8))
                            
                            rbx_19 = var_230_1
                    
                    if (arg5 != 0 && rax_59 s>= 0)
                        int32_t rbx_25
                        int16_t* r15_2
                        
                        if (rbx_19 == 0)
                            r15_2 = &data_142d40450
                            rbx_25 = 0
                        else
                            r15_2 = var_238
                            rbx_25 = rbx_19 - 1
                        
                        if (rax_59 + 1 s< 0)
                            rbx_25 = 0
                        else if (rax_59 + 1 s< rbx_25)
                            rbx_25 = rax_59 + 1
                        
                        int64_t var_218 = 0
                        int64_t rsi_10 = 0
                        int64_t var_210_1 = 0
                        int32_t rdi_21 = 0
                        int32_t r14_9 = 0
                        
                        if (r15_2 == 0 || *r15_2 == 0 || rbx_25 s<= 0)
                            r15 = 0
                        else
                            if (rbx_25 + 1 s> 0)
                                sub_1405947f0(&var_218, rbx_25 + 1)
                                r14_9 = var_210_1:4.d
                                rdi_21 = var_210_1.d
                                rsi_10 = var_218
                            
                            rdi_21 = rdi_21 + 1 + rbx_25
                            var_210_1.d = rdi_21
                            
                            if (rdi_21 s> r14_9)
                                sub_140594770(&var_218)
                                r14_9 = var_210_1:4.d
                                rdi_21 = var_210_1.d
                                rsi_10 = var_218
                            
                            UnDecorator::getReferenceType(rsi_10, r15_2, rbx_25 * 2)
                            r15 = 0
                            *(rsi_10 + (sx.q(rdi_21) << 1) - 2) = 0
                        
                        if (sub_1406daa50(&var_228, &var_218) == 0xffffffff)
                            int64_t rbx_26 = sx.q(var_220_1.d)
                            int32_t rax_97 = (rbx_26 + 1).d
                            var_220_1.d = rax_97
                            
                            if (rax_97 s> var_220_1:4.d)
                                sub_1405a4f90(&var_228)
                            
                            var_218 = 0
                            void* rax_100 = &var_228[rbx_26 * 2]
                            int64_t var_210_2 = 0
                            *rax_100 = rsi_10
                            *(rax_100 + 8) = rdi_21
                            *(rax_100 + 0xc) = r14_9
                        else if (rsi_10 != 0)
                            sub_140a74f90(rsi_10)
                else
                    if (arg4 != 0)
                        void* rax_24 = *r12_1
                        
                        if ((rax_24.b & 1) != 0)
                            rax_24 = (rax_24 s>> 1) + r12_1
                        
                        int32_t var_1b4_1 = 1
                        void* rbx_9 = rax_24 + 0x10 + r13_2
                        int32_t var_1a8_1 = 0xffffffff
                        int32_t r11_1 = *(rbx_9 + 0x18)
                        void* var_1b0_1 = rbx_9 + 0x10
                        int32_t rcx_20 = 0
                        int32_t var_1b8_1 = 0
                        int32_t r8_10 = 0
                        int64_t var_1a4_1 = 0
                        
                        if (r11_1 != 0)
                            void* r9_2 = *(rbx_9 + 0x10)
                            
                            if ((r9_2.b & 1) != 0)
                                r9_2 = (r9_2 s>> 1) + rbx_9 + 0x10
                            
                            int32_t temp3_1
                            int32_t temp4_1
                            temp3_1:temp4_1 = sx.q(r11_1 - 1)
                            int32_t rdx_18 = *r9_2
                            
                            if (rdx_18 != 0)
                            label_141cf33a9:
                                int32_t rax_33 = ((rdx_18 - 1) & rdx_18) ^ rdx_18
                                uint64_t rflags_2
                                int32_t temp0_4
                                temp0_4, rflags_2 = _bit_scan_reverse(rax_33)
                                int32_t var_1b4_2 = rax_33
                                int32_t rax_34
                                
                                if (rax_33 == 0)
                                    rax_34 = 0x20
                                else
                                    rax_34 = 0x1f - temp0_4
                                
                                var_1a4_1.d = r8_10 - rax_34 + 0x1f
                                
                                if (r8_10 - rax_34 + 0x1f s> r11_1)
                                    var_1a4_1.d = r11_1
                            else
                                while (true)
                                    int64_t rdx_19 = sx.q(rcx_20)
                                    r8_10 += 0x20
                                    rcx_20 += 1
                                    var_1a4_1:4.d = r8_10
                                    var_1b8_1 = rcx_20
                                    
                                    if (rdx_19.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                                        break
                                    
                                    rdx_18 = *(r9_2 + (rdx_19 << 2) + 4)
                                    int32_t var_1a8_2 = 0xffffffff
                                    
                                    if (rdx_18 != 0)
                                        goto label_141cf33a9
                                
                                var_1a4_1.d = r11_1
                        
                        int128_t var_60_1 = 0xffffffff
                        double var_70_1[0x2] = var_1b8_1.o
                        double var_a8[0x2] = rbx_9.o
                        int64_t var_88_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
                        
                        if (0 s< r11_1)
                            int32_t j_1 = var_70_1[1]:4.d
                            
                            do
                                int64_t* rax_36 = var_a8[0]
                                void* rcx_22 = *rax_36
                                
                                if ((rcx_22.b & 1) != 0)
                                    rcx_22 = (rcx_22 s>> 1) + rax_36
                                
                                void* rax_39 = (sx.q(j_1) << 5) + rcx_22
                                void* rbx_10 = *rax_39
                                
                                if ((rbx_10.b & 1) != 0)
                                    rbx_10 = (rbx_10 s>> 1) + rax_39
                                
                                int32_t rdi_6 = *(rax_39 + 8)
                                int32_t rdi_7
                                
                                if (rdi_6 == 0)
                                    rdi_7 = 0
                                else
                                    rdi_7 = rdi_6 - 1
                                
                                int16_t* var_1e8 = nullptr
                                int16_t* r13_3 = nullptr
                                int64_t var_1e0_1 = 0
                                int32_t r14_5 = 0
                                int32_t arg_8 = 0
                                int32_t rsi_2 = 0
                                
                                if (rbx_10 != 0 && *rbx_10 != 0 && rdi_7 s> 0)
                                    if (rdi_7 + 1 s> 0)
                                        sub_1405947f0(&var_1e8, rdi_7 + 1)
                                        rsi_2 = var_1e0_1:4.d
                                        r14_5 = var_1e0_1.d
                                        r13_3 = var_1e8
                                        arg_8 = rsi_2
                                    
                                    r14_5 += rdi_7 + 1
                                    var_1e0_1.d = r14_5
                                    
                                    if (r14_5 s> rsi_2)
                                        sub_140594770(&var_1e8)
                                        r14_5 = var_1e0_1.d
                                        r13_3 = var_1e8
                                        arg_8 = var_1e0_1:4.d
                                    
                                    UnDecorator::getReferenceType(r13_3, rbx_10, rdi_7 * 2)
                                    r13_3[sx.q(r14_5) - 1] = 0
                                
                                void* rax_43 = *r12_1
                                
                                if ((rax_43.b & 1) != 0)
                                    rax_43 = (rax_43 s>> 1) + r12_1
                                
                                void* rcx_28 = r13_2 + rax_43
                                void* rdi_8 = *rcx_28
                                
                                if ((rdi_8.b & 1) != 0)
                                    rdi_8 = (rdi_8 s>> 1) + rcx_28
                                
                                int32_t rsi_3 = *(rcx_28 + 8)
                                int32_t rsi_4
                                
                                if (rsi_3 == 0)
                                    rsi_4 = 0
                                else
                                    rsi_4 = rsi_3 - 1
                                
                                int16_t* var_1f8 = nullptr
                                int32_t rbx_12 = 0
                                int32_t var_1f0_1 = 0
                                int16_t* r12_2 = nullptr
                                int32_t var_1ec_1 = 0
                                
                                if (rdi_8 != 0 && *rdi_8 != 0 && rsi_4 s> 0)
                                    if (rsi_4 + 1 s> 0)
                                        sub_1405947f0(&var_1f8, rsi_4 + 1)
                                        r15 = var_1ec_1
                                        rbx_12 = var_1f0_1
                                        r12_2 = var_1f8
                                    
                                    rbx_12 += rsi_4 + 1
                                    
                                    if (rbx_12 s> r15)
                                        sub_140594770(&var_1f8)
                                        r15 = var_1ec_1
                                        r12_2 = var_1f8
                                    
                                    UnDecorator::getReferenceType(r12_2, rdi_8, rsi_4 * 2)
                                    r12_2[sx.q(rbx_12) - 1] = 0
                                
                                int32_t rdi_10 = arg1[0x1f].d
                                int16_t* rsi_5
                                
                                if (rdi_10 s> 1)
                                    int32_t rbx_14
                                    
                                    if (rbx_12 == 0)
                                        rbx_14 = 0
                                    else
                                        rbx_14 = rbx_12 - 1
                                    
                                    int32_t rax_45
                                    
                                    if (rdi_10 == 0)
                                        rax_45 = rdi_10 + 1
                                    
                                    if (rdi_10 != 0 || rbx_14 == 0)
                                        rax_45 = 0
                                    
                                    int64_t rsi_6 = arg1[0x1e]
                                    int32_t rcx_32 = rbx_14 + rax_45
                                    int16_t* var_188 = nullptr
                                    int32_t var_17c
                                    
                                    if (rdi_10 != 0 || rcx_32 != 0)
                                        sub_1405a4c70(&var_188, rdi_10 + rcx_32, 0)
                                        memcpy(var_188, rsi_6, rdi_10 * 2)
                                    else
                                        var_17c = 0
                                    
                                    sub_140a20ba0(&var_188, r12_2, rbx_14)
                                    rsi_5 = var_188
                                    rbx_12 = rdi_10
                                    r15 = var_17c
                                    var_188 = nullptr
                                    int32_t var_180_1
                                    var_180_1.q = 0
                                else
                                    rsi_5 = r12_2
                                    var_1f0_1.q = 0
                                    r12_2 = nullptr
                                
                                int16_t* rdi_11
                                
                                if (rbx_12 s> 1)
                                    int32_t rdi_12 = r14_5 - 1
                                    
                                    if (r14_5 == 0)
                                        rdi_12 = 0
                                    
                                    int32_t rax_46
                                    
                                    if (rbx_12 == 0)
                                        rax_46 = rbx_12 + 1
                                    
                                    if (rbx_12 != 0 || rdi_12 == 0)
                                        rax_46 = 0
                                    
                                    int16_t* var_178 = rsi_5
                                    int32_t rdx_31 = rbx_12 + rax_46 + rdi_12
                                    rsi_5 = nullptr
                                    
                                    if (rdx_31 s> r15)
                                        sub_1405947f0(&var_178, rdx_31)
                                    
                                    sub_140a20ba0(&var_178, r13_3, rdi_12)
                                    rdi_11 = var_178
                                    r14_5 = rbx_12
                                    var_178 = nullptr
                                    int32_t var_170_1
                                    var_170_1.q = 0
                                    arg_8 = r15
                                else
                                    rdi_11 = r13_3
                                    int64_t var_1e0_2 = 0
                                    r13_3 = nullptr
                                
                                sub_140598750(arg2, &var_158)
                                int16_t* const rdx_34 = rdi_11
                                rdi_2[2] = rdi_11
                                *(rdi_2 + 0x1c) = arg_8
                                rdi_2[3].d = r14_5
                                rdi_2[4].d = 0xffffffff
                                
                                if (r14_5 == 0)
                                    rdx_34 = &data_142d40450
                                
                                int32_t rcx_39 = r14_5 - 1
                                
                                if (r14_5 == 0)
                                    rcx_39 = 0
                                
                                void arg_18
                                sub_14059a6d0(arg2, &arg_18, sub_1405969c0(rcx_39, rdx_34), 
                                    &rdi_2[2], var_158, nullptr)
                                
                                if (rsi_5 != 0)
                                    sub_140a74f90(rsi_5)
                                
                                if (r12_2 != 0)
                                    sub_140a74f90(r12_2)
                                
                                if (r13_3 != 0)
                                    sub_140a74f90(r13_3)
                                
                                var_70_1[1].d &= not.d(var_a8[1]:4.d)
                                sub_141d02a20(&var_a8[1])
                                r15 = 0
                                j_1 = var_70_1[1]:4.d
                                r12_1 = var_d0[0]
                            while (j_1 s< *(var_70_1[0] i+ 8))
                    
                    if (arg5 == 0)
                        r15 = 0
                    else
                        int16_t* const rdx_37 = &data_142d40450
                        int16_t* const rcx_45 = &data_142d40450
                        
                        if (var_230_1 != 0)
                            rdx_37 = var_238
                        
                        if (var_240 != 0)
                            rcx_45 = var_248
                        
                        if (sub_140a54510(rcx_45, rdx_37) == 0)
                            r15 = 0
                        else
                            int64_t rbx_16 = sx.q(var_220_1.d)
                            int32_t rax_55 = (rbx_16 + 1).d
                            var_220_1.d = rax_55
                            
                            if (rax_55 s> var_220_1:4.d)
                                sub_1405a4f90(&var_228)
                            
                            r15 = 0
                            void* rbx_18 = &var_228[rbx_16 * 2]
                            *rbx_18 = 0
                            int16_t* rsi_7 = var_238
                            *(rbx_18 + 8) = var_230_1
                            
                            if (var_230_1 != 0)
                                sub_1405a4c70(rbx_18, var_230_1, 0)
                                memcpy(*rbx_18, rsi_7, var_230_1 * 2)
                            else
                                *(rbx_18 + 0xc) = 0
            
            int16_t* rcx_79 = var_238
            
            if (rcx_79 != 0)
                sub_140a74f90(rcx_79)
            
            zmm1[1].d &= not.d(var_d0[1]:4.d)
            sub_141d02a20(&var_d0[1])
            i = zmm1[1]:4.d
        while (i s< *(zmm1[0] i+ 8))
    
    result = sub_141813e70(arg2, &var_228)
    int32_t i_2 = var_220_1.d
    int64_t* rsi_11 = var_228
    int64_t* rbx_27 = rsi_11
    
    if (i_2 != 0)
        int32_t i_1
        
        do
            int64_t rcx_82 = *rbx_27
            
            if (rcx_82 != 0)
                result = sub_140a74f90(rcx_82)
            
            rbx_27 = &rbx_27[2]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    if (rsi_11 != 0)
        result = sub_140a74f90(rsi_11)

int16_t* rcx_84 = var_248

if (rcx_84 == 0)
    return result

return sub_140a74f90(rcx_84)
