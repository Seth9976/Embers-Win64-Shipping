// 函数: sub_142bd4b10
// 地址: 0x142bd4b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result

if (arg3 u<= 0x60)
    arg1[2] = arg3
    result = (arg3 + 7) u>> 3
    arg1[3] = result
    arg1[1].w = 0x101
    
    if (arg3 != 0)
        int64_t i = 0
        
        if (result != 0)
            do
                char* rax_1 = arg2[3]
                
                if (rax_1 u>= arg2[2])
                    int32_t* rax_3 = *arg2
                    
                    if (rax_3 != 0 && *rax_3 == 0)
                        *rax_3 = 0x55
                    
                    result = nullptr
                else
                    uint32_t result_1 = zx.d(*rax_1)
                    arg2[3] = &rax_1[1]
                    result = zx.q(result_1)
                
                *(arg1 + i + 0x20) = result.b
                i += 1
            while (i u< arg1[3])
else
    result = *arg1
    
    if (result != 0 && *result == 0)
        *result = 0x12

return result
