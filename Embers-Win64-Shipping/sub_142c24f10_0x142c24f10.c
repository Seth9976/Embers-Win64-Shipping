// 函数: sub_142c24f10
// 地址: 0x142c24f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_142bf7510(arg2, arg1, 6).b != 0 && zx.w(*(arg1 + 2)) * 0x100 + zx.w(*(arg1 + 3)) u>= 6
        && sub_142bf7510(arg2, arg1, (zx.d(*(arg1 + 2)) << 8) + zx.d(*(arg1 + 3))).b != 0)
    uint32_t rax_3 = zx.d(*(arg1 + 4))
    
    if (rax_3 == 0)
        return sub_142c14ac0(arg2, arg1) __tailcall
    
    if (rax_3 != 1 && rax_3 == 2)
        return sub_142c250e0(arg1, arg2) __tailcall
    
    int32_t rax_4
    rax_4.b = 1
    return rax_4

uint16_t rax
rax.b = 0
return rax
