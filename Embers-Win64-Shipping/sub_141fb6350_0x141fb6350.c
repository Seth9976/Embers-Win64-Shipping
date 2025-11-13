// 函数: sub_141fb6350
// 地址: 0x141fb6350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx_1 = sx.q(*(arg1 + 0x4c)) + sx.q(*(arg1 + 0x3c) * arg3) + arg2

if ((arg5 & 2) != 0)
    uint8_t rdx_1 = (zx.q(*(arg1[1] + 0x10)) u>> 0x1e).b
    
    if ((rdx_1 & 1) != 0)
        int64_t* rax_5 = sub_140ac6680(rcx_1, rdx_1)
        int32_t rcx_2 = rax_5[1].d
        int32_t r8 = rcx_2 - 1
        
        if (rcx_2 == 0)
            r8 = 0
        
        return sub_140a20ba0(arg6, *rax_5, r8) __tailcall

return sub_140cdb3d0(arg1, arg6, rcx_1, rcx_1, 0, arg4, 0)
