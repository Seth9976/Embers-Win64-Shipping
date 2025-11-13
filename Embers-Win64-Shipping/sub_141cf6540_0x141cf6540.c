// 函数: sub_141cf6540
// 地址: 0x141cf6540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (arg1 == 0)
label_141cf65cf:
    result.b = 1
else
    while (true)
        int64_t* rbx_3 = (sx.q(not.d(*(arg2 + 0x24))) & sx.q(arg1)) * 0x30 + *arg2
        int64_t r8_3 = *rbx_3 & 0xffffffffffff
        
        if (r8_3 - 1 + rbx_3[1] u>= arg3 && *arg4 u>= r8_3)
            int32_t arg_8 = arg1
            
            if ((*arg5)(*(arg5 + 8), &arg_8).b == 0)
                result.b = 0
                break
        
        arg1 = *(rbx_3 + 0x24)
        
        if (arg1 == 0)
            goto label_141cf65cf

return result
