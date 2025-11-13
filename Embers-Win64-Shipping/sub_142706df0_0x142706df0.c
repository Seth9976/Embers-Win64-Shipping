// 函数: sub_142706df0
// 地址: 0x142706df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x48].b == 0)
    arg1[0x48].b = 1
    
    if (sub_141cc3e50(&arg1[0x3f]) != 0)
        uint32_t rcx_1 = zx.d(*(arg1 + 0x241))
        int64_t var_90
        __builtin_memset(&var_90, 0, 0x1c)
        uint64_t rdx_1 = 0
        int32_t r9_1 = 0
        int32_t var_98
        
        if (rcx_1 == 0)
            var_98 = 1
        else if (rcx_1 == 1)
            var_98 = 2
        
        int64_t rdi_1 = sx.q(arg1[0x4a].d)
        int32_t temp0_1 = rdi_1.d
        uint64_t var_80
        
        if (temp0_1 != 0)
            int32_t var_78
            
            if (temp0_1 s> 0)
                sub_1405c5570(&var_80, rdi_1.d)
                r9_1 = var_78
                rdx_1 = var_80
            
            memcpy(rdx_1 + (sx.q(r9_1) << 3), arg1[0x49], (rdi_1 << 3).d)
            var_78 += rdi_1.d
        
        int64_t var_70 = 0
        int64_t var_68_1 = 0
        void var_60
        sub_141cbee60(&arg1[0x3f], sub_141cbfdb0(&var_60, &var_98, &var_70))
        int64_t var_28
        
        if (var_28 != 0)
            sub_140a74f90(var_28)
        
        int64_t var_38
        
        if (var_38 != 0)
            sub_140a74f90(var_38)
        
        int64_t var_48
        
        if (var_48 != 0)
            sub_140a74f90(var_48)
        
        int64_t var_58
        
        if (var_58 != 0)
            sub_140a74f90(var_58)
        
        sub_141cc6b40(&arg1[0x49], 0)
        uint64_t rcx_11 = var_80
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        sub_141cbea10(&var_90)

return sub_1426e7120(arg1) __tailcall
