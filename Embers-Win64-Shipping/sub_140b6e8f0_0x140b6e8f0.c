// 函数: sub_140b6e8f0
// 地址: 0x140b6e8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (arg1[4] s> 1 && *arg1 != 0)
    int16_t* const rcx
    
    if (arg1[0xc] == 0)
        rcx = &data_142d40450
    else
        rcx = *(arg1 + 0x28)
    
    if (sub_140a54510(rcx, u"Unknown") != 0)
        int16_t* const rcx_1
        
        if (arg1[0xc] == 0)
            rcx_1 = &data_142d40450
        else
            rcx_1 = *(arg1 + 0x28)
        
        if (sub_140a54510(rcx_1, &data_142d40450) != 0)
            result.b = 1
            return result

result.b = 0
return result
