// 函数: sub_142ba8090
// 地址: 0x142ba8090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (*(arg1 + 0x410) == 0)
    result, arg4 = sub_142ba7990(arg1, nullptr, arg5)

if (*(arg1 + 0x410) != 0 || result == 0)
    int32_t* rbx_1 = *(arg1 + 0x410)
    
    if (*(rbx_1 + 8) == 0)
        result = sub_142bb5000(arg1, 0, nullptr, 1, arg4, arg5)
    
    if (*(rbx_1 + 8) != 0 || result == 0)
        uint64_t rcx_1 = zx.q(arg2)
        
        if (arg2 u> *rbx_1)
            rcx_1 = zx.q(*rbx_1)
        
        int32_t r8 = 0
        
        if (*(arg1 + 0x409) == 0)
            if (rcx_1.d != 0)
                r8 = rcx_1.d
                __builtin_memset(arg3, 0, rcx_1 << 2)
        else if (rcx_1.d != 0)
            int64_t rdx = 0
            uint64_t i_1 = zx.q(rcx_1.d)
            r8 = rcx_1.d
            uint64_t i
            
            do
                rdx += 4
                *(rdx + arg3 - 4) = *(rdx + *(rbx_1 + 8) - 4)
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        if (r8 u< arg2)
            __builtin_memset(arg3 + (zx.q(r8) << 2), 0, zx.q(arg2 - r8) << 2)
        
        return 0

return result
