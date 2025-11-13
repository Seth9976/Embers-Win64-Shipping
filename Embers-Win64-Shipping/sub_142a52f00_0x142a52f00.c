// 函数: sub_142a52f00
// 地址: 0x142a52f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax_18 = *arg1

if (rax_18 == 0x65)
label_142a52f0d:
    
    if (((arg1[1] - 0x4c) & 0xdf) == 0)
        char rdx_1 = arg1[2]
        
        if (((rdx_1 - 0x4c) & 0xdf) == 0)
            rdx_1 = arg1[3]
        
        if (rdx_1 == 0x5f || rdx_1 == 0x2d || rdx_1 == 0)
            return 4
else if (rax_18 != 0x7a)
    bool cond:0_1
    
    if (rax_18 s>= 0x61)
        if (rax_18 == 0x74)
            goto label_142a52f50
        
        if (rax_18 != 0x61)
            if (rax_18 == 0x6c)
                goto label_142a52fc7
            
            cond:0_1 = rax_18 != 0x6e
        label_142a53003:
            
            if (not(cond:0_1) && ((arg1[1] - 0x4c) & 0xdf) == 0)
                char rdx_5 = arg1[2]
                
                if (((rdx_5 - 0x44) & 0xdf) == 0)
                    rdx_5 = arg1[3]
                
                if (rdx_5 == 0x5f || rdx_5 == 0x2d || rdx_5 == 0)
                    return 5
        else if (((arg1[1] - 0x5a) & 0xdf) == 0)
            char rdx_3 = arg1[2]
            
            if (((rdx_3 - 0x45) & 0xdf) == 0)
                rdx_3 = arg1[3]
            
            if (rdx_3 == 0x5f || rdx_3 == 0x2d)
                return 2
            
            if (rdx_3 == 0)
                return 2
    else
        bool cond:1_1
        
        if (rax_18 == 0x54)
        label_142a52f50:
            char rdx_2 = arg1[1]
            void* rcx = &arg1[2]
            
            if (((rdx_2 - 0x55) & 0xdf) == 0)
                rdx_2 = *rcx
                rcx += 1
            
            if (((rdx_2 - 0x52) & 0xdf) == 0)
                char rax_4 = *rcx
                
                if (rax_4 == 0x5f || rax_4 == 0x2d)
                    return 2
                
                cond:1_1 = rax_4 != 0
            label_142a52f7e:
                
                if (not(cond:1_1))
                    return 2
        else if (rax_18 != 0x41)
            if (rax_18 != 0x4c)
                if (rax_18 == 0x45)
                    goto label_142a52f0d
                
                cond:0_1 = rax_18 != 0x4e
                goto label_142a53003
            
        label_142a52fc7:
            char rdx_4 = arg1[1]
            void* rcx_1 = &arg1[2]
            
            if (((rdx_4 - 0x49) & 0xdf) == 0)
                rdx_4 = *rcx_1
                rcx_1 += 1
            
            if (((rdx_4 - 0x54) & 0xdf) == 0)
                char rax_10 = *rcx_1
                
                if (rax_10 == 0x5f || rax_10 == 0x2d || rax_10 == 0)
                    return 3
        else if (((arg1[1] - 0x5a) & 0xdf) == 0)
            char rdx_6 = arg1[2]
            
            if (((rdx_6 - 0x45) & 0xdf) == 0)
                rdx_6 = arg1[3]
            
            if (rdx_6 == 0x5f || rdx_6 == 0x2d)
                return 2
            
            cond:1_1 = rdx_6 != 0
            goto label_142a52f7e

return 1
