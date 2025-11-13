// 函数: sub_141055e30
// 地址: 0x141055e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg4 + 0x1c) & 6) == 0)
    sub_141055bf0(arg1, arg2, arg4, arg5)
else
    int64_t rbx_1 = 0
    
    if (data_143f01c92 != 0 && sub_141989210() != 0)
        rbx_1 = arg3
    
    sub_141055bf0(arg1, arg2, arg4, arg5)
    
    if (rbx_1 != 0)
        _initp_eh_hooks()

return arg2
