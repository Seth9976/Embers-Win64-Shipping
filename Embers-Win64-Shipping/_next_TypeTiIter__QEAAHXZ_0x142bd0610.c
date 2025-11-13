// 函数: ?next@TypeTiIter@@QEAAHXZ
// 地址: 0x142bd0610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_7

while (true)
    int64_t* rax_1 = arg1[1]
    int64_t r9_1 = rax_1[2]
    uint64_t rdx_5
    void* r8_1
    
    while (true)
        int32_t rcx = rax_1[3].d
        
        if (rcx s< 2)
            if (rcx s>= 1)
                goto label_142bd0680
            
            while (true)
                char* rcx_1 = *rax_1
                
                if (rcx_1 u>= r9_1)
                label_142bd06a5:
                    rax_1[3].d = 3
                    break
                
                uint32_t i = zx.d(*rcx_1)
                *rax_1 = &rcx_1[1]
                
                if (i != 0x20)
                    if (i != 9)
                        if (i != 0xd && i != 0xa)
                            if (i == 0x3b)
                                rax_1[3].d = 1
                                goto label_142bd0680
                            
                            do
                                if (i == 0xffffffff)
                                    goto label_142bd06a5
                                
                                if (i == 0x1a)
                                    goto label_142bd06a5
                                
                            label_142bd0680:
                                char* rcx_3 = *rax_1
                                
                                if (rcx_3 u>= r9_1)
                                    goto label_142bd06a5
                                
                                i = zx.d(*rcx_3)
                                *rax_1 = &rcx_3[1]
                                
                                if (i == 0xd)
                                    break
                            while (i != 0xa)
                        
                        rax_1[3].d = 2
                        break
        
        rax_1[3].d = 0
        char* rcx_5
        uint32_t rdx_1
        
        while (true)
            rcx_5 = *rax_1
            
            if (rcx_5 u>= r9_1)
                goto label_142bd075f
            
            rdx_1 = zx.d(*rcx_5)
            *rax_1 = &rcx_5[1]
            
            if (rdx_1 != 0x20)
                if (rdx_1 != 9)
                    break
        
        if (rdx_1 == 0xd || rdx_1 == 0xa)
            rax_1[3].d = 2
            goto label_142bd0766
        
        if (rdx_1 == 0x3b)
            rax_1[3].d = 1
            goto label_142bd0766
        
        if (rdx_1 == 0xffffffff || rdx_1 == 0x1a)
        label_142bd075f:
            rax_1[3].d = 3
        label_142bd0766:
            r8_1 = nullptr
        label_142bd0769:
            int32_t rcx_9 = rax_1[3].d
            
            if (rcx_9 s< 3 && rcx_9 s>= 2)
                continue
            
            if (r8_1 == 0)
                rdx_5 = 0
                break
        else
            r8_1 = rcx_5
            
            while (true)
                char* rcx_7 = *rax_1
                
                if (rcx_7 u< r9_1)
                    uint32_t rdx_2 = zx.d(*rcx_7)
                    *rax_1 = &rcx_7[1]
                    
                    if (rdx_2 == 0x20)
                        break
                    
                    if (rdx_2 == 9)
                        break
                    
                    if (rdx_2 == 0xd || rdx_2 == 0xa)
                        rax_1[3].d = 2
                        break
                    
                    if (rdx_2 == 0x3b)
                        rax_1[3].d = 1
                        break
                    
                    if (rdx_2 != 0xffffffff && rdx_2 != 0x1a)
                        continue
                
                rax_1[3].d = 3
                break
            
            if (r8_1 == 0)
                goto label_142bd0769
        
        rdx_5 = *rax_1 - r8_1 - 1
        break
    
    if (r8_1 != 0)
        switch (sub_142bd14c0(r8_1, rdx_5) - 0x14)
            case 0, 1
                return 0
            case 0x1e, 0x1f
                rax_7 = sub_142bd0870(arg1)
                
                if (rax_7 != 0)
                    break
                
                continue
            case 0x21
                int32_t rax_6 = sub_142bd0b60(arg1)
                
                if (rax_6 != 0)
                    return rax_6
                
                continue
            case 0x37
                continue
    
    return 0xa0

return rax_7
