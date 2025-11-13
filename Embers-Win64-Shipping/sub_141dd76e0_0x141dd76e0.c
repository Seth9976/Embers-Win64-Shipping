// 函数: sub_141dd76e0
// 地址: 0x141dd76e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x59) &= 0xbf
int64_t rax = *arg1
arg2 <<= 6
*(arg1 + 0x59) |= arg2
void* result = (*(rax + 0x150))(arg3, arg2)

if (result != 0)
    result = sub_141db59f0(result)
    
    if (result != 0)
        if ((*(arg1 + 0x59) & 0x40) != 0 && (((*(arg1 + 0x5c) & 0x60) - 0x20) & 0xdf) == 0)
            return sub_14200d070(result, arg1) __tailcall
        
        return sub_1420124f0(result, arg1) __tailcall

return result
