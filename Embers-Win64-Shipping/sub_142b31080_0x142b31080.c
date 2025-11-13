// 函数: sub_142b31080
// 地址: 0x142b31080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (*arg3 s<= 0)
    int64_t* rcx = *(arg1 + 0x10)
    
    if ((*(*rcx + 0x50))(rcx).b != 0)
        int16_t rcx_1 = *(arg2 + 8)
        int32_t rax_2
        
        if (rcx_1 s< 0)
            rax_2 = *(arg2 + 0xc)
        else
            rax_2 = sx.d(rcx_1) s>> 5
        
        int16_t rax_3
        
        if (rax_2 == 0)
            rax_3 = -1
        else if ((rcx_1.b & 2) == 0)
            rax_3 = **(arg2 + 0x18)
        else
            rax_3 = *(arg2 + 0xa)
        
        if (zx.d(rax_3) - 0xac00 u> 0x2ba3)
            result.b = 0
            return result

result.b = 1
return result
