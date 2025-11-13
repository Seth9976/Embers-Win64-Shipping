// 函数: sub_142bb8aa0
// 地址: 0x142bb8aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r10 = *(arg1 + 0x2e0)

if (r10 != 0)
    int32_t rcx = *r10
    
    if (*arg2 u>= rcx)
        int32_t i = 0
        
        if (rcx != 0)
            do
                uint64_t i_1 = zx.q(i)
                i += 1
                uint64_t r8 = i_1 << 2
                *(r8 + arg3) = *(r8 + *(r10 + 0x108))
            while (i u< *r10)
        
        while (i u< *arg2)
            uint64_t i_2 = zx.q(i)
            i += 1
            *(arg3 + (i_2 << 2)) = 0
        
        *arg2 = *r10
        return 0
    
    *arg2 = rcx

return 6
