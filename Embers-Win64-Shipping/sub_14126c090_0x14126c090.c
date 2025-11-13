// 函数: sub_14126c090
// 地址: 0x14126c090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0 && arg1 != 0)
    char rax_1 = *(arg2 + 0x3f)
    int32_t rax_2
    
    if (rax_1 == 0)
        rax_2 = -1
    else
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_forward(zx.d(rax_1))
        rax_2 = temp0_1
    
    if (rax_2 s>= 0)
        return *(arg1 + (sx.q(rax_2) << 3) + 0xfa0)

return 0
