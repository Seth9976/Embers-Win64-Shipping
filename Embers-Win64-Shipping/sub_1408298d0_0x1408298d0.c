// 函数: sub_1408298d0
// 地址: 0x1408298d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg1 + 0x18)

if (r9 != 0)
    int64_t rcx = *(arg1 + 0x10)
    int32_t arg_8 = 0
    
    if (sub_1408295a0(rcx, arg2, 0, r9, &arg_8) != 0)
        return *(arg1 + 0x10) + (sx.q(arg_8) << 5) + 0x18

return 0
