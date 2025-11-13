// 函数: sub_14242f630
// 地址: 0x14242f630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_38
sub_140baa460(&var_38, arg2)

if (sub_140a32ae0(&var_38, u"UEDPIE", 1) == 0)
    int16_t* var_18
    sub_140baa480(&var_18, arg2)
    int64_t var_28
    sub_140a2e390(&var_28, u"%s_%d_", u"UEDPIE")
    int16_t* const r8 = &data_142d40450
    int16_t* const rax_1 = &data_142d40450
    int32_t var_30
    
    if (var_30 != 0)
        rax_1 = var_38
    
    int16_t* const var_48_1 = rax_1
    int32_t var_10
    
    if (var_10 != 0)
        r8 = var_18
    
    sub_140a2e390(arg1, u"%s/%s%s", r8)
    int64_t rcx_6 = var_28
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    int16_t* rcx_7 = var_18
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
else
    sub_140596d10(arg1, arg2)

int16_t* rcx_8 = var_38

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

return arg1
