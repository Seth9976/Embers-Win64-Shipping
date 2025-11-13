// 函数: sub_141d6cbd0
// 地址: 0x141d6cbd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_141a58040(*(arg1 + 0x248))

if (result.b == 0)
    int64_t var_28
    sub_140d15b50(&var_28, arg2)
    *(arg1 + 0x250) = var_28
    int64_t var_20
    result = &var_20
    
    if (arg1 + 0x258 == &var_20)
        int64_t rcx_3 = var_20
        
        if (rcx_3 != 0)
            result = sub_140a74f90(rcx_3)
    else
        int64_t rcx_2 = *(arg1 + 0x258)
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        *(arg1 + 0x258) = var_20
        int32_t var_18
        *(arg1 + 0x260) = var_18
        int32_t result_1
        result = result_1
        *(arg1 + 0x264) = result
    
    if (arg2 != 0)
        void* rax_3 = sub_141dc9840(arg1)
        void* var_38_1 = arg1 + 0x278
        return sub_141d691b0(*(arg1 + 0x248), arg2, rax_3, arg1 + 0x230)

return result
