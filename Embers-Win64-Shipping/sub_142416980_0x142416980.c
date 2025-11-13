// 函数: sub_142416980
// 地址: 0x142416980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_78 = arg4
int128_t result = var_78.d
int64_t var_70 = arg3

if (not(result.d f<= 0f))
    result = var_78:4.d
    
    if (not(result.d f<= 0f) && arg5 s>= 3 && *(arg1 + 0x260) != 0)
        int64_t rax_1
        
        if (arg2 == 0)
            rax_1 = data_143f10dc8
        else
            rax_1 = *(arg2 + 0x78)
        
        int64_t var_18_1 = rax_1
        int64_t var_58_1 = 0
        char var_50_1 = 0
        int64_t var_48_1 = 0
        result = *arg6
        int64_t var_30
        __builtin_memset(&var_30, 0, 0x18)
        int64_t var_60_1 = arg3
        arg3.b = 1
        void** const var_68 = &data_143344420
        int128_t result_1 = result
        sub_14241fd50(&var_30, arg5, arg3.b)
        result = sub_142420660(&var_68, &var_70, &var_78)
        void* rbx_1 = *(arg1 + 0x260)
        var_68[3](&var_68, rbx_1)
        
        if (*(rbx_1 + 0xa0) == 1)
            result = sub_14240e030(rbx_1, 0)
        
        var_68 = &data_143344420
        int64_t* var_20
        
        if (var_20 != 0)
            (**var_20)(var_20, 1)
        
        int64_t rcx_6 = var_30
        
        if (rcx_6 != 0)
            return sub_140a74f90(rcx_6)

return result
