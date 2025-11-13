// 函数: sub_140a32a50
// 地址: 0x140a32a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = arg2[1].d
int32_t r10 = r9 - 1
uint64_t result

if (arg3 != 1)
    if (r9 == 0)
        r10 = 0
    
    if (r10 s> 0)
        wchar16* _String1 = &data_142d40450
        wchar16* _String2
        
        if (r9 == 0)
            _String2 = &data_142d40450
        else
            _String2 = *arg2
        
        if (*(arg1 + 8) != 0)
            _String1 = *arg1
        
        result = wcsncmp(_String1, _String2, sx.q(r10))
    label_140a32acc:
        
        if (result.d == 0)
            result.b = 1
            return result
else
    if (r9 == 0)
        r10 = 0
    
    if (r10 s> 0)
        int16_t* const rcx = &data_142d40450
        int16_t* rdx
        
        if (r9 == 0)
            rdx = &data_142d40450
        else
            rdx = *arg2
        
        if (*(arg1 + 8) != 0)
            rcx = *arg1
        
        result = sub_140a546e0(rcx, rdx, sx.q(r10))
        goto label_140a32acc

result.b = 0
return result
