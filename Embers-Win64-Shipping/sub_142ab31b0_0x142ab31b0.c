// 函数: sub_142ab31b0
// 地址: 0x142ab31b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg2
int32_t rdx = *(arg1 + 0x10)

if (rdx != 0)
    int32_t rcx = *(arg1 + 0xc)
    
    if (result s<= rcx)
        if (*(arg1 + 0x40) != 0)
            result = sub_142a7dcd0(*(arg1 + 0x30))
            *(arg1 + 0x30) = 0
            *(arg1 + 0x40) = 0
        
        *(arg1 + 0x30) = 0
        *(arg1 + 0xc) = 0
        *(arg1 + 0x15) = 0
        *(arg1 + 0x18) = 0
        *(arg1 + 0x20) = 0
        return result
    
    int32_t rdx_2 = rdx - 1 + rcx
    
    if (result s<= rdx_2)
        sub_142ab3b80(arg1, rdx_2 - result + 1)
        return sub_142ab3280(arg1) __tailcall

return result
