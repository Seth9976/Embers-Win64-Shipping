// 函数: sub_142837af0
// 地址: 0x142837af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = (*(arg2 + 0x10))(arg2, arg1)

if (rax != 0)
    int16_t* result
    int64_t r8_1
    result, r8_1 = malloc(0x40)
    
    if (result != 0)
        memset(result, 0, 0x40)
        *(result + 0x10) = strcpy(malloc(strlen(arg1) + 1), arg1)
        *(result + 0x18) = rax
        int32_t rax_4
        int64_t r8_2
        rax_4, r8_2 = (*(arg2 + 0x20))(rax, 0, 2)
        
        if (rax_4 != 0xffffffff)
            int32_t rax_5
            rax_5, r8_2 = (*(arg2 + 0x30))(rax)
            
            if (rax_5 != 0xffffffff)
                (*(arg2 + 0x20))(rax, 0, 0)
                
                if (sub_1428359a4(rax_5, result, rax, arg2, arg3) != 0)
                    return result
            else
                sub_142833a04(1, "Get end of file position failed", r8_2)
        else
            sub_142833a04(1, "Seek to end of file failed", r8_2)
        
        sub_142837c0c(result, arg2)
    else
        sub_142833a04((result + 1).d, "Out of memory", r8_1)
else
    sub_142833a04((rax + 1).d, "Unable to open file "%s"", arg1)

return nullptr
