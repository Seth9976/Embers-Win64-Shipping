// 函数: sub_140630180
// 地址: 0x140630180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    *arg1 = arg2
    return arg1

if (sub_140d23de0(arg2) == 0)
    *arg1 = 0
    return arg1

int64_t var_28
sub_140d15b50(&var_28, arg2)

if (var_28 != 0)
    int16_t* var_48
    sub_140bdda50(*(arg2 + 0x10), &var_48)
    int16_t* rbp_1 = &data_142d40450
    int64_t var_38
    int64_t* rax_3 = sub_140a300d0(&var_48, &var_38, &data_142d404d4, &data_142d40450, 1)
    int32_t var_40
    
    if (&var_48 != rax_3)
        int16_t* rcx_5 = var_48
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        var_48 = *rax_3
        *rax_3 = 0
        var_40 = rax_3[1].d
        int32_t var_3c_1 = *(rax_3 + 0xc)
        rax_3[1] = 0
    
    int64_t rcx_7 = var_38
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    sub_140a20b00(&var_48, U"'", 1)
    int64_t* rax_6 = sub_140d30800(&var_28, &var_38)
    int32_t rcx_10 = rax_6[1].d
    int32_t r8_1 = rcx_10 - 1
    
    if (rcx_10 == 0)
        r8_1 = 0
    
    sub_140a20ba0(&var_48, *rax_6, r8_1)
    int64_t rcx_12 = var_38
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    sub_140a20b00(&var_48, U"'", 1)
    
    if (var_40 != 0)
        rbp_1 = var_48
    
    sub_140b58260(arg1, rbp_1, 1)
    int16_t* rcx_15 = var_48
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)
else
    sub_140b58170(arg1, &data_1437020ab, 1)

int64_t var_20

if (var_20 != 0)
    sub_140a74f90(var_20)

return arg1
