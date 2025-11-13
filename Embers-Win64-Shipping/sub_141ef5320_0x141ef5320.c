// 函数: sub_141ef5320
// 地址: 0x141ef5320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t rcx = *(arg1 + 0x8a)
uint8_t result = rcx u>> 3 & 1

if (result != arg2)
    rcx = (rcx & 0xf7) | arg2 << 3
    bool cond:0_1 = (arg1[0x11].b & 1) == 0
    *(arg1 + 0x8a) = rcx
    
    if (not(cond:0_1))
        if ((rcx & 8) == 0)
            return sub_141dee7d0(arg1) __tailcall
        
        char rax_1 = (*(*arg1 + 0x3e0))(arg1)
        *(arg1 + 0x8a) &= 0xfb
        *(arg1 + 0x8a) |= (rax_1 & 1) << 2
        return sub_141dee770(arg1) __tailcall

return result
