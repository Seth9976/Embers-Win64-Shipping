// 函数: sub_142b93410
// 地址: 0x142b93410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    void* i = *(arg1 + 0x118)
    
    if (arg3 != 0)
        void* rcx = *arg3
        
        if (rcx != 0)
            i = *(rcx + 8)
        
        *arg3 = 0
    
    for (; i != 0; i = *(i + 8))
        void* result = *(i + 0x10)
        
        if (*(result + 0x20) == arg2)
            if (arg3 != 0)
                *arg3 = i
            
            return result

return 0
