// 函数: sub_141867f50
// 地址: 0x141867f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = arg1[0x67]
*arg1 = &data_142fe8038
sub_140a2fe90(arg1[3], rdx)
*arg1[8] = 0
EnterCriticalSection(&arg1[0x30])
int32_t var_1b4 = 1
int32_t r11 = arg1[0x3a].d
void* var_1b0 = &arg1[0x37]
int32_t rcx_2 = 0
int32_t var_1b8 = 0
int32_t r8 = 0
int32_t var_1a8 = 0xffffffff
int64_t var_1a4 = 0

if (r11 != 0)
    void* rax_1 = arg1[0x39]
    void* r9_1 = &arg1[0x37]
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_14186802b:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_1b4_1 = rax_8
        int32_t arg_8 = temp0_1
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_1
        
        var_1a4.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_1a4.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_2)
            r8 += 0x20
            rcx_2 += 1
            var_1a4:4.d = r8
            var_1b8 = rcx_2
            
            if (rdx_4.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            int32_t var_1a8_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_14186802b
        
        var_1a4.d = r11

int32_t rdx_5 = arg1[0x3a].d
int32_t r8_3 = rdx_5 s>> 5
int32_t rdi = 0xffffffff << (rdx_5.b & 0x1f)
int32_t r9_3 = rdx_5 & 0xffffffe0
int32_t var_130 = r8_3
int32_t var_120 = rdi
int32_t var_11c = rdx_5
int32_t var_118 = r9_3
int128_t var_140 = 0xffffffff
int64_t var_a8 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
int128_t var_c8 = (&arg1[0x35]).o
int128_t var_b8 = var_1b8.o

if (rdx_5 != r11)
    void* rax_11 = arg1[0x39]
    void* r10_1 = &arg1[0x37]
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(r11 - 1)
    int32_t rdx_9 = *(r10_1 + (sx.q(r8_3) << 2)) & rdi
    int32_t var_11c_2
    
    if (rdx_9 != 0)
    label_14186811a:
        int32_t rax_18 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t arg_10 = temp0_3
        int32_t rax_19
        
        if (rax_18 == 0)
            rax_19 = 0x20
        else
            rax_19 = 0x1f - temp0_3
        
        int32_t var_11c_1 = r9_3 - rax_19 + 0x1f
        
        if (r9_3 - rax_19 + 0x1f s> r11)
            var_11c_2 = r11
    else
        while (true)
            int64_t rcx_7 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            int32_t var_118_1 = r9_3
            int32_t var_130_1 = r8_3
            
            if (rcx_7.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r10_1 + (rcx_7 << 2) + 4)
            var_120 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_14186811a
        
        var_11c_2 = r11

while (true)
    int64_t rcx_9 = sx.q(var_b8:0xc.d)
    int64_t rax_21 = var_c8.q
    
    if (rcx_9.d == (var_120.q u>> 0x20).d && var_b8.q == &arg1[0x37] && rax_21 == &arg1[0x35])
        int32_t var_194 = 1
        int32_t var_188 = 0xffffffff
        int32_t r11_1 = arg1[0x44].d
        void* var_190 = &arg1[0x41]
        int32_t rcx_18 = 0
        int32_t var_198 = 0
        int32_t r8_6 = 0
        int64_t var_184 = 0
        
        if (r11_1 != 0)
            void* rax_31 = arg1[0x43]
            void* r9_5 = &arg1[0x41]
            
            if (rax_31 != 0)
                r9_5 = rax_31
            
            int32_t temp5_1
            int32_t temp6_1
            temp5_1:temp6_1 = sx.q(r11_1 - 1)
            int32_t rdx_12 = *r9_5
            
            if (rdx_12 != 0)
            label_1418682ab:
                int32_t rax_38 = neg.d(rdx_12) & rdx_12
                uint64_t rflags_3
                int32_t temp0_4
                temp0_4, rflags_3 = _bit_scan_reverse(rax_38)
                int32_t var_194_1 = rax_38
                int32_t arg_18 = temp0_4
                int32_t rax_39
                
                if (rax_38 == 0)
                    rax_39 = 0x20
                else
                    rax_39 = 0x1f - temp0_4
                
                var_184.d = r8_6 - rax_39 + 0x1f
                
                if (r8_6 - rax_39 + 0x1f s> r11_1)
                    var_184.d = r11_1
            else
                while (true)
                    int64_t rdx_13 = sx.q(rcx_18)
                    r8_6 += 0x20
                    rcx_18 += 1
                    var_184:4.d = r8_6
                    var_198 = rcx_18
                    
                    if (rdx_13.d s>= (temp6_1 + (temp5_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_12 = *(r9_5 + (rdx_13 << 2) + 4)
                    int32_t var_188_1 = 0xffffffff
                    
                    if (rdx_12 != 0)
                        goto label_1418682ab
                
                var_184.d = r11_1
        
        int32_t rdx_14 = arg1[0x44].d
        int32_t r8_9 = rdx_14 s>> 5
        int32_t rdi_4 = 0xffffffff << (rdx_14.b & 0x1f)
        int32_t r9_7 = rdx_14 & 0xffffffe0
        int32_t var_110 = r8_9
        int32_t var_100 = rdi_4
        int32_t var_fc = rdx_14
        int32_t var_f8 = r9_7
        int128_t var_140_1 = 0xffffffff
        int64_t var_80 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
        int128_t var_a0 = (&arg1[0x3f]).o
        int128_t var_90 = var_198.o
        
        if (rdx_14 != r11_1)
            void* rax_41 = arg1[0x43]
            void* r10_2 = &arg1[0x41]
            
            if (rax_41 != 0)
                r10_2 = rax_41
            
            int32_t temp7_1
            int32_t temp8_1
            temp7_1:temp8_1 = sx.q(r11_1 - 1)
            int32_t rdx_18 = *(r10_2 + (sx.q(r8_9) << 2)) & rdi_4
            int32_t var_fc_2
            
            if (rdx_18 != 0)
            label_14186839a:
                int32_t rax_48 = neg.d(rdx_18) & rdx_18
                uint64_t rflags_4
                int32_t temp0_6
                temp0_6, rflags_4 = _bit_scan_reverse(rax_48)
                int32_t arg_20 = temp0_6
                int32_t rax_49
                
                if (rax_48 == 0)
                    rax_49 = 0x20
                else
                    rax_49 = 0x1f - temp0_6
                
                int32_t var_fc_1 = r9_7 - rax_49 + 0x1f
                
                if (r9_7 - rax_49 + 0x1f s> r11_1)
                    var_fc_2 = r11_1
            else
                while (true)
                    int64_t rcx_23 = sx.q(r8_9)
                    r9_7 += 0x20
                    r8_9 += 1
                    int32_t var_f8_1 = r9_7
                    int32_t var_110_1 = r8_9
                    
                    if (rcx_23.d s>= (temp8_1 + (temp7_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_18 = *(r10_2 + (rcx_23 << 2) + 4)
                    var_100 = 0xffffffff
                    
                    if (rdx_18 != 0)
                        goto label_14186839a
                
                var_fc_2 = r11_1
        
        while (true)
            int64_t rax_51 = sx.q(var_90:0xc.d)
            int64_t* rdx_19 = var_a0.q
            
            if (rax_51.d == (var_100.q u>> 0x20).d && var_90.q == &arg1[0x41]
                    && rdx_19 == &arg1[0x3f])
                sub_140e0f820(&arg1[0x35], 0)
                sub_14187f910(&arg1[0x3f], 0)
                LeaveCriticalSection(&arg1[0x30])
                EnterCriticalSection(&arg1[0xb])
                int32_t var_174 = 1
                int32_t r11_2 = arg1[0x15].d
                void* var_170 = &arg1[0x12]
                int32_t rcx_33 = 0
                int32_t var_178 = 0
                int32_t r8_10 = 0
                int32_t var_168 = 0xffffffff
                int64_t var_164 = 0
                
                if (r11_2 != 0)
                    void* rax_57 = arg1[0x14]
                    void* r9_9 = &arg1[0x12]
                    
                    if (rax_57 != 0)
                        r9_9 = rax_57
                    
                    int32_t temp9_1
                    int32_t temp10_1
                    temp9_1:temp10_1 = sx.q(r11_2 - 1)
                    int32_t rdx_22 = *r9_9
                    
                    if (rdx_22 != 0)
                    label_1418684dd:
                        int32_t rax_64 = neg.d(rdx_22) & rdx_22
                        uint64_t rflags_5
                        int32_t temp0_7
                        temp0_7, rflags_5 = _bit_scan_reverse(rax_64)
                        int32_t var_174_1 = rax_64
                        int32_t var_d0_1 = temp0_7
                        int32_t rax_65
                        
                        if (rax_64 == 0)
                            rax_65 = 0x20
                        else
                            rax_65 = 0x1f - temp0_7
                        
                        var_164.d = r8_10 - rax_65 + 0x1f
                        
                        if (r8_10 - rax_65 + 0x1f s> r11_2)
                            var_164.d = r11_2
                    else
                        while (true)
                            int64_t rdx_23 = sx.q(rcx_33)
                            r8_10 += 0x20
                            rcx_33 += 1
                            var_164:4.d = r8_10
                            var_178 = rcx_33
                            
                            if (rdx_23.d s>= (temp10_1 + (temp9_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_22 = *(r9_9 + (rdx_23 << 2) + 4)
                            int32_t var_168_1 = 0xffffffff
                            
                            if (rdx_22 != 0)
                                goto label_1418684dd
                        
                        var_164.d = r11_2
                
                int32_t rdx_24 = arg1[0x15].d
                int32_t r8_13 = rdx_24 s>> 5
                int32_t r15_1 = 0xffffffff << (rdx_24.b & 0x1f)
                int32_t r9_11 = rdx_24 & 0xffffffe0
                int32_t var_f0 = r8_13
                int32_t var_e0 = r15_1
                int32_t var_dc = rdx_24
                int32_t var_d8 = r9_11
                int128_t var_140_2 = 0xffffffff
                int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
                int128_t var_78 = (&arg1[0x10]).o
                int128_t var_68 = var_178.o
                
                if (rdx_24 != r11_2)
                    void* rax_67 = arg1[0x14]
                    void* r10_3 = &arg1[0x12]
                    
                    if (rax_67 != 0)
                        r10_3 = rax_67
                    
                    int32_t temp11_1
                    int32_t temp12_1
                    temp11_1:temp12_1 = sx.q(r11_2 - 1)
                    int32_t rdx_28 = *(r10_3 + (sx.q(r8_13) << 2)) & r15_1
                    int32_t var_dc_2
                    
                    if (rdx_28 != 0)
                    label_1418685ca:
                        int32_t rax_74 = neg.d(rdx_28) & rdx_28
                        uint64_t rflags_6
                        int32_t temp0_9
                        temp0_9, rflags_6 = _bit_scan_reverse(rax_74)
                        int32_t var_cc_1 = temp0_9
                        int32_t rax_75
                        
                        if (rax_74 == 0)
                            rax_75 = 0x20
                        else
                            rax_75 = 0x1f - temp0_9
                        
                        int32_t var_dc_1 = r9_11 - rax_75 + 0x1f
                        
                        if (r9_11 - rax_75 + 0x1f s> r11_2)
                            var_dc_2 = r11_2
                    else
                        while (true)
                            int64_t rcx_38 = sx.q(r8_13)
                            r9_11 += 0x20
                            r8_13 += 1
                            int32_t var_d8_1 = r9_11
                            int32_t var_f0_1 = r8_13
                            
                            if (rcx_38.d s>= (temp12_1 + (temp11_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_28 = *(r10_3 + (rcx_38 << 2) + 4)
                            var_e0 = 0xffffffff
                            
                            if (rdx_28 != 0)
                                goto label_1418685ca
                        
                        var_dc_2 = r11_2
                
                while (true)
                    int64_t rax_77 = sx.q(var_68:0xc.d)
                    int64_t rdx_29 = var_78.q
                    
                    if (rax_77.d == (var_e0.q u>> 0x20).d && var_68.q == &arg1[0x12]
                            && rdx_29 == &arg1[0x10])
                        sub_14187f890(&arg1[0x10], 0)
                        LeaveCriticalSection(&arg1[0xb])
                        arg1[0x66].d = 0
                        int64_t rcx_47 = arg1[0x65]
                        
                        if (rcx_47 != 0)
                            sub_140a74f90(rcx_47)
                        
                        sub_1405b8bd0(&arg1[0x5d], 0)
                        int64_t rcx_49 = arg1[0x61]
                        
                        if (rcx_49 != 0)
                            sub_140a74f90(rcx_49)
                        
                        int64_t rcx_50 = arg1[0x5d]
                        
                        if (rcx_50 != 0)
                            sub_140a74f90(rcx_50)
                        
                        DeleteCriticalSection(&arg1[0x58])
                        sub_1405ae180(&arg1[0x4e])
                        DeleteCriticalSection(&arg1[0x49])
                        arg1[0x48].d = 0
                        int64_t rcx_54 = arg1[0x47]
                        
                        if (rcx_54 != 0)
                            sub_140a74f90(rcx_54)
                        
                        sub_14187fd90(&arg1[0x3f], 0)
                        int64_t rcx_56 = arg1[0x43]
                        
                        if (rcx_56 != 0)
                            sub_140a74f90(rcx_56)
                        
                        int64_t rcx_57 = arg1[0x3f]
                        
                        if (rcx_57 != 0)
                            sub_140a74f90(rcx_57)
                        
                        arg1[0x3e].d = 0
                        int64_t rcx_58 = arg1[0x3d]
                        
                        if (rcx_58 != 0)
                            sub_140a74f90(rcx_58)
                        
                        sub_1407ece30(&arg1[0x35], 0)
                        int64_t rcx_60 = arg1[0x39]
                        
                        if (rcx_60 != 0)
                            sub_140a74f90(rcx_60)
                        
                        int64_t rcx_61 = arg1[0x35]
                        
                        if (rcx_61 != 0)
                            sub_140a74f90(rcx_61)
                        
                        DeleteCriticalSection(&arg1[0x30])
                        int64_t rcx_63 = arg1[0x2e]
                        
                        if (rcx_63 != 0)
                            sub_140a74f90(rcx_63)
                        
                        DeleteCriticalSection(&arg1[0x29])
                        arg1[0x28].d = 0
                        int64_t rcx_65 = arg1[0x27]
                        
                        if (rcx_65 != 0)
                            sub_140a74f90(rcx_65)
                        
                        sub_140597460(&arg1[0x1f])
                        DeleteCriticalSection(&arg1[0x1a])
                        arg1[0x19].d = 0
                        int64_t rcx_68 = arg1[0x18]
                        
                        if (rcx_68 != 0)
                            sub_140a74f90(rcx_68)
                        
                        sub_14187fa30(&arg1[0x10], 0)
                        int64_t rcx_70 = arg1[0x14]
                        
                        if (rcx_70 != 0)
                            sub_140a74f90(rcx_70)
                        
                        int64_t rcx_71 = arg1[0x10]
                        
                        if (rcx_71 != 0)
                            sub_140a74f90(rcx_71)
                        
                        DeleteCriticalSection(&arg1[0xb])
                        int64_t* rbx_6 = arg1[9]
                        
                        if (rbx_6 != 0)
                            rbx_6[1].d -= 1
                            
                            if (rbx_6[1].d == 1)
                                (**rbx_6)(rbx_6)
                                int32_t rax_82 = *(rbx_6 + 0xc)
                                *(rbx_6 + 0xc) -= 1
                                
                                if (rax_82 == 1)
                                    (*(*rbx_6 + 8))(rbx_6, 1)
                        
                        int64_t* rbx_7 = arg1[2]
                        
                        if (rbx_7 != 0)
                            rbx_7[1].d -= 1
                            
                            if (rbx_7[1].d == 1)
                                (**rbx_7)(rbx_7)
                                int32_t rdi_9 = *(rbx_7 + 0xc)
                                *(rbx_7 + 0xc) -= 1
                                
                                if (rdi_9 == 1)
                                    (*(*rbx_7 + 8))(rbx_7, zx.q(rdi_9))
                        
                        *arg1 = &data_142d56fa0
                        return &data_142d56fa0
                    
                    int32_t* rcx_42 = rax_77 * 0x30 + *rdx_29
                    sub_141881c90(*rcx_42, &rcx_42[2])
                    var_68:8.d &= not.d(var_78:0xc.d)
                    sub_14059bdd0(&var_78:8)
            
            int64_t* rbx_4 = *(*rdx_19 + rax_51 * 0x18 + 8)
            
            if (*rbx_4 != 0)
                while (true)
                    int64_t rcx_26 = *rbx_4
                    
                    if (rcx_26 != 0)
                        int64_t* rcx_27 = *(rcx_26 + 0x70)
                        
                        if ((*(*rcx_27 + 0x20))(rcx_27, 0xffffffff, 0) != 0)
                            break
            
            var_90:8.d &= not.d(var_a0:0xc.d)
            sub_14059bdd0(&var_a0:8)
    
    void* rdi_3 = (rcx_9 << 5) + *rax_21
    int64_t* rcx_10 = *(rdi_3 + 8)
    int64_t* rax_23 = (*(*rcx_10 + 0x98))(rcx_10)
    
    if (rax_23[1].d != 0)
        int64_t* rcx_11 = *rax_23
        
        if (rcx_11 != 0)
            int64_t r8_4 = *rcx_11
            (*(r8_4 + 0x38))(rcx_11, 0, r8_4)
            int64_t rcx_12 = *rax_23
            
            if (rcx_12 != 0)
                *rax_23 = sub_140a84c80(rcx_12, 0, 0)
            
            rax_23[1].d = 0
    
    int64_t* rcx_13 = *(rdi_3 + 8)
    int64_t* rax_26 = (*(*rcx_13 + 0x90))(rcx_13)
    
    if (rax_26[1].d != 0)
        int64_t* rcx_14 = *rax_26
        
        if (rcx_14 != 0)
            int64_t r8_5 = *rcx_14
            (*(r8_5 + 0x38))(rcx_14, 0, r8_5)
            int64_t rcx_15 = *rax_26
            
            if (rcx_15 != 0)
                *rax_26 = sub_140a84c80(rcx_15, 0, 0)
            
            rax_26[1].d = 0
    
    int64_t* rcx_16 = *(rdi_3 + 8)
    (*(*rcx_16 + 0xb0))(rcx_16)
    var_b8:8.d &= not.d(var_c8:0xc.d)
    sub_14059bdd0(&var_c8:8)
