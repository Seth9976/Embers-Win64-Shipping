// 函数: sub_142aeb3e0
// 地址: 0x142aeb3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = nullptr

if (arg2 s>= 0)
    result = zx.q(arg2)

if (result.d s<= 0xfffffff)
    *(arg1 + 0x10) = result.d
    
    if (*(arg1 + 0xc) s> result.d && result.d != 0)
        result = sub_142a7dd30(*(arg1 + 0x18), sx.q(result.d) << 3)
        
        if (result != 0)
            *(arg1 + 0x18) = result
            result = zx.q(*(arg1 + 0x10))
            *(arg1 + 0xc) = result.d
            
            if (*(arg1 + 8) s> result.d)
                *(arg1 + 8) = result.d

return result
