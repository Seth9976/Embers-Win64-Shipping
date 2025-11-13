// 函数: sub_142a54c10
// 地址: 0x142a54c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0 && *arg2 s<= 0)
    if (arg1 u<= 0x10ffff)
        int32_t result = sub_142a54250(arg1, 0) & 0xc000ff
        
        if (result u< 0x400000)
            return result
        
        if (result u< 0x800000)
            return 0
        
        if (result u>= 0xc00000)
            return zx.q(*(&data_143635440 + (zx.q(result.b) << 1)))
        
        return 1
    
    *arg2 = 1

return -1
