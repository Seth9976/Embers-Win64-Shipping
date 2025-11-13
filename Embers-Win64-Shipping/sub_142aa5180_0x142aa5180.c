// 函数: sub_142aa5180
// 地址: 0x142aa5180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x18) s< 0)
    int16_t* rax_2 = sub_142b1dd80(arg2, arg3, arg1 + 0x10, arg1 + 0x1c)
    *(arg1 + 8) = rax_2
    
    if (rax_2 != 0)
        *(arg1 + 0x18) = 0
        uint32_t result = zx.d(*rax_2)
        *(arg1 + 0x18) = 1
        
        if ((result & 0xfffffc00) == 0xd800)
            result = ((result - 0xd7f7) << 0xa) + zx.d(rax_2[1])
            *(arg1 + 0x18) = 2
        
        return result

return zx.q(arg3)
