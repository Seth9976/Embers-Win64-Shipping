// 函数: sub_141f951b0
// 地址: 0x141f951b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rcx = zx.q(*(arg2 + 0xe4))

if ((rcx.b & 0x10) != 0)
    *(*(arg1[5] + 0x1330) + (sx.q(*(arg2 + 0xd0)) << 2)) = *(arg2 + 0xe0)
    rcx = zx.q(*(arg2 + 0xe4))

int32_t r14 = 0
void* const r15 = arg2
uint64_t rax

if ((rcx.b & 0x20) == 0)
label_141f95785:
    
    if (r15 != 0)
        void* r13_1 = *(arg1[5] + 0x58)
        
        if (r13_1 == 0)
            rcx.b = 0
        else
            int64_t rbx_4 = *(arg1 + 0x44)
            *(r13_1 + 0x1dc)
            
            if (*(r13_1 + 0x1b0) == *(r13_1 + 0x1dc))
            label_141f9581e:
                rcx = 0
            else
                int32_t rax_49 = sub_140b5ead0(rbx_4.d) + rbx_4:4.d
                void* r8_7 = r13_1 + 0x1e0
                void* rcx_36 = *(r8_7 + 8)
                
                if (rcx_36 != 0)
                    r8_7 = rcx_36
                
                rax = zx.q(*(r8_7 + (((sx.q(*(r13_1 + 0x1f0)) - 1) & sx.q(rax_49)) << 2)))
                
                if (rax.d == 0xffffffff)
                label_141f9581e_1:
                    rcx = 0
                else
                    while (true)
                        rcx = sx.q(rax.d) * 0x38 + *(r13_1 + 0x1a8)
                        
                        if (*rcx == rbx_4)
                            break
                        
                        rax = zx.q(*(rcx + 0x30))
                        
                        if (rax.d == 0xffffffff)
                            goto label_141f9581e_2
                    
                    if (rax.d == 0xffffffff)
                    label_141f9581e_2:
                        rcx = 0
            
            if (*(rcx + 0x25) == 0)
                rcx.b = 0
            else
                int64_t rbx_5 = *(arg1 + 0x44)
                void* r12_1 = *(arg1[5] + 0x58)
                *(r12_1 + 0x1dc)
                
                if (*(r12_1 + 0x1b0) == *(r12_1 + 0x1dc))
                label_141f958ae:
                    rcx = 0
                else
                    int32_t rax_54 = sub_140b5ead0(rbx_5.d) + rbx_5:4.d
                    void* r8_9 = r12_1 + 0x1e0
                    void* rcx_40 = *(r8_9 + 8)
                    
                    if (rcx_40 != 0)
                        r8_9 = rcx_40
                    
                    rax = zx.q(*(r8_9 + (((sx.q(*(r12_1 + 0x1f0)) - 1) & sx.q(rax_54)) << 2)))
                    
                    if (rax.d == 0xffffffff)
                    label_141f958ae_1:
                        rcx = 0
                    else
                        while (true)
                            rcx = sx.q(rax.d) * 0x38 + *(r12_1 + 0x1a8)
                            
                            if (*rcx == rbx_5)
                                break
                            
                            rax = zx.q(*(rcx + 0x30))
                            
                            if (rax.d == 0xffffffff)
                                goto label_141f958ae_2
                        
                        if (rax.d == 0xffffffff)
                        label_141f958ae_2:
                            rcx = 0
                
                if (*(rcx + 0x26) == 0)
                    rcx.b = 0
                else
                    rcx.b = 1
        
        if ((*(r15 + 0xe4) & 1) == 0)
            goto label_141f95902
        
        if (rcx.b != 0 || (arg1[7].d == 0xffffffff && *(arg1 + 0x3c) == 0xffffffff))
            arg1[7].d = *(r15 + 0xb8)
            arg1[6].d |= 1
            *(arg1 + 0x3c) = *(arg2 + 0xb8)
        label_141f95902:
            int32_t rdx_26
            
            if (rcx.b == 0)
                rdx_26 = arg1[6].d
            
            if (rcx.b != 0 || (rdx_26 & 0x801) != 0)
                if ((arg1[6].b & 2) == 0)
                    (*(*arg1 + 0x290))(arg1, r15)
                
                rax = zx.q(*(r15 + 0xe4))
                
                if ((rax.b & 2) != 0)
                    if ((rax.b & 4) != 0 || *(r15 + 0xe6) == 1)
                        r14 = 4
                    
                    arg1[6].d &= 0xfffffffb
                    arg1[6].d |= r14
                    sub_141f83fe0(arg1, 0, *(r15 + 0xe6))
                    uint64_t rax_58
                    rax_58.b = 1
                    return rax_58
            else if ((*(r15 + 0xe4) & 0x10) != 0)
                *(arg2 + 0x29) |= 1
            else if (((*(arg1[5] + 0xa4) u>> 1).b & 1) == 0)
                *arg3 = 1
            else
                arg1[6].d = rdx_26 | 0x20
        else
            *(arg2 + 0x29) |= 1
