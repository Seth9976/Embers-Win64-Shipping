// 函数: sub_142a5e600
// 地址: 0x142a5e600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *(arg1 + 0x170)

if (result != 0)
    result = *result
    
    if (arg2 != *(result + 0x64))
        int32_t r8_1 = *(result + 0x54)
        
        if (r8_1 s>= 0 && r8_1 s< arg2)
            *(result + 0x54) = arg2
        
        int64_t* rax = *(arg1 + 0x170)
        int32_t arg_8 = 0
        *(*rax + 0x64) = arg2
        return sub_142a5f4f0(arg1, &arg_8)

return result
