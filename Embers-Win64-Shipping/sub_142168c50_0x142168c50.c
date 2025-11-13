// 函数: sub_142168c50
// 地址: 0x142168c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(*arg2)

if (r9.d u>= 2 && arg1[1].d != *(arg1 + 0x34))
    void* rdx = arg1[8]
    void* r14_1 = &arg1[7]
    void* rax_2 = r14_1
    
    if (rdx != 0)
        rax_2 = rdx
    
    int32_t i = *(rax_2 + (((sx.q(arg1[9].d) - 1) & r9) << 2))
    
    if (i != 0xffffffff)
        int64_t rdx_1 = *arg1
        
        do
            int64_t i_1 = sx.q(i)
            int32_t* rcx_3 = i_1 * 0x38
            
            if (*(rcx_3 + rdx_1) == r9.d)
                if (i != 0xffffffff)
                    void* rdi_1 = i_1 * 0x38
                    void* rdi_2 = rdi_1 + rdx_1
                    
                    if (rdi_1 != neg.q(rdx_1) && rdi_2 != -8)
                        void* rax_3 = sub_140d3c6e0(rdi_2 + 8)
                        
                        if (rax_3 != 0)
                            return rax_3
                        
                        char rax_4 = *(rdi_2 + 0x28)
                        
                        if ((rax_4 & 8) == 0 && (rax_4 & 4) == 0)
                            int32_t rcx_5
                            rcx_5.b = *(rdi_2 + 0x18) == 0
                            
                            if ((rcx_5.b & sub_140b5b8a0(*(rdi_2 + 0x14), 0)) == 0)
                                int64_t r9_1 = sx.q(*(rdi_2 + 0x10))
                                void* rbx_2 = nullptr
                                
                                if (r9_1.d == 0)
                                label_142168dfd:
                                    int64_t var_88
                                    int64_t* rax_14 = sub_140b63b70(rdi_2 + 0x14, &var_88)
                                    int16_t* const r12_1 = &data_142d40450
                                    int16_t* r14_2
                                    
                                    if (rax_14[1].d == 0)
                                        r14_2 = &data_142d40450
                                    else
                                        r14_2 = *rax_14
                                    
                                    void* rax_16
                                    int128_t zmm6_1
                                    rax_16, zmm6_1 = sub_140d2ee50(sub_140d41340(), rbx_2, r14_2, 0)
                                    int64_t rcx_15 = var_88
                                    void* r14_3 = rax_16
                                    
                                    if (rcx_15 != 0)
                                        sub_140a74f90(rcx_15)
                                    
                                    void* r15_1
                                    
                                    if ((*arg2 & 1) == 0 || *(rdi_2 + 0x10) u> 0)
                                        r15_1.b = 0
                                    else
                                        r15_1.b = 1
                                    
                                    char arg_20 = sub_14216ba30(arg1)
                                    
                                    if (r14_3 != 0)
                                    label_1421690ea:
                                        
                                        if (r15_1.b == 0)
                                        label_1421691d7:
                                            int16_t* var_a8
                                            int32_t var_98
                                            
                                            if (*(rdi_2 + 0x1c) == 0)
                                            label_1421692af:
                                                
                                                if (r14_3 == 0)
                                                label_1421692fc:
                                                    int128_t var_48_1 = zmm6_1
                                                    sub_140d3a3a0(rdi_2 + 8, r14_3)
                                                    
                                                    if (arg_20 != 0 || data_143f4d268 == 0)
                                                        rbx_2.b = 0
                                                    else
                                                        rbx_2.b = 1
                                                    
                                                    zmm6_1 = zx.o(0)
                                                    int32_t* rax_63
                                                    
                                                    if (not(zmm6_1.q f== *(rdi_2 + 0x20))
                                                            && rbx_2.b == 0)
                                                        sub_140d3a3a0(&var_a8, r14_3)
                                                        rax_63 = sub_141f87aa0(&arg1[0xa], &arg_20, 
                                                            var_a8)
                                                    
                                                    if (zmm6_1.q f== *(rdi_2 + 0x20) || rbx_2.b != 0
                                                            || *rax_63 == 0xffffffff)
                                                        if (not(zmm6_1.q f>= *(rdi_2 + 0x20))
                                                                && rbx_2.b != 0)
                                                            *(rdi_2 + 0x20) = 0
                                                        
                                                        sub_140d3a3a0(&var_a8, r14_3)
                                                        sub_140a9e570(&arg1[0xa], &var_98)
                                                        int64_t* var_90
                                                        *var_90 = var_a8
                                                        var_90[1].d = *arg2
                                                        *(var_90 + 0xc) = 0xffffffff
                                                        int64_t rax_67 = *var_90
                                                        sub_141faf520(&arg1[0xa], &arg_20, 
                                                            (rax_67 u>> 0x20).d ^ rax_67.d, var_90, 
                                                            var_98, nullptr)
                                                    
                                                    sub_14217e5c0(arg1, *arg2, r14_3)
                                                    return r14_3
                                                
                                                rbx_2 = arg1[0x29]
                                                
                                                if (rbx_2 == 0 || *(rbx_2 + 0x140) == 0)
                                                    goto label_1421692fc
                                                
                                                void* rax_62 = sub_140d226f0(r14_3, sub_142527690())
                                                
                                                if (rax_62 == 0
                                                        || rax_62 == *(*(rbx_2 + 0x140) + 0x30)
                                                        || (*(rax_62 + 0x1f4) & 0x20) != 0)
                                                    goto label_1421692fc
                                            else
                                                rbx_2 = data_143f4d178
                                                int64_t rcx_44
                                                
                                                if (data_143de5480 == 0)
                                                    rcx_44 = 0
                                                else
                                                    rcx_44.b =
                                                        GetCurrentThreadId() != data_143de5470
                                                
                                                if (*(rbx_2 + (rcx_44 << 2)) != 0)
                                                    goto label_1421692af
                                                
                                                int32_t rax_60
                                                rax_60, zmm6_1 = sub_142168a70(arg1, r14_3)
                                                
                                                if (*(rdi_2 + 0x1c) == rax_60 || arg1[0x2a].b != 1)
                                                    goto label_1421692af
                                                
                                                var_a8 = nullptr
                                                int32_t var_a0_1 = 0
                                                sub_142168040(arg1, arg2, &var_a8)
                                                *(rdi_2 + 0x1c)
                                                
                                                if (var_a0_1 != 0)
                                                    r12_1 = var_a8
                                                
                                                int32_t var_c8_1 = rax_60
                                                sub_140a2e390(&var_98, 
                                                    GetObjectFromNetGUID: Network checksum mismatch. "
                                                "FullNetGUIDPath: %s, %u, %u", r12_1)
                                                int16_t* rcx_48 = var_a8
                                                
                                                if (rcx_48 != 0)
                                                    sub_140a74f90(rcx_48)
                                                
                                                *(rdi_2 + 0x28) |= 8
                                                sub_142161140(arg1[0x29], 0xa, &var_98)
                                                int64_t rcx_50 = var_98.q
                                                
                                                if (rcx_50 != 0)
                                                    sub_140a74f90(rcx_50)
                                        else
                                            void* rax_43 = sub_140cddea0()
                                            void* rdx_28 = *(r14_3 + 0x10)
                                            int64_t rax_44 = sx.q(*(rax_43 + 0x38))
                                            
                                            if (rax_44.d s> *(rdx_28 + 0x38)
                                                    || *(*(rdx_28 + 0x30) + (rax_44 << 3))
                                                    != rax_43 + 0x30)
                                                *(rdi_2 + 0x28) |= 8
                                            else
                                                uint8_t rax_46
                                                rax_46, zmm6_1 = sub_140ce0e10(r14_3, rdx_28.d)
                                                
                                                if (rax_46 != 0
                                                        || (*(r14_3 + 0x50) & 0x100010) != 0)
                                                    goto label_1421691d7
                                                
                                                char rax_47
                                                int64_t r9_3
                                                rax_47, r9_3 = sub_14217bbb0(arg1)
                                                void* const rax_54
                                                
                                                if (rax_47 != 0)
                                                    int32_t rax_48 = *(r14_3 + 0xc)
                                                    
                                                    if (rax_48 s>= data_143e1d9b4)
                                                        rax_54 = nullptr
                                                    else
                                                        int16_t temp4_1
                                                        int32_t temp5_1
                                                        temp4_1:temp5_1 = sx.q(rax_48)
                                                        uint32_t rdx_30 = zx.d(temp4_1)
                                                        int32_t rax_50 = temp5_1 + rdx_30
                                                        rax_54 = *(data_143e1d9a0
                                                            + (sx.q(rax_50 s>> 0x10) << 3))
                                                            + sx.q(zx.d(rax_50.w) - rdx_30) * 0x18
                                                
                                                if (rax_47 == 0
                                                        || ((*(rax_54 + 8) u>> 0x1b).b & 1) == 0)
                                                    int64_t var_58
                                                    int64_t* rax_57 =
                                                        sub_140b63b70(rdi_2 + 0x14, &var_58)
                                                    int16_t* rdx_33
                                                    
                                                    if (rax_57[1].d == 0)
                                                        rdx_33 = &data_142d40450
                                                    else
                                                        rdx_33 = *rax_57
                                                    
                                                    void* rax_58
                                                    rax_58, zmm6_1 = sub_140d23fd0(nullptr, rdx_33, 
                                                        0, nullptr, 0)
                                                    int64_t rcx_43 = var_58
                                                    r14_3 = rax_58
                                                    
                                                    if (rcx_43 != 0)
                                                        sub_140a74f90(rcx_43)
                                                    
                                                    goto label_1421691d7
                                                
                                                r9_3.b = 1
                                            labelid_d:
                                                sub_14217c730(arg1, rdi_2 + 8, *arg2)
                                    else if ((*(rdi_2 + 0x28) & 1) != 0)
                                    label_1421690d4:
                                        char rax_42 = *(rdi_2 + 0x28)
                                        
                                        if ((rax_42 & 2) == 0)
                                            *(rdi_2 + 0x28) = rax_42 | 8
                                    else
                                        if (r15_1.b == 0)
                                            int64_t var_68
                                            int64_t* rax_39 = sub_140b63b70(rdi_2 + 0x14, &var_68)
                                            int16_t* r14_7
                                            
                                            if (rax_39[1].d == 0)
                                                r14_7 = &data_142d40450
                                            else
                                                r14_7 = *rax_39
                                            
                                            void* rax_41
                                            rax_41, zmm6_1 = sub_140d2f6f0(sub_140d41340(), rbx_2, 
                                                r14_7, 0, 2, 0, 1, 0)
                                            int64_t rcx_33 = var_68
                                            r14_3 = rax_41
                                            
                                            if (rcx_33 != 0)
                                                sub_140a74f90(rcx_33)
                                            
                                            sub_14217bbb0(arg1)
                                        label_1421690cf:
                                            
                                            if (r14_3 != 0)
                                                goto label_1421690ea
                                            
                                            goto label_1421690d4
                                        
                                        if (sub_14217bbb0(arg1) == 0)
                                            int64_t var_78
                                            int64_t* rax_37 = sub_140b63b70(rdi_2 + 0x14, &var_78)
                                            int16_t* rdx_25
                                            
                                            if (rax_37[1].d == 0)
                                                rdx_25 = &data_142d40450
                                            else
                                                rdx_25 = *rax_37
                                            
                                            void* rax_38
                                            rax_38, zmm6_1 =
                                                sub_140d23fd0(nullptr, rdx_25, 0, nullptr, 0)
                                            int64_t rcx_30 = var_78
                                            r14_3 = rax_38
                                            
                                            if (rcx_30 != 0)
                                                sub_140a74f90(rcx_30)
                                            
                                            goto label_1421690cf
                                        
                                        int64_t rbx_3 = *(rdi_2 + 0x14)
                                        arg_20.q = rbx_3
                                        
                                        if (arg1[0x55].d == *(arg1 + 0x2d4))
                                        label_142168f06:
                                            sub_14217c730(arg1, rdi_2 + 8, *arg2)
                                        else
                                            int32_t rax_22 = sub_140b5ead0(rbx_3.d) + arg4
                                            void* r8_3 = &arg1[0x5b]
                                            void* rcx_19 = *(r8_3 + 8)
                                            
                                            if (rcx_19 != 0)
                                                r8_3 = rcx_19
                                            
                                            int32_t rax_24 = *(r8_3
                                                + (((sx.q(arg1[0x5d].d) - 1) & sx.q(rax_22)) << 2))
                                            
                                            if (rax_24 == 0xffffffff)
                                            label_142168f06_1:
                                                sub_14217c730(arg1, rdi_2 + 8, *arg2)
                                            else
                                                int64_t rdx_14 = arg1[0x54]
                                                
                                                while (true)
                                                    int64_t rcx_21 = sx.q(rax_24) << 5
                                                    
                                                    if (*(rcx_21 + rdx_14) == rbx_3)
                                                        break
                                                    
                                                    rax_24 = *(rcx_21 + rdx_14 + 0x18)
                                                    
                                                    if (rax_24 == 0xffffffff)
                                                        goto label_142168f06_2
                                                
                                                if (rax_24 == 0xffffffff)
                                                label_142168f06_2:
                                                    sub_14217c730(arg1, rdi_2 + 8, *arg2)
                                                else
                                                    int32_t* rbx_4 = *(rdi_2 + 0x14)
                                                    int32_t rdi_4 = *arg2
                                                    int64_t* r14_6
                                                    
                                                    if (arg1[0x55].d == *(arg1 + 0x2d4))
                                                    label_142168f8f:
                                                        r14_6 = nullptr
                                                    else
                                                        int32_t rax_29 =
                                                            sub_140b5ead0(rbx_4.d) + rbx_4:4.d
                                                        void* r8_5 = &arg1[0x5b]
                                                        void* rcx_24 = *(r8_5 + 8)
                                                        
                                                        if (rcx_24 != 0)
                                                            r8_5 = rcx_24
                                                        
                                                        int32_t rax_31 = *(r8_5 + (((
                                                            sx.q(arg1[0x5d].d) - 1) & sx.q(rax_29))
                                                            << 2))
                                                        
                                                        if (rax_31 == 0xffffffff)
                                                        label_142168f8f_1:
                                                            r14_6 = nullptr
                                                        else
                                                            while (true)
                                                                r14_6 = (sx.q(rax_31) << 5) + arg1[0x54]
                                                                
                                                                if (*r14_6 == rbx_4)
                                                                    break
                                                                
                                                                rax_31 = r14_6[3].d
                                                                
                                                                if (rax_31 == 0xffffffff)
                                                                    goto label_142168f8f_2
                                                            
                                                            if (rax_31 == 0xffffffff)
                                                            label_142168f8f_2:
                                                                r14_6 = nullptr
                                                    
                                                    if (r14_6[1].d != rdi_4)
                                                        int32_t* rbx_5 = *(rdi_2 + 0x14)
                                                        void* const rcx_28
                                                        
                                                        if (arg1[0x2c].d == *(arg1 + 0x18c))
                                                            rcx_28 = nullptr
                                                        else
                                                            int32_t rax_34 =
                                                                sub_140b5ead0(rbx_5.d) + rbx_5:4.d
                                                            void* r8_6 = &arg1[0x32]
                                                            void* rcx_26 = *(r8_6 + 8)
                                                            
                                                            if (rcx_26 != 0)
                                                                r8_6 = rcx_26
                                                            
                                                            int32_t rax_36 = *(r8_6 + (((
                                                                sx.q(arg1[0x34].d) - 1) & sx.q(rax_34))
                                                                << 2))
                                                            
                                                            if (rax_36 == 0xffffffff)
                                                                rcx_28 = nullptr
                                                            else
                                                                int64_t r8_7 = arg1[0x2b]
                                                                
                                                                while (true)
                                                                    int64_t rdx_23 = sx.q(rax_36) * 5
                                                                    rcx_28 = r8_7 + (rdx_23 << 2)
                                                                    
                                                                    if (*(r8_7 + (rdx_23 << 2)) == rbx_5)
                                                                        break
                                                                    
                                                                    rax_36 = *(rcx_28 + 0xc)
                                                                    
                                                                    if (rax_36 == 0xffffffff)
                                                                        *8 = rdi_4
                                                                        r14_6[1].d = rdi_4
                                                                        goto label_142168cc6
                                                                
                                                                if (rax_36 == 0xffffffff)
                                                                    rcx_28 = nullptr
                                                        
                                                        *(rcx_28 + 8) = rdi_4
                                                        r14_6[1].d = rdi_4
                                else if (arg1[1].d == *(arg1 + 0x34))
                                label_142168d86:
                                    
                                    if ((*(rdi_2 + 0x10) & 1) != 0)
                                        *(rdi_2 + 0x28) |= 8
                                else
                                    void* rcx_6 = *(r14_1 + 8)
                                    
                                    if (rcx_6 != 0)
                                        r14_1 = rcx_6
                                    
                                    int32_t rax_7 = *(r14_1 + (((sx.q(arg1[9].d) - 1) & r9_1) << 2))
                                    
                                    if (rax_7 == 0xffffffff)
                                        goto label_142168d86
                                    
                                    int64_t rdx_5 = *arg1
                                    int64_t r8
                                    
                                    while (true)
                                        r8 = sx.q(rax_7)
                                        int32_t* rcx_7 = r8 * 0x38
                                        
                                        if (*(rcx_7 + rdx_5) == r9_1.d)
                                            break
                                        
                                        rax_7 = *(rcx_7 + rdx_5 + 0x30)
                                        
                                        if (rax_7 == 0xffffffff)
                                            goto label_142168d86
                                    
                                    if (rax_7 == 0xffffffff)
                                        goto label_142168d86
                                    
                                    void* rax_8 = r8 * 0x38
                                    void* rax_9 = rax_8 + rdx_5
                                    
                                    if (rax_8 == neg.q(rdx_5) || rax_9 == -8)
                                        goto label_142168d86
                                    
                                    if ((*(rax_9 + 0x28) & 8) != 0)
                                        *(rdi_2 + 0x28) |= 8
                                    else
                                        void* rax_11
                                        int32_t rdx_7
                                        rax_11, rdx_7 =
                                            sub_142168c50(arg1, rdi_2 + 0x10, zx.q(arg3))
                                        rbx_2 = rax_11
                                        
                                        if (rax_11 != 0)
                                            if (sub_140ce0e10(sub_140d21d80(rbx_2), rdx_7) == 0)
                                                sub_140d21d80(rbx_2)
                                            
                                            goto label_142168dfd
                                        
                                        sub_14217bcd0(arg1, rdi_2 + 0x10)
                
                break
            
            i = *(rcx_3 + rdx_1 + 0x30)
        while (i != 0xffffffff)

label_142168cc6:
return nullptr
