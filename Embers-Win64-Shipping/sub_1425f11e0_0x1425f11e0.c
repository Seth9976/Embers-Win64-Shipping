// 函数: sub_1425f11e0
// 地址: 0x1425f11e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const _String = &data_142d40450
int16_t* const rcx

if (arg1[1].d == 0)
    rcx = &data_142d40450
else
    rcx = *arg1

int32_t rax = sub_140a54510(rcx, &data_143449e38)
int32_t result

if (rax != 0)
    int16_t* const rcx_3
    
    if (arg1[1].d == 0)
        rcx_3 = &data_142d40450
    else
        rcx_3 = *arg1
    
    result = sub_140a54510(rcx_3, u"ratecontrolmode")
    
    if (result != 0)
        result.b = 0
    else
        int16_t* rcx_4
        
        if (arg2[1].d == result)
            rcx_4 = &data_142d40450
        else
            rcx_4 = *arg2
        
        result = sub_140a54510(rcx_4, u"constqp")
        
        if (result != 0)
            int16_t* rcx_5
            
            if (arg2[1].d == 0)
                rcx_5 = &data_142d40450
            else
                rcx_5 = *arg2
            
            if (sub_140a54510(rcx_5, &data_143449e70) != 0)
                if (arg2[1].d != 0)
                    _String = *arg2
                
                if (sub_140a54510(_String, &data_143449e78) != 0)
                    result.b = 0
                else
                    arg3[1] = 2
                    result.b = 1
            else
                arg3[1] = 1
                result.b = 1
        else
            arg3[1] = result
            result.b = 1
else
    if (arg2[1].d != rax)
        _String = *arg2
    
    int32_t result_1 = _wtoi(_String)
    
    if (result_1 s>= 0)
        result = 0x33
        
        if (result_1 s< 0x33)
            result = result_1
        
        *arg3 = result
        result.b = 1
    else
        *arg3 = 0
        result.b = 1

return result
