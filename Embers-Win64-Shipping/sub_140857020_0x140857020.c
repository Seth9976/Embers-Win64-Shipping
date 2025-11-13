// 函数: sub_140857020
// 地址: 0x140857020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    char rax_1 = *(arg1 + 0x4e8)
    
    if (rax_1 != 0 && *(arg1 + 0x3e0) == 0 && *(arg1 + 0x3f0) == 0 && rax_1 == 4)
        return 1
else
    int64_t var_18
    sub_140886550(arg1 + 0x238, &var_18)
    
    if (var_18 == 0)
        return sub_140887c90(arg1 + 0x238) == 0

return 0
