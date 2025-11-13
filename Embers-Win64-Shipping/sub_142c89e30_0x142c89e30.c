// 函数: sub_142c89e30
// 地址: 0x142c89e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s>= 0xa)
    char r9_1
    
    if (*arg1 == 0x1f && arg1[1] == 0x8b)
        r9_1 = arg1[3]
    
    if (*arg1 != 0x1f || arg1[1] != 0x8b || arg1[2] != 8 || (r9_1 & 0xe0) != 0)
        return 1
    
    int64_t rdx = arg2 - 0xa
    void* rcx = &arg1[0xa]
    
    if ((r9_1 & 4) == 0)
        goto label_142c89eae
    
    if (rdx s>= 2)
        uint64_t r8_2 = zx.q(*(rcx + 1)) << 8 | zx.q(*rcx)
        
        if (rdx s>= r8_2 + 2)
            rdx += -2 - r8_2
            rcx = rcx + 2 + r8_2
        label_142c89eae:
            
            if ((r9_1 & 8) == 0)
                goto label_142c89eea
            
            if (rdx != 0)
                while (*rcx != 0)
                    rcx += 1
                    int64_t temp0_1 = rdx
                    rdx -= 1
                    
                    if (temp0_1 == 1)
                        return zx.q((rdx + 2).d)
                
                if (rdx != 0 && *rcx == 0)
                    rdx -= 1
                    rcx += 1
                label_142c89eea:
                    
                    if ((r9_1 & 0x10) == 0)
                        goto label_142c89f27
                    
                    if (rdx != 0)
                        while (*rcx != 0)
                            rcx += 1
                            int64_t temp1_1 = rdx
                            rdx -= 1
                            
                            if (temp1_1 == 1)
                                return zx.q((rdx + 2).d)
                        
                        if (rdx != 0 && *rcx == 0)
                            rdx -= 1
                        label_142c89f27:
                            
                            if ((r9_1 & 2) == 0)
                                *arg3 = arg2 - rdx
                                return 0
                            
                            if (rdx s>= 2)
                                *arg3 = arg2 - (rdx - 2)
                                return 0

return 2
