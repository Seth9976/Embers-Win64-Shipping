// 函数: sub_142b998f0
// 地址: 0x142b998f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int64_t result = 0

if (arg3 s> 0)
    int64_t result_1 = (*(arg1 + 8))(arg1, zx.q(arg3))
    result = result_1
    
    if (result_1 != 0)
        goto label_142b99939
    
    rdi = (result_1 + 0x40).d
else if (arg3 s>= 0)
label_142b99939:
    
    if (arg2 != 0 && arg3 != 0)
        memcpy(result, arg2, arg3)
else
    rdi = 6

*arg4 = rdi
return result
