// 函数: sub_142a23260
// 地址: 0x142a23260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xc) s> 8)
    int32_t rax_1
    
    do
        rax_1 = *(arg1 + 0xc)
        
        if (rax_1 s>= 0x40)
            break
        
        *(arg1 + 0x18) -= 1
        *(arg1 + 0xc) = rax_1 - 8
    while (rax_1 - 8 s> 8)

return *(arg1 + 0x18)
