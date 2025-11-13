// 函数: sub_142aeaaf0
// 地址: 0x142aeaaf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rsi = arg2

if (*arg4 s<= 0)
    if (arg2 != 0)
        if (arg3 + 1 u<= 0x80000000)
            goto label_142aeab3c
        
        *arg4 = 1
    else
        if (arg3 == 0)
            rsi = &data_14365b710
        label_142aeab3c:
            int32_t* result = sub_142aead70(arg1, 0, arg4)
            
            if (*arg4 s<= 0)
                result[2] = 4
                int32_t rcx = result[2]
                *(result + 0x38) = &data_14365b6a0
                
                if (arg3 == -1)
                    rcx = 6
                
                *(result + 0x48) = rsi
                result[2] = rcx
                *(result + 0x70) = arg3
                int64_t rax_2 = 0
                *(result + 0x30) = rsi
                
                if (arg3 s>= 0)
                    rax_2 = arg3
                
                *(result + 0x20) = 0
                *(result + 0x10) = rax_2
                result[0xb] = rax_2.d
                result[7] = rax_2.d
                result[0xa] = 0
            
            return result
        
        *arg4 = 1

return 0
