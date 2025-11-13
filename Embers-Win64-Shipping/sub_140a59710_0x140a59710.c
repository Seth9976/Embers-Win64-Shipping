// 函数: sub_140a59710
// 地址: 0x140a59710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = arg1
int32_t r9
r9.b = arg3 u<= 0x10
int64_t* result
result.b = arg2 u<= 0x7ff0

if ((result.d & r9) != 0)
    arg1 = zx.q(data_143db71b8)
    
    if (arg1.d != 0)
        result, arg1 = TlsGetValue(arg1.d)
        
        if (result != 0)
            int64_t* rdx_2 = &result[zx.q(*(((arg2 + 0xf) u>> 4) + &data_143db71d0)) * 4]
            result = *rdx_2
            
            if (result != 0)
            label_140a59797:
                rdx_2[1].d -= 1
                *rdx_2 = *result
                return result
            
            if (rdx_2[2] != result)
                *rdx_2 = *(rdx_2 + 0x10)
                rdx_2[2] = result
                rdx_2[3].d = result.d
                result = *rdx_2
                
                if (result != 0)
                    goto label_140a59797

arg1.b = arg3 u<= 0x10
result.b = arg2 u<= 0x7ff0

if ((result.b & arg1.b) == 0)
    return sub_140a59900(rsi, arg2, arg3) __tailcall

return sub_140a59a80(rsi, arg2) __tailcall
