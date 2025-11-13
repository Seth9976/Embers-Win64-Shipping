// 函数: sub_1428b71f0
// 地址: 0x1428b71f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
char* rbx = arg6
int32_t rbp = 0
int64_t* rsi = arg7
int64_t var_40 = 0
int64_t* r11 = arg2
label_1428b7239:
char rdi_1 = *rbx
int32_t r14_1 = 0
rbx = &rbx[1]
int32_t var_48_1 = 0
int32_t r12_1 = 0
int32_t r15_1 = -1

while (true)
    int32_t var_44_1 = r15_1
    
    while (true)
        void* r10_1 = rbx
        char r9 = rdi_1
        char rdx = rdi_1
        
        if (rdi_1 == 0 || (r11 == 0 && var_40 u>= *arg3))
        label_1428b72f0:
            
            if (r11 == 0)
                int64_t r8_3 = *arg3 - 1
                int64_t temp0_1 = var_40
                int32_t rcx_3
                rcx_3.b = temp0_1 u> r8_3
                *arg5 = rcx_3
                
                if (temp0_1 u> r8_3)
                    var_40 = *arg3 - 1
            
            if (sub_1428b7920(arg1, r11, &var_40, arg3, 0) == 0)
                return 0
            
            *arg4 = var_40 - 1
            return 1
        
        if (rbp u> 6)
            goto label_1428b72e4
        
        switch (rbp)
            case 0
                if (rdi_1 != 0x25)
                    if (sub_1428b7920(arg1, r11, &var_40, arg3, rdi_1) == 0)
                        return 0
                    
                    r11 = arg2
                else
                    rbp = 1
                
                rdi_1 = *rbx
                rbx = &rbx[1]
            label_1428b72e4:
                
                if (rbp == 7)
                    goto label_1428b72f0
                
                continue
            case 1
                if (rdi_1 == 0x20)
                    rdi_1 = *rbx
                    r12_1 |= 4
                    rbx = &rbx[1]
                    continue
                else if (rdi_1 == 0x23)
                    rdi_1 = *rbx
                    r12_1 |= 8
                    rbx = &rbx[1]
                    continue
                else if (rdi_1 == 0x2b)
                    rdi_1 = *rbx
                    r12_1 |= 2
                    rbx = &rbx[1]
                    continue
                else if (rdi_1 == 0x2d)
                    rdi_1 = *rbx
                    r12_1 |= 1
                    rbx = &rbx[1]
                    continue
                else if (rdi_1 == 0x30)
                    rdi_1 = *rbx
                    r12_1 |= 0x10
                    rbx = &rbx[1]
                    continue
                else
                    rbp = 2
                    continue
            case 2
                int32_t r15_2 = sx.d(rdi_1)
                
                if (sub_1428e4710(r15_2, 4) == 0)
                    if (rdi_1 == 0x2a)
                        int32_t rax_10 = *rsi
                        rsi = &rsi[1]
                        rdi_1 = *rbx
                        rbx = &rbx[1]
                        var_48_1 = rax_10
                    
                    r11 = arg2
                    rbp = 3
                    r15_1 = var_44_1
                    continue
                else
                    rdi_1 = *rbx
                    rbx = &rbx[1]
                    r11 = arg2
                    r15_1 = var_44_1
                    var_48_1 = r15_2 + ((var_48_1 * 5 - 0x18) << 1)
                    continue
            case 3
                if (rdi_1 == 0x2e)
                    rdi_1 = *rbx
                
                char* rax_11 = &rbx[1]
                int32_t rbp_1
                rbp_1.b = rdx != 0x2e
                rbp = rbp_1 + 4
                
                if (r9 != 0x2e)
                    rax_11 = rbx
                
                rbx = rax_11
                goto label_1428b72e4
            case 4
                int32_t r15_3 = sx.d(rdi_1)
                r11 = arg2
                
                if (sub_1428e4710(r15_3, 4) != 0)
                    uint64_t rax_13 = 0
                    rdi_1 = *rbx
                    
                    if (var_44_1 s>= 0)
                        rax_13 = zx.q(var_44_1)
                    
                    r15_1 = r15_3 + ((rax_13 * 5).d << 1) - 0x30
                    rbx = &rbx[1]
                    break
                
                rbp = 5
                
                if (rdi_1 != 0x2a)
                    r15_1 = var_44_1
                    continue
                else
                    r15_1 = *rsi
                    rsi = &rsi[1]
                    rdi_1 = *rbx
                    rbx = &rbx[1]
                    var_44_1 = r15_1
                    continue
            case 5
                if (sx.d(rdi_1) - 0x4c u<= 0x2e)
                    switch (rdi_1)
                        case 0x4c
                            rdi_1 = *rbx
                            r14_1 = 3
                            rbx = &rbx[1]
                            rbp = 6
                            continue
                        case 0x68
                            rdi_1 = *rbx
                            r14_1 = 1
                            rbx = &rbx[1]
                            rbp = 6
                            continue
                        case 0x6a, 0x71
                            rdi_1 = *rbx
                            r14_1 = 4
                            rbx = &rbx[1]
                            rbp = 6
                            continue
                        case 0x6c
                            rdi_1 = *rbx
                            char rax_19 = rdi_1
                            
                            if (rdi_1 != 0x6c)
                                void* rbx_2 = &rbx[1]
                                r14_1 = 2
                                
                                if (rax_19 != 0x6c)
                                    rbx_2 = r10_1
                                
                                rbx = rbx_2 + 1
                                rbp = 6
                                continue
                            else
                                rdi_1 = rbx[1]
                                r14_1 = 4
                                void* rbx_1 = &rbx[1]
                                
                                if (rax_19 != rax_19)
                                    rbx_1 = r10_1
                                
                                rbp = 6
                                rbx = rbx_1 + 1
                                continue
                        case 0x7a
                            rdi_1 = *rbx
                            r14_1 = 5
                            rbx = &rbx[1]
                
                rbp = 6
                continue
            case 6
                int32_t rdx_3 = sx.d(rdi_1)
                
                if (rdx_3 - 0x25 u> 0x53)
                    rbp = 0
                    goto label_1428b7239
                
                int32_t var_78
                int32_t var_58_2
                uint64_t rax_23
                int32_t rax_24
                int32_t rcx_16
                int64_t zmm0
                
                switch (rdx_3)
                    case 0x25
                        rax_24 = sub_1428b7920(arg1, r11, &var_40, arg3, rdx_3.b)
                    case 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 
                            0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 
                            0x3e, 0x3f, 0x40, 0x41, 0x42, 0x43, 0x44, 0x46, 0x48, 0x49, 0x4a, 0x4b, 
                            0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 
                            0x59, 0x5a, 0x5b, 0x5c, 0x5d, 0x5e, 0x5f, 0x60, 0x61, 0x62, 0x68, 0x6a, 
                            0x6b, 0x6c, 0x6d, 0x71, 0x72, 0x74, 0x76
                        rbp = 0
                        goto label_1428b7239
                    case 0x45
                        r12_1 |= 0x20
                    label_1428b76e1:
                        var_58_2 = 1
                    label_1428b76f2:
                        zmm0 = *rsi
                        rsi = &rsi[1]
                        var_78.q = zmm0
                        rax_24 = sub_1428b7a50(arg1, r11, &var_40, arg3, var_78, var_48_1, r15_1, 
                            r12_1, var_58_2)
                    case 0x47
                        r12_1 |= 0x20
                    label_1428b772a:
                        var_58_2 = 2
                        goto label_1428b76f2
                    case 0x58
                        r12_1 |= 0x20
                    label_1428b7642:
                        r12_1 |= 0x40
                        rsi = &rsi[1]
                        
                        if (r14_1 == 1)
                            rax_23 = zx.q(rsi[-1].w)
                        else if (r14_1 == 2 || (r14_1 != 4 && r14_1 != 5))
                            rax_23 = zx.q(rsi[-1].d)
                        else
                            rax_23 = rsi[-1]
                        
                        if (rdi_1 != 0x6f)
                            rcx_16 = 0x10
                            
                            if (rdi_1 == 0x75)
                                rcx_16 = 0xa
                        else
                            rcx_16 = 8
                        
                        goto label_1428b75f8
                    case 0x63
                        int32_t rax_25 = *rsi
                        rsi = &rsi[1]
                        rax_24 = sub_1428b7920(arg1, r11, &var_40, arg3, rax_25.b)
                    case 0x64, 0x69
                        rsi = &rsi[1]
                        
                        if (r14_1 == 1)
                            rax_23 = sx.q(rsi[-1].w)
                        else if (r14_1 == 2 || (r14_1 != 4 && r14_1 != 5))
                            rax_23 = sx.q(rsi[-1].d)
                        else
                            rax_23 = rsi[-1]
                        
                        rcx_16 = 0xa
                    label_1428b75f8:
                        var_78.q = rax_23
                        rax_24 = sub_1428b8120(arg1, r11, &var_40, arg3, var_78, rcx_16, var_48_1, 
                            r15_1, r12_1)
                    case 0x65
                        goto label_1428b76e1
                    case 0x66
                        zmm0 = *rsi
                        rsi = &rsi[1]
                        var_78.q = zmm0
                        rax_24 = sub_1428b7a50(arg1, r11, &var_40, arg3, var_78, var_48_1, r15_1, 
                            r12_1, 0)
                    case 0x67
                        goto label_1428b772a
                    case 0x6e
                        int32_t* rcx_22 = *rsi
                        rsi = &rsi[1]
                        rbp = 0
                        *rcx_22 = var_40.d
                        goto label_1428b7239
                    case 0x6f, 0x75, 0x78
                        goto label_1428b7642
                    case 0x70
                        rsi = &rsi[1]
                        var_78.q = rsi[-1]
                        rax_24 = sub_1428b8120(arg1, r11, &var_40, arg3, var_78, 0x10, var_48_1, 
                            r15_1, r12_1 | 8)
                    case 0x73
                        int64_t rax_26 = *rsi
                        rsi = &rsi[1]
                        
                        if (r15_1 s< 0)
                            r15_1 = 0x7fffffff
                            
                            if (r11 == 0)
                                r15_1 = *arg3
                        
                        var_78.q = rax_26
                        rax_24 = sub_1428b8420(arg1, r11, &var_40, arg3, var_78, r12_1.b, var_48_1, 
                            r15_1)
                    case 0x77
                        rbx = &rbx[1]
                        rbp = 0
                        goto label_1428b7239
                
                if (rax_24 == 0)
                    return 0
                
                r11 = arg2
                rbp = 0
                goto label_1428b7239
