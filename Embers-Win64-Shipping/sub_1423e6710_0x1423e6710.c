// 函数: sub_1423e6710
// 地址: 0x1423e6710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (arg1[1].d == 0)
label_1423e6741:
    int32_t rcx_1
    rcx_1.b = sub_140b5b8a0(arg1[3].d, 0).b == 0
    result.b = *(arg1 + 0x1c) != 0
    result.b |= rcx_1.b
    
    if (result.b == 0)
    label_1423e676e:
        
        if (arg1[4] == 0)
            result.b = 0
            return result
    else
        result = sub_140d3c6e0(&arg1[2])
        
        if (result == 0)
            goto label_1423e676e
        
        if (sub_140d1fd20(result, arg1[3]) == 0)
            goto label_1423e676e
else
    int64_t* rcx = *arg1
    
    if (rcx == 0)
        goto label_1423e6741
    
    if ((*(*rcx + 0x28))(rcx).b == 0)
        goto label_1423e6741

result.b = 1
return result
