// 函数: sub_142c266a0
// 地址: 0x142c266a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_142bf7510(arg2, arg1, 6) != 0 && sub_142c294c0(arg1 + 4, arg2, arg3) != 0)
    uint16_t rdx_2 = zx.w(*(arg1 + 4))
    uint64_t r9_1 = zx.q(*(arg1 + 5))
    
    if (0 == rdx_2 * 0x100 + r9_1.w)
        return true
    
    void* rsi_4 = (zx.q(rdx_2.b) << 8) + arg3 + r9_1
    
    if (sub_142bf7510(arg2, rsi_4, 6) != 0 && sub_142bf7510(arg2, rsi_4 + 4, 2) != 0
            && sub_142bf7510(arg2, rsi_4 + 6, ((zx.d(*(rsi_4 + 4)) << 8) + zx.d(*(rsi_4 + 5))) * 2)
            != 0)
        return true
    
    if (sub_142bf99e0(arg2, arg1 + 4, 2) != 0)
        *(arg1 + 4) = 0
        return true

return false
