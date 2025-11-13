// 函数: sub_142a55a50
// 地址: 0x142a55a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s>= 0)
    if (arg3 s<= 2)
        jump(*(**arg1 + 0xb8))
    
    if (arg3 == 3)
        int64_t* rcx_1 = *arg1
        (*(*rcx_1 + 0x70))(rcx_1)
        return zx.q(*(*arg1 + 0xc))
    
    if (arg3 == 4)
        int64_t* rcx = *arg1
        int64_t r8 = *rcx
        (*(r8 + 0x70))(rcx, zx.q(arg2 + rcx[1].d), r8)
        return zx.q(*(*arg1 + 0xc))

return 0xffffffff
