// 函数: sub_1405dbb50
// 地址: 0x1405dbb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (arg1 != 0)
    int32_t rbx_1 = *(arg1 + 0xc0)
    int32_t r11_1 = *(arg1 + 0xc4)
    char rcx = *arg2
    
    if (rcx != 0)
        result = data_143dbb180
        int32_t rcx_1
        int32_t r9
        
        if (rcx != 3)
            r9 = result:4.d
            rcx_1 = result.d
        label_1405dbbc2:
            
            if (rcx_1 + *arg3 s<= rbx_1 && r9 + arg3[1] s<= r11_1)
                goto label_1405dbbd3
        else
            rcx_1 = *(arg2 + 4)
            
            if (rcx_1 s>= 0)
                r9 = *(arg2 + 8)
                
                if (r9 s>= 0)
                    goto label_1405dbbc2
    else if (*arg3 == rbx_1 && arg3[1] == r11_1)
    label_1405dbbd3:
        char result_1 = *(arg1 + 0xe0)
        
        if (result_1 != 0)
            result = zx.q(result_1)
        else
            result = sub_1405d9520(zx.d(*(arg1 + 0xdb)))
        
        if (arg4 == result.d)
            result.b = 1
            return result

result.b = 0
return result
