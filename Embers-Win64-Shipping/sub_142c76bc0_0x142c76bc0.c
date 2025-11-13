// 函数: sub_142c76bc0
// 地址: 0x142c76bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg2 & 1) != 0)
    int32_t rax_1 = sub_142c64080(*(arg1 + 0x238), -1, -1, 0)
    
    if (rax_1 != 0)
        bool rcx_2
        
        if ((rax_1.b & 4) == 0 && (rax_1.b & 1) != 0)
            rcx_2 = sub_142c652f0(arg1) == 0
        
        if ((rax_1.b & 4) != 0 || (rax_1.b & 1) == 0 || rcx_2 != 0)
            return 1

return 0
