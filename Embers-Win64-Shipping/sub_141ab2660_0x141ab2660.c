// 函数: sub_141ab2660
// 地址: 0x141ab2660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x30)

if (rcx != 0)
    void* r8_1 = *arg2
    int64_t rax_1 = *(r8_1 + 0xb0)
    
    if (rax_1 != 0 && rcx[7] == rax_1)
        int32_t var_34 = *(arg1 + 0x1c)
        uint8_t var_38 = *(r8_1 + 0x6d9) u>> 1 & 1
        int64_t var_30
        __builtin_memset(&var_30, 0, 0x20)
        int64_t var_28
        int64_t var_20
        int64_t var_18
        int64_t result = (*(*rcx + 0x2c0))(rcx, &arg2[1], &arg2[4], &var_38, var_38, var_30, 
            var_28, var_20, var_18)
        
        if (var_20 != 0)
            result = sub_140a74f90(var_20)
        
        int64_t rcx_2 = var_30
        
        if (rcx_2 == 0)
            return result
        
        return sub_140a74f90(rcx_2)

if (arg2[8].b == 0)
    return sub_141acb4e0(&arg2[1], arg2[3]) __tailcall

return sub_141e47c50(&arg2[1], arg3) __tailcall
