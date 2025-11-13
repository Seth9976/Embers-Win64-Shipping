// 函数: sub_142bd0fe0
// 地址: 0x142bd0fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = arg2

if (arg2 s> 0)
    while (true)
        int64_t* rdx = *(arg1 + 8)
        r10 -= 1
        int64_t r8 = rdx[2]
        
        while (true)
            int32_t rax_1 = rdx[3].d
            
            if (rax_1 s< 2)
                if (rax_1 s>= 1)
                    goto label_142bd1060
                
                while (true)
                    char* rax_2 = *rdx
                    
                    if (rax_2 u>= r8)
                    label_142bd108d:
                        rdx[3].d = 3
                        break
                    
                    uint32_t i = zx.d(*rax_2)
                    *rdx = &rax_2[1]
                    
                    if (i != 0x20)
                        if (i != 9)
                            if (i != 0xd && i != 0xa)
                                if (i == 0x3b)
                                    rdx[3].d = 1
                                    goto label_142bd1060
                                
                                do
                                    if (i == 0xffffffff)
                                        goto label_142bd108d
                                    
                                    if (i == 0x1a)
                                        goto label_142bd108d
                                    
                                label_142bd1060:
                                    char* rax_4 = *rdx
                                    
                                    if (rax_4 u>= r8)
                                        goto label_142bd108d
                                    
                                    i = zx.d(*rax_4)
                                    *rdx = &rax_4[1]
                                    
                                    if (i == 0xd)
                                        break
                                while (i != 0xa)
                            
                            rdx[3].d = 2
                            break
            
            rdx[3].d = 0
            char* rax_6
            uint32_t rcx
            
            while (true)
                rax_6 = *rdx
                
                if (rax_6 u>= r8)
                    goto label_142bd125e
                
                rcx = zx.d(*rax_6)
                *rdx = &rax_6[1]
                
                if (rcx != 0x20)
                    if (rcx != 9)
                        break
            
            if (rcx != 0xd && rcx != 0xa)
                if (rcx == 0x3b)
                    rdx[3].d = 1
                    return 0xa0
                
                if (rcx == 0xffffffff || rcx == 0x1a)
                label_142bd125e:
                    rdx[3].d = 3
                    return 0xa0
                
                while (true)
                    char* rax_8 = *rdx
                    
                    if (rax_8 u< r8)
                        uint32_t rcx_1 = zx.d(*rax_8)
                        *rdx = &rax_8[1]
                        
                        if (rcx_1 == 0x20)
                            break
                        
                        if (rcx_1 == 9)
                            break
                        
                        if (rcx_1 == 0xd || rcx_1 == 0xa)
                            rdx[3].d = 2
                            break
                        
                        if (rcx_1 == 0x3b)
                            rdx[3].d = 1
                            break
                        
                        if (rcx_1 != 0xffffffff && rcx_1 != 0x1a)
                            continue
                    
                    rdx[3].d = 3
                    break
                
                if (rax_6 != 0)
                    break
                
                int32_t rax_10 = rdx[3].d
                
                if (rax_10 s>= 3)
                    return 0xa0
                
                if (rax_10 s< 2)
                    return 0xa0
                
                continue
            
            rdx[3].d = 2
        
        if (r10 s<= 0)
            break

while (true)
    int64_t* rax_12 = *(arg1 + 8)
    int64_t r8_1 = rax_12[2]
    uint64_t rdx_5
    void* r9_2
    
    while (true)
        int32_t rcx_2 = rax_12[3].d
        
        if (rcx_2 s< 2)
            if (rcx_2 s>= 1)
                goto label_142bd11e0
            
            while (true)
                char* rcx_3 = *rax_12
                
                if (rcx_3 u>= r8_1)
                label_142bd1205:
                    rax_12[3].d = 3
                    break
                
                uint32_t i_1 = zx.d(*rcx_3)
                *rax_12 = &rcx_3[1]
                
                if (i_1 != 0x20)
                    if (i_1 != 9)
                        if (i_1 != 0xd && i_1 != 0xa)
                            if (i_1 == 0x3b)
                                rax_12[3].d = 1
                                goto label_142bd11e0
                            
                            do
                                if (i_1 == 0xffffffff)
                                    goto label_142bd1205
                                
                                if (i_1 == 0x1a)
                                    goto label_142bd1205
                                
                            label_142bd11e0:
                                char* rcx_5 = *rax_12
                                
                                if (rcx_5 u>= r8_1)
                                    goto label_142bd1205
                                
                                i_1 = zx.d(*rcx_5)
                                *rax_12 = &rcx_5[1]
                                
                                if (i_1 == 0xd)
                                    break
                            while (i_1 != 0xa)
                        
                        rax_12[3].d = 2
                        break
        
        rax_12[3].d = 0
        char* rcx_7
        uint32_t rdx_1
        
        while (true)
            rcx_7 = *rax_12
            
            if (rcx_7 u>= r8_1)
                goto label_142bd12de
            
            rdx_1 = zx.d(*rcx_7)
            *rax_12 = &rcx_7[1]
            
            if (rdx_1 != 0x20)
                if (rdx_1 != 9)
                    break
        
        if (rdx_1 == 0xd || rdx_1 == 0xa)
            rax_12[3].d = 2
            goto label_142bd12e5
        
        if (rdx_1 == 0x3b)
            rax_12[3].d = 1
            goto label_142bd12e5
        
        if (rdx_1 == 0xffffffff || rdx_1 == 0x1a)
        label_142bd12de:
            rax_12[3].d = 3
        label_142bd12e5:
            r9_2 = nullptr
        label_142bd12e8:
            int32_t rcx_11 = rax_12[3].d
            
            if (rcx_11 s< 3 && rcx_11 s>= 2)
                continue
            
            if (r9_2 == 0)
                rdx_5 = 0
                break
        else
            r9_2 = rcx_7
            
            while (true)
                char* rcx_9 = *rax_12
                
                if (rcx_9 u< r8_1)
                    uint32_t rdx_2 = zx.d(*rcx_9)
                    *rax_12 = &rcx_9[1]
                    
                    if (rdx_2 == 0x20)
                        break
                    
                    if (rdx_2 == 9)
                        break
                    
                    if (rdx_2 == 0xd || rdx_2 == 0xa)
                        rax_12[3].d = 2
                        break
                    
                    if (rdx_2 == 0x3b)
                        rax_12[3].d = 1
                        break
                    
                    if (rdx_2 != 0xffffffff && rdx_2 != 0x1a)
                        continue
                
                rax_12[3].d = 3
                break
            
            if (r9_2 == 0)
                goto label_142bd12e8
        
        rdx_5 = *rax_12 - r9_2 - 1
        break
    
    if (r9_2 == 0)
        break
    
    int32_t rax_13 = sub_142bd14c0(r9_2, rdx_5)
    
    if (rax_13 != arg3 && rax_13 != 0x14)
        continue
    
    return 0

return 0xa0
