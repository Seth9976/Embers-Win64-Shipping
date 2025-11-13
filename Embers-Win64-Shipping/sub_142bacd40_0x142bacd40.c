// 函数: sub_142bacd40
// 地址: 0x142bacd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x28)
int32_t result = sub_142b97060(rbx, arg3, arg2)

if (result == 0)
    result = sub_142b96500(rbx, arg4)
    
    if (result == 0)
        *(arg1 + 0x120) = rbx[7]
        *(arg1 + 0x128) = rbx[8]
        return 0

return result
