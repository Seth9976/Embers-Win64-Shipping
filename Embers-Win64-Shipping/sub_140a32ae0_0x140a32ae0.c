// 函数: sub_140a32ae0
// 地址: 0x140a32ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (arg3 != 1)
    if (arg2 != 0 && *arg2 != 0)
        int64_t rax_1 = -1
        
        do
            rax_1 += 1
        while (arg2[rax_1] != 0)
        
        wchar16* _String1
        
        if (arg1[1].d == 0)
            _String1 = &data_142d40450
        else
            _String1 = *arg1
        
        result = wcsncmp(_String1, arg2, sx.q(rax_1.d))
    label_140a32b65:
        
        if (result == 0)
            result.b = 1
            return result
else if (arg2 != 0 && *arg2 != 0)
    int64_t rax = -1
    
    do
        rax += 1
    while (arg2[rax] != 0)
    
    if (arg1[1].d == 0)
        result = sub_140a546e0(&data_142d40450, arg2, sx.q(rax.d))
    else
        result = sub_140a546e0(*arg1, arg2, sx.q(rax.d))
    
    goto label_140a32b65

result.b = 0
return result
