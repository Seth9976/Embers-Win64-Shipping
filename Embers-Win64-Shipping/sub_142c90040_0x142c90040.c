// 函数: sub_142c90040
// 地址: 0x142c90040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = arg2 * arg3
int32_t r15 = 0
int32_t* rbx_1 = **(*arg4 + 0x4ed8)

if (rbx_1[3] != 0)
    return result

if (*rbx_1 != 0)
    goto label_142c900b0

if (result != 0)
    int32_t rcx
    rcx.b = *arg1 - 0x30 u<= 9
    *rbx_1 = rcx + 1
label_142c900b0:
    
    if (result != 0)
        while (true)
            char rdi_1 = *(zx.q(r15) + arg1)
            
            if (*(rbx_1 + 0x10) != 0)
                goto label_142c90111
            
            int64_t rax_4 = sub_142c8cbe0()
            *(rbx_1 + 0x10) = rax_4
            
            if (rax_4 == 0)
                rbx_1[3] = 0x1b
                break
            
            *(*(rbx_1 + 0x10) + 0x68) = data_143ccb898(0xa0)
            void* rax_6 = *(rbx_1 + 0x10)
            int32_t rdx_6
            
            if (*(rax_6 + 0x68) == 0)
                rdx_6 = 0x1b
            else
                *(rax_6 + 0x70) = 0xa0
                *(rbx_1 + 0x20) = 0
                rbx_1[6] = 0
            label_142c90111:
                int64_t* rsi_1 = *(rbx_1 + 0x10)
                rsi_1[0xd][rsi_1[0xf]] = rdi_1
                int64_t rdx_1 = rsi_1[0xe]
                rsi_1[0xf] += 1
                
                if (rsi_1[0xf] u< rdx_1 - 1)
                    goto label_142c90159
                
                int64_t rax_9 = data_143ccb8a8(rsi_1[0xd], rdx_1 + 0xa0)
                
                if (rax_9 == 0)
                    sub_142c8cc00(0, *(rbx_1 + 0x10))
                    *(rbx_1 + 0x10) = 0
                    rbx_1[3] = 0x1b
                    rdx_6 = 0x1b
                else
                    rsi_1[0xe] += 0xa0
                    rsi_1[0xd] = rax_9
                label_142c90159:
                    int32_t rcx_5 = *rbx_1
                    
                    if (rcx_5 == 1)
                        int64_t rax_28 = sx.q(rbx_1[1])
                        
                        if (rax_28.d u> 9)
                            goto label_142c90afb
                        
                        switch (rax_28)
                            case 0
                                int32_t rcx_24 = rbx_1[2]
                                
                                if (rcx_24 == 0)
                                    if (rdi_1 != 0x74)
                                        rbx_1[1] = 1
                                        r15 -= 1
                                        rsi_1[0xf] = 0
                                    else
                                        rbx_1[6] += 1
                                        rbx_1[2] = 1
                                    
                                    goto label_142c90afb
                                
                                if (rcx_24 != 1)
                                    goto label_142c90afb
                                
                                rbx_1[6] += 1
                                int32_t rax_29 = rbx_1[6]
                                
                                if (rdi_1 != 0xd)
                                    if (rdi_1 != 0xa)
                                        goto label_142c90afb
                                    
                                    *(zx.q(rax_29 - 1) + rsi_1[0xd]) = 0
                                    
                                    if (strncmp("total ", rsi_1[0xd], 6) != 0)
                                    labelid_25:
                                        rdx_6 = 0x57
                                    else
                                        char* rdi_3 = rsi_1[0xd] + 6
                                        
                                        if (isspace(zx.d(*rdi_3)) != 0)
                                            int32_t i
                                            
                                            do
                                                uint32_t _C = zx.d(rdi_3[1])
                                                rdi_3 = &rdi_3[1]
                                                i = isspace(_C)
                                            while (i != 0)
                                        
                                        if (isdigit(zx.d(*rdi_3)) != 0)
                                            int32_t i_1
                                            
                                            do
                                                uint32_t _C_1 = zx.d(rdi_3[1])
                                                rdi_3 = &rdi_3[1]
                                                i_1 = isdigit(_C_1)
                                            while (i_1 != 0)
                                        
                                        if (*rdi_3 == 0)
                                            rbx_1[1] = 1
                                            rsi_1[0xf] = 0
                                            goto label_142c90afb
                                        
                                    labelid_25:
                                        rdx_6 = 0x57
                                else
                                    rbx_1[6] = rax_29 - 1
                                    rsi_1[0xf] -= 1
                                label_142c90afb:
                                    r15 += 1
                                    
                                    if (zx.q(r15) u>= result)
                                        break
                                    
                                    continue
                            case 1
                                if (sx.d(rdi_1) - 0x2d u> 0x46)
                                labelid_25:
                                    rdx_6 = 0x57
                                else
                                    switch (rdi_1)
                                        case 0x2d
                                            rsi_1[1].d = 0
                                        label_142c9053b:
                                            rbx_1[1] = 2
                                            rbx_1[6] = 0
                                            *(rbx_1 + 0x20) = 1
                                            goto label_142c90afb
                                        case 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 
                                            0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 
                                            0x40, 0x41, 0x42, 0x43, 0x45, 0x46, 0x47, 0x48, 0x49, 
                                            0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 
                                            0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 
                                            0x5c, 0x5d, 0x5e, 0x5f, 0x60, 0x61, 0x65, 0x66, 0x67, 
                                            0x68, 0x69, 0x6a, 0x6b, 0x6d, 0x6e, 0x6f, 0x71, 0x72
                                        labelid_25:
                                            rdx_6 = 0x57
                                        case 0x44
                                            rsi_1[1].d = 7
                                            goto label_142c9053b
                                        case 0x62
                                            rsi_1[1].d = 3
                                            goto label_142c9053b
                                        case 0x63
                                            rsi_1[1].d = 4
                                            goto label_142c9053b
                                        case 0x64
                                            rsi_1[1].d = 1
                                            goto label_142c9053b
                                        case 0x6c
                                            rsi_1[1].d = 2
                                            goto label_142c9053b
                                        case 0x70
                                            rsi_1[1].d = 5
                                            goto label_142c9053b
                                        case 0x73
                                            rsi_1[1].d = 6
                                            goto label_142c9053b
                            case 2
                                rbx_1[6] += 1
                                int32_t rax_39 = rbx_1[6]
                                
                                if (rax_39 u> 9)
                                    if (rax_39 != 0xa)
                                        goto label_142c90afb
                                    
                                    if (rdi_1 != 0x20)
                                    labelid_25:
                                        rdx_6 = 0x57
                                    else
                                        *(rsi_1[0xd] + 0xa) = 0
                                        int32_t rax_42 = sub_142c90c90(rsi_1[0xd] + *(rbx_1 + 0x20))
                                        
                                        if (not(test_bit(rax_42, 0x18)))
                                            void* rcx_32 = *(rbx_1 + 0x10)
                                            *(rcx_32 + 0x60) |= 8
                                            *(*(rbx_1 + 0x10) + 0x18) = rax_42
                                            *(rbx_1 + 0x48) = *(rbx_1 + 0x20)
                                            rbx_1[6] = 0
                                            *(rbx_1 + 4) = 3
                                            goto label_142c90afb
                                        
                                    labelid_25:
                                        rdx_6 = 0x57
                                else
                                    if (strchr("rwx-tTsS", sx.d(rdi_1)) != 0)
                                        goto label_142c90afb
                                    
                                labelid_25:
                                    rdx_6 = 0x57
                            case 3
                                int32_t rcx_34 = rbx_1[2]
                                
                                if (rcx_34 == 0)
                                label_142c9066c:
                                    
                                    if (rdi_1 == 0x20)
                                        goto label_142c90afb
                                    
                                    if (rdi_1 - 0x30 u<= 9)
                                        goto label_142c909af
                                    
                                labelid_25:
                                    rdx_6 = 0x57
                                else
                                    if (rcx_34 != 1)
                                        goto label_142c90afb
                                    
                                    rbx_1[6] += 1
                                    
                                    if (rdi_1 == 0x20)
                                        *(zx.q(rbx_1[6]) + rsi_1[0xd] + *(rbx_1 + 0x20) - 1) = 0
                                        char* _EndPtr_1
                                        int32_t rax_45 =
                                            strtol(rsi_1[0xd] + *(rbx_1 + 0x20), &_EndPtr_1, 0xa)
                                        
                                        if (*_EndPtr_1 == 0 && rax_45 + 0x7fffffff u<= 0xfffffffd)
                                            void* rcx_41 = *(rbx_1 + 0x10)
                                            *(rcx_41 + 0x60) |= 0x80
                                            *(*(rbx_1 + 0x10) + 0x30) = rax_45
                                        
                                        rbx_1[6] = 0
                                        *(rbx_1 + 0x20) = 0
                                        *(rbx_1 + 4) = 4
                                        goto label_142c90afb
                                    
                                    if (rdi_1 - 0x30 u<= 9)
                                        goto label_142c90afb
                                    
                                labelid_25:
                                    rdx_6 = 0x57
                            case 4
                                int32_t rcx_43 = rbx_1[2]
                                
                                if (rcx_43 == 0)
                                label_142c909a1:
                                    
                                    if (rdi_1 == 0x20)
                                        goto label_142c90afb
                                    
                                label_142c909af:
                                    int64_t rax_65 = rsi_1[0xf] - 1
                                    rbx_1[6] = 1
                                    *(rbx_1 + 0x20) = rax_65
                                    rbx_1[2] = 1
                                    goto label_142c90afb
                                
                                if (rcx_43 == 1)
                                    rbx_1[6] += 1
                                    
                                    if (rdi_1 == 0x20)
                                        *(zx.q(rbx_1[6]) + rsi_1[0xd] + *(rbx_1 + 0x20) - 1) = 0
                                        *(rbx_1 + 0x30) = *(rbx_1 + 0x20)
                                        *(rbx_1 + 4) = 5
                                        *(rbx_1 + 0x20) = 0
                                        rbx_1[6] = 0
                                
                                goto label_142c90afb
                            case 5
                                int32_t rcx_46 = rbx_1[2]
                                
                                if (rcx_46 == 0)
                                    goto label_142c909a1
                                
                                if (rcx_46 == 1)
                                    rbx_1[6] += 1
                                    
                                    if (rdi_1 == 0x20)
                                        *(zx.q(rbx_1[6]) + rsi_1[0xd] + *(rbx_1 + 0x20) - 1) = 0
                                        *(rbx_1 + 0x38) = *(rbx_1 + 0x20)
                                        *(rbx_1 + 4) = 6
                                        *(rbx_1 + 0x20) = 0
                                        rbx_1[6] = 0
                                
                                goto label_142c90afb
                            case 6
                                int32_t rcx_49 = rbx_1[2]
                                
                                if (rcx_49 == 0)
                                    goto label_142c9066c
                                
                                if (rcx_49 != 1)
                                    goto label_142c90afb
                                
                                rbx_1[6] += 1
                                
                                if (rdi_1 == 0x20)
                                    *(zx.q(rbx_1[6]) + rsi_1[0xd] + *(rbx_1 + 0x20) - 1) = 0
                                    char* _EndPtr_2
                                    int64_t rax_51 =
                                        strtoll(rsi_1[0xd] + *(rbx_1 + 0x20), &_EndPtr_2, 0xa)
                                    
                                    if (*_EndPtr_2 == 0 && 0x7fffffffffffffff + rax_51 u<= -3)
                                        void* rcx_56 = *(rbx_1 + 0x10)
                                        *(rcx_56 + 0x60) |= 0x40
                                        *(*(rbx_1 + 0x10) + 0x28) = rax_51
                                    
                                    rbx_1[6] = 0
                                    *(rbx_1 + 0x20) = 0
                                    *(rbx_1 + 4) = 7
                                    goto label_142c90afb
                                
                                if (isdigit(zx.d(rdi_1)) != 0)
                                    goto label_142c90afb
                                
                            labelid_25:
                                rdx_6 = 0x57
                            case 7
                                int64_t rax_53 = sx.q(rbx_1[2])
                                
                                if (rax_53.d u> 5)
                                    goto label_142c90afb
                                
                                switch (rax_53)
                                    case 0
                                        if (rdi_1 == 0x20)
                                            goto label_142c90afb
                                        
                                        if (isalnum(zx.d(rdi_1)) != 0)
                                            goto label_142c909af
                                        
                                    labelid_25:
                                        rdx_6 = 0x57
                                    case 1
                                        rbx_1[6] += 1
                                        
                                        if (rdi_1 == 0x20)
                                            rbx_1[2] = 2
                                            goto label_142c90afb
                                        
                                    label_142c90817:
                                        
                                        if (isalnum(zx.d(rdi_1)) != 0 || rdi_1 == 0x2e)
                                            goto label_142c90afb
                                        
                                    labelid_25:
                                        rdx_6 = 0x57
                                    case 2
                                        rbx_1[6] += 1
                                        
                                        if (rdi_1 == 0x20)
                                            goto label_142c90afb
                                        
                                        if (isalnum(zx.d(rdi_1)) != 0)
                                            rbx_1[2] = 3
                                            goto label_142c90afb
                                        
                                    labelid_25:
                                        rdx_6 = 0x57
                                    case 3
                                        rbx_1[6] += 1
                                        
                                        if (rdi_1 != 0x20)
                                            goto label_142c90817
                                        
                                        rbx_1[2] = 4
                                        goto label_142c90afb
                                    case 4
                                        rbx_1[6] += 1
                                        
                                        if (rdi_1 == 0x20)
                                            goto label_142c90afb
                                        
                                        if (isalnum(zx.d(rdi_1)) != 0)
                                            rbx_1[2] = 5
                                            goto label_142c90afb
                                        
                                    labelid_25:
                                        rdx_6 = 0x57
                                    case 5
                                        rbx_1[6] += 1
                                        
                                        if (rdi_1 == 0x20)
                                            *(zx.q(rbx_1[6]) + rsi_1[0xd] + *(rbx_1 + 0x20) - 1) = 0
                                            *(rbx_1 + 0x40) = *(rbx_1 + 0x20)
                                            
                                            if (rsi_1[1].d != 2)
                                                *(rbx_1 + 4) = 8
                                            else
                                                *(rbx_1 + 4) = 9
                                            
                                            goto label_142c90afb
                                        
                                        if (isalnum(zx.d(rdi_1)) != 0 || rdi_1 == 0x2e
                                                || rdi_1 == 0x3a)
                                            goto label_142c90afb
                                        
                                    labelid_25:
                                        rdx_6 = 0x57
                            case 8
                                int32_t rcx_68 = rbx_1[2]
                                
                                if (rcx_68 == 0)
                                    goto label_142c909a1
                                
                                if (rcx_68 == 1)
                                    rbx_1[6] += 1
                                    
                                    if (rdi_1 == 0xd)
                                        rbx_1[2] = 2
                                        goto label_142c90afb
                                    
                                    if (rdi_1 != 0xa)
                                        goto label_142c90afb
                                    
                                label_142c9093c:
                                    *(zx.q(rbx_1[6]) + rsi_1[0xd] + *(rbx_1 + 0x20) - 1) = 0
                                    *(rbx_1 + 0x28) = *(rbx_1 + 0x20)
                                    rbx_1[1] = 1
                                    sub_142c90db0(arg4, rsi_1)
                                    goto label_142c90afb
                                
                                if (rcx_68 != 2)
                                    goto label_142c90afb
                                
                                if (rdi_1 == 0xa)
                                    goto label_142c9093c
                                
                            labelid_25:
                                rdx_6 = 0x57
                            case 9
                                int64_t rax_63 = sx.q(rbx_1[2])
                                
                                if (rax_63.d u> 7)
                                    goto label_142c90afb
                                
                                switch (rax_63)
                                    case 0
                                        goto label_142c909a1
                                    case 1
                                        rbx_1[6] += 1
                                        
                                        if (rdi_1 == 0x20)
                                            rbx_1[2] = 2
                                            goto label_142c90afb
                                        
                                        if (rdi_1 != 0xd && rdi_1 != 0xa)
                                            goto label_142c90afb
                                        
                                    labelid_25:
                                        rdx_6 = 0x57
                                    case 2
                                        rbx_1[6] += 1
                                        
                                        if (rdi_1 == 0x2d)
                                            rbx_1[2] = 3
                                            goto label_142c90afb
                                        
                                    label_142c90a0c:
                                        
                                        if (rdi_1 != 0xd && rdi_1 != 0xa)
                                            rbx_1[2] = 1
                                            goto label_142c90afb
                                        
                                    labelid_25:
                                        rdx_6 = 0x57
                                    case 3
                                        rbx_1[6] += 1
                                        
                                        if (rdi_1 != 0x3e)
                                            goto label_142c90a0c
                                        
                                        rbx_1[2] = 4
                                        goto label_142c90afb
                                    case 4
                                        rbx_1[6] += 1
                                        
                                        if (rdi_1 != 0x20)
                                            goto label_142c90a0c
                                        
                                        uint64_t rcx_75 = zx.q(rbx_1[6])
                                        int64_t rax_66 = *(rbx_1 + 0x20)
                                        rbx_1[2] = 5
                                        *(rcx_75 + rsi_1[0xd] + rax_66 - 4) = 0
                                        *(rbx_1 + 0x28) = *(rbx_1 + 0x20)
                                        rbx_1[6] = 0
                                        *(rbx_1 + 0x20) = 0
                                        goto label_142c90afb
                                    case 5
                                        if (rdi_1 != 0xd && rdi_1 != 0xa)
                                            rbx_1[2] = 6
                                            int64_t rax_69 = rsi_1[0xf] - 1
                                            rbx_1[6] = 1
                                            *(rbx_1 + 0x20) = rax_69
                                            goto label_142c90afb
                                        
                                    labelid_25:
                                        rdx_6 = 0x57
                                    case 6
                                        rbx_1[6] += 1
                                        
                                        if (rdi_1 == 0xd)
                                            rbx_1[2] = 7
                                            goto label_142c90afb
                                        
                                        if (rdi_1 != 0xa)
                                            goto label_142c90afb
                                        
                                        goto label_142c90ad7
                                    case 7
                                        if (rdi_1 == 0xa)
                                        label_142c90ad7:
                                            *(zx.q(rbx_1[6]) + rsi_1[0xd] + *(rbx_1 + 0x20) - 1) = 0
                                            *(rbx_1 + 0x50) = *(rbx_1 + 0x20)
                                            sub_142c90db0(arg4, rsi_1)
                                            rbx_1[1] = 1
                                            goto label_142c90afb
                                        
                                    labelid_25:
                                        rdx_6 = 0x57
                    else
                        if (rcx_5 != 2)
                            return result + 1
                        
                        int32_t rcx_7 = rbx_1[1]
                        
                        if (rcx_7 == 0)
                            rbx_1[6] += 1
                            int32_t rax_26 = rbx_1[6]
                            
                            if (rax_26 u>= 9)
                                if (rax_26 == 9 && rdi_1 == 0x20)
                                    *(rbx_1 + 4) = 1
                                    goto label_142c90afb
                                
                            label_142c90347:
                                rdx_6 = 0x57
                            else
                                if (strchr("0123456789-", sx.d(rdi_1)) != 0)
                                    goto label_142c90afb
                                
                            label_142c90347_1:
                                rdx_6 = 0x57
                        else
                            if (rcx_7 != 1)
                                if (rcx_7 != 2)
                                    if (rcx_7 != 3)
                                        goto label_142c90afb
                                    
                                    int32_t rcx_10 = rbx_1[2]
                                    
                                    if (rcx_10 == 0)
                                        goto label_142c909a1
                                    
                                    int64_t* rcx_12
                                    
                                    if (rcx_10 == 1)
                                        rbx_1[6] += 1
                                        
                                        if (rdi_1 == 0xd)
                                            rbx_1[2] = 2
                                            *(rsi_1[0xd] + rsi_1[0xf] - 1) = 0
                                            goto label_142c90afb
                                        
                                        if (rdi_1 != 0xa)
                                            goto label_142c90afb
                                        
                                        *(rbx_1 + 0x28) = *(rbx_1 + 0x20)
                                        *(rsi_1[0xd] + rsi_1[0xf] - 1) = 0
                                        rcx_12 = arg4
                                    else
                                        if (rcx_10 != 2)
                                            goto label_142c90afb
                                        
                                        rcx_12 = arg4
                                        
                                        if (rdi_1 != 0xa)
                                            sub_142c90c50(rcx_12, 0x57)
                                            break
                                            break
                                            break
                                    
                                    *(rbx_1 + 0x28) = *(rbx_1 + 0x20)
                                    sub_142c90db0(rcx_12, rsi_1)
                                    *(rbx_1 + 4) = 0
                                    goto label_142c90afb
                                
                                int32_t rcx_15 = rbx_1[2]
                                
                                if (rcx_15 == 0)
                                    goto label_142c909a1
                                
                                if (rcx_15 == 1)
                                    rbx_1[6] += 1
                                    
                                    if (rdi_1 == 0x20)
                                        *(zx.q(rbx_1[6]) + rsi_1[0xd] + *(rbx_1 + 0x20) - 1) = 0
                                        int64_t i_2 = 0
                                        char* _String = rsi_1[0xd] + *(rbx_1 + 0x20)
                                        
                                        do
                                            char rax_15 = (*"<DIR>")[i_2]
                                            i_2 += 1
                                            
                                            if (rax_15 != _String[i_2 - 1])
                                                char* _EndPtr
                                                int64_t rax_16 = strtoll(_String, &_EndPtr, 0xa)
                                                char* _EndPtr_3 = _EndPtr
                                                rsi_1[5] = rax_16
                                                
                                                if (*_EndPtr_3 != 0)
                                                    goto label_142c90347_2
                                                
                                                if (((rax_16 + -0x7fffffffffffffff)
                                                        & 0xfffffffffffffffe) == 0 && *_errno() == 0x22)
                                                    goto label_142c90347_2
                                                
                                                *(*(rbx_1 + 0x10) + 8) = 0
                                                goto label_142c902d6
                                        while (i_2 != 6)
                                        
                                        rsi_1[1].d = 1
                                        rsi_1[5] = 0
                                    label_142c902d6:
                                        void* rax_20 = *(rbx_1 + 0x10)
                                        *(rax_20 + 0x60) |= 0x40
                                        rbx_1[6] = 0
                                        *(rbx_1 + 4) = 3
                                
                                goto label_142c90afb
                            
                            rbx_1[6] += 1
                            int32_t rcx_19 = rbx_1[2]
                            
                            if (rcx_19 == 0)
                                if (isspace(zx.d(rdi_1)) == 0)
                                    rbx_1[2] = 1
                                
                                goto label_142c90afb
                            
                            if (rcx_19 != 1)
                                goto label_142c90afb
                            
                            if (rdi_1 == 0x20)
                                uint64_t rax_21 = zx.q(rbx_1[6])
                                int64_t rcx_20 = *(rbx_1 + 0x20)
                                *(rbx_1 + 0x40) = rcx_20
                                *(rax_21 + rsi_1[0xd] + rcx_20 - 1) = 0
                                *(rbx_1 + 4) = 2
                                rbx_1[6] = 0
                                goto label_142c90afb
                            
                            if (strchr("APM0123456789:", sx.d(rdi_1)) != 0)
                                goto label_142c90afb
                            
                        label_142c90347_2:
                            rdx_6 = 0x57
            
            sub_142c90c50(arg4, rdx_6)
            break

return result
