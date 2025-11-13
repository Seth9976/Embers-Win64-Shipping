// 函数: sub_141eadba0
// 地址: 0x141eadba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result = zx.d(*arg2)

if (arg1[0x50].b != result.b || (*(arg2 + 4)).d f!= *(arg1 + 0x284)
        || (*(arg2 + 8)).d f!= arg1[0x51].d || (*(arg2 + 0xc)).d f!= *(arg1 + 0x28c)
        || (*(arg2 + 0x10)).d f!= arg1[0x52].d || (*(arg2 + 0x14)).d f!= *(arg1 + 0x294)
        || (*(arg2 + 0x18)).d f!= arg1[0x53].d || (*(arg2 + 0x1c)).d f!= *(arg1 + 0x29c)
        || not((*(arg2 + 0x20)).d f== arg1[0x54].d))
    bool cond:0_1 = (*(arg1 + 0x25c) & 1) != 0
    *(arg1 + 0x280) = *arg2
    *(arg1 + 0x290) = *(arg2 + 0x10)
    result = *(arg2 + 0x20)
    arg1[0x54].d = result
    
    if (cond:0_1)
        return sub_141eaf840(arg1, arg2.b) __tailcall

return result
