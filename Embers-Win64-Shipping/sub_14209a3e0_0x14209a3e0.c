// 函数: sub_14209a3e0
// 地址: 0x14209a3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_141dc9840(arg1)
int64_t* rdi = *(result + 0xe8)

if (rdi != 0)
    int64_t var_50 = arg2
    int64_t var_58_1 = 0
    int64_t var_58_2
    
    if (arg4 == 0)
        int64_t var_20
        int64_t* rax = sub_140b63b70(&var_50, &var_20)
        int16_t* const rbx_1 = &data_142d40450
        
        if (rax[1].d != 0)
            *rax
        
        int64_t var_30
        int64_t* rax_1 = sub_140b63b70(arg1 + 0x228, &var_30)
        int16_t* const r8
        
        if (rax_1[1].d == 0)
            r8 = &data_142d40450
        else
            r8 = *rax_1
        
        int16_t* var_40
        sub_140a2e390(&var_40, u"%s_%s", r8)
        int32_t var_38
        
        if (var_38 != 0)
            rbx_1 = var_40
        
        int64_t var_48
        sub_140b58260(&var_48, rbx_1, 1)
        int16_t* rcx_4 = var_40
        var_58_2 = var_48
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        int64_t rcx_5 = var_30
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        int64_t rcx_6 = var_20
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
    else
        var_58_2 = arg2
    
    result = sub_140d1fd20(rdi, var_58_2)
    
    if (result != 0 && *(result + 0xb4) == 0)
        int64_t r9_1 = *rdi
        return (*(r9_1 + 0x210))(rdi, result, 0, r9_1, var_58_2)

return result
