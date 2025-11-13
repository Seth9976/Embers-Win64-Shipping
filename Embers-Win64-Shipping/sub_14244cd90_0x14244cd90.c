// 函数: sub_14244cd90
// 地址: 0x14244cd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0x378)

if (result s< 0)
    result = 0xa
    *(arg1 + 0x378) = 0xa

if (result != *(arg1 + 0x390))
    int64_t rbx_1 = sx.q(*(arg1 + 0x390))
    
    if (result s> rbx_1.d)
        *(arg1 + 0x390) = result
        
        if (result s> *(arg1 + 0x394))
            sub_1405a4d70(arg1 + 0x388)
        
        return memset(*(arg1 + 0x388) + (rbx_1 << 3), 0, sx.q(result - rbx_1.d) << 3) __tailcall
    
    if (result s< rbx_1.d && result != rbx_1.d)
        *(arg1 + 0x390) = result
        return sub_1405c53d0(arg1 + 0x388)

return result
