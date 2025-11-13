// 函数: sub_142b80250
// 地址: 0x142b80250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (arg4 == 0xffffffff)
    result = 0
label_142b80267:
    int32_t rdx = *arg1
    
    if (rdx s< 0)
        *arg1 = result
        result.b = 1
        return result
    
    if (rdx == result)
        result.b = 1
        return result
else if (arg4 == 0xc0)
    result = arg4 + 0x40
    goto label_142b80267

result.b = 0
*arg1 = 0x200
return result
