// 函数: sub_14036f750
// 地址: 0x14036f750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx
uint64_t var_40 = rbx
int64_t result = 0xfffffffe

if (arg1 != 0)
    int32_t r14_1 = arg2.d
    
    if (arg2.d u<= 5)
        int64_t** rsi_1 = arg1[5]
        
        if (rsi_1 != 0)
            uint64_t rcx
            
            if (arg1[2] != 0 && (*arg1 != 0 || arg1[1].d == 0))
                rcx = zx.q(rsi_1[1].d)
            
            if (arg1[2] != 0 && (*arg1 != 0 || arg1[1].d == 0) && (r14_1 == 4 || rcx.d != 0x29a))
                if (arg1[3].d == 0)
                    arg1[4] = "buffer error"
                    return 0xfffffffb
                
                *rsi_1 = arg1
                int32_t r12_1 = rsi_1[8].d
                rsi_1[8].d = r14_1
                
                if (rcx.d != 0x2a)
                label_14036faaa:
                    
                    if (rcx.d == 0x45)
                    label_14036fab0:
                        rcx = rsi_1[6]
                        
                        if (*(rcx + 0x10) == 0)
                            goto label_14036fbd8
                        
                        int32_t r8_2 = rsi_1[5].d
                        arg2 = zx.q(rsi_1[7].d)
                        
                        if (arg2.d u< zx.d(*(rcx + 0x18)))
                            int32_t rax_30 = r8_2
                            
                            if (r8_2 != rsi_1[3].d)
                                goto label_14036fb73
                            
                            while (true)
                                if (r8_2 u> rax_30 && *(rcx + 0x3c) != 0)
                                    *(arg1 + 0x4c) = sub_140374810(*(arg1 + 0x4c), 
                                        zx.q(rax_30) + rsi_1[2], r8_2 - rax_30)
                                
                                rbx = arg1[5]
                                sub_140374f60(rbx)
                                int32_t rbp_16 = *(rbx + 0x28)
                                int32_t rax_32 = arg1[3].d
                                
                                if (rbp_16 u> rax_32)
                                    rbp_16 = rax_32
                                
                                if (rbp_16 != 0)
                                    uint64_t rdi_2 = zx.q(rbp_16)
                                    memcpy(arg1[2], *(rbx + 0x20), rdi_2.d)
                                    arg1[2] += rdi_2
                                    *(rbx + 0x20) += rdi_2
                                    *(arg1 + 0x1c) += rbp_16
                                    arg1[3].d -= rbp_16
                                    int32_t temp5_1 = *(rbx + 0x28)
                                    *(rbx + 0x28) -= rbp_16
                                    
                                    if (temp5_1 == rbp_16)
                                        *(rbx + 0x20) = *(rbx + 0x10)
                                
                                r8_2 = rsi_1[5].d
                                rcx = rsi_1[6]
                                
                                if (r8_2 == rsi_1[3].d)
                                    break
                                
                                arg2 = zx.q(rsi_1[7].d)
                                rax_30 = r8_2
                            label_14036fb73:
                                rsi_1[5].d = r8_2 + 1
                                *(rsi_1[2] + zx.q(r8_2)) = *(*(rcx + 0x10) + zx.q(arg2.d))
                                arg2 = zx.q(rsi_1[7].d + 1)
                                rsi_1[7].d = arg2.d
                                rcx = rsi_1[6]
                                
                                if (arg2.d u>= zx.d(*(rcx + 0x18)))
                                    r8_2 = rax_30
                                    goto label_14036fba0
                                
                                r8_2 = rsi_1[5].d
                                
                                if (r8_2 != rsi_1[3].d)
                                    goto label_14036fb73
                        
                    label_14036fba0:
                        
                        if (*(rcx + 0x3c) != 0)
                            int32_t rax_34 = rsi_1[5].d
                            
                            if (rax_34 u> r8_2)
                                int32_t rax_36
                                rax_36, arg2 = sub_140374810(*(arg1 + 0x4c), zx.q(r8_2) + rsi_1[2], 
                                    rax_34 - r8_2)
                                *(arg1 + 0x4c) = rax_36
                                rcx = rsi_1[6]
                        
                        if (rsi_1[7].d == *(rcx + 0x18))
                            rsi_1[7].d = 0
                        label_14036fbd8:
                            rsi_1[1].d = 0x49
                            
                            if (*(rcx + 0x20) != 0)
                                goto label_14036fc06
                            
                            goto label_14036fd25
                        
                        rcx = zx.q(rsi_1[1].d)
                    
                    if (rcx.d != 0x49)
                        goto label_14036fd14
                    
                    if (rsi_1[6][4] == 0)
                        goto label_14036fd25
                    
                label_14036fc06:
                    int32_t r8_8 = rsi_1[5].d
                    int32_t rax_38 = r8_8
                    
                    if (r8_8 != rsi_1[3].d)
                        goto label_14036fcae
                    
                    int32_t rdi_4
                    
                    while (true)
                        if (r8_8 u> rax_38 && *(rsi_1[6] + 0x3c) != 0)
                            *(arg1 + 0x4c) = sub_140374810(*(arg1 + 0x4c), zx.q(rax_38) + rsi_1[2], 
                                r8_8 - rax_38)
                        
                        rbx = arg1[5]
                        sub_140374f60(rbx)
                        int32_t rbp_20 = *(rbx + 0x28)
                        int32_t rax_40 = arg1[3].d
                        
                        if (rbp_20 u> rax_40)
                            rbp_20 = rax_40
                        
                        if (rbp_20 != 0)
                            uint64_t rdi_3 = zx.q(rbp_20)
                            rcx, arg2 = memcpy(arg1[2], *(rbx + 0x20), rdi_3.d)
                            arg1[2] += rdi_3
                            *(rbx + 0x20) += rdi_3
                            *(arg1 + 0x1c) += rbp_20
                            arg1[3].d -= rbp_20
                            int32_t temp7_1 = *(rbx + 0x28)
                            *(rbx + 0x28) -= rbp_20
                            
                            if (temp7_1 == rbp_20)
                                *(rbx + 0x20) = *(rbx + 0x10)
                        
                        r8_8 = rsi_1[5].d
                        
                        if (r8_8 == rsi_1[3].d)
                            rdi_4 = 1
                            break
                        
                        rax_38 = r8_8
                    label_14036fcae:
                        uint64_t rbp_21 = zx.q(rsi_1[7].d)
                        rsi_1[7].d = (rbp_21 + 1).d
                        arg2 = zx.q(*(rsi_1[6][4] + rbp_21))
                        rsi_1[5].d = r8_8 + 1
                        *(rsi_1[2] + zx.q(r8_8)) = arg2.b
                        
                        if (arg2.b == 0)
                            rdi_4 = 0
                            r8_8 = rax_38
                            goto label_14036fce8
                        
                        r8_8 = rsi_1[5].d
                        
                        if (r8_8 != rsi_1[3].d)
                            goto label_14036fcae
                    
                label_14036fce8:
                    
                    if (*(rsi_1[6] + 0x3c) != 0)
                        int32_t rax_43 = rsi_1[5].d
                        
                        if (rax_43 u> r8_8)
                            int32_t rax_45
                            rax_45, rcx, arg2 =
                                sub_140374810(*(arg1 + 0x4c), zx.q(r8_8) + rsi_1[2], rax_43 - r8_8)
                            *(arg1 + 0x4c) = rax_45
                    
                    if (rdi_4 != 0)
                        rcx = zx.q(rsi_1[1].d)
                    label_14036fd14:
                        
                        if (rcx.d == 0x5b)
                            goto label_14036fd30
                        
                        goto label_14036fe44
                    
                    rsi_1[7].d = 0
                label_14036fd25:
                    rsi_1[1].d = 0x5b
                label_14036fd30:
                    
                    if (rsi_1[6][6] == 0)
                    label_14036fe4e:
                        rsi_1[1].d = 0x67
                    label_14036fe59:
                        
                        if (*(rsi_1[6] + 0x3c) == 0)
                            rsi_1[1].d = 0x71
                        else
                            if (rsi_1[5].d + 2 u> rsi_1[3].d)
                                rbx = arg1[5]
                                sub_140374f60(rbx)
                                int32_t rbp_28 = *(rbx + 0x28)
                                int32_t rax_58 = arg1[3].d
                                
                                if (rbp_28 u> rax_58)
                                    rbp_28 = rax_58
                                
                                if (rbp_28 != 0)
                                    uint64_t rdi_7 = zx.q(rbp_28)
                                    memcpy(arg1[2], *(rbx + 0x20), rdi_7.d)
                                    arg1[2] += rdi_7
                                    *(rbx + 0x20) += rdi_7
                                    *(arg1 + 0x1c) += rbp_28
                                    arg1[3].d -= rbp_28
                                    int32_t temp9_1 = *(rbx + 0x28)
                                    *(rbx + 0x28) -= rbp_28
                                    
                                    if (temp9_1 == rbp_28)
                                        *(rbx + 0x20) = *(rbx + 0x10)
                            
                            uint64_t rax_60 = zx.q(rsi_1[5].d)
                            
                            if ((rax_60 + 2).d u<= rsi_1[3].d)
                                rcx.b = *(arg1 + 0x4c)
                                rsi_1[5].d = (rax_60 + 1).d
                                *(rsi_1[2] + rax_60) = rcx.b
                                rax_60.b = *(arg1 + 0x4d)
                                uint64_t rdx_49 = zx.q(rsi_1[5].d)
                                rsi_1[5].d = (rdx_49 + 1).d
                                *(rsi_1[2] + rdx_49) = rax_60.b
                                int32_t rax_61
                                rax_61, rcx, arg2 = sub_140374810(0, nullptr, 0)
                                *(arg1 + 0x4c) = rax_61
                                rsi_1[1].d = 0x71
                    else
                        int32_t r8_10 = rsi_1[5].d
                        int32_t rax_47 = r8_10
                        
                        if (r8_10 != rsi_1[3].d)
                            goto label_14036fdde
                        
                        int32_t rdi_6
                        
                        while (true)
                            if (r8_10 u> rax_47 && *(rsi_1[6] + 0x3c) != 0)
                                *(arg1 + 0x4c) = sub_140374810(*(arg1 + 0x4c), 
                                    zx.q(rax_47) + rsi_1[2], r8_10 - rax_47)
                            
                            rbx = arg1[5]
                            sub_140374f60(rbx)
                            int32_t rbp_24 = *(rbx + 0x28)
                            int32_t rax_49 = arg1[3].d
                            
                            if (rbp_24 u> rax_49)
                                rbp_24 = rax_49
                            
                            if (rbp_24 != 0)
                                uint64_t rdi_5 = zx.q(rbp_24)
                                rcx, arg2 = memcpy(arg1[2], *(rbx + 0x20), rdi_5.d)
                                arg1[2] += rdi_5
                                *(rbx + 0x20) += rdi_5
                                *(arg1 + 0x1c) += rbp_24
                                arg1[3].d -= rbp_24
                                int32_t temp10_1 = *(rbx + 0x28)
                                *(rbx + 0x28) -= rbp_24
                                
                                if (temp10_1 == rbp_24)
                                    *(rbx + 0x20) = *(rbx + 0x10)
                            
                            r8_10 = rsi_1[5].d
                            
                            if (r8_10 == rsi_1[3].d)
                                rdi_6 = 1
                                break
                            
                            rax_47 = r8_10
                        label_14036fdde:
                            uint64_t rbp_25 = zx.q(rsi_1[7].d)
                            rsi_1[7].d = (rbp_25 + 1).d
                            arg2 = zx.q(*(rsi_1[6][6] + rbp_25))
                            rsi_1[5].d = r8_10 + 1
                            *(rsi_1[2] + zx.q(r8_10)) = arg2.b
                            
                            if (arg2.b == 0)
                                rdi_6 = 0
                                r8_10 = rax_47
                                goto label_14036fe18
                            
                            r8_10 = rsi_1[5].d
                            
                            if (r8_10 != rsi_1[3].d)
                                goto label_14036fdde
                        
                    label_14036fe18:
                        
                        if (*(rsi_1[6] + 0x3c) != 0)
                            int32_t rax_52 = rsi_1[5].d
                            
                            if (rax_52 u> r8_10)
                                int32_t rax_54
                                rax_54, rcx, arg2 = sub_140374810(*(arg1 + 0x4c), 
                                    zx.q(r8_10) + rsi_1[2], rax_52 - r8_10)
                                *(arg1 + 0x4c) = rax_54
                        
                        if (rdi_6 == 0)
                            goto label_14036fe4e
                        
                        rcx = zx.q(rsi_1[1].d)
                    label_14036fe44:
                        
                        if (rcx.d == 0x67)
                            goto label_14036fe59
                else
                    if (*(rsi_1 + 0x2c) != 2)
                        int32_t rdx_11 = 0
                        
                        if (rsi_1[0x16].d s<= 1)
                            int32_t rcx_15 = *(rsi_1 + 0xac)
                            
                            if (rcx_15 s>= 2)
                                rdx_11 = 0x40
                                
                                if (rcx_15 s>= 6)
                                    rcx_15.b = rcx_15 != 6
                                    rdx_11 = (zx.d(rcx_15.b) | 2) << 6
                        
                        int32_t rdx_14 = rdx_11 | ((rsi_1[9].d << 0xc) - 0x7800)
                        uint64_t rcx_17 = zx.q(rdx_14) | 0x20
                        
                        if (*(rsi_1 + 0x94) == 0)
                            rcx_17 = zx.q(rdx_14)
                        
                        uint32_t rdx_16 = ((rcx_17 * 0x8421085) u>> 0x20).d
                        uint32_t rax_20 = (((rcx_17.d - rdx_16) u>> 1) + rdx_16) u>> 4
                        rsi_1[1].d = 0x71
                        uint64_t rdi_1 = zx.q(rsi_1[5].d)
                        rsi_1[5].d = (rdi_1 + 1).d
                        *(rsi_1[2] + rdi_1) = rcx_17:1.b
                        uint64_t rdx_20 = zx.q(rsi_1[5].d)
                        rsi_1[5].d = (rdx_20 + 1).d
                        *(rsi_1[2] + rdx_20) =
                            ((rax_20.b - (rax_20 << 5).b + rcx_17.b) | rcx_17.b) ^ 0x1f
                        
                        if (*(rsi_1 + 0x94) != 0)
                            int32_t rax_24 = *(arg1 + 0x4c)
                            uint64_t rbp_12 = zx.q(rsi_1[5].d)
                            rsi_1[5].d = (rbp_12 + 1).d
                            *(rsi_1[2] + rbp_12) = (rax_24 u>> 0x18).b
                            uint64_t rdx_22 = zx.q(rsi_1[5].d)
                            rsi_1[5].d = (rdx_22 + 1).d
                            *(rsi_1[2] + rdx_22) = (rax_24 u>> 0x10).b
                            int16_t rax_27 = (*(arg1 + 0x4c)).w
                            uint64_t rdx_23 = zx.q(rsi_1[5].d)
                            rsi_1[5].d = (rdx_23 + 1).d
                            *(rsi_1[2] + rdx_23) = rax_27:1.b
                            uint64_t rdx_24 = zx.q(rsi_1[5].d)
                            rsi_1[5].d = (rdx_24 + 1).d
                            *(rsi_1[2] + rdx_24) = rax_27.b
                        
                        int32_t rax_28
                        rax_28, arg2 = sub_140374410(0, nullptr, 0)
                        *(arg1 + 0x4c) = rax_28
                        rcx = zx.q(rsi_1[1].d)
                        goto label_14036faaa
                    
                    *(arg1 + 0x4c) = sub_140374810(0, nullptr, 0)
                    uint64_t rcx_1 = zx.q(rsi_1[5].d)
                    rsi_1[5].d = (rcx_1 + 1).d
                    *(rsi_1[2] + rcx_1) = 0x1f
                    uint64_t rcx_2 = zx.q(rsi_1[5].d)
                    rsi_1[5].d = (rcx_2 + 1).d
                    *(rsi_1[2] + rcx_2) = 0x8b
                    uint64_t rcx_3 = zx.q(rsi_1[5].d)
                    rsi_1[5].d = (rcx_3 + 1).d
                    *(rsi_1[2] + rcx_3) = 8
                    int32_t* rax_4 = rsi_1[6]
                    
                    if (rax_4 != 0)
                        rcx_3.b = *rax_4 != 0
                        int32_t rdx_2
                        rdx_2.b = rax_4[0xf] != 0
                        rdx_2.b *= 2
                        rdx_2.b |= rcx_3.b
                        rcx_3.b = *(rax_4 + 0x10) != 0
                        rcx_3.b <<= 2
                        rbx.b = *(rax_4 + 0x20) != 0
                        rbx.b <<= 3
                        rbx.b |= rcx_3.b
                        rbx.b |= rdx_2.b
                        rax_4.b = *(rax_4 + 0x30) != 0
                        rax_4.b <<= 4
                        rax_4.b |= rbx.b
                        uint64_t rdx_3 = zx.q(rsi_1[5].d)
                        rsi_1[5].d = (rdx_3 + 1).d
                        rsi_1[2][rdx_3] = rax_4.b
                        void* rax_5
                        rax_5.b = *(rsi_1[6] + 4)
                        uint64_t rdx_4 = zx.q(rsi_1[5].d)
                        rsi_1[5].d = (rdx_4 + 1).d
                        rsi_1[2][rdx_4] = rax_5.b
                        void* rax_6
                        rax_6.b = *(rsi_1[6] + 5)
                        uint64_t rdx_5 = zx.q(rsi_1[5].d)
                        rsi_1[5].d = (rdx_5 + 1).d
                        rsi_1[2][rdx_5] = rax_6.b
                        void* rax_7
                        rax_7.b = *(rsi_1[6] + 6)
                        uint64_t rdx_6 = zx.q(rsi_1[5].d)
                        rsi_1[5].d = (rdx_6 + 1).d
                        rsi_1[2][rdx_6] = rax_7.b
                        uint64_t rax_8
                        rax_8.b = *(rsi_1[6] + 7)
                        uint64_t rdx_7 = zx.q(rsi_1[5].d)
                        rsi_1[5].d = (rdx_7 + 1).d
                        *(rsi_1[2] + rdx_7) = rax_8.b
                        int32_t rcx_9 = *(rsi_1 + 0xac)
                        rax_8.b = 2
                        
                        if (rcx_9 != 9)
                            rdx_7.b = rsi_1[0x16].d s> 1
                            rax_8.b = 4
                            
                            if (rcx_9 s>= 2)
                                rdx_7.b <<= 2
                                rax_8 = zx.q(rdx_7.d)
                        
                        uint64_t rdx_8 = zx.q(rsi_1[5].d)
                        rsi_1[5].d = (rdx_8 + 1).d
                        rsi_1[2][rdx_8] = rax_8.b
                        void* rax_9
                        rax_9.b = *(rsi_1[6] + 0xc)
                        arg2 = zx.q(rsi_1[5].d)
                        rsi_1[5].d = (arg2 + 1).d
                        rsi_1[2][arg2] = rax_9.b
                        void* rax_10 = rsi_1[6]
                        
                        if (*(rax_10 + 0x10) != 0)
                            rax_10.b = *(rax_10 + 0x18)
                            uint64_t rdx_9 = zx.q(rsi_1[5].d)
                            rsi_1[5].d = (rdx_9 + 1).d
                            rsi_1[2][rdx_9] = rax_10.b
                            void* rax_11
                            rax_11.b = *(rsi_1[6] + 0x19)
                            arg2 = zx.q(rsi_1[5].d)
                            rsi_1[5].d = (arg2 + 1).d
                            *(rsi_1[2] + arg2) = rax_11.b
                            rax_10 = rsi_1[6]
                        
                        if (*(rax_10 + 0x3c) != 0)
                            int32_t rax_12
                            rax_12, arg2 = sub_140374810(*(arg1 + 0x4c), rsi_1[2], rsi_1[5].d)
                            *(arg1 + 0x4c) = rax_12
                        
                        rsi_1[7].d = 0
                        rsi_1[1].d = 0x45
                        goto label_14036fab0
                    
                    uint64_t rcx_43 = zx.q(rsi_1[5].d)
                    rsi_1[5].d = (rcx_43 + 1).d
                    *(rsi_1[2] + rcx_43) = 0
                    uint64_t rcx_44 = zx.q(rsi_1[5].d)
                    rsi_1[5].d = (rcx_44 + 1).d
                    *(rsi_1[2] + rcx_44) = 0
                    uint64_t rcx_45 = zx.q(rsi_1[5].d)
                    rsi_1[5].d = (rcx_45 + 1).d
                    *(rsi_1[2] + rcx_45) = 0
                    uint64_t rcx_46 = zx.q(rsi_1[5].d)
                    rsi_1[5].d = (rcx_46 + 1).d
                    *(rsi_1[2] + rcx_46) = 0
                    uint64_t rcx_47 = zx.q(rsi_1[5].d)
                    rsi_1[5].d = (rcx_47 + 1).d
                    *(rsi_1[2] + rcx_47) = 0
                    int32_t rcx_48 = *(rsi_1 + 0xac)
                    uint64_t rax_66
                    rax_66.b = 2
                    
                    if (rcx_48 != 9)
                        int32_t rdx_54
                        rdx_54.b = rsi_1[0x16].d s> 1
                        rax_66.b = 4
                        
                        if (rcx_48 s>= 2)
                            rdx_54.b <<= 2
                            rax_66 = zx.q(rdx_54)
                    
                    uint64_t rdx_55 = zx.q(rsi_1[5].d)
                    rsi_1[5].d = (rdx_55 + 1).d
                    *(rsi_1[2] + rdx_55) = rax_66.b
                    rcx = zx.q(rsi_1[5].d)
                    rsi_1[5].d = (rcx + 1).d
                    *(rsi_1[2] + rcx) = 0xb
                    rsi_1[1].d = 0x71
                
                if (rsi_1[5].d != 0)
                    void* rbx_2 = arg1[5]
                    sub_140374f60(rbx_2)
                    int32_t rbp_32 = *(rbx_2 + 0x28)
                    int32_t rax_68 = arg1[3].d
                    
                    if (rbp_32 u> rax_68)
                        rbp_32 = rax_68
                    
                    if (rbp_32 != 0)
                        uint64_t rdi_8 = zx.q(rbp_32)
                        memcpy(arg1[2], *(rbx_2 + 0x20), rdi_8.d)
                        arg1[2] += rdi_8
                        *(rbx_2 + 0x20) += rdi_8
                        *(arg1 + 0x1c) += rbp_32
                        arg1[3].d -= rbp_32
                        int32_t temp8_1 = *(rbx_2 + 0x28)
                        *(rbx_2 + 0x28) -= rbp_32
                        
                        if (temp8_1 == rbp_32)
                            *(rbx_2 + 0x20) = *(rbx_2 + 0x10)
                        
                        rax_68 = arg1[3].d
                    
                    if (rax_68 == 0)
                        rsi_1[8].d = 0xffffffff
                        return 0
                else if (arg1[1].d == 0)
                    rbx.b = r14_1 s> 4
                    rcx.b = r12_1 s> 4
                    
                    if (r14_1 != 4)
                        arg2.b = rbx.b
                        int64_t rax_80
                        rax_80.b = rcx.b
                        
                        if (r14_1 * 2 - (arg2 * 9).d s<= r12_1 * 2 - (rax_80 * 9).d)
                            arg1[4] = "buffer error"
                            return 0xfffffffb
                
                int32_t rax_70 = rsi_1[1].d
                int32_t rcx_52 = arg1[1].d
                
                if (rax_70 == 0x29a)
                    if (rcx_52 == 0)
                        goto label_140370035
                    
                    arg1[4] = "buffer error"
                    return 0xfffffffb
                
                if (rcx_52 != 0)
                label_140370053:
                    int32_t rax_72 = rsi_1[0x16].d
                    
                    if (rax_72 == 3)
                        while (true)
                            int32_t rax_82 = *(rsi_1 + 0x9c)
                            uint64_t rcx_62
                            
                            if (rax_82 u< 0x103)
                                sub_14036f140(rsi_1)
                                rax_82 = *(rsi_1 + 0x9c)
                                
                                if (r14_1 == 0 && rax_82 u< 0x103)
                                    goto label_1403705f0
                                
                                if (rax_82 == 0)
                                    break
                                
                                rsi_1[0x11].d = 0
                                
                                if (rax_82 u> 2)
                                    goto label_140370218
                                
                                rcx_62 = zx.q(*(rsi_1 + 0x94))
                                goto label_1403702c3
                            
                            rsi_1[0x11].d = 0
                        label_140370218:
                            rcx_62 = zx.q(*(rsi_1 + 0x94))
                            int32_t r8_22
                            
                            if (rcx_62 == 0)
                                rcx_62 = 0
                            label_1403702c3:
                                uint64_t rax_84 = zx.q(*(rsi_1[0xa] + zx.q(rcx_62.d)))
                                *(rsi_1[0x2df] + (zx.q(*(rsi_1 + 0x16f4)) << 1)) = 0
                                int64_t rcx_65 = rsi_1[0x2dd]
                                arg2 = zx.q(*(rsi_1 + 0x16f4))
                                *(rsi_1 + 0x16f4) = (arg2 + 1).d
                                *(rcx_65 + arg2) = rax_84.b
                                *(rsi_1 + (rax_84 << 2) + 0xbc) += 1
                                int32_t rax_85 = *(rsi_1 + 0x16f4)
                                int32_t rcx_67 = rsi_1[0x2de].d - 1
                                *(rsi_1 + 0x9c) -= 1
                                r8_22 = *(rsi_1 + 0x94) + 1
                                *(rsi_1 + 0x94) = r8_22
                                
                                if (rax_85 != rcx_67)
                                    continue
                            else
                                char* rbx_4 = rsi_1[0xa]
                                arg2.b = rbx_4[rcx_62 - 1]
                                
                                if (arg2.b != rbx_4[rcx_62])
                                    goto label_1403702c3
                                
                                void* rbx_5 = &rbx_4[rcx_62]
                                
                                if (arg2.b != *(rbx_5 + 1) || arg2.b != *(rbx_5 + 2))
                                    goto label_1403702c3
                                
                                int64_t rbp_37 = 0
                                int32_t rdx_63
                                
                                while (true)
                                    if (arg2.b != *(rbx_5 + rbp_37 + 3))
                                        rdx_63 = rbx_5.d + rbp_37.d + 3
                                        break
                                    
                                    if (arg2.b != *(rbx_5 + rbp_37 + 4))
                                        rdx_63 = rbx_5.d + rbp_37.d + 4
                                        break
                                    
                                    if (arg2.b != *(rbx_5 + rbp_37 + 5))
                                        rdx_63 = rbx_5.d + rbp_37.d + 5
                                        break
                                    
                                    if (arg2.b != *(rbx_5 + rbp_37 + 6))
                                        rdx_63 = rbx_5.d + rbp_37.d + 6
                                        break
                                    
                                    if (arg2.b != *(rbx_5 + rbp_37 + 7))
                                        rdx_63 = rbx_5.d + rbp_37.d + 7
                                        break
                                    
                                    if (arg2.b != *(rbx_5 + rbp_37 + 8))
                                        rdx_63 = rbx_5.d + rbp_37.d + 8
                                        break
                                    
                                    if (arg2.b != *(rbx_5 + rbp_37 + 9))
                                        rdx_63 = rbx_5.d + rbp_37.d + 9
                                        break
                                    
                                    int64_t rdi_10 = rbp_37 + 8
                                    
                                    if (rbp_37 + 0xa u<= 0x101)
                                        bool cond:1_1 = arg2.b == *(rbx_5 + rbp_37 + 0xa)
                                        rbp_37 = rdi_10
                                        
                                        if (cond:1_1)
                                            continue
                                    
                                    rdx_63 = rbx_5.d + rdi_10.d + 2
                                    break
                                
                                arg2 = zx.q(rdx_63 - (rbx_5.d + 0x102) + 0x102)
                                
                                if (arg2.d u> rax_82)
                                    arg2 = zx.q(rax_82)
                                
                                rsi_1[0x11].d = arg2.d
                                
                                if (arg2.d u< 3)
                                    goto label_1403702c3
                                
                                arg2.b -= 3
                                *(rsi_1[0x2df] + (zx.q(*(rsi_1 + 0x16f4)) << 1)) = 1
                                int64_t rax_91 = rsi_1[0x2dd]
                                uint64_t rcx_72 = zx.q(*(rsi_1 + 0x16f4))
                                *(rsi_1 + 0x16f4) = (rcx_72 + 1).d
                                *(rax_91 + rcx_72) = arg2.b
                                uint64_t rax_93 = zx.q(*(zx.q(arg2.b) + &data_1435fb8f0))
                                *(rsi_1 + (rax_93 << 2) + 0x4c0) += 1
                                rsi_1[0x136].w += 1
                                int32_t rax_94 = *(rsi_1 + 0x16f4)
                                int32_t rcx_73 = rsi_1[0x2de].d
                                int32_t r8_25 = rsi_1[0x11].d
                                *(rsi_1 + 0x9c) -= r8_25
                                r8_22 = r8_25 + *(rsi_1 + 0x94)
                                *(rsi_1 + 0x94) = r8_22
                                rsi_1[0x11].d = 0
                                
                                if (rax_94 != rcx_73 - 1)
                                    continue
                            
                            uint64_t rdx_65 = zx.q(*(rsi_1 + 0x84))
                            char* rdx_66
                            
                            if (rdx_65.d s< 0)
                                rdx_66 = nullptr
                            else
                                rdx_66 = rdx_65 + rsi_1[0xa]
                            
                            sub_140375130(rsi_1, rdx_66, r8_22 - rdx_65.d, 0)
                            *(rsi_1 + 0x84) = *(rsi_1 + 0x94)
                            int64_t* rbp_39 = *rsi_1
                            void* rbx_6 = rbp_39[5]
                            sub_140374f60(rbx_6)
                            int32_t rdi_11 = *(rbx_6 + 0x28)
                            int32_t rax_87 = rbp_39[3].d
                            
                            if (rdi_11 u> rax_87)
                                rdi_11 = rax_87
                            
                            if (rdi_11 != 0)
                                uint64_t r13_1 = zx.q(rdi_11)
                                memcpy(rbp_39[2], *(rbx_6 + 0x20), r13_1.d)
                                rbp_39[2] += r13_1
                                *(rbx_6 + 0x20) += r13_1
                                *(rbp_39 + 0x1c) += rdi_11
                                rbp_39[3].d -= rdi_11
                                int32_t temp16_1 = *(rbx_6 + 0x28)
                                *(rbx_6 + 0x28) -= rdi_11
                                
                                if (temp16_1 == rdi_11)
                                    *(rbx_6 + 0x20) = *(rbx_6 + 0x10)
                            
                            if ((*rsi_1)[3].d == 0)
                                goto label_1403705f0
                        
                        goto label_140370506
                    
                    int32_t rax_95
                    
                    if (rax_72 != 2)
                        rax_95 = (&data_1435f8b08)[sx.q(*(rsi_1 + 0xac)) * 2](rsi_1, zx.q(r14_1))
                    else
                        while (true)
                            if (*(rsi_1 + 0x9c) == 0)
                                sub_14036f140(rsi_1)
                                
                                if (*(rsi_1 + 0x9c) == 0)
                                    break
                            
                            rsi_1[0x11].d = 0
                            uint64_t rax_74 = zx.q(*(rsi_1[0xa] + zx.q(*(rsi_1 + 0x94))))
                            *(rsi_1[0x2df] + (zx.q(*(rsi_1 + 0x16f4)) << 1)) = 0
                            char* rcx_56 = rsi_1[0x2dd]
                            uint64_t rdx_58 = zx.q(*(rsi_1 + 0x16f4))
                            *(rsi_1 + 0x16f4) = (rdx_58 + 1).d
                            rcx_56[rdx_58] = rax_74.b
                            *(rsi_1 + (rax_74 << 2) + 0xbc) += 1
                            int32_t rax_75 = *(rsi_1 + 0x16f4)
                            int32_t rcx_58 = rsi_1[0x2de].d - 1
                            *(rsi_1 + 0x9c) -= 1
                            int32_t r8_17 = *(rsi_1 + 0x94) + 1
                            *(rsi_1 + 0x94) = r8_17
                            
                            if (rax_75 == rcx_58)
                                uint64_t rdx_59 = zx.q(*(rsi_1 + 0x84))
                                char* rdx_60
                                
                                if (rdx_59.d s< 0)
                                    rdx_60 = nullptr
                                else
                                    rdx_60 = rdx_59 + rsi_1[0xa]
                                
                                sub_140375130(rsi_1, rdx_60, r8_17 - rdx_59.d, 0)
                                *(rsi_1 + 0x84) = *(rsi_1 + 0x94)
                                int64_t* rbp_34 = *rsi_1
                                void* rbx_3 = rbp_34[5]
                                sub_140374f60(rbx_3)
                                int32_t rdi_9 = *(rbx_3 + 0x28)
                                int32_t rax_77 = rbp_34[3].d
                                
                                if (rdi_9 u> rax_77)
                                    rdi_9 = rax_77
                                
                                if (rdi_9 != 0)
                                    uint64_t r12_2 = zx.q(rdi_9)
                                    memcpy(rbp_34[2], *(rbx_3 + 0x20), r12_2.d)
                                    rbp_34[2] += r12_2
                                    *(rbx_3 + 0x20) += r12_2
                                    *(rbp_34 + 0x1c) += rdi_9
                                    rbp_34[3].d -= rdi_9
                                    int32_t temp11_1 = *(rbx_3 + 0x28)
                                    *(rbx_3 + 0x28) -= rdi_9
                                    
                                    if (temp11_1 == rdi_9)
                                        *(rbx_3 + 0x20) = *(rbx_3 + 0x10)
                                
                                if ((*rsi_1)[3].d == 0)
                                    goto label_1403705f0
                        
                        if (r14_1 == 0)
                            goto label_1403705f0
                        
                    label_140370506:
                        *(rsi_1 + 0x170c) = 0
                        
                        if (r14_1 != 4)
                            if (*(rsi_1 + 0x16f4) == 0)
                                goto label_140370689
                            
                            uint64_t rdx_79 = zx.q(*(rsi_1 + 0x84))
                            char* rdx_80
                            
                            if (rdx_79.d s< 0)
                                rdx_80 = nullptr
                            else
                                rdx_80 = rdx_79 + rsi_1[0xa]
                            
                            sub_140375130(rsi_1, rdx_80, *(rsi_1 + 0x94) - rdx_79.d, 0)
                            *(rsi_1 + 0x84) = *(rsi_1 + 0x94)
                            int64_t* rbp_44 = *rsi_1
                            void* rbx_8 = rbp_44[5]
                            sub_140374f60(rbx_8)
                            int32_t rdi_13 = *(rbx_8 + 0x28)
                            int32_t rax_101 = rbp_44[3].d
                            
                            if (rdi_13 u> rax_101)
                                rdi_13 = rax_101
                            
                            if (rdi_13 != 0)
                                uint64_t r12_6 = zx.q(rdi_13)
                                memcpy(rbp_44[2], *(rbx_8 + 0x20), r12_6.d)
                                rbp_44[2] += r12_6
                                *(rbx_8 + 0x20) += r12_6
                                *(rbp_44 + 0x1c) += rdi_13
                                rbp_44[3].d -= rdi_13
                                int32_t temp17_1 = *(rbx_8 + 0x28)
                                *(rbx_8 + 0x28) -= rdi_13
                                
                                if (temp17_1 == rdi_13)
                                    *(rbx_8 + 0x20) = *(rbx_8 + 0x10)
                            
                            if ((*rsi_1)[3].d == 0)
                                goto label_1403705f0
                            
                            goto label_140370689
                        
                        uint64_t rdx_77 = zx.q(*(rsi_1 + 0x84))
                        char* rdx_78
                        
                        if (rdx_77.d s< 0)
                            rdx_78 = nullptr
                        else
                            rdx_78 = rdx_77 + rsi_1[0xa]
                        
                        sub_140375130(rsi_1, rdx_78, *(rsi_1 + 0x94) - rdx_77.d, 1)
                        *(rsi_1 + 0x84) = *(rsi_1 + 0x94)
                        int64_t* rbp_43 = *rsi_1
                        void* rbx_7 = rbp_43[5]
                        sub_140374f60(rbx_7)
                        int32_t rdi_12 = *(rbx_7 + 0x28)
                        int32_t rax_97 = rbp_43[3].d
                        
                        if (rdi_12 u> rax_97)
                            rdi_12 = rax_97
                        
                        if (rdi_12 != 0)
                            uint64_t r12_5 = zx.q(rdi_12)
                            memcpy(rbp_43[2], *(rbx_7 + 0x20), r12_5.d)
                            rbp_43[2] += r12_5
                            *(rbx_7 + 0x20) += r12_5
                            *(rbp_43 + 0x1c) += rdi_12
                            rbp_43[3].d -= rdi_12
                            int32_t temp15_1 = *(rbx_7 + 0x28)
                            *(rbx_7 + 0x28) -= rdi_12
                            
                            if (temp15_1 == rdi_12)
                                *(rbx_7 + 0x20) = *(rbx_7 + 0x10)
                        
                        rax_95 = sbb.d(3, 0, (*rsi_1)[3].d u< 1)
                    
                    if ((rax_95 | 1) == 3)
                        rsi_1[1].d = 0x29a
                    
                    if ((rax_95 | 2) != 2)
                        if (rax_95 != 1)
                            goto label_140370752
                        
                    label_140370689:
                        
                        if (r14_1 != 5)
                            if (r14_1 != 1)
                                sub_140374da0(rsi_1, nullptr, 0, 0)
                                
                                if (r14_1 == 3)
                                    *(rsi_1[0xd] + (zx.q(*(rsi_1 + 0x74) - 1) << 1)) = 0
                                    memset(rsi_1[0xd], 0, zx.q(*(rsi_1 + 0x74) - 1) * 2)
                                    
                                    if (*(rsi_1 + 0x9c) == 0)
                                        *(rsi_1 + 0x94) = 0
                                        *(rsi_1 + 0x84) = 0
                                        *(rsi_1 + 0x170c) = 0
                            else
                                sub_140374ff0(rsi_1)
                        
                        void* rbx_9 = arg1[5]
                        sub_140374f60(rbx_9)
                        int32_t rbp_45 = *(rbx_9 + 0x28)
                        int32_t rax_105 = arg1[3].d
                        
                        if (rbp_45 u> rax_105)
                            rbp_45 = rax_105
                        
                        if (rbp_45 != 0)
                            uint64_t rdi_14 = zx.q(rbp_45)
                            memcpy(arg1[2], *(rbx_9 + 0x20), rdi_14.d)
                            arg1[2] += rdi_14
                            *(rbx_9 + 0x20) += rdi_14
                            *(arg1 + 0x1c) += rbp_45
                            arg1[3].d -= rbp_45
                            int32_t temp13_1 = *(rbx_9 + 0x28)
                            *(rbx_9 + 0x28) -= rbp_45
                            
                            if (temp13_1 == rbp_45)
                                *(rbx_9 + 0x20) = *(rbx_9 + 0x10)
                            
                            rax_105 = arg1[3].d
                        
                        if (rax_105 != 0)
                            goto label_140370752
                        
                        rsi_1[8].d = 0xffffffff
                        return 0
                    
                label_1403705f0:
                    result = 0
                    
                    if (arg1[3].d == 0)
                        rsi_1[8].d = 0xffffffff
                else
                label_140370035:
                    rax_70.b = rax_70 == 0x29a
                    rcx_52.b = r14_1 == 0
                    rcx_52.b |= rax_70.b
                    
                    if (rcx_52.b != 1 || *(rsi_1 + 0x9c) != 0)
                        goto label_140370053
                    
                label_140370752:
                    result = 0
                    
                    if (r14_1 == 4)
                        int32_t rcx_93 = *(rsi_1 + 0x2c)
                        
                        if (rcx_93 s<= 0)
                            return 1
                        
                        int32_t rax_107 = *(arg1 + 0x4c)
                        uint16_t rax_108
                        
                        if (rcx_93 != 2)
                            uint64_t rbp_53 = zx.q(rsi_1[5].d)
                            rsi_1[5].d = (rbp_53 + 1).d
                            rsi_1[2][rbp_53] = (rax_107 u>> 0x18).b
                            uint64_t rdx_92 = zx.q(rsi_1[5].d)
                            rsi_1[5].d = (rdx_92 + 1).d
                            rsi_1[2][rdx_92] = (rax_107 u>> 0x10).b
                            rax_108 = (*(arg1 + 0x4c)).w
                            uint64_t rdx_93 = zx.q(rsi_1[5].d)
                            rsi_1[5].d = (rdx_93 + 1).d
                            rsi_1[2][rdx_93] = rax_108:1.b
                        else
                            uint64_t rdx_84 = zx.q(rsi_1[5].d)
                            rsi_1[5].d = (rdx_84 + 1).d
                            *(rsi_1[2] + rdx_84) = rax_107.b
                            rax_107.b = *(arg1 + 0x4d)
                            uint64_t rdx_85 = zx.q(rsi_1[5].d)
                            rsi_1[5].d = (rdx_85 + 1).d
                            *(rsi_1[2] + rdx_85) = rax_107.b
                            rax_107.b = *(arg1 + 0x4e)
                            uint64_t rdx_86 = zx.q(rsi_1[5].d)
                            rsi_1[5].d = (rdx_86 + 1).d
                            *(rsi_1[2] + rdx_86) = rax_107.b
                            rax_107.b = *(arg1 + 0x4f)
                            uint64_t rdx_87 = zx.q(rsi_1[5].d)
                            rsi_1[5].d = (rdx_87 + 1).d
                            *(rsi_1[2] + rdx_87) = rax_107.b
                            rax_107.b = *(arg1 + 0xc)
                            uint64_t rdx_88 = zx.q(rsi_1[5].d)
                            rsi_1[5].d = (rdx_88 + 1).d
                            *(rsi_1[2] + rdx_88) = rax_107.b
                            rax_107.b = *(arg1 + 0xd)
                            uint64_t rdx_89 = zx.q(rsi_1[5].d)
                            rsi_1[5].d = (rdx_89 + 1).d
                            *(rsi_1[2] + rdx_89) = rax_107.b
                            rax_107.b = *(arg1 + 0xe)
                            uint64_t rdx_90 = zx.q(rsi_1[5].d)
                            rsi_1[5].d = (rdx_90 + 1).d
                            *(rsi_1[2] + rdx_90) = rax_107.b
                            rax_108 = zx.w(*(arg1 + 0xf))
                        
                        uint64_t rdx_94 = zx.q(rsi_1[5].d)
                        rsi_1[5].d = (rdx_94 + 1).d
                        *(rsi_1[2] + rdx_94) = rax_108.b
                        void* rbx_11 = arg1[5]
                        sub_140374f60(rbx_11)
                        int32_t rbp_57 = *(rbx_11 + 0x28)
                        int32_t rax_111 = arg1[3].d
                        
                        if (rbp_57 u> rax_111)
                            rbp_57 = rax_111
                        
                        if (rbp_57 != 0)
                            uint64_t rdi_15 = zx.q(rbp_57)
                            memcpy(arg1[2], *(rbx_11 + 0x20), rdi_15.d)
                            arg1[2] += rdi_15
                            *(rbx_11 + 0x20) += rdi_15
                            *(arg1 + 0x1c) += rbp_57
                            arg1[3].d -= rbp_57
                            int32_t temp12_1 = *(rbx_11 + 0x28)
                            *(rbx_11 + 0x28) -= rbp_57
                            
                            if (temp12_1 == rbp_57)
                                *(rbx_11 + 0x20) = *(rbx_11 + 0x10)
                        
                        int32_t rax_113 = *(rsi_1 + 0x2c)
                        
                        if (rax_113 s> 0)
                            *(rsi_1 + 0x2c) = neg.d(rax_113)
                        
                        result.b = rsi_1[5].d == 0
            else
                arg1[4] = "stream error"

return result
