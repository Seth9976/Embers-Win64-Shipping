// 函数: sub_140dc03a0
// 地址: 0x140dc03a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx_2 = (sx.q(arg1[1].d) << 5) + *(*arg1 + 0x10)
char result = *(rdx_2 + 0x1b)

if ((result & 4) == 0)
    *(rdx_2 + 0x18) = arg2
    
    if ((result & 2) == 0 && arg2 != 0)
        return sub_140db8590(*arg1 + 0x20, rdx_2) __tailcall

return result
