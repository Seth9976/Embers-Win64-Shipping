// 函数: sub_142c0b5f0
// 地址: 0x142c0b5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax_3 = *arg1

if (rax_3 != 0)
    if (rax_3 == 1)
        return sub_142c0b480(&arg1[1], arg2, arg3) __tailcall
    
    return sub_142c0b540(&arg1[1], arg2, arg3) __tailcall

if (arg2 != 0)
    int32_t result = 1
    
    if (arg3 u> 1)
        do
            uint64_t rcx = zx.q(result - 1)
            
            if ((zx.d(arg1[(rcx << 1) + 1]) << 8) + zx.d(arg1[(rcx << 1) + 2]) == arg2)
                return result
            
            result += 1
        while (result u< arg3)

return 0
