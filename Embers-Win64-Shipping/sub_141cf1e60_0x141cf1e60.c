// 函数: sub_141cf1e60
// 地址: 0x141cf1e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = 0
int32_t r8 = 0
int16_t* var_218 = nullptr
int64_t var_210 = 0

if (arg3 != 0 && *arg3 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg3[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_218, rbx_1.d + 1)
        r8 = var_210:4.d
        rdx = var_210.d
    
    int32_t rax_1 = rdx + rbx_1.d + 1
    var_210.d = rax_1
    
    if (rax_1 s> r8)
        sub_140594770(&var_218)
    
    UnDecorator::getReferenceType(var_218, arg3, (rbx_1.d + 1) * 2)
    int32_t rax_2 = var_210.d
    
    if (rax_2 != 0 && rax_2 - 1 s> 0 && var_218[sx.q(rax_2 - 1) - 1] != 0x2f)
        sub_140a20ba0(&var_218, &data_142d5a024, 1)

char rax_5 = sub_140a32a50(&var_218, &arg1[0x1e], 1)
uint64_t result

if (rax_5 == 0)
    result = sub_140a32a50(&arg1[0x1e], &var_218, 1)

if (rax_5 != 0 || result.b != 0)
    void** rbx_5 = *arg1 + 0x20
    int32_t r11_1 = rbx_5[3].d
    int32_t rcx_7 = 0
    void* var_228 = nullptr
    void* r15_1 = nullptr
    int32_t i_5 = 0
    int32_t i_3 = 0
    int64_t var_220_1 = 0
    int32_t r8_3 = 0
    int32_t var_130 = 0
    int32_t var_12c_1 = 1
    void* var_128_1 = &rbx_5[2]
    int32_t var_120_1 = 0xffffffff
    int64_t var_11c_1 = 0
    
    if (r11_1 != 0)
        void* r9 = rbx_5[2]
        
        if ((r9.b & 1) != 0)
            r9 = (r9 s>> 1) + &rbx_5[2]
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r11_1 - 1)
        int32_t rdx_7 = *r9
        
        if (rdx_7 != 0)
        label_141cf2028:
            int32_t rax_13 = neg.d(rdx_7) & rdx_7
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_13)
            int32_t var_12c_2 = rax_13
            int32_t rax_14
            
            if (rax_13 == 0)
                rax_14 = 0x20
            else
                rax_14 = 0x1f - temp0_2
            
            var_11c_1.d = r8_3 - rax_14 + 0x1f
            
            if (r8_3 - rax_14 + 0x1f s> r11_1)
                var_11c_1.d = r11_1
        else
            while (true)
                int64_t rdx_8 = sx.q(rcx_7)
                r8_3 += 0x20
                rcx_7 += 1
                var_11c_1:4.d = r8_3
                var_130 = rcx_7
                
                if (rdx_8.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_7 = *(r9 + (rdx_8 << 2) + 4)
                var_120_1 = 0xffffffff
                
                if (rdx_7 != 0)
                    goto label_141cf2028
            
            var_11c_1.d = r11_1
    
    double zmm2[0x2] = var_120_1.o
    double var_e0_1 = zmm2[0]
    double var_f0[0x2] = var_130.o
    double zmm1[0x2] = var_f0
    double var_c8[0x2] = rbx_5.o
    result = zmm2[0] u>> 0x20
    int64_t var_a8_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    
    if (result.d s< r11_1)
        int32_t i = zmm1[1]:4.d
        
        do
            int64_t* r12_1 = var_c8[0]
            void* rcx_9 = *r12_1
            
            if ((rcx_9.b & 1) != 0)
                rcx_9 = (rcx_9 s>> 1) + r12_1
            
            int64_t r13_2 = sx.q(i) * 0x50
            void* rdi_1 = *(rcx_9 + r13_2)
            void* rax_18 = rcx_9 + r13_2
            
            if ((rdi_1.b & 1) != 0)
                rdi_1 = (rdi_1 s>> 1) + rax_18
            
            int32_t rax_19 = *(rax_18 + 8)
            int32_t rbx_6 = 0
            int16_t* var_1e8 = nullptr
            int16_t* rsi_1 = nullptr
            int32_t var_1e0_1 = 0
            int32_t r15_2 = 0
            int32_t var_1dc_1 = 0
            int32_t r14_1 = rax_19 - 1
            
            if (rax_19 == 0)
                r14_1 = 0
            
            if (rdi_1 != 0 && *rdi_1 != 0 && r14_1 s> 0)
                if (r14_1 + 1 s> 0)
                    sub_1405947f0(&var_1e8, r14_1 + 1)
                    r15_2 = var_1dc_1
                    rbx_6 = var_1e0_1
                    rsi_1 = var_1e8
                
                rbx_6 += r14_1 + 1
                
                if (rbx_6 s> r15_2)
                    sub_140594770(&var_1e8)
                    r15_2 = var_1dc_1
                    rsi_1 = var_1e8
                
                UnDecorator::getReferenceType(rsi_1, rdi_1, r14_1 * 2)
                rsi_1[sx.q(rbx_6) - 1] = 0
            
            int32_t rdi_3 = arg1[0x1f].d
            int16_t* var_208
            int32_t var_200_1
            
            if (rdi_3 s> 1)
                int32_t rbx_8
                
                if (rbx_6 == 0)
                    rbx_8 = 0
                else
                    rbx_8 = rbx_6 - 1
                
                int32_t rax_21
                
                if (rdi_3 == 0)
                    rax_21 = rdi_3 + 1
                
                if (rdi_3 != 0 || rbx_8 == 0)
                    rax_21 = 0
                
                int64_t r14_2 = arg1[0x1e]
                int32_t rcx_14 = rax_21 + rbx_8
                int16_t* var_170 = nullptr
                int32_t var_164
                
                if (rdi_3 != 0 || rcx_14 != 0)
                    sub_1405a4c70(&var_170, rdi_3 + rcx_14, 0)
                    memcpy(var_170, r14_2, rdi_3 * 2)
                else
                    var_164 = 0
                
                sub_140a20ba0(&var_170, rsi_1, rbx_8)
                var_208 = var_170
                var_200_1 = rdi_3
                int32_t var_1fc_2 = var_164
                int32_t var_168_1
                var_168_1.q = 0
                var_170 = nullptr
                
                if (rsi_1 != 0)
                    sub_140a74f90(rsi_1)
            else
                var_208 = rsi_1
                var_1e8 = nullptr
                var_200_1 = rbx_6
                int32_t var_1fc_1 = r15_2
                var_1e0_1.q = 0
            
            if (sub_140a32a50(&var_208, &var_218, 1) == 0)
                r15_1 = var_228
            else
                int32_t arg_18
                
                if (arg6 != 1)
                    int32_t rbx_19 = var_200_1
                    int32_t rdx_39 = rbx_19 - 1
                    
                    if (rbx_19 == 0)
                        rdx_39 = 0
                    
                    int32_t rax_58 = var_210.d
                    int32_t rcx_49 = rax_58 - 1
                    
                    if (rax_58 == 0)
                        rcx_49 = 0
                    
                    int32_t rax_61
                    
                    if (rdx_39 s<= rcx_49)
                        rax_61 = -1
                    else
                        int32_t rax_59
                        
                        if (rax_58 == 0)
                            rax_59 = 0
                        else
                            rax_59 = rax_58 - 1
                        
                        rax_61 = sub_140a23cf0(&var_208, &data_142d5a024, 0, 0, rax_59 + 1)
                        rbx_19 = var_200_1
                    
                    if (arg4 != 0 && rax_61 == 0xffffffff)
                        void* rax_62 = *r12_1
                        
                        if ((rax_62.b & 1) != 0)
                            rax_62 = (rax_62 s>> 1) + r12_1
                        
                        int32_t var_194_3 = 1
                        int32_t var_188_3 = 0xffffffff
                        void* rdi_12 = rax_62 + 0x10 + r13_2
                        int64_t var_184_2 = 0
                        int32_t r11_3 = *(rdi_12 + 0x18)
                        void* var_190_2 = rdi_12 + 0x10
                        int32_t rcx_51 = 0
                        int32_t var_198_2 = 0
                        int32_t r8_22 = 0
                        
                        if (r11_3 != 0)
                            void* r9_4 = *(rdi_12 + 0x10)
                            
                            if ((r9_4.b & 1) != 0)
                                r9_4 = (r9_4 s>> 1) + rdi_12 + 0x10
                            
                            int32_t temp6_1
                            int32_t temp7_1
                            temp6_1:temp7_1 = sx.q(r11_3 - 1)
                            int32_t rdx_42 = *r9_4
                            
                            if (rdx_42 != 0)
                            label_141cf2898:
                                int32_t rax_71 = neg.d(rdx_42) & rdx_42
                                uint64_t rflags_3
                                int32_t temp0_6
                                temp0_6, rflags_3 = _bit_scan_reverse(rax_71)
                                int32_t var_194_4 = rax_71
                                int32_t rax_72
                                
                                if (rax_71 == 0)
                                    rax_72 = 0x20
                                else
                                    rax_72 = 0x1f - temp0_6
                                
                                var_184_2.d = r8_22 - rax_72 + 0x1f
                                
                                if (r8_22 - rax_72 + 0x1f s> r11_3)
                                    var_184_2.d = r11_3
                            else
                                while (true)
                                    int64_t rdx_43 = sx.q(rcx_51)
                                    r8_22 += 0x20
                                    rcx_51 += 1
                                    var_184_2:4.d = r8_22
                                    var_198_2 = rcx_51
                                    
                                    if (rdx_43.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                                        break
                                    
                                    rdx_42 = *(r9_4 + (rdx_43 << 2) + 4)
                                    int32_t var_188_4 = 0xffffffff
                                    
                                    if (rdx_42 != 0)
                                        goto label_141cf2898
                                
                                var_184_2.d = r11_3
                        
                        int128_t var_60_2 = 0xffffffff
                        double var_70_2[0x2] = var_198_2.o
                        void** var_f8_1
                        var_f8_1.o = rdi_12.o
                        var_e0_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
                        var_f0 = var_70_2
                        
                        if (0 s< r11_3)
                            int32_t j = var_e0_1:4.d
                            
                            do
                                void* rax_74 = *var_f8_1
                                
                                if ((rax_74.b & 1) != 0)
                                    rax_74 = (rax_74 s>> 1) + var_f8_1
                                
                                void* rcx_56 = (sx.q(j) << 5) + rax_74
                                void* rbx_20 = *rcx_56
                                
                                if ((rbx_20.b & 1) != 0)
                                    rbx_20 = (rbx_20 s>> 1) + rcx_56
                                
                                int32_t rax_76 = *(rcx_56 + 8)
                                int64_t r13_4 = 0
                                int64_t var_1a8 = 0
                                int32_t r15_5 = 0
                                int64_t var_1a0_1 = 0
                                int32_t rsi_7 = 0
                                arg_18 = 0
                                int32_t rdi_13 = rax_76 - 1
                                
                                if (rax_76 == 0)
                                    rdi_13 = 0
                                
                                if (rbx_20 != 0 && *rbx_20 != 0 && rdi_13 s> 0)
                                    if (rdi_13 + 1 s> 0)
                                        sub_1405947f0(&var_1a8, rdi_13 + 1)
                                        rsi_7 = var_1a0_1:4.d
                                        r15_5 = var_1a0_1.d
                                        r13_4 = var_1a8
                                        arg_18 = rsi_7
                                    
                                    r15_5 = r15_5 + 1 + rdi_13
                                    var_1a0_1.d = r15_5
                                    
                                    if (r15_5 s> rsi_7)
                                        sub_140594770(&var_1a8)
                                        r15_5 = var_1a0_1.d
                                        r13_4 = var_1a8
                                        arg_18 = var_1a0_1:4.d
                                    
                                    UnDecorator::getReferenceType(r13_4, rbx_20, rdi_13 * 2)
                                    *(r13_4 + (sx.q(r15_5) << 1) - 2) = 0
                                
                                void* rax_80 = *r12_1
                                
                                if ((rax_80.b & 1) != 0)
                                    rax_80 = (rax_80 s>> 1) + r12_1
                                
                                void* rcx_61 = r13_2 + rax_80
                                void* rdi_14 = *rcx_61
                                
                                if ((rdi_14.b & 1) != 0)
                                    rdi_14 = (rdi_14 s>> 1) + rcx_61
                                
                                int32_t rax_81 = *(rcx_61 + 8)
                                int32_t rbx_22 = 0
                                int64_t var_1b8 = 0
                                int64_t r12_3 = 0
                                int32_t var_1b0_1 = 0
                                int32_t r14_5 = 0
                                int32_t var_1ac_1 = 0
                                int32_t rsi_8 = rax_81 - 1
                                
                                if (rax_81 == 0)
                                    rsi_8 = 0
                                
                                if (rdi_14 != 0 && *rdi_14 != 0 && rsi_8 s> 0)
                                    if (rsi_8 + 1 s> 0)
                                        sub_1405947f0(&var_1b8, rsi_8 + 1)
                                        r14_5 = var_1ac_1
                                        rbx_22 = var_1b0_1
                                        r12_3 = var_1b8
                                    
                                    rbx_22 = rbx_22 + 1 + rsi_8
                                    
                                    if (rbx_22 s> r14_5)
                                        sub_140594770(&var_1b8)
                                        r14_5 = var_1ac_1
                                        r12_3 = var_1b8
                                    
                                    UnDecorator::getReferenceType(r12_3, rdi_14, rsi_8 * 2)
                                    *(r12_3 + (sx.q(rbx_22) << 1) - 2) = 0
                                
                                int32_t rdi_16 = arg1[0x1f].d
                                int64_t rdi_17
                                
                                if (rdi_16 s> 1)
                                    int32_t rbx_24
                                    
                                    if (rbx_22 == 0)
                                        rbx_24 = 0
                                    else
                                        rbx_24 = rbx_22 - 1
                                    
                                    int32_t rax_83
                                    
                                    if (rdi_16 == 0)
                                        rax_83 = rdi_16 + 1
                                    
                                    if (rdi_16 != 0 || rbx_24 == 0)
                                        rax_83 = 0
                                    
                                    int64_t rsi_9 = arg1[0x1e]
                                    int32_t rcx_65 = rax_83 + rbx_24
                                    int64_t var_150 = 0
                                    int32_t var_144
                                    
                                    if (rdi_16 != 0 || rcx_65 != 0)
                                        sub_1405a4c70(&var_150, rdi_16 + rcx_65, 0)
                                        memcpy(var_150, rsi_9, rdi_16 * 2)
                                    else
                                        var_144 = 0
                                    
                                    sub_140a20ba0(&var_150, r12_3, rbx_24)
                                    rdi_17 = var_150
                                    rbx_22 = rdi_16
                                    var_150 = 0
                                    int32_t var_148_1
                                    var_148_1.q = 0
                                    var_130.q = rdi_17
                                    var_128_1:4.d = var_144
                                else
                                    rdi_17 = r12_3
                                    var_130.q = r12_3
                                    r12_3 = 0
                                    var_128_1:4.d = r14_5
                                    var_1b0_1.q = 0
                                
                                var_128_1.d = rbx_22
                                int64_t rsi_10
                                int32_t r14_6
                                
                                if (rbx_22 s> 1)
                                    int32_t rdi_18 = r15_5 - 1
                                    
                                    if (r15_5 == 0)
                                        rdi_18 = 0
                                    
                                    int32_t rax_85
                                    
                                    if (rbx_22 == 0)
                                        rax_85 = rbx_22 + 1
                                    
                                    if (rbx_22 != 0 || rdi_18 == 0)
                                        rax_85 = 0
                                    
                                    int64_t var_108
                                    sub_140596690(&var_108, &var_130, rax_85 + rdi_18)
                                    sub_140a20ba0(&var_108, r13_4, rdi_18)
                                    rsi_10 = var_108
                                    int32_t var_100
                                    r15_5 = var_100
                                    int32_t var_fc
                                    r14_6 = var_fc
                                    rdi_17 = var_130.q
                                    var_108 = 0
                                    var_100.q = 0
                                else
                                    r14_6 = arg_18
                                    rsi_10 = r13_4
                                    r13_4 = 0
                                    int64_t var_1a0_2 = 0
                                
                                int64_t* rcx_71 = arg2
                                int64_t rbx_25 = sx.q(rcx_71[1].d)
                                int32_t rax_86 = (rbx_25 + 1).d
                                rcx_71[1].d = rax_86
                                
                                if (rax_86 s> *(rcx_71 + 0xc))
                                    sub_1405a4f90(rcx_71)
                                    rcx_71 = arg2
                                
                                int64_t* rax_89 = (rbx_25 << 4) + *rcx_71
                                *rax_89 = rsi_10
                                rax_89[1].d = r15_5
                                *(rax_89 + 0xc) = r14_6
                                
                                if (rdi_17 != 0)
                                    sub_140a74f90(rdi_17)
                                
                                if (r12_3 != 0)
                                    sub_140a74f90(r12_3)
                                
                                if (r13_4 != 0)
                                    sub_140a74f90(r13_4)
                                
                                var_e0_1.d &= not.d(var_f0[0]:4.d)
                                sub_141d02a20(&var_f0)
                                j = var_e0_1:4.d
                                r12_1 = var_c8[0]
                            while (j s< *(var_f0[1] i+ 8))
                            
                            rbx_19 = var_200_1
                    
                    if (arg5 == 0 || rax_61 s< 0)
                        r15_1 = var_228
                    else
                        int32_t rbx_26
                        int16_t* r15_7
                        
                        if (rbx_19 == 0)
                            r15_7 = &data_142d40450
                            rbx_26 = 0
                        else
                            r15_7 = var_208
                            rbx_26 = rbx_19 - 1
                        
                        if (rax_61 + 1 s< 0)
                            rbx_26 = 0
                        else if (rax_61 + 1 s< rbx_26)
                            rbx_26 = rax_61 + 1
                        
                        int64_t var_1f8 = 0
                        int64_t rsi_11 = 0
                        int64_t var_1f0_1 = 0
                        int32_t rdi_19 = 0
                        int32_t r14_7 = 0
                        
                        if (r15_7 != 0 && *r15_7 != 0 && rbx_26 s> 0)
                            if (rbx_26 + 1 s> 0)
                                sub_1405947f0(&var_1f8, rbx_26 + 1)
                                r14_7 = var_1f0_1:4.d
                                rdi_19 = var_1f0_1.d
                                rsi_11 = var_1f8
                            
                            rdi_19 = rdi_19 + 1 + rbx_26
                            var_1f0_1.d = rdi_19
                            
                            if (rdi_19 s> r14_7)
                                sub_140594770(&var_1f8)
                                r14_7 = var_1f0_1:4.d
                                rdi_19 = var_1f0_1.d
                                rsi_11 = var_1f8
                            
                            UnDecorator::getReferenceType(rsi_11, r15_7, rbx_26 * 2)
                            *(rsi_11 + (sx.q(rdi_19) << 1) - 2) = 0
                        
                        if (sub_1406daa50(&var_228, &var_1f8) != 0xffffffff)
                            if (rsi_11 != 0)
                                sub_140a74f90(rsi_11)
                            
                            r15_1 = var_228
                        else
                            int64_t i_9 = sx.q(i_5)
                            int32_t i_7 = (i_9 + 1).d
                            i_5 = i_7
                            var_220_1.d = i_7
                            
                            if (i_7 s> var_220_1:4.d)
                                sub_1405a4f90(&var_228)
                                i_5 = var_220_1.d
                            
                            r15_1 = var_228
                            int64_t rax_99 = i_9 * 2
                            var_1f8 = 0
                            int64_t var_1f0_2 = 0
                            *(r15_1 + (rax_99 << 3)) = rsi_11
                            *(r15_1 + (rax_99 << 3) + 8) = rdi_19
                            *(r15_1 + (rax_99 << 3) + 0xc) = r14_7
                else
                    if (arg4 != 0)
                        void* rax_26 = *r12_1
                        
                        if ((rax_26.b & 1) != 0)
                            rax_26 = (rax_26 s>> 1) + r12_1
                        
                        int32_t var_194_1 = 1
                        int32_t var_188_1 = 0xffffffff
                        void* rbx_10 = rax_26 + 0x10 + r13_2
                        int64_t var_184_1 = 0
                        int32_t r11_2 = *(rbx_10 + 0x18)
                        void* var_190_1 = rbx_10 + 0x10
                        int32_t rcx_20 = 0
                        int32_t var_198_1 = 0
                        int32_t r8_10 = 0
                        
                        if (r11_2 != 0)
                            void* r9_2 = *(rbx_10 + 0x10)
                            
                            if ((r9_2.b & 1) != 0)
                                r9_2 = (r9_2 s>> 1) + rbx_10 + 0x10
                            
                            int32_t temp3_1
                            int32_t temp4_1
                            temp3_1:temp4_1 = sx.q(r11_2 - 1)
                            int32_t rdx_19 = *r9_2
                            
                            if (rdx_19 != 0)
                            label_141cf2318:
                                int32_t rax_35 = neg.d(rdx_19) & rdx_19
                                uint64_t rflags_2
                                int32_t temp0_4
                                temp0_4, rflags_2 = _bit_scan_reverse(rax_35)
                                int32_t var_194_2 = rax_35
                                int32_t rax_36
                                
                                if (rax_35 == 0)
                                    rax_36 = 0x20
                                else
                                    rax_36 = 0x1f - temp0_4
                                
                                var_184_1.d = r8_10 - rax_36 + 0x1f
                                
                                if (r8_10 - rax_36 + 0x1f s> r11_2)
                                    var_184_1.d = r11_2
                            else
                                while (true)
                                    int64_t rdx_20 = sx.q(rcx_20)
                                    r8_10 += 0x20
                                    rcx_20 += 1
                                    var_184_1:4.d = r8_10
                                    var_198_1 = rcx_20
                                    
                                    if (rdx_20.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                                        break
                                    
                                    rdx_19 = *(r9_2 + (rdx_20 << 2) + 4)
                                    int32_t var_188_2 = 0xffffffff
                                    
                                    if (rdx_19 != 0)
                                        goto label_141cf2318
                                
                                var_184_1.d = r11_2
                        
                        int128_t var_60_1 = 0xffffffff
                        double var_70_1[0x2] = var_198_1.o
                        double var_a0[0x2] = rbx_10.o
                        int64_t var_80_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
                        
                        if (0 s< r11_2)
                            int32_t j_1 = var_70_1[1]:4.d
                            
                            do
                                double rcx_22 = var_a0[0]
                                int64_t rax_38 = *rcx_22
                                
                                if ((rax_38.b & 1) != 0)
                                    rax_38 = (rax_38 s>> 1) i+ rcx_22
                                
                                int64_t* rcx_25 = (sx.q(j_1) << 5) + rax_38
                                void* rbx_11 = *rcx_25
                                
                                if ((rbx_11.b & 1) != 0)
                                    rbx_11 = (rbx_11 s>> 1) + rcx_25
                                
                                int32_t rax_40 = rcx_25[1].d
                                int64_t r13_3 = 0
                                int64_t var_1c8 = 0
                                int32_t r15_3 = 0
                                int64_t var_1c0_1 = 0
                                int32_t rsi_2 = 0
                                arg_18 = 0
                                int32_t rdi_4 = rax_40 - 1
                                
                                if (rax_40 == 0)
                                    rdi_4 = 0
                                
                                if (rbx_11 != 0 && *rbx_11 != 0 && rdi_4 s> 0)
                                    if (rdi_4 + 1 s> 0)
                                        sub_1405947f0(&var_1c8, rdi_4 + 1)
                                        rsi_2 = var_1c0_1:4.d
                                        r15_3 = var_1c0_1.d
                                        r13_3 = var_1c8
                                        arg_18 = rsi_2
                                    
                                    r15_3 += rdi_4 + 1
                                    var_1c0_1.d = r15_3
                                    
                                    if (r15_3 s> rsi_2)
                                        sub_140594770(&var_1c8)
                                        r15_3 = var_1c0_1.d
                                        r13_3 = var_1c8
                                        arg_18 = var_1c0_1:4.d
                                    
                                    UnDecorator::getReferenceType(r13_3, rbx_11, rdi_4 * 2)
                                    *(r13_3 + (sx.q(r15_3) << 1) - 2) = 0
                                
                                void* rax_44 = *r12_1
                                
                                if ((rax_44.b & 1) != 0)
                                    rax_44 = (rax_44 s>> 1) + r12_1
                                
                                void* rcx_30 = r13_2 + rax_44
                                void* rdi_5 = *rcx_30
                                
                                if ((rdi_5.b & 1) != 0)
                                    rdi_5 = (rdi_5 s>> 1) + rcx_30
                                
                                int32_t rax_45 = *(rcx_30 + 8)
                                int32_t rbx_13 = 0
                                int64_t var_1d8 = 0
                                int64_t r12_2 = 0
                                int32_t var_1d0_1 = 0
                                int32_t r14_3 = 0
                                int32_t var_1cc_1 = 0
                                int32_t rsi_3 = rax_45 - 1
                                
                                if (rax_45 == 0)
                                    rsi_3 = 0
                                
                                if (rdi_5 != 0 && *rdi_5 != 0 && rsi_3 s> 0)
                                    if (rsi_3 + 1 s> 0)
                                        sub_1405947f0(&var_1d8, rsi_3 + 1)
                                        r14_3 = var_1cc_1
                                        rbx_13 = var_1d0_1
                                        r12_2 = var_1d8
                                    
                                    rbx_13 += rsi_3 + 1
                                    
                                    if (rbx_13 s> r14_3)
                                        sub_140594770(&var_1d8)
                                        r14_3 = var_1cc_1
                                        r12_2 = var_1d8
                                    
                                    UnDecorator::getReferenceType(r12_2, rdi_5, rsi_3 * 2)
                                    *(r12_2 + (sx.q(rbx_13) << 1) - 2) = 0
                                
                                int32_t rdi_7 = arg1[0x1f].d
                                int64_t rsi_4
                                
                                if (rdi_7 s> 1)
                                    int32_t rbx_15
                                    
                                    if (rbx_13 == 0)
                                        rbx_15 = 0
                                    else
                                        rbx_15 = rbx_13 - 1
                                    
                                    int32_t rax_47
                                    
                                    if (rdi_7 == 0)
                                        rax_47 = rdi_7 + 1
                                    
                                    if (rdi_7 != 0 || rbx_15 == 0)
                                        rax_47 = 0
                                    
                                    int64_t rsi_5 = arg1[0x1e]
                                    int32_t rcx_34 = rbx_15 + rax_47
                                    int64_t var_160 = 0
                                    int32_t var_154
                                    
                                    if (rdi_7 != 0 || rcx_34 != 0)
                                        sub_1405a4c70(&var_160, rdi_7 + rcx_34, 0)
                                        memcpy(var_160, rsi_5, rdi_7 * 2)
                                    else
                                        var_154 = 0
                                    
                                    sub_140a20ba0(&var_160, r12_2, rbx_15)
                                    rsi_4 = var_160
                                    rbx_13 = rdi_7
                                    r14_3 = var_154
                                    var_160 = 0
                                    int32_t var_158_1
                                    var_158_1.q = 0
                                else
                                    rsi_4 = r12_2
                                    var_1d0_1.q = 0
                                    r12_2 = 0
                                
                                int64_t rdi_8
                                int32_t r14_4
                                
                                if (rbx_13 s> 1)
                                    int32_t rdi_9 = r15_3 - 1
                                    
                                    if (r15_3 == 0)
                                        rdi_9 = 0
                                    
                                    int32_t rax_48
                                    
                                    if (rbx_13 == 0)
                                        rax_48 = rbx_13 + 1
                                    
                                    if (rbx_13 != 0 || rdi_9 == 0)
                                        rax_48 = 0
                                    
                                    int64_t var_140 = rsi_4
                                    int32_t rdx_32 = rdi_9 + rax_48 + rbx_13
                                    rsi_4 = 0
                                    
                                    if (rdx_32 s> r14_3)
                                        sub_1405947f0(&var_140, rdx_32)
                                    
                                    sub_140a20ba0(&var_140, r13_3, rdi_9)
                                    rdi_8 = var_140
                                    r15_3 = rbx_13
                                    r14_4 = r14_3
                                    var_140 = 0
                                    int32_t var_138_1
                                    var_138_1.q = 0
                                else
                                    r14_4 = arg_18
                                    rdi_8 = r13_3
                                    r13_3 = 0
                                    int64_t var_1c0_2 = 0
                                
                                int64_t* rcx_40 = arg2
                                int64_t rbx_16 = sx.q(rcx_40[1].d)
                                int32_t rax_49 = (rbx_16 + 1).d
                                rcx_40[1].d = rax_49
                                
                                if (rax_49 s> *(rcx_40 + 0xc))
                                    sub_1405a4f90(rcx_40)
                                    rcx_40 = arg2
                                
                                int64_t* rax_52 = (rbx_16 << 4) + *rcx_40
                                *rax_52 = rdi_8
                                rax_52[1].d = r15_3
                                *(rax_52 + 0xc) = r14_4
                                
                                if (rsi_4 != 0)
                                    sub_140a74f90(rsi_4)
                                
                                if (r12_2 != 0)
                                    sub_140a74f90(r12_2)
                                
                                if (r13_3 != 0)
                                    sub_140a74f90(r13_3)
                                
                                var_70_1[1].d &= not.d(var_a0[1]:4.d)
                                sub_141d02a20(&var_a0[1])
                                j_1 = var_70_1[1]:4.d
                                r12_1 = var_c8[0]
                            while (j_1 s< *(var_70_1[0] i+ 8))
                    
                    if (arg5 == 0)
                        r15_1 = var_228
                    else
                        int16_t* const rdx_35 = &data_142d40450
                        int16_t* const rcx_45 = &data_142d40450
                        
                        if (var_200_1 != 0)
                            rdx_35 = var_208
                        
                        if (var_210.d != 0)
                            rcx_45 = var_218
                        
                        if (sub_140a54510(rcx_45, rdx_35) == 0)
                            r15_1 = var_228
                        else
                            int64_t i_8 = sx.q(i_5)
                            int32_t i_6 = (i_8 + 1).d
                            i_5 = i_6
                            var_220_1.d = i_6
                            
                            if (i_6 s> var_220_1:4.d)
                                sub_1405a4f90(&var_228)
                                i_5 = var_220_1.d
                            
                            r15_1 = var_228
                            int64_t* rbx_18 = (i_8 << 4) + r15_1
                            *rbx_18 = 0
                            int16_t* rsi_6 = var_208
                            rbx_18[1].d = var_200_1
                            
                            if (var_200_1 != 0)
                                sub_1405a4c70(rbx_18, var_200_1, 0)
                                memcpy(*rbx_18, rsi_6, var_200_1 * 2)
                            else
                                *(rbx_18 + 0xc) = 0
            
            int16_t* rcx_82 = var_208
            
            if (rcx_82 != 0)
                sub_140a74f90(rcx_82)
            
            zmm1[1].d &= not.d(var_c8[1]:4.d)
            sub_141d02a20(&var_c8[1])
            result = zmm1[0]
            i = zmm1[1]:4.d
        while (i s< *(result + 8))
        
        i_3 = i_5
        
        if (i_3 != 0)
            int32_t rax_102 = arg2[1].d
            int32_t rdx_62 = i_3 + rax_102
            
            if (rdx_62 s> *(arg2 + 0xc))
                sub_14061cd70(arg2, rdx_62)
                rax_102 = arg2[1].d
            
            int32_t i_4 = i_3
            void* rsi_12 = r15_1
            int64_t* rbx_29 = (sx.q(rax_102) << 4) + *arg2
            result = 0
            int32_t i_1
            
            do
                *rbx_29 = 0
                int32_t rdi_21 = *(rsi_12 + 8)
                int64_t r15_8 = *rsi_12
                rbx_29[1].d = rdi_21
                
                if (rdi_21 != 0)
                    sub_1405a4c70(rbx_29, rdi_21, 0)
                    memcpy(*rbx_29, r15_8, rdi_21 * 2)
                    result = 0
                else
                    *(rbx_29 + 0xc) = 0
                
                rbx_29 = &rbx_29[2]
                rsi_12 += 0x10
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
            arg2[1].d += i_3
            r15_1 = var_228
    
    void* rbx_30 = r15_1
    
    if (i_3 != 0)
        int32_t i_2
        
        do
            int64_t rcx_87 = *rbx_30
            
            if (rcx_87 != 0)
                result = sub_140a74f90(rcx_87)
            
            rbx_30 += 0x10
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)
    
    if (r15_1 != 0)
        result = sub_140a74f90(r15_1)

int16_t* rcx_89 = var_218

if (rcx_89 == 0)
    return result

return sub_140a74f90(rcx_89)
