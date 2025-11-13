// 函数: sub_142c333b0
// 地址: 0x142c333b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
char result = sub_142c33e70(arg1, arg2, &arg_8)

if (result == 0)
    return result

if (sub_142bf7510(arg2, &arg1[8], 2) != 0
        && sub_142bf7510(arg2, arg1, (zx.d(arg1[8]) << 8) + zx.d(arg1[9])) != 0)
    void* rcx_3 = &arg1[(zx.q(arg1[8]) << 8) + zx.q(arg1[9])]
    
    if (sub_142c34380(rcx_3, arg2, 0, rcx_3) != 0)
        return 1

return 0
