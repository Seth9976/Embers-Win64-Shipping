// 函数: sub_142a37810
// 地址: 0x142a37810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x60) s< 0)
    int64_t* rcx = *(arg1 + 0x68)
    
    if (rcx != 0)
        int32_t result = sub_142a39d10(rcx, arg2, arg3, arg4)
        
        if (result s< 0)
            return result
        
        if (result != 0)
            void* rax = *(arg1 + 0x68)
            int64_t rcx_1 = *(rax + 0x20)
            
            if (rcx_1 s< 0)
                return 0xfffffffe
            
            int64_t rcx_2 = rcx_1 + *(rax + 8)
            *arg2 = rcx_2
            *(arg1 + 0x60) = rcx_2
            *(arg1 + 0x68) = 0
        
        return 2

return -1
