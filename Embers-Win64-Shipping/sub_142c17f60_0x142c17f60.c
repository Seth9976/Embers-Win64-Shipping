// 函数: sub_142c17f60
// 地址: 0x142c17f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_142c294c0(arg1, arg2, arg3) != 0)
    uint16_t rdx = zx.w(*arg1)
    uint64_t r8 = zx.q(arg1[1])
    
    if (0 == rdx * 0x100 + r8.w)
        return true
    
    char* rcx_5 = (zx.q(rdx.b) << 8) + arg3 + r8
    
    if (sub_142c17e30(rcx_5, arg2, rcx_5, arg4) != 0)
        return true
    
    if (sub_142bf99e0(arg2, arg1, 2) != 0)
        *arg1 = 0
        return true

return false
