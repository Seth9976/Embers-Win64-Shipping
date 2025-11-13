// 函数: sub_141069250
// 地址: 0x141069250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141062d30(arg1, arg3, 0)
HANDLE result

if (*(arg1 + 0x41) != 0)
    result.b = 0
else if (arg4 == 0)
    result.b = 1
    *arg2 = arg1[2] + arg1[7]
    arg1[7] += arg3
else
    int64_t* rcx_1
    
    if (arg3 == 0xa)
        rcx_1 = arg1[2] + arg1[7]
    
    if (arg3 != 0xa || *rcx_1 != 0x5455424952545441 || rcx_1[1].w != 0x45)
        result = sub_140a82f30(arg3, 0)
        char* result_1 = result
        
        if (result == 0)
            result.b = 0
        else
            memcpy(result, arg1[2] + arg1[7], arg3.d)
            int64_t r14_1 = sx.q(arg1[0xb].d)
            int32_t rcx_4 = (r14_1 + 1).d
            arg1[0xb].d = rcx_4
            
            if (rcx_4 s> *(arg1 + 0x5c))
                sub_140638870(&arg1[0xa])
            
            *(arg1[0xa] + (r14_1 << 3)) = result_1
            result.b = 1
            *arg2 = result_1
            arg1[7] += arg3
    else
        result.b = 1
        *arg2 = "ATTRIBUTE"
        arg1[7] += arg3

return result
