// 函数: sub_142c65520
// 地址: 0x142c65520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0xa68)

if (rdi != 0)
    int64_t rcx = *(arg1 + 0xc8)
    
    if (rcx != 0 || *(arg1 + 0xc0) != rcx)
        void* var_18 = rdi
        char var_10_1 = 0
        
        if (rcx == 0)
            rcx = *(arg1 + 0xc0)
        
        sub_142c6ed90(rcx + 0xf0, &var_18, sub_142c665d0)
        
        if (var_10_1 != 0)
            if (arg2 != 0)
                *arg2 = rdi
            
            return *(rdi + 0x238)
        
        *(arg1 + 0xa68) = 0

return -1
