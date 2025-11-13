// 函数: sub_140a405d0
// 地址: 0x140a405d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a46e10()
sub_140a464c0()
char const (* r8)[0x4] = data_14399ea08
char result = (*(r8 + 0x48))(&data_14399ea08, &data_143db32b0, r8)

if (result != 0)
    int64_t var_38 = 0
    int32_t rdx = 0
    int32_t var_30_1 = 0
    int32_t rcx = 0
    int32_t var_2c_1 = 0
    
    if (data_143db32b0 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while ((&data_143db32b0)[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_38, rbx_1.d + 1)
            rcx = var_2c_1
            rdx = var_30_1
        
        int32_t rax = rbx_1.d + 1 + rdx
        var_30_1 = rax
        
        if (rax s> rcx)
            sub_140594770(&var_38)
        
        memcpy(var_38, &data_143db32b0, (rbx_1.d + 1) * 2)
    
    int16_t* var_18
    sub_140b187e0(&var_18, &var_38)
    int64_t rcx_5 = var_38
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    int16_t* const rbx_3 = &data_142d40450
    int16_t* const rax_1 = &data_142d40450
    var_38 = arg2
    int32_t var_10
    
    if (var_10 != 0)
        rax_1 = var_18
    
    var_30_1.q = rax_1
    uint64_t var_28 = 0
    int32_t var_20_1 = 0
    sub_140b0f5f0(&var_28, &var_38, 2)
    sub_140a464c0()
    int64_t r9_1
    r9_1.b = 1
    
    if (var_20_1 != 0)
        rbx_3 = var_28
    
    result =
        (*(data_14399ea08 + 0x38))(&data_14399ea08, rbx_3, &data_143db32b0, r9_1, 0, 0, 0, 0, 0)
    uint64_t rcx_7 = var_28
    
    if (rcx_7 != 0)
        result = sub_140a74f90(rcx_7)
    
    int16_t* rcx_8 = var_18
    
    if (rcx_8 != 0)
        return sub_140a74f90(rcx_8)

return result
