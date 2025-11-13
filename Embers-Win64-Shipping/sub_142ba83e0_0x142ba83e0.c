// 函数: sub_142ba83e0
// 地址: 0x142ba83e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax_7 = *(arg1 + 0x410)

if (rax_7 == 0)
    if (arg2 != 0)
        *arg2 = 0
    
    if (arg3 != 0)
        *arg3 = 0
    
    if (arg5 != 0)
        *arg5 = 0
else
    if (arg2 != 0)
        *arg2 = *rax_7
    
    if (arg3 != 0)
        *arg3 = *(*(arg1 + 0x410) + 8)
    
    if (arg4 != 0)
        *arg4 = *(*(arg1 + 0x410) + 0x10)
    
    if (arg5 != 0)
        *arg5 = *(*(arg1 + 0x410) + 0x18)

return 0
