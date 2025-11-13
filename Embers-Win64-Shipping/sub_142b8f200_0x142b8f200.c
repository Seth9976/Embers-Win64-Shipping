// 函数: sub_142b8f200
// 地址: 0x142b8f200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0x1c7c)

if (arg2 u>= result)
    result.b = arg3 u>= result
    return result

if (arg3 u< result)
    result = *(arg1 + 0x1c6c)
    
    if (arg2 u> result)
        result.b = arg3 u> result
        return result
    
    if (arg3 u<= result)
        void* rcx = arg1 + 0x1c60
        result = *rcx
        
        while (arg2 u> result)
            if (arg3 u<= result)
                goto label_142b8f216
            
            result = *(rcx + 4)
            rcx += 4
        
        result.b = arg3 u<= result
        return result

label_142b8f216:
result.b = 0
return result
