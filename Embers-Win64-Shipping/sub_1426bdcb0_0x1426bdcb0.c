// 函数: sub_1426bdcb0
// 地址: 0x1426bdcb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = *(arg1 + 0x263)

if ((result & 0x20) != 0)
    if ((result & 0x10) != 0)
        *(arg1 + 0x1bc) |= 1
        return result
    
    if (*(arg1 + 0x118) != 0)
        char var_18_1 = 1
        void* rdx_2 = **(arg1 + 0x110)
        return sub_1426bcb00(arg1, rdx_2, 0, rdx_2, 0xffffffff, 2)
else if (*(arg1 + 0x1b0) != 0)
    *(arg1 + 0x1bc) |= 1
    return sub_1426baf10(arg1) __tailcall

return result
