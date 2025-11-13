// 函数: sub_14285dca0
// 地址: 0x14285dca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg2 == 0x303)
    int32_t rax_1 = sub_14285f6a0(arg1, arg2 + 1, nullptr)
    
    if (rax_1 != 0)
        *arg3 = 1
        return rax_1

uint64_t rax_2 = *(arg1 + 8)

if ((*(*(rax_2 + 0xc0) + 0x60) & 8) == 0 && arg2 s< 0x303)
    rax_2 = sub_14285f6a0(arg1, 0x303, nullptr)
    
    if (rax_2.d != 0)
        *arg3 = 2
        return rax_2

*arg3 = 0
return rax_2
