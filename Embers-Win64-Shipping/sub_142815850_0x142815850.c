// 函数: sub_142815850
// 地址: 0x142815850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = arg3 & 0x1000
int32_t r9 = arg3 & 0x800

if (arg1 == 1)
    char rax_5 = *arg2
    
    if (r9 != 0)
        rax_5 &= 0x7f
    
    if (r8 == 0 || rax_5 != 1)
        return zx.q(rax_5)
else if (arg1 == 2)
    int16_t rax_3 = *arg2
    
    if (r9 != 0)
        rax_3 &= 0x7fff
    
    if (r8 == 0 || rax_3 != 1)
        return zx.q(rax_3)
else
    uint64_t result
    
    if (arg1 != 4)
        if (arg1 != 8)
            return -1
        
        result = *arg2
        
        if (r9 != 0)
            result &= 0x7fffffffffffffff
        
        if (r8 != 0 && result == 1)
            return 0
        
        return result
    
    result = zx.q(*arg2)
    
    if (r9 != 0)
        result = zx.q(result.d) & 0x7fffffff
    
    if (r8 == 0 || result.d != 1)
        return result

return 0
