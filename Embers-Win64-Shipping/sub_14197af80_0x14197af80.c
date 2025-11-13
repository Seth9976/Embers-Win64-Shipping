// 函数: sub_14197af80
// 地址: 0x14197af80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (arg1[0x1f].b != 0)
    char arg_8 = 0
    char* arg_10 = &arg_8
    char** arg_18 = &arg_10
    char*** arg_20
    
    if (arg1[0xb].d - *(arg1 + 0x84) s> 0)
        sub_140a6c030(&arg1[0xa])
        arg_20 = &arg_18
        sub_14195e810(arg1[0xa], arg1[0xb].d - *(arg1 + 0x84), arg_8)
    
    sub_1405d3260(&arg1[0xa])
    int32_t r11_1 = arg1[0xf].d
    int32_t var_c4_1 = 1
    void* var_c0_1 = &arg1[0xc]
    int32_t rcx_3 = 0
    int32_t var_c8 = 0
    int32_t r8_2 = 0
    int32_t var_b8_1 = 0xffffffff
    int64_t var_b4_1 = 0
    
    if (r11_1 != 0)
        void* rax_2 = arg1[0xe]
        void* r9_1 = &arg1[0xc]
        
        if (rax_2 != 0)
            r9_1 = rax_2
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r11_1 - 1)
        int32_t rdx_5 = *r9_1
        
        if (rdx_5 != 0)
        label_14197b088:
            int32_t rax_9 = neg.d(rdx_5) & rdx_5
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
            int32_t var_c4_2 = rax_9
            int32_t rax_10
            
            if (rax_9 == 0)
                rax_10 = 0x20
            else
                rax_10 = 0x1f - temp0_2
            
            var_b4_1.d = r8_2 - rax_10 + 0x1f
            
            if (r8_2 - rax_10 + 0x1f s> r11_1)
                var_b4_1.d = r11_1
        else
            while (true)
                int64_t rdx_6 = sx.q(rcx_3)
                r8_2 += 0x20
                rcx_3 += 1
                var_b4_1:4.d = r8_2
                var_c8 = rcx_3
                
                if (rdx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
                var_b8_1 = 0xffffffff
                
                if (rdx_5 != 0)
                    goto label_14197b088
            
            var_b4_1.d = r11_1
    
    int32_t rdx_7 = arg1[0xf].d
    double zmm2[0x2] = var_b8_1.o
    double var_58_1[0x2] = zmm2
    int32_t r14_1 = 0xffffffff << (rdx_7.b & 0x1f)
    int128_t var_68_1 = var_c8.o
    int32_t r8_5 = rdx_7 s>> 5
    int32_t r9_3 = rdx_7 & 0xffffffe0
    int64_t var_88_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    int32_t var_b8_2 = r14_1
    var_b4_1.d = rdx_7
    int128_t var_a8 = (&arg1[0xa]).o
    int128_t var_98_1 = var_68_1
    
    if (rdx_7 != r11_1)
        void* rax_12 = arg1[0xe]
        void* r10_1 = &arg1[0xc]
        
        if (rax_12 != 0)
            r10_1 = rax_12
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r11_1 - 1)
        int32_t rdx_11 = *(r10_1 + (sx.q(r8_5) << 2)) & r14_1
        
        if (rdx_11 != 0)
        label_14197b162:
            int32_t rax_19 = neg.d(rdx_11) & rdx_11
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
            int32_t rax_20
            
            if (rax_19 == 0)
                rax_20 = 0x20
            else
                rax_20 = 0x1f - temp0_4
            
            var_b4_1.d = r9_3 - rax_20 + 0x1f
            
            if (r9_3 - rax_20 + 0x1f s> r11_1)
                var_b4_1.d = r11_1
        else
            while (true)
                int64_t rcx_8 = sx.q(r8_5)
                r9_3 += 0x20
                r8_5 += 1
                
                if (rcx_8.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_11 = *(r10_1 + (rcx_8 << 2) + 4)
                var_b8_2 = 0xffffffff
                
                if (rdx_11 != 0)
                    goto label_14197b162
            
            var_b4_1.d = r11_1
    
    while (var_98_1:0xc.d != (var_b8_2.q u>> 0x20).d || var_98_1.q != &arg1[0xc]
            || var_a8.q != &arg1[0xa])
        var_98_1:8.d &= not.d(var_a8:0xc.d)
        sub_14059bdd0(&var_a8:8)
    
    arg_8 = 0
    arg_10 = &arg_8
    arg_18 = &arg_10
    
    if (arg1[1].d - *(arg1 + 0x34) s> 0)
        sub_140a6c030(arg1)
        arg_20 = &arg_18
        sub_14195e810(*arg1, arg1[1].d - *(arg1 + 0x34), arg_8)
    
    sub_1405d3260(arg1)
    int32_t r11_2 = arg1[5].d
    int32_t var_c4_3 = 1
    int32_t rcx_14 = 0
    var_c8 = 0
    int32_t r8_7 = 0
    void* var_c0_2 = &arg1[2]
    int32_t var_b8_3 = 0xffffffff
    int64_t var_b4_2 = 0
    
    if (r11_2 != 0)
        void* rax_26 = arg1[4]
        void* r9_5 = &arg1[2]
        
        if (rax_26 != 0)
            r9_5 = rax_26
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(r11_2 - 1)
        int32_t rdx_16 = *r9_5
        
        if (rdx_16 != 0)
        label_14197b288:
            int32_t rax_33 = neg.d(rdx_16) & rdx_16
            uint64_t rflags_3
            int32_t temp0_5
            temp0_5, rflags_3 = _bit_scan_reverse(rax_33)
            int32_t var_c4_4 = rax_33
            int32_t rax_34
            
            if (rax_33 == 0)
                rax_34 = 0x20
            else
                rax_34 = 0x1f - temp0_5
            
            var_b4_2.d = r8_7 - rax_34 + 0x1f
            
            if (r8_7 - rax_34 + 0x1f s> r11_2)
                var_b4_2.d = r11_2
        else
            while (true)
                int64_t rdx_17 = sx.q(rcx_14)
                r8_7 += 0x20
                rcx_14 += 1
                var_b4_2:4.d = r8_7
                var_c8 = rcx_14
                
                if (rdx_17.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                    break
                
                rdx_16 = *(r9_5 + (rdx_17 << 2) + 4)
                var_b8_3 = 0xffffffff
                
                if (rdx_16 != 0)
                    goto label_14197b288
            
            var_b4_2.d = r11_2
    
    int32_t rdx_18 = arg1[5].d
    zmm2 = var_b8_3.o
    double var_58_2[0x2] = zmm2
    int32_t r14_2 = 0xffffffff << (rdx_18.b & 0x1f)
    int128_t var_68_2 = var_c8.o
    int32_t r8_10 = rdx_18 s>> 5
    int32_t r9_7 = rdx_18 & 0xffffffe0
    int64_t var_88_2 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    int32_t var_b8_4 = r14_2
    var_b4_2.d = rdx_18
    var_a8 = arg1.o
    int128_t var_98_2 = var_68_2
    
    if (rdx_18 != r11_2)
        void* rax_36 = arg1[4]
        void* r10_2 = &arg1[2]
        
        if (rax_36 != 0)
            r10_2 = rax_36
        
        int32_t temp6_1
        int32_t temp7_1
        temp6_1:temp7_1 = sx.q(r11_2 - 1)
        int32_t rdx_22 = *(r10_2 + (sx.q(r8_10) << 2)) & r14_2
        
        if (rdx_22 != 0)
        label_14197b354:
            int32_t rax_43 = neg.d(rdx_22) & rdx_22
            uint64_t rflags_4
            int32_t temp0_7
            temp0_7, rflags_4 = _bit_scan_reverse(rax_43)
            int32_t rax_44
            
            if (rax_43 == 0)
                rax_44 = 0x20
            else
                rax_44 = 0x1f - temp0_7
            
            var_b4_2.d = r9_7 - rax_44 + 0x1f
            
            if (r9_7 - rax_44 + 0x1f s> r11_2)
                var_b4_2.d = r11_2
        else
            while (true)
                int64_t rcx_19 = sx.q(r8_10)
                r9_7 += 0x20
                r8_10 += 1
                
                if (rcx_19.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                    break
                
                rdx_22 = *(r10_2 + (rcx_19 << 2) + 4)
                var_b8_4 = 0xffffffff
                
                if (rdx_22 != 0)
                    goto label_14197b354
            
            var_b4_2.d = r11_2
    
    while (var_98_2:0xc.d != (var_b8_4.q u>> 0x20).d || var_98_2.q != &arg1[2] || var_a8.q != arg1)
        var_98_2:8.d &= not.d(var_a8:0xc.d)
        sub_14059bdd0(&var_a8:8)
    
    arg_8 = 0
    arg_10 = &arg_8
    arg_18 = &arg_10
    
    if (arg1[0x15].d - *(arg1 + 0xd4) s> 0)
        sub_140a6c030(&arg1[0x14])
        arg_20 = &arg_18
        sub_14195e810(arg1[0x14], arg1[0x15].d - *(arg1 + 0xd4), arg_8)
    
    sub_1405d3260(&arg1[0x14])
    int32_t r11_3 = arg1[0x19].d
    int32_t var_c4_5 = 1
    int32_t rcx_25 = 0
    var_c8 = 0
    int32_t r8_12 = 0
    void* var_c0_3 = &arg1[0x16]
    int32_t var_b8_5 = 0xffffffff
    int64_t var_b4_3 = 0
    
    if (r11_3 != 0)
        void* rax_50 = arg1[0x18]
        void* r9_9 = &arg1[0x16]
        
        if (rax_50 != 0)
            r9_9 = rax_50
        
        int32_t temp8_1
        int32_t temp9_1
        temp8_1:temp9_1 = sx.q(r11_3 - 1)
        int32_t rdx_27 = *r9_9
        
        if (rdx_27 != 0)
        label_14197b478:
            int32_t rax_57 = neg.d(rdx_27) & rdx_27
            uint64_t rflags_5
            int32_t temp0_8
            temp0_8, rflags_5 = _bit_scan_reverse(rax_57)
            int32_t var_c4_6 = rax_57
            int32_t rax_58
            
            if (rax_57 == 0)
                rax_58 = 0x20
            else
                rax_58 = 0x1f - temp0_8
            
            var_b4_3.d = r8_12 - rax_58 + 0x1f
            
            if (r8_12 - rax_58 + 0x1f s> r11_3)
                var_b4_3.d = r11_3
        else
            while (true)
                int64_t rdx_28 = sx.q(rcx_25)
                r8_12 += 0x20
                rcx_25 += 1
                var_b4_3:4.d = r8_12
                var_c8 = rcx_25
                
                if (rdx_28.d s>= (temp9_1 + (temp8_1 & 0x1f)) s>> 5)
                    break
                
                rdx_27 = *(r9_9 + (rdx_28 << 2) + 4)
                var_b8_5 = 0xffffffff
                
                if (rdx_27 != 0)
                    goto label_14197b478
            
            var_b4_3.d = r11_3
    
    int32_t rdx_29 = arg1[0x19].d
    zmm2 = var_b8_5.o
    double var_58_3[0x2] = zmm2
    int32_t r14_3 = 0xffffffff << (rdx_29.b & 0x1f)
    int128_t var_68_3 = var_c8.o
    int32_t r8_15 = rdx_29 s>> 5
    int32_t r9_11 = rdx_29 & 0xffffffe0
    int64_t var_88_3 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    int32_t var_b8_6 = r14_3
    var_b4_3.d = rdx_29
    var_a8 = (&arg1[0x14]).o
    int128_t var_98_3 = var_68_3
    
    if (rdx_29 != r11_3)
        void* rax_60 = arg1[0x18]
        void* r10_3 = &arg1[0x16]
        
        if (rax_60 != 0)
            r10_3 = rax_60
        
        int32_t temp10_1
        int32_t temp11_1
        temp10_1:temp11_1 = sx.q(r11_3 - 1)
        int32_t rdx_33 = *(r10_3 + (sx.q(r8_15) << 2)) & r14_3
        
        if (rdx_33 != 0)
        label_14197b544:
            int32_t rax_67 = neg.d(rdx_33) & rdx_33
            uint64_t rflags_6
            int32_t temp0_10
            temp0_10, rflags_6 = _bit_scan_reverse(rax_67)
            int32_t rax_68
            
            if (rax_67 == 0)
                rax_68 = 0x20
            else
                rax_68 = 0x1f - temp0_10
            
            int32_t rax_69 = r9_11 - rax_68 + 0x1f
            var_b4_3.d = rax_69
            
            if (rax_69 s> r11_3)
                var_b4_3.d = r11_3
        else
            while (true)
                int64_t rcx_30 = sx.q(r8_15)
                r9_11 += 0x20
                r8_15 += 1
                
                if (rcx_30.d s>= (temp11_1 + (temp10_1 & 0x1f)) s>> 5)
                    break
                
                rdx_33 = *(r10_3 + (rcx_30 << 2) + 4)
                var_b8_6 = 0xffffffff
                
                if (rdx_33 != 0)
                    goto label_14197b544
            
            var_b4_3.d = r11_3
    
    while (var_98_3:0xc.d != (var_b8_6.q u>> 0x20).d || var_98_3.q != &arg1[0x16]
            || var_a8.q != &arg1[0x14])
        var_98_3:8.d &= not.d(var_a8:0xc.d)
        sub_14059bdd0(&var_a8:8)
    
    void* rax_72 = data_143f01e98
    int64_t* var_80 = nullptr
    int32_t var_78_1 = 0
    var_c8.q = 0
    int32_t rbx_2 = *(rax_72 + 0x18)
    int64_t rdi_7 = *(rax_72 + 0x10)
    var_c0_3.d = rbx_2
    
    if (rbx_2 != 0)
        sub_1405a4c70(&var_c8, rbx_2, 0)
        memcpy(var_c8.q, rdi_7, rbx_2 * 2)
    else
        var_c0_3:4.d = 0
    
    r9_11.b = 1
    result = sub_140a2ccb0(&var_c8, &var_80, U",", r9_11.b)
    int64_t rcx_36 = var_c8.q
    
    if (rcx_36 != 0)
        result = sub_140a74f90(rcx_36)
    
    int64_t rdi_8 = sx.q(var_78_1)
    int64_t* rbx_3 = var_80
    
    if (rdi_8.d s> 0)
        void* r12_3 = &rbx_3[rdi_8 * 2]
        
        if (rbx_3 != r12_3)
            do
                int32_t r10_4 = arg1[0xf].d
                int32_t rcx_37 = 0
                var_c8 = 0
                int32_t r8_18 = 0
                int32_t var_c4_7 = 1
                void* var_c0_4 = &arg1[0xc]
                int32_t var_b8_7 = 0xffffffff
                int64_t var_b4_4 = 0
                
                if (r10_4 != 0)
                    void* rax_73 = arg1[0xe]
                    void* r9_12 = &arg1[0xc]
                    
                    if (rax_73 != 0)
                        r9_12 = rax_73
                    
                    int32_t temp13_1
                    int32_t temp14_1
                    temp13_1:temp14_1 = sx.q(r10_4 - 1)
                    int32_t rdx_39 = *r9_12
                    
                    if (rdx_39 != 0)
                    label_14197b6b8:
                        int32_t rax_80 = neg.d(rdx_39) & rdx_39
                        uint64_t rflags_7
                        int32_t temp0_11
                        temp0_11, rflags_7 = _bit_scan_reverse(rax_80)
                        int32_t var_c4_8 = rax_80
                        int32_t rax_81
                        
                        if (rax_80 == 0)
                            rax_81 = 0x20
                        else
                            rax_81 = 0x1f - temp0_11
                        
                        var_b4_4.d = r8_18 - rax_81 + 0x1f
                        
                        if (r8_18 - rax_81 + 0x1f s> r10_4)
                            var_b4_4.d = r10_4
                    else
                        while (true)
                            int64_t rdx_40 = sx.q(rcx_37)
                            r8_18 += 0x20
                            rcx_37 += 1
                            var_b4_4:4.d = r8_18
                            var_c8 = rcx_37
                            
                            if (rdx_40.d s>= (temp14_1 + (temp13_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_39 = *(r9_12 + (rdx_40 << 2) + 4)
                            var_b8_7 = 0xffffffff
                            
                            if (rdx_39 != 0)
                                goto label_14197b6b8
                        
                        var_b4_4.d = r10_4
                
                int32_t rdx_41 = arg1[0xf].d
                zmm2 = var_b8_7.o
                double var_58_4[0x2] = zmm2
                int32_t r14_4 = 0xffffffff << (rdx_41.b & 0x1f)
                int128_t var_68_4 = var_c8.o
                int32_t r8_21 = rdx_41 s>> 5
                int32_t r9_14 = rdx_41 & 0xffffffe0
                int64_t var_88_4 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
                int32_t var_b8_8 = r14_4
                var_b4_4.d = rdx_41
                var_a8 = (&arg1[0xa]).o
                int128_t var_98_4 = var_68_4
                
                if (rdx_41 != r10_4)
                    void* rax_83 = arg1[0xe]
                    void* r11_4 = &arg1[0xc]
                    
                    if (rax_83 != 0)
                        r11_4 = rax_83
                    
                    int32_t temp15_1
                    int32_t temp16_1
                    temp15_1:temp16_1 = sx.q(r10_4 - 1)
                    int32_t rdx_45 = *(r11_4 + (sx.q(r8_21) << 2)) & r14_4
                    
                    if (rdx_45 != 0)
                    label_14197b792:
                        int32_t rax_90 = neg.d(rdx_45) & rdx_45
                        uint64_t rflags_8
                        int32_t temp0_13
                        temp0_13, rflags_8 = _bit_scan_reverse(rax_90)
                        int32_t rax_91
                        
                        if (rax_90 == 0)
                            rax_91 = 0x20
                        else
                            rax_91 = 0x1f - temp0_13
                        
                        var_b4_4.d = r9_14 - rax_91 + 0x1f
                        
                        if (r9_14 - rax_91 + 0x1f s> r10_4)
                            var_b4_4.d = r10_4
                    else
                        while (true)
                            int64_t rcx_42 = sx.q(r8_21)
                            r9_14 += 0x20
                            r8_21 += 1
                            
                            if (rcx_42.d s>= (temp16_1 + (temp15_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_45 = *(r11_4 + (rcx_42 << 2) + 4)
                            var_b8_8 = 0xffffffff
                            
                            if (rdx_45 != 0)
                                goto label_14197b792
                        
                        var_b4_4.d = r10_4
                
                while (true)
                    result = sx.q(var_98_4:0xc.d)
                    int64_t* rdx_46 = var_a8.q
                    
                    if (result.d == (var_b8_8.q u>> 0x20).d && var_98_4.q == &arg1[0xc]
                            && rdx_46 == &arg1[0xa])
                        break
                    
                    int16_t* rdx_47
                    
                    if (rbx_3[1].d == 0)
                        rdx_47 = &data_142d40450
                    else
                        rdx_47 = *rbx_3
                    
                    sub_140a23cf0(*rdx_46 + result * 0x28, rdx_47, 1, 0, 0xffffffff)
                    var_98_4:8.d &= not.d(var_a8:0xc.d)
                    sub_14059bdd0(&var_a8:8)
                
                rbx_3 = &rbx_3[2]
            while (rbx_3 != r12_3)
            
            rdi_8 = zx.q(var_78_1)
            rbx_3 = var_80
    
    if (rdi_8.d != 0)
        int32_t i
        
        do
            int64_t rcx_47 = *rbx_3
            
            if (rcx_47 != 0)
                result = sub_140a74f90(rcx_47)
            
            rbx_3 = &rbx_3[2]
            i = rdi_8.d
            rdi_8 = zx.q(rdi_8.d - 1)
        while (i != 1)
        rbx_3 = var_80
    
    if (rbx_3 != 0)
        return sub_140a74f90(rbx_3)

return result