else
    int64_t* r9_2 = arg1[0xd]
    r15 = nullptr
    int64_t var_48
    wchar16 const* const rdx_8
    uint32_t r8_6
    
    if ((rcx.b & 0x40) != 0)
        if (r9_2 == 0)
            goto label_141f9526a
        
        rax = zx.q(*(r9_2 + 0xe4))
        
        if (rax.b s< 0 || (rax.b & 0x10) == 0)
            (**r9_2)(r9_2, 1)
            arg1[0xd] = 0
        label_141f9526a:
            void*** rax_3 = j_sub_140a82f30(0xe8)
            void*** rbx_1 = rax_3
            
            if (rax_3 == 0)
                rbx_1 = nullptr
            else
                sub_140bd5b20(rax_3, 0, 0, 0)
                *rbx_1 = &data_143286d50
                rbx_1[0x1b] = 0
                rbx_1[0x17].d = *(arg2 + 0xb8)
                rbx_1[0x18] = *(arg2 + 0xc0)
                rbx_1[0x19] = *(arg2 + 0xc8)
                rbx_1[0x1a].d = *(arg2 + 0xd0)
                *(rbx_1 + 0xd4) = *(arg2 + 0xd4)
                rbx_1[0x1b] = *(arg2 + 0xd8)
                rbx_1[0x1c].d = *(arg2 + 0xe0)
                *(rbx_1 + 0xe4) ^= (*(rbx_1 + 0xe4) ^ *(arg2 + 0xe4)) & 1
                char rax_12 = *(rbx_1 + 0xe4)
                char rcx_3 = ((rax_12 ^ *(arg2 + 0xe4)) & 2) ^ rax_12
                *(rbx_1 + 0xe4) = rcx_3
                char rax_13 = ((rcx_3 ^ *(arg2 + 0xe4)) & 4) ^ rcx_3
                *(rbx_1 + 0xe4) = rax_13
                char rcx_4 = ((rax_13 ^ *(arg2 + 0xe4)) & 8) ^ rax_13
                *(rbx_1 + 0xe4) = rcx_4
                char rax_14 = ((rcx_4 ^ *(arg2 + 0xe4)) & 0x10) ^ rcx_4
                *(rbx_1 + 0xe4) = rax_14
                char rcx_5 = ((rax_14 ^ *(arg2 + 0xe4)) & 0x20) ^ rax_14
                *(rbx_1 + 0xe4) = rcx_5
                char rax_15 = ((rcx_5 ^ *(arg2 + 0xe4)) & 0x40) ^ rcx_5
                *(rbx_1 + 0xe4) = rax_15
                *(rbx_1 + 0xe4) = ((rax_15 ^ *(arg2 + 0xe4)) & 0x7f) ^ *(arg2 + 0xe4)
                *(rbx_1 + 0xe5) ^= (*(rbx_1 + 0xe5) ^ *(arg2 + 0xe5)) & 1
                char rax_17 = *(rbx_1 + 0xe5)
                char rcx_6 = ((rax_17 ^ *(arg2 + 0xe5)) & 2) ^ rax_17
                *(rbx_1 + 0xe5) = rcx_6
                *(rbx_1 + 0xe5) = ((rcx_6 ^ *(arg2 + 0xe5)) & 4) ^ rcx_6
                *(rbx_1 + 0xe6) = *(arg2 + 0xe6)
                (*rbx_1)[0x1f](rbx_1, zx.q(*(arg2 + 0x54)))
                (*rbx_1)[0x20](rbx_1, zx.q(*(arg2 + 0x58)))
                rbx_1[0x16] = *(arg2 + 0xb0)
                rbx_1[0x15] = 0
            
            arg1[0xd] = rbx_1
            int64_t rax_24
            int64_t rcx_9
            int64_t r8
            
            if ((*(arg2 + 0xe5) & 1) == 0)
                r8 = *(arg2 + 0xa0)
                rcx_9 = *(arg2 + 0xa8)
                rax_24 = r8 - rcx_9
            
            if ((*(arg2 + 0xe5) & 1) != 0 || rax_24 s<= 0)
                var_48 = 0
                int32_t var_40_2 = 0
                sub_1405947f0(&var_48, 0x38)
                int32_t rax_29 = var_40_2 + 0x38
                var_40_2 = rax_29
                
                if (rax_29 s> 0)
                    sub_140594770(&var_48)
                
                r8_6 = 0x70
                rdx_8 = u"Received New partial bunch. It only contained NetGUIDs."
                goto label_141f956fb
            
            int32_t rax_25
            int32_t rdx_3
            rdx_3:rax_25 = sx.o(rax_24)
            uint64_t rdx_4 = zx.q(rdx_3) & 7
            
            if ((zx.q(rax_25 + rdx_4.d) & 7) == rdx_4)
                sub_140b4d710(rbx_1, sx.q((rcx_9 s>> 3).d) + *(arg2 + 0x90), r8.d - rcx_9.d)
                var_48 = 0
                int32_t var_40_1 = 0
                sub_1405947f0(&var_48, 0x1c)
                int32_t rax_28 = var_40_1 + 0x1c
                var_40_1 = rax_28
                
                if (rax_28 s> 0)
                    sub_140594770(&var_48)
                
                r8_6 = 0x38
                rdx_8 = u"Received new partial bunch."
                goto label_141f956fb
            
            *(arg2 + 0x29) |= 1
        else if ((rcx.b & 0x10) == 0)
            *arg3 = 1
        else
            *(arg2 + 0x29) |= 1
    else if (r9_2 == 0)
    label_141f95716:
        *arg3 = 1
        int64_t* rcx_31 = arg1[0xd]
        
        if (rcx_31 == 0)
            goto label_141f95758
        
        if ((*(rcx_31 + 0xe4) & 0x10) == 0)
            (**rcx_31)(rcx_31, 1)
            arg1[0xd] = 0
        label_141f95758:
            
            if (((*(arg1[5] + 0xa4) u>> 1).b & 1) != 0)
                goto label_141f95785
            
            rcx = arg1[0xd]
            
            if (rcx == 0 || (*(rcx + 0xa0) + 7) s>> 3 s<= sx.q(data_143a2d8b0))
                goto label_141f95785
            
            *(arg2 + 0x29) |= 1
        else if ((*(arg2 + 0xe4) & 0x10) != 0)
            *(arg2 + 0x29) |= 1
    else
        int32_t r8_2 = r9_2[0x1c].d
        int32_t rdx_10 = *(arg2 + 0xe0)
        int32_t rax_30
        
        if (rdx_10 == r8_2 + 1 || rdx_10 == r8_2)
            rax_30.b = 1
        else
            rax_30.b = 0
        
        char r8_3 = *(r9_2 + 0xe4)
        char rdx_11 = rax_30.b
        
        if ((r8_3 & 0x10) != 0)
            rdx_11 = (rdx_10 == r8_2 + 1).b
        
        if (r8_3 s< 0 || rdx_11 == 0)
            goto label_141f95716
        
        rcx.b ^= r8_3
        
        if ((rcx.b & 0x10) != 0)
            goto label_141f95716
        
        char rcx_16 = *(arg2 + 0xe5)
        
        if ((rcx_16 & 1) != 0)
        label_141f955cd:
            void* rcx_18 = arg1[0xd]
            int32_t rax_38 = *(arg2 + 0xe0)
            var_48 = 0
            int32_t var_40_3 = 0
            *(rcx_18 + 0xe0) = rax_38
            int64_t* rcx_19 = &var_48
            
            if (*(arg2 + 0xe4) s>= 0)
                sub_1405947f0(rcx_19, 0x18)
                int32_t rax_45 = var_40_3 + 0x18
                var_40_3 = rax_45
                
                if (rax_45 s> 0)
                    sub_140594770(&var_48)
                
                r8_6 = 0x30
                rdx_8 = u"Received Partial Bunch."
            label_141f956fb:
                int64_t rbx_3 = var_48
                UnDecorator::getReferenceType(rbx_3, rdx_8, r8_6)
                
                if (rbx_3 != 0)
                    sub_140a74f90(rbx_3)
                
                goto label_141f95758
            
            sub_1405947f0(rcx_19, 0x19)
            int32_t rax_39 = var_40_3 + 0x19
            var_40_3 = rax_39
            
            if (rax_39 s> 0)
                sub_140594770(&var_48)
            
            int64_t rbx_2 = var_48
            UnDecorator::getReferenceType(rbx_2, u"Completed Partial Bunch.", 0x32)
            
            if (rbx_2 != 0)
                sub_140a74f90(rbx_2)
            
            if ((*(arg2 + 0xe5) & 1) == 0)
                r15 = arg1[0xd]
                *(r15 + 0xe4) |= 0x80
                void* rcx_23 = arg1[0xd]
                *(rcx_23 + 0xe4) ^= (*(rcx_23 + 0xe4) ^ *(arg2 + 0xe4)) & 2
                void* rcx_24 = arg1[0xd]
                *(rcx_24 + 0xe4) ^= (*(rcx_24 + 0xe4) ^ *(arg2 + 0xe4)) & 4
                *(arg1[0xd] + 0xe6) = *(arg2 + 0xe6)
                void* rcx_26 = arg1[0xd]
                *(rcx_26 + 0xe4) ^= (*(rcx_26 + 0xe4) ^ *(arg2 + 0xe4)) & 8
                void* rcx_27 = arg1[0xd]
                *(rcx_27 + 0xe5) ^= (*(rcx_27 + 0xe5) ^ *(arg2 + 0xe5)) & 2
                goto label_141f95758
            
            *(arg2 + 0x29) |= 1
        else
            int64_t r8_4 = *(arg2 + 0xa0)
            int64_t rdx_12 = *(arg2 + 0xa8)
            
            if (r8_4 - rdx_12 s> 0)
                sub_140b4d710(r9_2, sx.q((rdx_12 s>> 3).d) + *(arg2 + 0x90), r8_4.d - rdx_12.d)
                rcx_16 = *(arg2 + 0xe5)
            
            if ((rcx_16 & 1) != 0 || *(arg2 + 0xe4) s< 0)
                goto label_141f955cd
            
            int32_t rax_35
            int32_t rdx_16
            rdx_16:rax_35 = sx.o(*(arg2 + 0xa0) - *(arg2 + 0xa8))
            uint64_t rdx_17 = zx.q(rdx_16) & 7
            
            if ((zx.q(rax_35 + rdx_17.d) & 7) == rdx_17)
                goto label_141f955cd
            
            *(arg2 + 0x29) |= 1

rax.b = 0
return rax
