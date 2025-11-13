// 函数: sub_142ab3920
// 地址: 0x142ab3920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (arg4 u> 6)
label_142ab3962:
    *arg5 = 0x10111
    result.b = 0
    return result

int32_t r8_1

switch (arg4)
    case 0
        return zx.q(arg2)
    case 1
        result.b = arg2 == 0
        return result
    case 2
        result.b = 1
        return result
    case 3
        result.b = 0
        return result
    case 4
        if (arg3 == 1)
            result.b = 1
            return result
        
        r8_1 = arg3 - 2
        
        if (arg3 == 2)
            return zx.q(arg1)
    case 5
        if (arg3 == 1)
            result.b = 1
            return result
        
        r8_1 = arg3 - 2
        
        if (arg3 == 2)
            result.b = 1
            return result
    case 6
        if (arg3 == 1)
            result.b = 1
            return result
        
        if (arg3 != 2 && arg3 != 3)
            goto label_142ab3962
        
        result.b = 0
        return result

if (r8_1 != 1)
    goto label_142ab3962

result.b = 0
return result
