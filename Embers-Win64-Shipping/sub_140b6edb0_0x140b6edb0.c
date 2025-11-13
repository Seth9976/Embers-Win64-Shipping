// 函数: sub_140b6edb0
// 地址: 0x140b6edb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int32_t arg_20 = 0
wchar16 const* const result

if (data_143de56e0 == 0)
label_140b6eeaf:
    
    if (arg3 != 0 && *arg3 != &data_142d40450)
        int32_t rdx_2 = 0
        arg3[1].d = 0
        
        if (*(arg3 + 0xc) != 0)
            sub_1405947f0(arg3, 0)
            rdx_2 = arg3[1].d
        
        arg3[1].d = rdx_2
        
        if (rdx_2 s> *(arg3 + 0xc))
            sub_140594770(arg3)
    
    int16_t* var_88 = nullptr
    int32_t var_80_1 = 0
    
    if (sub_140b274d0(arg1, &var_88) == 0 || var_80_1 == 0 || var_80_1 - 1 s<= 1)
    label_140b6f085:
        int64_t var_58
        sub_140a2e390(&var_58, u"%s %s", arg1)
        PWSTR var_48
        sub_140a35c80(&var_58, &var_48)
        int64_t rcx_20 = var_58
        
        if (rcx_20 != 0)
            sub_140a74f90(rcx_20)
        
        result = sub_140b6f0f0(&var_48, arg3)
        PWSTR rcx_22 = var_48
        
        if (rcx_22 != 0)
            result = sub_140a74f90(rcx_22)
    else
        if (sub_140a54510(var_88, u"http") == 0)
            goto label_140b6f085
        
        int16_t* const rcx_8 = &data_142d40450
        
        if (var_80_1 != 0)
            rcx_8 = var_88
        
        if (sub_140a54510(rcx_8, u"https") == 0)
            goto label_140b6f085
        
        result = ShellExecuteW(nullptr, u"open", arg1, nullptr, nullptr, SW_SHOWNORMAL)
        
        if (arg3 != 0)
            uint64_t var_78
            int64_t var_68
            int64_t* rdx_4
            int32_t rdi_1
            
            if (result s> 0x20)
                var_68 = 0
                rdx_4 = &var_68
                int64_t var_60_1 = 0
                rdi_1 = 4
            else
                void var_38
                int64_t* rax_11 = sub_140ac6680(_vfprintf_p_l(&var_38, Failed launching URL", Core")
                    )
                var_78 = 0
                int32_t rsi_2 = rax_11[1].d
                int64_t r14_1 = *rax_11
                int32_t var_70_1 = rsi_2
                
                if (rsi_2 != 0)
                    sub_1405a4c70(&var_78, rsi_2, 0)
                    memcpy(var_78, r14_1, rsi_2 * 2)
                    rdx_4 = &var_78
                    rdi_1 = 3
                else
                    int32_t var_6c_1 = 0
                    rdx_4 = &var_78
                    rdi_1 = rsi_2 + 3
            
            result = sub_140597df0(arg3, rdx_4)
            
            if ((rdi_1.b & 4) != 0)
                int64_t rcx_14 = var_68
                rdi_1 &= 0xfffffffb
                
                if (rcx_14 != 0)
                    result = sub_140a74f90(rcx_14)
            
            if ((rdi_1.b & 2) != 0)
                uint64_t rcx_15 = var_78
                rdi_1 &= 0xfffffffd
                
                if (rcx_15 != 0)
                    result = sub_140a74f90(rcx_15)
            
            int64_t* var_30
            
            if ((rdi_1.b & 1) != 0 && var_30 != 0)
                result = zx.q(var_30[1].d)
                var_30[1].d -= 1
                
                if (result.d == 1)
                    result = (**var_30)(var_30)
                    int32_t rdi_2 = *(var_30 + 0xc)
                    *(var_30 + 0xc) -= 1
                    
                    if (rdi_2 == 1)
                        result = (*(*var_30 + 8))(var_30, zx.q(rdi_2))
    
    int16_t* rcx_23 = var_88
    
    if (rcx_23 != 0)
        return sub_140a74f90(rcx_23)
else
    int64_t* rcx = data_143de56d8
    
    if (rcx == 0)
        goto label_140b6eeaf
    
    if ((*(*rcx + 0x28))(rcx) == 0)
        goto label_140b6eeaf
    
    int64_t* rcx_1 = nullptr
    
    if (data_143de56e0 != 0)
        rcx_1 = data_143de56d8
    
    result = (*(*rcx_1 + 0x48))(rcx_1, arg1)
    
    if (result.b != 0)
        goto label_140b6eeaf
    
    if (arg3 != 0)
        result = u"LaunchURL cancelled by delegate"
        
        if (*arg3 != u"LaunchURL cancelled by delegate")
            arg3[1].d = 0
            
            if (*(arg3 + 0xc) != 0x20)
                sub_1405947f0(arg3, 0x20)
                rdi = arg3[1].d
            
            arg3[1].d = rdi + 0x20
            
            if (rdi + 0x20 s> *(arg3 + 0xc))
                sub_140594770(arg3)
            
            result = *arg3
            __builtin_memcpy(result, u"LaunchURL cancelled by delegate", 0x40)

return result
