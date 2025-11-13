// 函数: sub_140b40430
// 地址: 0x140b40430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (arg1 != 0 && arg2 != 0)
    int16_t i = *arg2
    result = nullptr
    int16_t* r10_1 = arg1
    
    for (; i != 0; i = *arg2)
        int16_t r8_1 = *arg1
        
        if (r8_1 == 0x2a)
            arg1 = &arg1[1]
            
            if (*arg1 == 0)
                goto label_140b404c3
            
            r10_1 = arg1
            result = &arg2[1]
        else if (r8_1 == 0x3f || r8_1 == i)
            arg1 = &arg1[1]
            arg2 = &arg2[1]
        else
            if (result == 0)
                goto label_140b404c6
            
            arg2 = result
            arg1 = r10_1
            result += 2
    
    result = zx.q(*arg1)
    
    while (result.w == 0x2a)
        result = zx.q(arg1[1])
        arg1 = &arg1[1]
    
    if (result.w == 0)
    label_140b404c3:
        result.b = 1
        return result

label_140b404c6:
result.b = 0
return result
