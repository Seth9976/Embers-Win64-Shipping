// 函数: sub_142864e30
// 地址: 0x142864e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg2 != 0)
    int32_t rdx_1 = *(*(arg1 + 0x488) + 0x1c) & 0x30000
    
    if (rdx_1 == 0)
    label_142864ea7:
        int32_t rsi_1 = 1
        
        if (arg3 == 0)
        label_142864f4c:
            
            if (sub_142866c60(arg1, arg2, 0x20006) != 0)
                if (*(arg1 + 0x38) != 0)
                    void* rax_8 = *(arg1 + 0x508)
                    int64_t rcx_3 = *(rax_8 + 0x170)
                    
                    if (rcx_3 != 0)
                        int64_t rax_9 = 0
                        
                        if (rcx_3 != 0)
                            do
                                if (*(*(rax_8 + 0x178) + (rax_9 << 1)) == arg2)
                                    return zx.q(rsi_1)
                                
                                rax_9 += 1
                            while (rax_9 u< rcx_3)
                        
                        rsi_1 = 0
                
                return zx.q(rsi_1)
        else
            void* const rcx_1
            int64_t rdx_2
            
            if (rdx_1 != 0x10000)
                if (rdx_1 == 0x20000)
                    rcx_1 = &data_1434dc6ee
                    rdx_2 = 1
                label_142864f1b:
                    int64_t rax_5 = 0
                    
                    while (*(rcx_1 + (rax_5 << 1)) != arg2)
                        rax_5 += 1
                        
                        if (rax_5 u>= rdx_2)
                            return 0
                    
                    goto label_142864f4c
                
                if (rdx_1 == 0x30000)
                    rcx_1 = &data_1434dc6ec
                    rdx_2 = 2
                    goto label_142864f1b
                
                rcx_1 = *(arg1 + 0x690)
                
                if (rcx_1 != 0)
                    rdx_2 = *(arg1 + 0x688)
                    goto label_142864f12
                
                rcx_1 = &data_1434dc6e0
                rdx_2 = 5
                goto label_142864f1b
            
            rcx_1 = &data_1434dc6ec
            rdx_2 = 1
        label_142864f12:
            
            if (rdx_2 != 0)
                goto label_142864f1b
    else
        void* rcx = *(*(arg1 + 0xa8) + 0x238)
        
        if (rcx == 0)
            goto label_142864ea7
        
        int32_t rax_3 = *(rcx + 0x18)
        
        if (rax_3 != 0x300c02b)
            if (rax_3 == 0x300c02c && arg2 == 0x18)
                goto label_142864ea7
        else if (arg2 == 0x17)
            goto label_142864ea7

return 0
