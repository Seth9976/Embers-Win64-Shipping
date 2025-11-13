// 函数: sub_1420e14b0
// 地址: 0x1420e14b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = arg2
void* rcx = *(arg1 + 0x130)

if (rcx != 0)
    if ((*(rcx + 0x1f4) & 0x20) == 0)
        result = sub_142442370(rcx)
        *(arg1 + 0x130) = 0
    else
        result = sub_142440df0(result, rcx, 0)
        rcx = *(arg1 + 0x130)
        
        if ((*(rcx + 0x1f4) & 0x20) == 0)
            result = sub_142442370(rcx)
            *(arg1 + 0x130) = 0

return result
