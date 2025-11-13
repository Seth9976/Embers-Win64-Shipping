// 函数: sub_141e06dc0
// 地址: 0x141e06dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result

if (arg2 == 0)
    result = sx.q(*(arg1 + 0x80))
    
    if (result.d s> 0)
        int64_t** rcx_2 = *(arg1 + 0x78)
        int64_t* result_1 = result
        int64_t r8_2 = 0
        
        while (true)
            result = *rcx_2
            
            if (result != 0 && *result != 0 && 0f f!= result[0x2a].d)
                break
            
            r8_2 += 1
            rcx_2 = &rcx_2[1]
            
            if (r8_2 s>= result_1)
                goto label_141e06e63
        
        result.b = 1
        return result
else
    int32_t arg_10
    sub_140865c40(arg1 + 0x88, &arg_10, arg2)
    int64_t rax = sx.q(arg_10)
    void* const rcx_1
    
    if (rax.d == 0xffffffff)
        rcx_1 = nullptr
    else
        rcx_1 = *(arg1 + 0x88) + rax * 0x18
    
    result = rcx_1 + 8
    
    if (rcx_1 == 0)
        result = nullptr
    
    if (result != 0 && *result != 0)
        result.b = 1
        return result

label_141e06e63:
result.b = 0
return result
