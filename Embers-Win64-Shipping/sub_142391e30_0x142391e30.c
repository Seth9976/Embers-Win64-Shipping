// 函数: sub_142391e30
// 地址: 0x142391e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result

if (arg2 != 0 && (*(arg2 + 0x208) & 0x10) != 0)
    void arg_10
    
    if (*sub_140865c40(*(arg1 + 8) + 0x168, &arg_10, arg2) != 0xffffffff)
        result.b = 1
        return result
    
    result = *(arg1 + 0x38)
    void* rdx_1 = &result[sx.q(*(arg1 + 0x40)) * 2]
    
    if (result != rdx_1)
        while (*result != arg2)
            result = &result[2]
            
            if (result == rdx_1)
                goto label_142391e8e
        
        result.b = 1
        return result

label_142391e8e:
result.b = 0
return result
