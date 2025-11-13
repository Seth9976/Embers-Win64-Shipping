// 函数: sub_1428647e0
// 地址: 0x1428647e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* arg_18 = arg3
int64_t* arg_10 = arg2
__chkstk(0x30)
int64_t* r14 = *(arg1 + 0x488)
int32_t rbp = 0
int64_t rdi = sx.q(arg5)
int32_t* r15 = arg4
int32_t rbx = 0
int32_t r12 = 0
int32_t r9 = *(r14 + 0x1c)
int32_t rsi_1 = r9 & 0x30000
int32_t var_40
int32_t* arg_8
int64_t* rcx_4

if (rdi.d != 0xffffffff)
    int64_t* r8
    
    if (rdi.d != 0xfffffffe)
        r8 = &r14[rdi + ((rdi + 1) << 2)]
    else
        r8 = *r14
        rdi = (r8 - r14 - 0x20) s/ 0x28
    
    r15 = r8[2]
    arg5 = r9 & 0x30001
    rcx_4 = *r8
    char* rax_6 = r8[1]
    arg_8 = *(arg1 + 0xa8) + 0x310 + (sx.q(rdi.d) << 2)
    arg_10 = rcx_4
    arg_18 = rax_6
    
    if (rcx_4 != 0 && rax_6 != 0)
    label_142864938:
        
        if (rsi_1 == 0)
            goto label_142864979
        
        int32_t rax_10 = r12 | 0x800
        
        if (r12 == 0)
            rax_10 = r12
        
        r12 = rax_10
        
        if (sub_1428a33d0(nullptr, rcx_4, r15, rsi_1) == 0)
            rbx = 0x800
        label_142864979:
            int32_t rax_13 = sub_1406938b0(arg1) & 0xffffff00
            int32_t rax_14
            
            if (rax_13 == 0x300)
                rax_14 = sub_1406938b0(arg1)
            
            if (rax_13 != 0x300 || rax_14 s< 0x303 || arg5 == 0)
                if (r12 == 0)
                    goto label_142864b22
                
                rbx |= 0x30
            label_142864b22:
                int64_t* rsi_4 = arg_10
                
                if (sub_1428646e0(arg1, rsi_4, 1) != 0)
                    rbx |= 0x40
                label_142864b4a:
                    int32_t rax_24 = arg5
                    
                    if (*(arg1 + 0x38) != 0)
                        if (rax_24 == 0)
                            goto label_142864c03
                        
                        rbx |= 0x80
                        int32_t rsi_3 = 0
                        
                        if (sub_142898c70(r15) s<= 0)
                            goto label_142864bf7
                        
                        while (true)
                            char* rax_27 = sub_1428a38c0(sub_142898ea0(r15, rsi_3))
                            
                            if (rax_27 == 0)
                                break
                            
                            if (sub_1406938b0(rax_27) == 0x198)
                                if (sub_142864fb0(arg1, rax_27) == 0)
                                    break
                                
                                uint16_t rax_30 = sub_142865230(rax_27)
                                int32_t r8_7
                                r8_7.b = *(arg1 + 0x38) == 0
                                
                                if (sub_142864e30(arg1, rax_30, r8_7) == 0)
                                    break
                            
                            rsi_3 += 1
                            
                            if (rsi_3 s>= sub_142898c70(r15))
                                goto label_142864bf7
                        
                        if (r12 != 0)
                            rbx &= 0xffffff7f
                        label_142864bf7:
                            rax_24 = arg5
                            rsi_4 = arg_10
                            goto label_142864c03
                    else
                        rbx |= 0x80
                    label_142864c03:
                        
                        if (*(arg1 + 0x38) != 0 || rax_24 == 0)
                            rbx |= 0x600
                            
                            if (r12 == 0 || (r12 & rbx) == r12)
                                rbx |= 1
                        else
                            int32_t rax_33 = sub_1406938b0(arg_18)
                            int32_t r9_4
                            
                            if (rax_33 == 6)
                                r9_4 = 1
                            label_142864c4f:
                                void* rax_34 = *(arg1 + 0xa8)
                                int64_t r8_8 = *(rax_34 + 0x258)
                                char* rcx_27 = *(rax_34 + 0x250)
                                
                                if (r8_8 != 0)
                                    int64_t rdx_13 = 0
                                    
                                    do
                                        if (zx.d(*rcx_27) == r9_4)
                                            rbx |= 0x400
                                            break
                                        
                                        rcx_27 = &rcx_27[1]
                                        rdx_13 += 1
                                    while (rdx_13 u< r8_8)
                                
                                if (test_bit(rbx, 0xa) || r12 != 0)
                                    goto label_142864c9f
                            else
                                if (rax_33 == 0x74)
                                    r9_4 = 2
                                    goto label_142864c4f
                                
                                if (rax_33 == 0x198)
                                    r9_4 = 0x40
                                    goto label_142864c4f
                                
                                rbx |= 0x400
                            label_142864c9f:
                                int32_t* rdi_5 = *(*(arg1 + 0xa8) + 0x260)
                                
                                if (sub_142898c70(rdi_5) == 0)
                                    rbx |= 0x200
                                
                                if (not(test_bit(rbx, 9)))
                                    if (sub_142863380(rdi_5, rsi_4) != 0)
                                        rbx |= 0x200
                                    
                                    if (not(test_bit(rbx, 9)) && sub_142898c70(r15) s> 0)
                                        int32_t rax_42
                                        
                                        do
                                            if (sub_142863380(rdi_5, sub_142898ea0(r15, rbp)) != 0)
                                                rbx |= 0x200
                                                break
                                            
                                            rbp += 1
                                            rax_42 = sub_142898c70(r15)
                                        while (rbp s< rax_42)
                                
                                if (r12 != 0)
                                    if ((r12 & rbx) == r12)
                                        rbx |= 1
                                else if (test_bit(rbx, 9))
                                    rbx |= 1
                else if (r12 != 0)
                    goto label_142864b4a
            else
                void* rax_15 = *(arg1 + 0xa8)
                int32_t rsi_2
                
                if (*(rax_15 + 0x2f0) != 0 || *(rax_15 + 0x2e8) != 0)
                    rsi_2 = 0
                label_142864ab4:
                    
                    if (sub_1428650b0(r14, arg_10, rsi_2) != 0)
                        rbx |= 0x10
                    label_142864ace:
                        rbx |= 0x20
                        int32_t rdi_3 = 0
                        
                        if (sub_142898c70(r15) s<= 0)
                            goto label_142864b22
                        
                        while (sub_1428650b0(r14, sub_142898ea0(r15, rdi_3), rsi_2) != 0)
                            rdi_3 += 1
                            
                            if (rdi_3 s>= sub_142898c70(r15))
                                goto label_142864b22
                        
                        if (r12 != 0)
                            rbx &= 0xffffffdf
                            goto label_142864b22
                    else if (r12 != 0)
                        goto label_142864ace
                else
                    int32_t r10_1
                    
                    switch (rdi.d)
                        case 0
                            rsi_2 = 0x41
                            r10_1 = 6
                        case 2
                            rsi_2 = 0x71
                            r10_1 = 0x74
                        case 3
                            rsi_2 = 0x1a0
                            r10_1 = 0x198
                        case 4
                            rsi_2 = 0x327
                            r10_1 = 0x32b
                        case 5
                            rsi_2 = 0x3d9
                            r10_1 = 0x3d3
                        case 6
                            rsi_2 = 0x3da
                            r10_1 = 0x3d4
                        default
                            rsi_2 = -1
                            goto label_142864ab4
                    
                    int16_t* r8_4 = r14[0x33]
                    
                    if (r8_4 == 0)
                        goto label_142864ab4
                    
                    int64_t r11_1 = r14[0x34]
                    int64_t r9_3 = 0
                    
                    if (r11_1 != 0)
                        do
                            int64_t rcx_11 = 0
                            char const (** const rax_17)[0x17] = &data_1434dc750
                            
                            while (rax_17[1].w != *r8_4)
                                rcx_11 += 1
                                rax_17 = &rax_17[5]
                                
                                if (rcx_11 u>= 0x1a)
                                    goto label_142864a81
                            
                            if (*(rax_17 + 0xc) == 0x40 && *(rax_17 + 0x14) == r10_1)
                                break
                            
                        label_142864a81:
                            r9_3 += 1
                            r8_4 = &r8_4[1]
                        while (r9_3 u< r11_1)
                    
                    if (r9_3 != r11_1)
                        goto label_142864ab4
                    
                    if (r12 != 0)
                        goto label_142864b22
        else if (r12 != 0)
            goto label_142864979
    
    int32_t rax_46 = sub_1406938b0(arg1) & 0xffffff00
    int32_t rax_47
    
    if (rax_46 == 0x300)
        rax_47 = sub_1406938b0(arg1)
    
    int32_t rax_49
    int32_t* rcx_36
    
    if (rax_46 != 0x300 || rax_47 s< 0x303)
        rcx_36 = arg_8
        rax_49 = 0x102
    else
        rcx_36 = arg_8
        rax_49 = *rcx_36 & 0x102
    
    int32_t result = rax_49 | rbx
    
    if (r12 != 0)
        return result
    
    if ((result.b & 1) != 0)
        *rcx_36 = result
        return result
    
    *rcx_36 &= 0x102
else if (arg2 != 0 && arg3 != 0 && sub_142854230(arg3, &var_40) != 0)
    r12 = 0x6f0
    rdi = sx.q(var_40)
    arg5 = 1
    rcx_4 = arg_10
    arg_8 = *(arg1 + 0xa8) + ((rdi + 0xc4) << 2)
    
    if ((*(r14 + 0x1c) & 0x30001) == 0)
        r12 = 0x50
    
    goto label_142864938
return 0
