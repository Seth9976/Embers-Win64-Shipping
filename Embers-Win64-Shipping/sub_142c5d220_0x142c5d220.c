// 函数: sub_142c5d220
// 地址: 0x142c5d220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0

if (*(arg1 + 0x3fd) == 0)
    if (*(arg1 + 0x3ff) != 0)
        return 0
    
label_142c5d282:
    int32_t rax_3 = sub_142c67f20(arg1, 0, arg3, arg4)
    int32_t rdi = rax_3
    
    if (rax_3 != 0)
        return rax_3
    
    if (*(arg1 + 0x164) != 2 || *(arg1 + 0x411) != rax_3.b)
        char rax_4
        
        if (*(arg1 + 0x401) != 0 && *(arg1 + 0x3f6) != 0)
            rax_4 = sub_142c67e00(arg1)
        
        if (*(arg1 + 0x401) == 0 || *(arg1 + 0x3f6) == 0 || rax_4 == 0)
            int64_t r8_1 = *(arg1[0x87] + 0x28)
            
            if (r8_1 == 0)
                *arg2 = 1
                *(arg1 + 0x3ff) = 1
            else
                int32_t rax_6 = r8_1(arg1, arg2)
                rdi = rax_6
                
                if (rax_6 == 0)
                    *(arg1 + 0x3ff) = 1
            
            return rdi
else
    if (*(arg1 + 0x3ff) == 0)
        goto label_142c5d282
    
    char rcx = 0
    
    if (*(arg1[0x87] + 0x30) == 0)
        rcx = 1
    
    *arg2 = rcx

return 0
